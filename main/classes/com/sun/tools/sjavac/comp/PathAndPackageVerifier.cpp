#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier.h>

#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier$EnclosingPkgIterator.h>
#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier$ParentIterator.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef ANALYZE
#undef COMPILATION

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Log = ::com::sun::tools::sjavac::Log;
using $PathAndPackageVerifier$EnclosingPkgIterator = ::com::sun::tools::sjavac::comp::PathAndPackageVerifier$EnclosingPkgIterator;
using $PathAndPackageVerifier$ParentIterator = ::com::sun::tools::sjavac::comp::PathAndPackageVerifier$ParentIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$FieldInfo _PathAndPackageVerifier_FieldInfo_[] = {
	{"misplacedCompilationUnits", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/source/tree/CompilationUnitTree;>;", 0, $field(PathAndPackageVerifier, misplacedCompilationUnits)},
	{}
};

$MethodInfo _PathAndPackageVerifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PathAndPackageVerifier::*)()>(&PathAndPackageVerifier::init$))},
	{"checkPathAndPackage", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PathAndPackageVerifier::*)($Path*,$JCTree*)>(&PathAndPackageVerifier::checkPathAndPackage))},
	{"errorsDiscovered", "()Z", nullptr, $PUBLIC},
	{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathAndPackageVerifier_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.comp.PathAndPackageVerifier$EnclosingPkgIterator", "com.sun.tools.sjavac.comp.PathAndPackageVerifier", "EnclosingPkgIterator", $PRIVATE | $STATIC},
	{"com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator", "com.sun.tools.sjavac.comp.PathAndPackageVerifier", "ParentIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathAndPackageVerifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.PathAndPackageVerifier",
	"java.lang.Object",
	"com.sun.source.util.TaskListener",
	_PathAndPackageVerifier_FieldInfo_,
	_PathAndPackageVerifier_MethodInfo_,
	nullptr,
	nullptr,
	_PathAndPackageVerifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.comp.PathAndPackageVerifier$EnclosingPkgIterator,com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator"
};

$Object* allocate$PathAndPackageVerifier($Class* clazz) {
	return $of($alloc(PathAndPackageVerifier));
}

void PathAndPackageVerifier::init$() {
	$set(this, misplacedCompilationUnits, $new($HashSet));
}

void PathAndPackageVerifier::finished($TaskEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($TaskEvent$Kind);
	if ($nc(e)->getKind() == $TaskEvent$Kind::ANALYZE) {
		$var($CompilationUnitTree, cu, e->getCompilationUnit());
		if (cu == nullptr) {
			return;
		}
		$var($JavaFileObject, jfo, $nc(cu)->getSourceFile());
		if (jfo == nullptr) {
			return;
		}
		$var($JCTree, pkg, $cast($JCTree, cu->getPackageName()));
		if (pkg == nullptr) {
			return;
		}
		$var($Path, dir, $nc($($nc($($Paths::get($($nc(jfo)->toUri()))))->normalize()))->getParent());
		if (!checkPathAndPackage(dir, pkg)) {
			$nc(this->misplacedCompilationUnits)->add(cu);
		}
	}
	if ($nc(e)->getKind() == $TaskEvent$Kind::COMPILATION) {
		{
			$var($Iterator, i$, $nc(this->misplacedCompilationUnits)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($CompilationUnitTree, cu, $cast($CompilationUnitTree, i$->next()));
				{
					$Log::error("Misplaced compilation unit."_s);
					$Log::error($$str({"    Directory: "_s, $($nc($($Paths::get($($nc($($nc(cu)->getSourceFile()))->toUri()))))->getParent())}));
					$Log::error($$str({"    Package:   "_s, $($nc(cu)->getPackageName())}));
				}
			}
		}
	}
}

bool PathAndPackageVerifier::errorsDiscovered() {
	return $nc(this->misplacedCompilationUnits)->size() > 0;
}

bool PathAndPackageVerifier::checkPathAndPackage($Path* dir, $JCTree* pkgName) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, pathIter, $new($PathAndPackageVerifier$ParentIterator, dir));
	$var($Iterator, pkgIter, $new($PathAndPackageVerifier$EnclosingPkgIterator, pkgName));
	while (true) {
		bool var$0 = pathIter->hasNext();
		if (!(var$0 && pkgIter->hasNext())) {
			break;
		}
		{
			if (!$nc(($cast($String, $(pathIter->next()))))->equals($(pkgIter->next()))) {
				return false;
			}
		}
	}
	return !pkgIter->hasNext();
}

PathAndPackageVerifier::PathAndPackageVerifier() {
}

$Class* PathAndPackageVerifier::load$($String* name, bool initialize) {
	$loadClass(PathAndPackageVerifier, name, initialize, &_PathAndPackageVerifier_ClassInfo_, allocate$PathAndPackageVerifier);
	return class$;
}

$Class* PathAndPackageVerifier::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com