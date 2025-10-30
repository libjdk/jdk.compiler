#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler$ModulePathIterator.h>

#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader$BadClassFile.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/CharSequence.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/Manifest.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jdk/internal/jmod/JmodFile.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModulePathLocationHandler = ::com::sun::tools::javac::file::Locations$ModulePathLocationHandler;
using $Locations$SimpleLocationHandler = ::com::sun::tools::javac::file::Locations$SimpleLocationHandler;
using $ModuleNameReader = ::com::sun::tools::javac::jvm::ModuleNameReader;
using $ModuleNameReader$BadClassFile = ::com::sun::tools::javac::jvm::ModuleNameReader$BadClassFile;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystem = ::java::nio::file::FileSystem;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $Manifest = ::java::util::jar::Manifest;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JmodFile = ::jdk::internal::jmod::JmodFile;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$ModulePathLocationHandler$ModulePathIterator_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/file/Locations$ModulePathLocationHandler;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModulePathLocationHandler$ModulePathIterator, this$1)},
	{"pathIter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", 0, $field(Locations$ModulePathLocationHandler$ModulePathIterator, pathIter)},
	{"pathIndex", "I", nullptr, 0, $field(Locations$ModulePathLocationHandler$ModulePathIterator, pathIndex)},
	{"next", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", 0, $field(Locations$ModulePathLocationHandler$ModulePathIterator, next$)},
	{}
};

$MethodInfo _Locations$ModulePathLocationHandler$ModulePathIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations$ModulePathLocationHandler;)V", nullptr, 0, $method(static_cast<void(Locations$ModulePathLocationHandler$ModulePathIterator::*)($Locations$ModulePathLocationHandler*)>(&Locations$ModulePathLocationHandler$ModulePathIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"inferModuleName", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/Pair;", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/Pair<Ljava/lang/String;Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$Pair*(Locations$ModulePathLocationHandler$ModulePathIterator::*)($Path*)>(&Locations$ModulePathLocationHandler$ModulePathIterator::inferModuleName))},
	{"next", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", $PUBLIC},
	{"readModuleName", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Locations$ModulePathLocationHandler$ModulePathIterator::*)($Path*)>(&Locations$ModulePathLocationHandler$ModulePathIterator::readModuleName)), "java.io.IOException,com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"},
	{"scanDirectory", "(Ljava/nio/file/Path;)Ljava/util/Set;", "(Ljava/nio/file/Path;)Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", $PRIVATE, $method(static_cast<$Set*(Locations$ModulePathLocationHandler$ModulePathIterator::*)($Path*)>(&Locations$ModulePathLocationHandler$ModulePathIterator::scanDirectory))},
	{"scanFile", "(Ljava/nio/file/Path;)Ljava/util/Set;", "(Ljava/nio/file/Path;)Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", $PRIVATE, $method(static_cast<$Set*(Locations$ModulePathLocationHandler$ModulePathIterator::*)($Path*)>(&Locations$ModulePathLocationHandler$ModulePathIterator::scanFile))},
	{}
};

$InnerClassInfo _Locations$ModulePathLocationHandler$ModulePathIterator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "com.sun.tools.javac.file.Locations", "ModulePathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$ModulePathIterator", "com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "ModulePathIterator", 0},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Locations$ModulePathLocationHandler$ModulePathIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$ModulePathIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_Locations$ModulePathLocationHandler$ModulePathIterator_FieldInfo_,
	_Locations$ModulePathLocationHandler$ModulePathIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;",
	nullptr,
	_Locations$ModulePathLocationHandler$ModulePathIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$ModulePathLocationHandler$ModulePathIterator($Class* clazz) {
	return $of($alloc(Locations$ModulePathLocationHandler$ModulePathIterator));
}

void Locations$ModulePathLocationHandler$ModulePathIterator::init$($Locations$ModulePathLocationHandler* this$1) {
	$set(this, this$1, this$1);
	$set(this, pathIter, $nc(this->this$1->searchPath)->iterator());
	this->pathIndex = 0;
	$set(this, next$, nullptr);
}

