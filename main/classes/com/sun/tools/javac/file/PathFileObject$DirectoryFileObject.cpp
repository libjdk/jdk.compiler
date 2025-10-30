#include <com/sun/tools/javac/file/PathFileObject$DirectoryFileObject.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>
#include <com/sun/tools/javac/file/RelativePath.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $RelativePath$RelativeFile = ::com::sun::tools::javac::file::RelativePath$RelativeFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _PathFileObject$DirectoryFileObject_FieldInfo_[] = {
	{"userPackageRootDir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(PathFileObject$DirectoryFileObject, userPackageRootDir)},
	{"relativePath", "Lcom/sun/tools/javac/file/RelativePath;", nullptr, $PRIVATE | $FINAL, $field(PathFileObject$DirectoryFileObject, relativePath)},
	{}
};

$MethodInfo _PathFileObject$DirectoryFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath;)V", nullptr, $PRIVATE, $method(static_cast<void(PathFileObject$DirectoryFileObject::*)($BaseFileManager*,$Path*,$Path*,$RelativePath*)>(&PathFileObject$DirectoryFileObject::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSibling", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, 0},
	{"inferBinaryName", "(Ljava/lang/Iterable;)Ljava/lang/String;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/String;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathFileObject$DirectoryFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.PathFileObject$DirectoryFileObject", "com.sun.tools.javac.file.PathFileObject", "DirectoryFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathFileObject$DirectoryFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.PathFileObject$DirectoryFileObject",
	"com.sun.tools.javac.file.PathFileObject",
	nullptr,
	_PathFileObject$DirectoryFileObject_FieldInfo_,
	_PathFileObject$DirectoryFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_PathFileObject$DirectoryFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.PathFileObject"
};

$Object* allocate$PathFileObject$DirectoryFileObject($Class* clazz) {
	return $of($alloc(PathFileObject$DirectoryFileObject));
}

void PathFileObject$DirectoryFileObject::init$($BaseFileManager* fileManager, $Path* path, $Path* userPackageRootDir, $RelativePath* relativePath) {
	$PathFileObject::init$(fileManager, path);
	$set(this, userPackageRootDir, $cast($Path, $Objects::requireNonNull(userPackageRootDir)));
	$set(this, relativePath, relativePath);
}

$String* PathFileObject$DirectoryFileObject::getName() {
	return $nc($($nc(this->relativePath)->resolveAgainst(this->userPackageRootDir)))->toString();
}

$String* PathFileObject$DirectoryFileObject::inferBinaryName($Iterable* paths) {
	return toBinaryName(this->relativePath);
}

$String* PathFileObject$DirectoryFileObject::toString() {
	return $str({"DirectoryFileObject["_s, this->userPackageRootDir, ":"_s, $nc(this->relativePath)->path, "]"_s});
}

$PathFileObject* PathFileObject$DirectoryFileObject::getSibling($String* baseName) {
	$useLocalCurrentObjectStackCache();
	$var($BaseFileManager, var$0, this->fileManager);
	$var($Path, var$1, $nc(this->path)->resolveSibling(baseName));
	$var($Path, var$2, this->userPackageRootDir);
	return $new(PathFileObject$DirectoryFileObject, var$0, var$1, var$2, $$new($RelativePath$RelativeFile, $($nc(this->relativePath)->dirname()), baseName));
}

PathFileObject$DirectoryFileObject::PathFileObject$DirectoryFileObject() {
}

$Class* PathFileObject$DirectoryFileObject::load$($String* name, bool initialize) {
	$loadClass(PathFileObject$DirectoryFileObject, name, initialize, &_PathFileObject$DirectoryFileObject_ClassInfo_, allocate$PathFileObject$DirectoryFileObject);
	return class$;
}

$Class* PathFileObject$DirectoryFileObject::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com