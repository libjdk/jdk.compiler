#include <com/sun/tools/javac/file/RelativePath$RelativeFile.h>

#include <com/sun/tools/javac/file/RelativePath$RelativeDirectory.h>
#include <com/sun/tools/javac/file/RelativePath.h>
#include <java/lang/CharSequence.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $RelativePath$RelativeDirectory = ::com::sun::tools::javac::file::RelativePath$RelativeDirectory;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$MethodInfo _RelativePath$RelativeFile_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelativePath$RelativeFile::*)($String*)>(&RelativePath$RelativeFile::init$))},
	{"<init>", "(Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelativePath$RelativeFile::*)($RelativePath$RelativeDirectory*,$String*)>(&RelativePath$RelativeFile::init$))},
	{"<init>", "(Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;Lcom/sun/tools/javac/file/RelativePath;)V", nullptr, 0, $method(static_cast<void(RelativePath$RelativeFile::*)($RelativePath$RelativeDirectory*,$RelativePath*)>(&RelativePath$RelativeFile::init$))},
	{"basename", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dirname", "()Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;", nullptr, $PUBLIC},
	{"forClass", "(Ljava/lang/CharSequence;Ljavax/tools/JavaFileObject$Kind;)Lcom/sun/tools/javac/file/RelativePath$RelativeFile;", nullptr, $STATIC, $method(static_cast<RelativePath$RelativeFile*(*)($CharSequence*,$JavaFileObject$Kind*)>(&RelativePath$RelativeFile::forClass))},
	{"getZipEntry", "(Ljava/util/zip/ZipFile;)Ljava/util/zip/ZipEntry;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RelativePath$RelativeFile_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.RelativePath$RelativeFile", "com.sun.tools.javac.file.RelativePath", "RelativeFile", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RelativePath$RelativeFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.RelativePath$RelativeFile",
	"com.sun.tools.javac.file.RelativePath",
	nullptr,
	nullptr,
	_RelativePath$RelativeFile_MethodInfo_,
	nullptr,
	nullptr,
	_RelativePath$RelativeFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.RelativePath"
};

$Object* allocate$RelativePath$RelativeFile($Class* clazz) {
	return $of($alloc(RelativePath$RelativeFile));
}

RelativePath$RelativeFile* RelativePath$RelativeFile::forClass($CharSequence* className, $JavaFileObject$Kind* kind) {
	$init(RelativePath$RelativeFile);
	$useLocalCurrentObjectStackCache();
	return $new(RelativePath$RelativeFile, $$str({$($nc($($nc(className)->toString()))->replace(u'.', u'/')), $nc(kind)->extension}));
}

void RelativePath$RelativeFile::init$($String* p) {
	$RelativePath::init$(p);
	if ($nc(p)->endsWith("/"_s)) {
		$throwNew($IllegalArgumentException, p);
	}
}

void RelativePath$RelativeFile::init$($RelativePath$RelativeDirectory* d, $String* p) {
	RelativePath$RelativeFile::init$($$str({$nc(d)->path, p}));
}

void RelativePath$RelativeFile::init$($RelativePath$RelativeDirectory* d, $RelativePath* p) {
	RelativePath$RelativeFile::init$(d, $nc(p)->path);
}

$RelativePath$RelativeDirectory* RelativePath$RelativeFile::dirname() {
	int32_t sep = $nc(this->path)->lastIndexOf((int32_t)u'/');
	return $new($RelativePath$RelativeDirectory, $($nc(this->path)->substring(0, sep + 1)));
}

$String* RelativePath$RelativeFile::basename() {
	int32_t sep = $nc(this->path)->lastIndexOf((int32_t)u'/');
	return $nc(this->path)->substring(sep + 1);
}

$ZipEntry* RelativePath$RelativeFile::getZipEntry($ZipFile* zip) {
	return $nc(zip)->getEntry(this->path);
}

$String* RelativePath$RelativeFile::toString() {
	return $str({"RelativeFile["_s, this->path, "]"_s});
}

int32_t RelativePath$RelativeFile::compareTo(Object$* other) {
	return $RelativePath::compareTo($cast($RelativePath, other));
}

RelativePath$RelativeFile::RelativePath$RelativeFile() {
}

$Class* RelativePath$RelativeFile::load$($String* name, bool initialize) {
	$loadClass(RelativePath$RelativeFile, name, initialize, &_RelativePath$RelativeFile_ClassInfo_, allocate$RelativePath$RelativeFile);
	return class$;
}

$Class* RelativePath$RelativeFile::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com