bool Locations$ModulePathLocationHandler$ModulePathIterator::hasNext() {
	$useLocalCurrentObjectStackCache();
	if (this->next$ != nullptr) {
		return true;
	}
	while (this->next$ == nullptr) {
		if ($nc(this->pathIter)->hasNext()) {
			$var($Path, path, $cast($Path, $nc(this->pathIter)->next()));
			if ($Files::isDirectory(path, $$new($LinkOptionArray, 0))) {
				$set(this, next$, scanDirectory(path));
			} else {
				$set(this, next$, scanFile(path));
			}
			++this->pathIndex;
		} else {
			return false;
		}
	}
	return true;
}

$Object* Locations$ModulePathLocationHandler$ModulePathIterator::next() {
	hasNext();
	if (this->next$ != nullptr) {
		$var($Set, result, this->next$);
		$set(this, next$, nullptr);
		return $of(result);
	}
	$throwNew($NoSuchElementException);
}

$Set* Locations$ModulePathLocationHandler$ModulePathIterator::scanDirectory($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Set, paths, $new($LinkedHashSet));
	$var($Path, moduleInfoClass, nullptr);
	try {
		$var($DirectoryStream, stream, $Files::newDirectoryStream(path));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					{
						$var($Iterator, i$, $nc(stream)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, entry, $cast($Path, i$->next()));
							{
								if ($nc(entry)->endsWith("module-info.class"_s)) {
									$assign(moduleInfoClass, entry);
									break;
								}
								paths->add(entry);
							}
						}
					}
				} catch ($Throwable& t$) {
					if (stream != nullptr) {
						try {
							stream->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (stream != nullptr) {
					stream->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($DirectoryIteratorException& ignore) {
		$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantReadDirectory(path)));
		return $Collections::emptySet();
	} catch ($IOException& ignore) {
		$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantReadDirectory(path)));
		return $Collections::emptySet();
	}
	if (moduleInfoClass != nullptr) {
		try {
			$var($String, moduleName, readModuleName(moduleInfoClass));
			$var($String, name, $str({$($nc(this->this$1->location)->getName()), "["_s, $$str(this->pathIndex), ":"_s, moduleName, "]"_s}));
			$var($Locations$ModuleLocationHandler, l, $new($Locations$ModuleLocationHandler, this->this$1->this$0, this->this$1, name, moduleName, $($Collections::singletonList(path)), false));
			return $Collections::singleton(l);
		} catch ($ModuleNameReader$BadClassFile& e) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnBadModuleInfo(path)));
			return $Collections::emptySet();
		} catch ($IOException& e) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantReadFile(path)));
			return $Collections::emptySet();
		}
	}
	$var($Set, result, $new($LinkedHashSet));
	int32_t index = 0;
	{
		$var($Iterator, i$, paths->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, entry, $cast($Path, i$->next()));
			{
				$var($Pair, module, inferModuleName(entry));
				if (module == nullptr) {
					continue;
				}
				$var($String, moduleName, $cast($String, $nc(module)->fst));
				$var($Path, modulePath, $cast($Path, module->snd));
				$var($String, name, $str({$($nc(this->this$1->location)->getName()), "["_s, $$str(this->pathIndex), "."_s, $$str((index++)), ":"_s, moduleName, "]"_s}));
				$var($Locations$ModuleLocationHandler, l, $new($Locations$ModuleLocationHandler, this->this$1->this$0, this->this$1, name, moduleName, $($Collections::singletonList(modulePath)), false));
				result->add(l);
			}
		}
	}
	return result;
}

$Set* Locations$ModulePathLocationHandler$ModulePathIterator::scanFile($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Pair, module, inferModuleName(path));
	if (module == nullptr) {
		return $Collections::emptySet();
	}
	$var($String, moduleName, $cast($String, $nc(module)->fst));
	$var($Path, modulePath, $cast($Path, module->snd));
	$var($String, name, $str({$($nc(this->this$1->location)->getName()), "["_s, $$str(this->pathIndex), ":"_s, moduleName, "]"_s}));
	$var($Locations$ModuleLocationHandler, l, $new($Locations$ModuleLocationHandler, this->this$1->this$0, this->this$1, name, moduleName, $($Collections::singletonList(modulePath)), false));
	return $Collections::singleton(l);
}

