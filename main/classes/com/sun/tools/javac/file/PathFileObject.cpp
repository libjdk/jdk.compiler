#include <com/sun/tools/javac/file/PathFileObject.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/PathFileObject$DirectoryFileObject.h>
#include <com/sun/tools/javac/file/PathFileObject$JRTFileObject.h>
#include <com/sun/tools/javac/file/PathFileObject$JarFileObject.h>
#include <com/sun/tools/javac/file/PathFileObject$SimpleFileObject.h>
#include <com/sun/tools/javac/file/RelativePath.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <java/util/Objects.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef NFC
#undef NFD
#undef NOFOLLOW_LINKS
#undef OTHER

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $PathFileObject$DirectoryFileObject = ::com::sun::tools::javac::file::PathFileObject$DirectoryFileObject;
using $PathFileObject$JRTFileObject = ::com::sun::tools::javac::file::PathFileObject$JRTFileObject;
using $PathFileObject$JarFileObject = ::com::sun::tools::javac::file::PathFileObject$JarFileObject;
using $PathFileObject$SimpleFileObject = ::com::sun::tools::javac::file::PathFileObject$SimpleFileObject;
using $RelativePath = ::com::sun::tools::javac::file::RelativePath;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Log = ::com::sun::tools::javac::util::Log;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $Objects = ::java::util::Objects;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _PathFileObject_FieldInfo_[] = {
	{"defaultFileSystem", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PathFileObject, defaultFileSystem)},
	{"isMacOS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PathFileObject, isMacOS)},
	{"fileManager", "Lcom/sun/tools/javac/file/BaseFileManager;", nullptr, $PROTECTED | $FINAL, $field(PathFileObject, fileManager)},
	{"path", "Ljava/nio/file/Path;", nullptr, $PROTECTED | $FINAL, $field(PathFileObject, path)},
	{"hasParents", "Z", nullptr, $PRIVATE, $field(PathFileObject, hasParents)},
	{}
};

$MethodInfo _PathFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;)V", nullptr, $PROTECTED, $method(static_cast<void(PathFileObject::*)($BaseFileManager*,$Path*)>(&PathFileObject::init$))},
	{"delete", "()Z", nullptr, $PUBLIC},
	{"ensureParentDirectoriesExist", "()V", nullptr, $PRIVATE, $method(static_cast<void(PathFileObject::*)()>(&PathFileObject::ensureParentDirectoriesExist)), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forDirectoryPath", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;Lcom/sun/tools/javac/file/RelativePath;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, $STATIC, $method(static_cast<PathFileObject*(*)($BaseFileManager*,$Path*,$Path*,$RelativePath*)>(&PathFileObject::forDirectoryPath))},
	{"forJRTPath", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PathFileObject*(*)($BaseFileManager*,$Path*)>(&PathFileObject::forJRTPath))},
	{"forJarPath", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PathFileObject*(*)($BaseFileManager*,$Path*,$Path*)>(&PathFileObject::forJarPath))},
	{"forSimplePath", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/nio/file/Path;Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, $STATIC, $method(static_cast<PathFileObject*(*)($BaseFileManager*,$Path*,$Path*)>(&PathFileObject::forSimplePath))},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getLastModified", "()J", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"getPath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getShortName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSibling", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/PathFileObject;", nullptr, $ABSTRACT},
	{"getSimpleName", "(Ljavax/tools/FileObject;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($FileObject*)>(&PathFileObject::getSimpleName))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"inferBinaryName", "(Ljava/lang/Iterable;)Ljava/lang/String;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/lang/String;", $ABSTRACT},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"isPathNameCompatible", "(Ljava/nio/file/Path;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PROTECTED},
	{"isSameFile", "(Lcom/sun/tools/javac/file/PathFileObject;)Z", nullptr, 0},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"removeExtension", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&PathFileObject::removeExtension))},
	{"toBinaryName", "(Lcom/sun/tools/javac/file/RelativePath;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($RelativePath*)>(&PathFileObject::toBinaryName))},
	{"toBinaryName", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($Path*)>(&PathFileObject::toBinaryName))},
	{"toBinaryName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&PathFileObject::toBinaryName))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PathFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.PathFileObject$CannotCreateUriError", "com.sun.tools.javac.file.PathFileObject", "CannotCreateUriError", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.file.PathFileObject$SimpleFileObject", "com.sun.tools.javac.file.PathFileObject", "SimpleFileObject", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.file.PathFileObject$JRTFileObject", "com.sun.tools.javac.file.PathFileObject", "JRTFileObject", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.file.PathFileObject$JarFileObject", "com.sun.tools.javac.file.PathFileObject", "JarFileObject", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.file.PathFileObject$DirectoryFileObject", "com.sun.tools.javac.file.PathFileObject", "DirectoryFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PathFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.file.PathFileObject",
	"java.lang.Object",
	"javax.tools.JavaFileObject",
	_PathFileObject_FieldInfo_,
	_PathFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_PathFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.PathFileObject$CannotCreateUriError,com.sun.tools.javac.file.PathFileObject$SimpleFileObject,com.sun.tools.javac.file.PathFileObject$JRTFileObject,com.sun.tools.javac.file.PathFileObject$JarFileObject,com.sun.tools.javac.file.PathFileObject$DirectoryFileObject"
};

