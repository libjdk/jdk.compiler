#include <com/sun/tools/javac/file/RelativePath.h>

#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _RelativePath_FieldInfo_[] = {
	{"path", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(RelativePath, path)},
	{}
};

$MethodInfo _RelativePath_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(RelativePath::*)($String*)>(&RelativePath::init$))},
	{"basename", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"compareTo", "(Lcom/sun/tools/javac/file/RelativePath;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dirname", "()Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"resolveAgainst", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC, nullptr, "java.nio.file.InvalidPathException"},
	{"resolveAgainst", "(Ljava/nio/file/FileSystem;)Ljava/nio/file/Path;", nullptr, $PUBLIC, nullptr, "java.nio.file.InvalidPathException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RelativePath_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.RelativePath$RelativeFile", "com.sun.tools.javac.file.RelativePath", "RelativeFile", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.file.RelativePath$RelativeDirectory", "com.sun.tools.javac.file.RelativePath", "RelativeDirectory", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RelativePath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.file.RelativePath",
	"java.lang.Object",
	"java.lang.Comparable",
	_RelativePath_FieldInfo_,
	_RelativePath_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/javac/file/RelativePath;>;",
	nullptr,
	_RelativePath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.RelativePath$RelativeFile,com.sun.tools.javac.file.RelativePath$RelativeDirectory"
};

$Object* allocate$RelativePath($Class* clazz) {
	return $of($alloc(RelativePath));
}

void RelativePath::init$($String* p) {
	$set(this, path, p);
}

$Path* RelativePath::resolveAgainst($Path* directory) {
	$useLocalCurrentObjectStackCache();
	$var($String, sep, $nc($($nc(directory)->getFileSystem()))->getSeparator());
	return directory->resolve($($nc(this->path)->replace(static_cast<$CharSequence*>("/"_s), static_cast<$CharSequence*>(sep))));
}

$Path* RelativePath::resolveAgainst($FileSystem* fs) {
	$useLocalCurrentObjectStackCache();
	$var($String, sep, $nc(fs)->getSeparator());
	$var($Path, root, $cast($Path, $nc($($nc($(fs->getRootDirectories()))->iterator()))->next()));
	return $nc(root)->resolve($($nc(this->path)->replace(static_cast<$CharSequence*>("/"_s), static_cast<$CharSequence*>(sep))));
}

int32_t RelativePath::compareTo(RelativePath* other) {
	return $nc(this->path)->compareTo($nc(other)->path);
}

bool RelativePath::equals(Object$* other) {
	$var(RelativePath, relativePath, nullptr);
	bool var$1 = $instanceOf(RelativePath, other);
	if (var$1) {
		$assign(relativePath, $cast(RelativePath, other));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && $nc(this->path)->equals($nc(relativePath)->path);
}

int32_t RelativePath::hashCode() {
	return $nc(this->path)->hashCode();
}

$String* RelativePath::toString() {
	return $str({"RelPath["_s, this->path, "]"_s});
}

$String* RelativePath::getPath() {
	return this->path;
}

int32_t RelativePath::compareTo(Object$* other) {
	return this->compareTo($cast(RelativePath, other));
}

RelativePath::RelativePath() {
}

$Class* RelativePath::load$($String* name, bool initialize) {
	$loadClass(RelativePath, name, initialize, &_RelativePath_ClassInfo_, allocate$RelativePath);
	return class$;
}

$Class* RelativePath::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com