$Pair* Locations$ModulePathLocationHandler$ModulePathIterator::inferModuleName($Path* p) {
	$useLocalCurrentObjectStackCache();
	if ($Files::isDirectory(p, $$new($LinkOptionArray, 0))) {
		bool var$0 = $Files::exists($($nc(p)->resolve("module-info.class"_s)), $$new($LinkOptionArray, 0));
		if (var$0 || $Files::exists($($nc(p)->resolve("module-info.sig"_s)), $$new($LinkOptionArray, 0))) {
			$var($String, name, $nc($($nc(p)->getFileName()))->toString());
			if ($SourceVersion::isName(name)) {
				return $new($Pair, name, p);
			}
		}
		return nullptr;
	}
	bool var$1 = $nc($($nc($($nc(p)->getFileName()))->toString()))->endsWith(".jar"_s);
	if (var$1 && $nc($nc(this->this$1->this$0)->fsInfo)->exists(p)) {
		$var($FileSystemProvider, jarFSProvider, $nc($nc(this->this$1->this$0)->fsInfo)->getJarFSProvider());
		if (jarFSProvider == nullptr) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::NoZipfsForArchive(p)));
			return nullptr;
		}
		try {
			$var($FileSystem, fs, $nc(jarFSProvider)->newFileSystem(p, $nc(this->this$1->this$0)->fsEnv));
			{
				$var($Throwable, var$2, nullptr);
				$var($Pair, var$4, nullptr);
				bool return$3 = false;
				try {
					try {
						$var($Path, moduleInfoClass, $nc(fs)->getPath("module-info.class"_s, $$new($StringArray, 0)));
						if ($Files::exists(moduleInfoClass, $$new($LinkOptionArray, 0))) {
							$var($String, moduleName, readModuleName(moduleInfoClass));
							$assign(var$4, $new($Pair, moduleName, p));
							return$3 = true;
							goto $finally;
						}
						$var($Path, mf, fs->getPath("META-INF/MANIFEST.MF"_s, $$new($StringArray, 0)));
						if ($Files::exists(mf, $$new($LinkOptionArray, 0))) {
							{
								$var($InputStream, in, $Files::newInputStream(mf, $$new($OpenOptionArray, 0)));
								{
									$var($Throwable, var$5, nullptr);
									$var($Pair, var$7, nullptr);
									bool return$6 = false;
									try {
										try {
											$var($Manifest, man, $new($Manifest, in));
											$var($Attributes, attrs, man->getMainAttributes());
											if (attrs != nullptr) {
												$var($String, moduleName, attrs->getValue($$new($Attributes$Name, "Automatic-Module-Name"_s)));
												if (moduleName != nullptr) {
													if (this->this$1->isModuleName(moduleName)) {
														$assign(var$7, $new($Pair, moduleName, p));
														return$6 = true;
														goto $finally1;
													} else {
														$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantGetModuleNameForJar(p)));
														$assign(var$7, nullptr);
														return$6 = true;
														goto $finally1;
													}
												}
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
									} catch ($Throwable& var$8) {
										$assign(var$5, var$8);
									} $finally1: {
										if (in != nullptr) {
											in->close();
										}
									}
									if (var$5 != nullptr) {
										$throw(var$5);
									}
									if (return$6) {
										$assign(var$4, var$7);
										return$3 = true;
										goto $finally;
									}
								}
							}
						}
					} catch ($Throwable& t$) {
						if (fs != nullptr) {
							try {
								fs->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$9) {
					$assign(var$2, var$9);
				} $finally: {
					if (fs != nullptr) {
						fs->close();
					}
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
				if (return$3) {
					return var$4;
				}
			}
		} catch ($ModuleNameReader$BadClassFile& e) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnBadModuleInfo(p)));
			return nullptr;
		} catch ($IOException& e) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantReadFile(p)));
			return nullptr;
		}
		$var($String, fn, $nc($(p->getFileName()))->toString());
		$var($String, mn, $nc(fn)->substring(0, fn->length() - 4));
		$var($Matcher, matcher, $nc($($Pattern::compile("-(\\d+(\\.|$))"_s)))->matcher(mn));
		if ($nc(matcher)->find()) {
			int32_t start = matcher->start();
			$assign(mn, mn->substring(0, start));
		}
		$assign(mn, $($($(mn->replaceAll("[^A-Za-z0-9]"_s, "."_s))->replaceAll("(\\.)(\\1)+"_s, "."_s))->replaceAll("^\\."_s, ""_s))->replaceAll("\\.$"_s, ""_s));
		if (!mn->isEmpty()) {
			return $new($Pair, mn, p);
		}
		$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantGetModuleNameForJar(p)));
		return nullptr;
	}
	if ($nc($($nc($($nc(p)->getFileName()))->toString()))->endsWith(".jmod"_s)) {
		try {
			$JmodFile::checkMagic(p);
			$var($FileSystem, fs, $cast($FileSystem, $nc($nc(this->this$1->this$0)->fileSystems)->get(p)));
			if (fs == nullptr) {
				$var($FileSystemProvider, jarFSProvider, $nc($nc(this->this$1->this$0)->fsInfo)->getJarFSProvider());
				if (jarFSProvider == nullptr) {
					$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantReadFile(p)));
					return nullptr;
				}
				$assign(fs, $nc(jarFSProvider)->newFileSystem(p, $($Collections::emptyMap())));
				{
					$var($Throwable, var$10, nullptr);
					$var($Pair, var$12, nullptr);
					bool return$11 = false;
					try {
						$var($Path, moduleInfoClass, $nc(fs)->getPath("classes/module-info.class"_s, $$new($StringArray, 0)));
						$var($String, moduleName, readModuleName(moduleInfoClass));
						$var($Path, modulePath, fs->getPath("classes"_s, $$new($StringArray, 0)));
						$nc($nc(this->this$1->this$0)->fileSystems)->put(p, fs);
						$nc($nc(this->this$1->this$0)->closeables)->add(fs);
						$assign(fs, nullptr);
						$assign(var$12, $new($Pair, moduleName, modulePath));
						return$11 = true;
						goto $finally2;
					} catch ($Throwable& var$13) {
						$assign(var$10, var$13);
					} $finally2: {
						if (fs != nullptr) {
							fs->close();
						}
					}
					if (var$10 != nullptr) {
						$throw(var$10);
					}
					if (return$11) {
						return var$12;
					}
				}
			}
		} catch ($ModuleNameReader$BadClassFile& e) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnBadModuleInfo(p)));
		} catch ($IOException& e) {
			$nc($nc(this->this$1->this$0)->log)->error($($CompilerProperties$Errors::LocnCantReadFile(p)));
			return nullptr;
		}
	}
	if ($nc(this->this$1->this$0)->warn && false) {
		$nc($nc(this->this$1->this$0)->log)->warning($($CompilerProperties$Warnings::LocnUnknownFileOnModulePath(p)));
	}
	return nullptr;
}

$String* Locations$ModulePathLocationHandler$ModulePathIterator::readModuleName($Path* path) {
	if ($nc(this->this$1->this$0)->moduleNameReader == nullptr) {
		$set($nc(this->this$1->this$0), moduleNameReader, $new($ModuleNameReader));
	}
	return $nc($nc(this->this$1->this$0)->moduleNameReader)->readModuleName(path);
}

Locations$ModulePathLocationHandler$ModulePathIterator::Locations$ModulePathLocationHandler$ModulePathIterator() {
}

$Class* Locations$ModulePathLocationHandler$ModulePathIterator::load$($String* name, bool initialize) {
	$loadClass(Locations$ModulePathLocationHandler$ModulePathIterator, name, initialize, &_Locations$ModulePathLocationHandler$ModulePathIterator_ClassInfo_, allocate$Locations$ModulePathLocationHandler$ModulePathIterator);
	return class$;
}

$Class* Locations$ModulePathLocationHandler$ModulePathIterator::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com