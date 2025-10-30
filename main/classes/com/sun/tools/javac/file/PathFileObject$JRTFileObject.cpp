#include <com/sun/tools/javac/file/PathFileObject$JRTFileObject.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _PathFileObject$JRTFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(static_cast<void(PathFileObject$JRTFileObject::*)($BaseFileManager*,$Path*)>(&PathFileObject$JRTFileObject::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSibling", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, 0},
	{"inferBinaryName", "(Ljava/lang/Iterable;)Ljava/lang/String;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/String;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathFileObject$JRTFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.PathFileObject$JRTFileObject", "com.sun.tools.javac.file.PathFileObject", "JRTFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathFileObject$JRTFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.PathFileObject$JRTFileObject",
	"com.sun.tools.javac.file.PathFileObject",
	nullptr,
	nullptr,
	_PathFileObject$JRTFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_PathFileObject$JRTFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.PathFileObject"
};

$Object* allocate$PathFileObject$JRTFileObject($Class* clazz) {
	return $of($alloc(PathFileObject$JRTFileObject));
}

void PathFileObject$JRTFileObject::init$($BaseFileManager* fileManager, $Path* path) {
	$PathFileObject::init$(fileManager, path);
}

$String* PathFileObject$JRTFileObject::getName() {
	return $nc(this->path)->toString();
}

$String* PathFileObject$JRTFileObject::inferBinaryName($Iterable* paths) {
	return toBinaryName($($nc(this->path)->subpath(2, $nc(this->path)->getNameCount())));
}

$String* PathFileObject$JRTFileObject::toString() {
	return $str({"JRTFileObject["_s, this->path, "]"_s});
}

$PathFileObject* PathFileObject$JRTFileObject::getSibling($String* baseName) {
	return $new(PathFileObject$JRTFileObject, this->fileManager, $($nc(this->path)->resolveSibling(baseName)));
}

PathFileObject$JRTFileObject::PathFileObject$JRTFileObject() {
}

$Class* PathFileObject$JRTFileObject::load$($String* name, bool initialize) {
	$loadClass(PathFileObject$JRTFileObject, name, initialize, &_PathFileObject$JRTFileObject_ClassInfo_, allocate$PathFileObject$JRTFileObject);
	return class$;
}

$Class* PathFileObject$JRTFileObject::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com