$Object* allocate$PathFileObject($Class* clazz) {
	return $of($alloc(PathFileObject));
}

$FileSystem* PathFileObject::defaultFileSystem = nullptr;
bool PathFileObject::isMacOS = false;

PathFileObject* PathFileObject::forDirectoryPath($BaseFileManager* fileManager, $Path* path, $Path* userPackageRootDir, $RelativePath* relativePath) {
	$init(PathFileObject);
	return $new($PathFileObject$DirectoryFileObject, fileManager, path, userPackageRootDir, relativePath);
}

PathFileObject* PathFileObject::forJarPath($BaseFileManager* fileManager, $Path* path, $Path* userJarPath) {
	$init(PathFileObject);
	return $new($PathFileObject$JarFileObject, fileManager, path, userJarPath);
}

PathFileObject* PathFileObject::forJRTPath($BaseFileManager* fileManager, $Path* path) {
	$init(PathFileObject);
	return $new($PathFileObject$JRTFileObject, fileManager, path);
}

PathFileObject* PathFileObject::forSimplePath($BaseFileManager* fileManager, $Path* path, $Path* userPath) {
	$init(PathFileObject);
	return $new($PathFileObject$SimpleFileObject, fileManager, path, userPath);
}

void PathFileObject::init$($BaseFileManager* fileManager, $Path* path) {
	$set(this, fileManager, $cast($BaseFileManager, $Objects::requireNonNull(fileManager)));
	if ($Files::isDirectory(path, $$new($LinkOptionArray, 0))) {
		$throwNew($IllegalArgumentException, "directories not supported"_s);
	}
	$set(this, path, path);
}

$Path* PathFileObject::getPath() {
	return this->path;
}

$String* PathFileObject::getShortName() {
	return $nc($($nc(this->path)->getFileName()))->toString();
}

$JavaFileObject$Kind* PathFileObject::getKind() {
	return $BaseFileManager::getKind(this->path);
}

bool PathFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return isPathNameCompatible(this->path, simpleName, kind);
}

bool PathFileObject::isPathNameCompatible($Path* p, $String* simpleName, $JavaFileObject$Kind* kind) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(simpleName);
	$Objects::requireNonNull(kind);
	$init($JavaFileObject$Kind);
	if (kind == $JavaFileObject$Kind::OTHER && $BaseFileManager::getKind(p) != kind) {
		return false;
	}
	$var($String, sn, $str({simpleName, kind->extension}));
	$var($String, pn, $nc($($nc(p)->getFileName()))->toString());
	if ($nc(pn)->equals(sn)) {
		return true;
	}
	if (p->getFileSystem() == PathFileObject::defaultFileSystem) {
		if (PathFileObject::isMacOS) {
			$init($Normalizer$Form);
			bool var$0 = $Normalizer::isNormalized(pn, $Normalizer$Form::NFD);
			if (var$0 && $Normalizer::isNormalized(sn, $Normalizer$Form::NFC)) {
				$var($String, normName, $Normalizer::normalize(pn, $Normalizer$Form::NFC));
				if ($nc(normName)->equals(sn)) {
					return true;
				}
			}
		}
		if ($nc(pn)->equalsIgnoreCase(sn)) {
			try {
				$init($LinkOption);
				return $nc($($nc($($nc($(p->toRealPath($$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))))->getFileName()))->toString()))->equals(sn);
			} catch ($IOException& e) {
			}
		}
	}
	return false;
}

$NestingKind* PathFileObject::getNestingKind() {
	return nullptr;
}

$Modifier* PathFileObject::getAccessLevel() {
	return nullptr;
}

$URI* PathFileObject::toUri() {
	return $nc(this->path)->toUri();
}

$InputStream* PathFileObject::openInputStream() {
	$nc(this->fileManager)->updateLastUsedTime();
	return $Files::newInputStream(this->path, $$new($OpenOptionArray, 0));
}

$OutputStream* PathFileObject::openOutputStream() {
	$nc(this->fileManager)->updateLastUsedTime();
	$nc(this->fileManager)->flushCache(this);
	ensureParentDirectoriesExist();
	return $Files::newOutputStream(this->path, $$new($OpenOptionArray, 0));
}

$Reader* PathFileObject::openReader(bool ignoreEncodingErrors) {
	$useLocalCurrentObjectStackCache();
	$var($CharsetDecoder, decoder, $nc(this->fileManager)->getDecoder($($nc(this->fileManager)->getEncodingName()), ignoreEncodingErrors));
	return $new($InputStreamReader, $(openInputStream()), decoder);
}

