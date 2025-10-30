#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier$ParentIterator.h>

#include <com/sun/tools/sjavac/comp/PathAndPackageVerifier.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $PathAndPackageVerifier = ::com::sun::tools::sjavac::comp::PathAndPackageVerifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

$FieldInfo _PathAndPackageVerifier$ParentIterator_FieldInfo_[] = {
	{"next", "Ljava/nio/file/Path;", nullptr, 0, $field(PathAndPackageVerifier$ParentIterator, next$)},
	{}
};

$MethodInfo _PathAndPackageVerifier$ParentIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(PathAndPackageVerifier$ParentIterator::*)($Path*)>(&PathAndPackageVerifier$ParentIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathAndPackageVerifier$ParentIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator", "com.sun.tools.sjavac.comp.PathAndPackageVerifier", "ParentIterator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathAndPackageVerifier$ParentIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.comp.PathAndPackageVerifier$ParentIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_PathAndPackageVerifier$ParentIterator_FieldInfo_,
	_PathAndPackageVerifier$ParentIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	nullptr,
	_PathAndPackageVerifier$ParentIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.comp.PathAndPackageVerifier"
};

$Object* allocate$PathAndPackageVerifier$ParentIterator($Class* clazz) {
	return $of($alloc(PathAndPackageVerifier$ParentIterator));
}

void PathAndPackageVerifier$ParentIterator::init$($Path* initial) {
	$set(this, next$, initial);
}

bool PathAndPackageVerifier$ParentIterator::hasNext() {
	return this->next$ != nullptr;
}

$Object* PathAndPackageVerifier$ParentIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($String, tmp, $nc($($nc(this->next$)->getFileName()))->toString());
	$set(this, next$, $nc(this->next$)->getParent());
	return $of(tmp);
}

PathAndPackageVerifier$ParentIterator::PathAndPackageVerifier$ParentIterator() {
}

$Class* PathAndPackageVerifier$ParentIterator::load$($String* name, bool initialize) {
	$loadClass(PathAndPackageVerifier$ParentIterator, name, initialize, &_PathAndPackageVerifier$ParentIterator_ClassInfo_, allocate$PathAndPackageVerifier$ParentIterator);
	return class$;
}

$Class* PathAndPackageVerifier$ParentIterator::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com