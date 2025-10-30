#include <com/sun/tools/javac/file/PathFileObject$SimpleFileObject.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _PathFileObject$SimpleFileObject_FieldInfo_[] = {
	{"userPath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(PathFileObject$SimpleFileObject, userPath)},
	{}
};

$MethodInfo _PathFileObject$SimpleFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(static_cast<void(PathFileObject$SimpleFileObject::*)($BaseFileManager*,$Path*,$Path*)>(&PathFileObject$SimpleFileObject::init$))},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getShortName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSibling", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, 0},
	{"inferBinaryName", "(Ljava/lang/Iterable;)Ljava/lang/String;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/String;", $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathFileObject$SimpleFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.PathFileObject$SimpleFileObject", "com.sun.tools.javac.file.PathFileObject", "SimpleFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathFileObject$SimpleFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.PathFileObject$SimpleFileObject",
	"com.sun.tools.javac.file.PathFileObject",
	nullptr,
	_PathFileObject$SimpleFileObject_FieldInfo_,
	_PathFileObject$SimpleFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_PathFileObject$SimpleFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.PathFileObject"
};

$Object* allocate$PathFileObject$SimpleFileObject($Class* clazz) {
	return $of($alloc(PathFileObject$SimpleFileObject));
}

void PathFileObject$SimpleFileObject::init$($BaseFileManager* fileManager, $Path* path, $Path* userPath) {
	$PathFileObject::init$(fileManager, path);
	$set(this, userPath, userPath);
}

$String* PathFileObject$SimpleFileObject::getName() {
	return $nc(this->userPath)->toString();
}

$String* PathFileObject$SimpleFileObject::getShortName() {
	return $nc($($nc(this->userPath)->getFileName()))->toString();
}

$String* PathFileObject$SimpleFileObject::inferBinaryName($Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$var($Path, absPath, $nc(this->path)->toAbsolutePath());
	{
		$var($Iterator, i$, $nc(paths)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				$var($Path, ap, $nc(p)->toAbsolutePath());
				if ($nc(absPath)->startsWith(ap)) {
					try {
						$var($Path, rp, $nc(ap)->relativize(absPath));
						if (rp != nullptr) {
							return toBinaryName(rp);
						}
					} catch ($IllegalArgumentException& e) {
					}
				}
			}
		}
	}
	return nullptr;
}

$JavaFileObject$Kind* PathFileObject$SimpleFileObject::getKind() {
	return $BaseFileManager::getKind(this->userPath);
}

bool PathFileObject$SimpleFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return isPathNameCompatible(this->userPath, simpleName, kind);
}

$URI* PathFileObject$SimpleFileObject::toUri() {
	return $nc($($nc(this->userPath)->toUri()))->normalize();
}

$PathFileObject* PathFileObject$SimpleFileObject::getSibling($String* baseName) {
	$useLocalCurrentObjectStackCache();
	$var($BaseFileManager, var$0, this->fileManager);
	$var($Path, var$1, $nc(this->path)->resolveSibling(baseName));
	return $new(PathFileObject$SimpleFileObject, var$0, var$1, $($nc(this->userPath)->resolveSibling(baseName)));
}

PathFileObject$SimpleFileObject::PathFileObject$SimpleFileObject() {
}

$Class* PathFileObject$SimpleFileObject::load$($String* name, bool initialize) {
	$loadClass(PathFileObject$SimpleFileObject, name, initialize, &_PathFileObject$SimpleFileObject_ClassInfo_, allocate$PathFileObject$SimpleFileObject);
	return class$;
}

$Class* PathFileObject$SimpleFileObject::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com