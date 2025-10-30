#include <com/sun/tools/javac/file/FSInfo.h>

#include <com/sun/tools/javac/util/Context.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <jcpp.h>

#undef CLASS_PATH

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Context = ::com::sun::tools::javac::util::Context;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $ZipFile = ::java::util::zip::ZipFile;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _FSInfo_FieldInfo_[] = {
	{"jarFSProvider", "Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PRIVATE, $field(FSInfo, jarFSProvider)},
	{}
};

$MethodInfo _FSInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FSInfo::*)()>(&FSInfo::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(FSInfo::*)($Context*)>(&FSInfo::init$))},
	{"exists", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"getCanonicalFile", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getJarClassPath", "(Ljava/nio/file/Path;)Ljava/util/List;", "(Ljava/nio/file/Path;)Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getJarFSProvider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/file/FSInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FSInfo*(*)($Context*)>(&FSInfo::instance))},
	{"isDirectory", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"isFile", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"tryResolveFile", "(Ljava/net/URL;Ljava/lang/String;)Ljava/net/URL;", nullptr, $STATIC, $method(static_cast<$URL*(*)($URL*,$String*)>(&FSInfo::tryResolveFile)), "java.net.MalformedURLException"},
	{}
};

$ClassInfo _FSInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.FSInfo",
	"java.lang.Object",
	nullptr,
	_FSInfo_FieldInfo_,
	_FSInfo_MethodInfo_
};

$Object* allocate$FSInfo($Class* clazz) {
	return $of($alloc(FSInfo));
}

FSInfo* FSInfo::instance($Context* context) {
	$load(FSInfo);
	$var(FSInfo, instance, $cast(FSInfo, $nc(context)->get(FSInfo::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(FSInfo));
	}
	return instance;
}

void FSInfo::init$() {
}

void FSInfo::init$($Context* context) {
	$nc(context)->put(FSInfo::class$, $of(this));
}

$Path* FSInfo::getCanonicalFile($Path* file) {
	$useLocalCurrentObjectStackCache();
	try {
		return $nc(file)->toRealPath($$new($LinkOptionArray, 0));
	} catch ($IOException& e) {
		return $nc($($nc(file)->toAbsolutePath()))->normalize();
	}
	$shouldNotReachHere();
}

bool FSInfo::exists($Path* file) {
	return $Files::exists(file, $$new($LinkOptionArray, 0));
}

bool FSInfo::isDirectory($Path* file) {
	return $Files::isDirectory(file, $$new($LinkOptionArray, 0));
}

bool FSInfo::isFile($Path* file) {
	return $Files::isRegularFile(file, $$new($LinkOptionArray, 0));
}

$List* FSInfo::getJarClassPath($Path* file) {
	$useLocalCurrentObjectStackCache();
	{
		$var($JarFile, jarFile, $new($JarFile, $($nc(file)->toFile())));
		{
			$var($Throwable, var$0, nullptr);
			$var($List, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($Manifest, man, jarFile->getManifest());
					if (man == nullptr) {
						$assign(var$2, $Collections::emptyList());
						return$1 = true;
						goto $finally;
					}
					$var($Attributes, attr, $nc(man)->getMainAttributes());
					if (attr == nullptr) {
						$assign(var$2, $Collections::emptyList());
						return$1 = true;
						goto $finally;
					}
					$init($Attributes$Name);
					$var($String, path, $nc(attr)->getValue($Attributes$Name::CLASS_PATH));
					if (path == nullptr) {
						$assign(var$2, $Collections::emptyList());
						return$1 = true;
						goto $finally;
					}
					$var($List, list, $new($ArrayList));
					$var($URL, base, $nc($($nc(file)->toUri()))->toURL());
					{
						$var($StringTokenizer, st, $new($StringTokenizer, path));
						for (; st->hasMoreTokens();) {
							$var($String, elt, st->nextToken());
							try {
								$var($URL, url, tryResolveFile(base, elt));
								if (url != nullptr) {
									list->add($($Path::of($(url->toURI()))));
								}
							} catch ($URISyntaxException& ex) {
								$throwNew($IOException, static_cast<$Throwable*>(ex));
							}
						}
					}
					$assign(var$2, list);
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					try {
						jarFile->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				jarFile->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$URL* FSInfo::tryResolveFile($URL* base, $String* input) {
	$useLocalCurrentObjectStackCache();
	$var($URL, retVal, $new($URL, base, input));
	bool var$0 = $nc(input)->indexOf((int32_t)u':') >= 0;
	if (var$0 && !"file"_s->equalsIgnoreCase($(retVal->getProtocol()))) {
		return nullptr;
	}
	return retVal;
}

$FileSystemProvider* FSInfo::getJarFSProvider() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->jarFSProvider != nullptr) {
			return this->jarFSProvider;
		}
		{
			$var($Iterator, i$, $nc($($FileSystemProvider::installedProviders()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
				{
					if ($nc($($nc(provider)->getScheme()))->equals("jar"_s)) {
						return ($set(this, jarFSProvider, provider));
					}
				}
			}
		}
		return nullptr;
	}
}

FSInfo::FSInfo() {
}

$Class* FSInfo::load$($String* name, bool initialize) {
	$loadClass(FSInfo, name, initialize, &_FSInfo_ClassInfo_, allocate$FSInfo);
	return class$;
}

$Class* FSInfo::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com