$CharSequence* PathFileObject::getCharContent(bool ignoreEncodingErrors) {
	$useLocalCurrentObjectStackCache();
	$var($CharBuffer, cb, $nc(this->fileManager)->getCachedContent(this));
	if (cb == nullptr) {
		{
			$var($InputStream, in, openInputStream());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($ByteBuffer, bb, $nc(this->fileManager)->makeByteBuffer(in));
						$var($JavaFileObject, prev, $nc($nc(this->fileManager)->log)->useSource(this));
						{
							$var($Throwable, var$1, nullptr);
							try {
								$assign(cb, $nc(this->fileManager)->decode(bb, ignoreEncodingErrors));
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								$nc($nc(this->fileManager)->log)->useSource(prev);
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
						$nc(this->fileManager)->recycleByteBuffer(bb);
						if (!ignoreEncodingErrors) {
							$nc(this->fileManager)->cache(this, cb);
						}
					} catch ($Throwable& t$) {
						if (in != nullptr) {
							try {
								in->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} /*finally*/ {
					if (in != nullptr) {
						in->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	return cb;
}

$Writer* PathFileObject::openWriter() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fileManager)->updateLastUsedTime();
	$nc(this->fileManager)->flushCache(this);
	ensureParentDirectoriesExist();
	$var($OutputStream, var$0, $Files::newOutputStream(this->path, $$new($OpenOptionArray, 0)));
	return $new($OutputStreamWriter, var$0, $($nc(this->fileManager)->getEncodingName()));
}

int64_t PathFileObject::getLastModified() {
	$useLocalCurrentObjectStackCache();
	try {
		return $nc($($Files::getLastModifiedTime(this->path, $$new($LinkOptionArray, 0))))->toMillis();
	} catch ($IOException& e) {
		return 0;
	}
	$shouldNotReachHere();
}

bool PathFileObject::delete$() {
	try {
		$Files::delete$(this->path);
		return true;
	} catch ($IOException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool PathFileObject::isSameFile(PathFileObject* other) {
	return $nc(this->path)->equals($nc(other)->path);
}

bool PathFileObject::equals(Object$* other) {
	$var(PathFileObject, pathFileObject, nullptr);
	bool var$1 = $instanceOf(PathFileObject, other);
	if (var$1) {
		$assign(pathFileObject, $cast(PathFileObject, other));
		var$1 = true;
	}
	bool var$0 = var$1;
	return (var$0 && $nc(this->path)->equals($nc(pathFileObject)->path));
}

int32_t PathFileObject::hashCode() {
	return $nc(this->path)->hashCode();
}

$String* PathFileObject::toString() {
	return $str({$($of(this)->getClass()->getSimpleName()), "["_s, this->path, "]"_s});
}

void PathFileObject::ensureParentDirectoriesExist() {
	$useLocalCurrentObjectStackCache();
	if (!this->hasParents) {
		$var($Path, parent, $nc(this->path)->getParent());
		if (parent != nullptr && !$Files::isDirectory(parent, $$new($LinkOptionArray, 0))) {
			try {
				$Files::createDirectories(parent, $$new($FileAttributeArray, 0));
			} catch ($IOException& e) {
				$throwNew($IOException, "could not create parent directories"_s, e);
			}
		}
		this->hasParents = true;
	}
}

$String* PathFileObject::toBinaryName($RelativePath* relativePath) {
	$init(PathFileObject);
	return toBinaryName($nc(relativePath)->path, "/"_s);
}

$String* PathFileObject::toBinaryName($Path* relativePath) {
	$init(PathFileObject);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(relativePath)->toString());
	return toBinaryName(var$0, $($nc($(relativePath->getFileSystem()))->getSeparator()));
}

$String* PathFileObject::toBinaryName($String* relativePath, $String* sep) {
	$init(PathFileObject);
	return $nc($(removeExtension(relativePath)))->replace(static_cast<$CharSequence*>(sep), static_cast<$CharSequence*>("."_s));
}

$String* PathFileObject::removeExtension($String* fileName) {
	$init(PathFileObject);
	int32_t lastDot = $nc(fileName)->lastIndexOf("."_s);
	return (lastDot == -1 ? fileName : fileName->substring(0, lastDot));
}

$String* PathFileObject::getSimpleName($FileObject* fo) {
	$init(PathFileObject);
	$useLocalCurrentObjectStackCache();
	$var($URI, uri, $nc(fo)->toUri());
	$var($String, s, $nc(uri)->getSchemeSpecificPart());
	return $nc(s)->substring(s->lastIndexOf("/"_s) + 1);
}

void clinit$PathFileObject($Class* class$) {
	$assignStatic(PathFileObject::defaultFileSystem, $FileSystems::getDefault());
	PathFileObject::isMacOS = $nc($($System::getProperty("os.name"_s, ""_s)))->contains("OS X"_s);
}

PathFileObject::PathFileObject() {
}

$Class* PathFileObject::load$($String* name, bool initialize) {
	$loadClass(PathFileObject, name, initialize, &_PathFileObject_ClassInfo_, clinit$PathFileObject, allocate$PathFileObject);
	return class$;
}

$Class* PathFileObject::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com