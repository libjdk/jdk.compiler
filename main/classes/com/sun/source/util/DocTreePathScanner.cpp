#include <com/sun/source/util/DocTreePathScanner.h>

#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _DocTreePathScanner_FieldInfo_[] = {
	{"path", "Lcom/sun/source/util/DocTreePath;", nullptr, $PRIVATE, $field(DocTreePathScanner, path)},
	{}
};

$MethodInfo _DocTreePathScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocTreePathScanner::*)()>(&DocTreePathScanner::init$))},
	{"getCurrentPath", "()Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/source/util/DocTreePath;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/util/DocTreePath;TP;)TR;", $PUBLIC},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _DocTreePathScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.source.util.DocTreePathScanner",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_DocTreePathScanner_FieldInfo_,
	_DocTreePathScanner_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Lcom/sun/source/util/DocTreeScanner<TR;TP;>;"
};

$Object* allocate$DocTreePathScanner($Class* clazz) {
	return $of($alloc(DocTreePathScanner));
}

void DocTreePathScanner::init$() {
	$DocTreeScanner::init$();
}

$Object* DocTreePathScanner::scan($DocTreePath* path, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, path);
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc($($nc(path)->getLeaf()))->accept(this, p));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, path, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* DocTreePathScanner::scan($DocTree* tree, Object$* p) {
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		return $of(nullptr);
	}
	$var($DocTreePath, prev, this->path);
	$set(this, path, $new($DocTreePath, this->path, tree));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(tree)->accept(this, p));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, path, prev);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$DocTreePath* DocTreePathScanner::getCurrentPath() {
	return this->path;
}

DocTreePathScanner::DocTreePathScanner() {
}

$Class* DocTreePathScanner::load$($String* name, bool initialize) {
	$loadClass(DocTreePathScanner, name, initialize, &_DocTreePathScanner_ClassInfo_, allocate$DocTreePathScanner);
	return class$;
}

$Class* DocTreePathScanner::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com