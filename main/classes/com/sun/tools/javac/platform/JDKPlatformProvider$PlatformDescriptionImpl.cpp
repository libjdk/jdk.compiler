#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl.h>

#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <com/sun/tools/javac/file/CacheFSInfo.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider$PlatformDescriptionImpl$1.h>
#include <com/sun/tools/javac/platform/JDKPlatformProvider.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef MAX_RADIX
#undef MODULES
#undef MULTIRELEASE
#undef PLATFORM_CLASS_PATH
#undef SYSTEM_MODULES

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $CacheFSInfo = ::com::sun::tools::javac::file::CacheFSInfo;
using $JavacFileManager = ::com::sun::tools::javac::file::JavacFileManager;
using $Option = ::com::sun::tools::javac::main::Option;
using $JDKPlatformProvider = ::com::sun::tools::javac::platform::JDKPlatformProvider;
using $JDKPlatformProvider$PlatformDescriptionImpl$1 = ::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$1;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Log = ::com::sun::tools::javac::util::Log;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $Closeable = ::java::io::Closeable;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $Charset = ::java::nio::charset::Charset;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0 : public $Function {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0, $NO_CLASS_INIT, $Function)
public:
	void init$($Path* jrtModules) {
		$set(this, jrtModules, jrtModules);
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$0(jrtModules, $cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0>());
	}
	$Path* jrtModules = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::fieldInfos[2] = {
	{"jrtModules", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0, jrtModules)},
	{}
};
$MethodInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::*)($Path*)>(&JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::class$ = nullptr;

class JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1 : public $Predicate {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* mod) override {
		 return JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$1($cast($Path, mod));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::*)()>(&JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::class$ = nullptr;

class JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2 : public $Consumer {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$($JavacFileManager* fm) {
		$set(this, fm, fm);
	}
	virtual void accept(Object$* mod) override {
		JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$2(fm, $cast($Path, mod));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2>());
	}
	$JavacFileManager* fm = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::fieldInfos[2] = {
	{"fm", "Lcom/sun/tools/javac/file/JavacFileManager;", nullptr, $PUBLIC, $field(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2, fm)},
	{}
};
$MethodInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/JavacFileManager;)V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::*)($JavacFileManager*)>(&JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::class$ = nullptr;

class JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3 : public $Function {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* dummy) override {
		 return $of(JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$3($cast($String, dummy)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::*)()>(&JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::load$($String* name, bool initialize) {
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::class$ = nullptr;

$FieldInfo _JDKPlatformProvider$PlatformDescriptionImpl_FieldInfo_[] = {
	{"ctSym2FileSystem", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Ljava/nio/file/FileSystem;>;", $PRIVATE | $FINAL, $field(JDKPlatformProvider$PlatformDescriptionImpl, ctSym2FileSystem)},
	{"sourceVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JDKPlatformProvider$PlatformDescriptionImpl, sourceVersion)},
	{"ctSymVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JDKPlatformProvider$PlatformDescriptionImpl, ctSymVersion)},
	{}
};

$MethodInfo _JDKPlatformProvider$PlatformDescriptionImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JDKPlatformProvider$PlatformDescriptionImpl::*)($String*)>(&JDKPlatformProvider$PlatformDescriptionImpl::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAdditionalOptions", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getAnnotationProcessors", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/platform/PlatformDescription$PluginInfo<Ljavax/annotation/processing/Processor;>;>;", $PUBLIC},
	{"getFileManager", "()Ljavax/tools/JavaFileManager;", nullptr, $PUBLIC},
	{"getPlugins", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/platform/PlatformDescription$PluginInfo<Lcom/sun/source/util/Plugin;>;>;", $PUBLIC},
	{"getSourceVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTargetVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"lambda$getFileManager$0", "(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Path*(*)($Path*,$String*)>(&JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$0))},
	{"lambda$getFileManager$1", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Path*)>(&JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$1))},
	{"lambda$getFileManager$2", "(Lcom/sun/tools/javac/file/JavacFileManager;Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JavacFileManager*,$Path*)>(&JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$2))},
	{"lambda$getFileManager$3", "(Ljava/lang/String;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($String*)>(&JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$3))},
	{"setModule", "(Ljavax/tools/StandardJavaFileManager;Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StandardJavaFileManager*,$Path*)>(&JDKPlatformProvider$PlatformDescriptionImpl::setModule))},
	{}
};

$InnerClassInfo _JDKPlatformProvider$PlatformDescriptionImpl_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "com.sun.tools.javac.platform.JDKPlatformProvider", "PlatformDescriptionImpl", $STATIC},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$SigJavaFileObject", "com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl", "SigJavaFileObject", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JDKPlatformProvider$PlatformDescriptionImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl",
	"java.lang.Object",
	"com.sun.tools.javac.platform.PlatformDescription",
	_JDKPlatformProvider$PlatformDescriptionImpl_FieldInfo_,
	_JDKPlatformProvider$PlatformDescriptionImpl_MethodInfo_,
	nullptr,
	nullptr,
	_JDKPlatformProvider$PlatformDescriptionImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.JDKPlatformProvider"
};

$Object* allocate$JDKPlatformProvider$PlatformDescriptionImpl($Class* clazz) {
	return $of($alloc(JDKPlatformProvider$PlatformDescriptionImpl));
}

void JDKPlatformProvider$PlatformDescriptionImpl::init$($String* sourceVersion) {
	$set(this, ctSym2FileSystem, $new($HashMap));
	$set(this, sourceVersion, sourceVersion);
	$set(this, ctSymVersion, $StringUtils::toUpperCase($($Integer::toString($Integer::parseInt(sourceVersion), $Character::MAX_RADIX))));
}

$JavaFileManager* JDKPlatformProvider$PlatformDescriptionImpl::getFileManager() {
	$useLocalCurrentObjectStackCache();
	$var($Context, context, $new($Context));
	$var($PrintWriter, pw, $new($PrintWriter, static_cast<$OutputStream*>($System::err), true));
	$init($Log);
	context->put($Log::errKey, $of(pw));
	$CacheFSInfo::preRegister(context);
	$var($JavacFileManager, fm, $new($JDKPlatformProvider$PlatformDescriptionImpl$1, this, context, true, nullptr));
	$init($Option);
	fm->handleOption($Option::MULTIRELEASE, this->sourceVersion);
	$var($Path, file, $JDKPlatformProvider::findCtSym());
	if ($Files::exists(file, $$new($LinkOptionArray, 0))) {
		try {
			$var($FileSystem, fs, $cast($FileSystem, $nc(this->ctSym2FileSystem)->get(file)));
			if (fs == nullptr) {
				$nc(this->ctSym2FileSystem)->put(file, $assign(fs, $FileSystems::newFileSystem(file, ($ClassLoader*)nullptr)));
			}
			$var($Path, root, $cast($Path, $nc($($nc($($nc(fs)->getRootDirectories()))->iterator()))->next()));
			$init($Source$Feature);
			bool hasModules = $Source$Feature::MODULES->allowedInSource($($Source::lookup(this->sourceVersion)));
			$var($Path, systemModules, $nc($($nc(root)->resolve(this->ctSymVersion)))->resolve("system-modules"_s));
			$var($Charset, utf8, $Charset::forName("UTF-8"_s));
			if (!hasModules) {
				$var($List, paths, $new($ArrayList));
				{
					$var($DirectoryStream, dir, $Files::newDirectoryStream(root));
					{
						$var($Throwable, var$0, nullptr);
						try {
							try {
								{
									$var($Iterator, i$, $nc(dir)->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($Path, section, $cast($Path, i$->next()));
										{
											bool var$1 = $nc($($nc($($nc(section)->getFileName()))->toString()))->contains(this->ctSymVersion);
											if (var$1 && !$nc($($nc($(section->getFileName()))->toString()))->contains("-"_s)) {
												{
													$var($DirectoryStream, modules, $Files::newDirectoryStream(section));
													{
														$var($Throwable, var$2, nullptr);
														try {
															try {
																{
																	$var($Iterator, i$, $nc(modules)->iterator());
																	for (; $nc(i$)->hasNext();) {
																		$var($Path, module, $cast($Path, i$->next()));
																		{
																			paths->add(module);
																		}
																	}
																}
															} catch ($Throwable& t$) {
																if (modules != nullptr) {
																	try {
																		modules->close();
																	} catch ($Throwable& x2) {
																		t$->addSuppressed(x2);
																	}
																}
																$throw(t$);
															}
														} catch ($Throwable& var$3) {
															$assign(var$2, var$3);
														} /*finally*/ {
															if (modules != nullptr) {
																modules->close();
															}
														}
														if (var$2 != nullptr) {
															$throw(var$2);
														}
													}
												}
											}
										}
									}
								}
							} catch ($Throwable& t$) {
								if (dir != nullptr) {
									try {
										dir->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$4) {
							$assign(var$0, var$4);
						} /*finally*/ {
							if (dir != nullptr) {
								dir->close();
							}
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
					}
				}
				$init($StandardLocation);
				fm->setLocationFromPaths($StandardLocation::PLATFORM_CLASS_PATH, paths);
			} else if ($Files::isRegularFile(systemModules, $$new($LinkOptionArray, 0))) {
				fm->handleOption("--system"_s, $($nc($($Arrays::asList($$new($StringArray, {"none"_s}))))->iterator()));
				$var($Path, jrtModules, $nc($($FileSystems::getFileSystem($($URI::create("jrt:/"_s)))))->getPath("modules"_s, $$new($StringArray, 0)));
				{
					$var($Stream, lines, $Files::lines(systemModules, utf8));
					{
						$var($Throwable, var$5, nullptr);
						try {
							try {
								$nc($($nc($($nc(lines)->map(static_cast<$Function*>($$new(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0, jrtModules)))))->filter(static_cast<$Predicate*>($$new(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1)))))->forEach(static_cast<$Consumer*>($$new(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2, fm)));
							} catch ($Throwable& t$) {
								if (lines != nullptr) {
									try {
										lines->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$5, var$6);
						} /*finally*/ {
							if (lines != nullptr) {
								lines->close();
							}
						}
						if (var$5 != nullptr) {
							$throw(var$5);
						}
					}
				}
			} else {
				$var($Map, module2Paths, $new($HashMap));
				{
					$var($DirectoryStream, dir, $Files::newDirectoryStream(root));
					{
						$var($Throwable, var$7, nullptr);
						try {
							try {
								{
									$var($Iterator, i$, $nc(dir)->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($Path, section, $cast($Path, i$->next()));
										{
											bool var$8 = $nc($($nc($($nc(section)->getFileName()))->toString()))->contains(this->ctSymVersion);
											if (var$8 && !$nc($($nc($(section->getFileName()))->toString()))->contains("-"_s)) {
												{
													$var($DirectoryStream, modules, $Files::newDirectoryStream(section));
													{
														$var($Throwable, var$9, nullptr);
														try {
															try {
																{
																	$var($Iterator, i$, $nc(modules)->iterator());
																	for (; $nc(i$)->hasNext();) {
																		$var($Path, module, $cast($Path, i$->next()));
																		{
																			$var($Object, var$10, $of($nc($($nc(module)->getFileName()))->toString()));
																			$nc(($cast($List, $(module2Paths->computeIfAbsent(var$10, static_cast<$Function*>($$new(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3)))))))->add(module);
																		}
																	}
																}
															} catch ($Throwable& t$) {
																if (modules != nullptr) {
																	try {
																		modules->close();
																	} catch ($Throwable& x2) {
																		t$->addSuppressed(x2);
																	}
																}
																$throw(t$);
															}
														} catch ($Throwable& var$11) {
															$assign(var$9, var$11);
														} /*finally*/ {
															if (modules != nullptr) {
																modules->close();
															}
														}
														if (var$9 != nullptr) {
															$throw(var$9);
														}
													}
												}
											}
										}
									}
								}
							} catch ($Throwable& t$) {
								if (dir != nullptr) {
									try {
										dir->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$12) {
							$assign(var$7, var$12);
						} /*finally*/ {
							if (dir != nullptr) {
								dir->close();
							}
						}
						if (var$7 != nullptr) {
							$throw(var$7);
						}
					}
				}
				fm->handleOption("--system"_s, $($nc($($Arrays::asList($$new($StringArray, {"none"_s}))))->iterator()));
				{
					$var($Iterator, i$, $nc($(module2Paths->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
						{
							$init($StandardLocation);
							$var($JavaFileManager$Location, var$13, static_cast<$JavaFileManager$Location*>($StandardLocation::SYSTEM_MODULES));
							$var($String, var$14, $cast($String, $nc(e)->getKey()));
							fm->setLocationForModule(var$13, var$14, $cast($Collection, $(e->getValue())));
						}
					}
				}
			}
			return static_cast<$JavaFileManager*>(static_cast<$BaseFileManager*>(fm));
		} catch ($IOException& ex) {
			$throwNew($IllegalStateException, static_cast<$Throwable*>(ex));
		}
	} else {
		$throwNew($IllegalStateException, "Cannot find ct.sym!"_s);
	}
	$shouldNotReachHere();
}

void JDKPlatformProvider$PlatformDescriptionImpl::setModule($StandardJavaFileManager* fm, $Path* mod) {
	$init(JDKPlatformProvider$PlatformDescriptionImpl);
	$useLocalCurrentObjectStackCache();
	try {
		$init($StandardLocation);
		$var($JavaFileManager$Location, var$0, static_cast<$JavaFileManager$Location*>($StandardLocation::SYSTEM_MODULES));
		$var($String, var$1, $nc($($nc(mod)->getFileName()))->toString());
		$nc(fm)->setLocationForModule(var$0, var$1, $($Collections::singleton(mod)));
	} catch ($IOException& ex) {
		$throwNew($IllegalStateException, static_cast<$Throwable*>(ex));
	}
}

$String* JDKPlatformProvider$PlatformDescriptionImpl::getSourceVersion() {
	return this->sourceVersion;
}

$String* JDKPlatformProvider$PlatformDescriptionImpl::getTargetVersion() {
	return this->sourceVersion;
}

$List* JDKPlatformProvider$PlatformDescriptionImpl::getAnnotationProcessors() {
	return $Collections::emptyList();
}

$List* JDKPlatformProvider$PlatformDescriptionImpl::getPlugins() {
	return $Collections::emptyList();
}

$List* JDKPlatformProvider$PlatformDescriptionImpl::getAdditionalOptions() {
	return $Collections::emptyList();
}

void JDKPlatformProvider$PlatformDescriptionImpl::close() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->ctSym2FileSystem)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileSystem, fs, $cast($FileSystem, i$->next()));
			{
				$nc(fs)->close();
			}
		}
	}
	$nc(this->ctSym2FileSystem)->clear();
}

$List* JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$3($String* dummy) {
	$init(JDKPlatformProvider$PlatformDescriptionImpl);
	return $new($ArrayList);
}

void JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$2($JavacFileManager* fm, $Path* mod) {
	$init(JDKPlatformProvider$PlatformDescriptionImpl);
	setModule(fm, mod);
}

bool JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$1($Path* mod) {
	$init(JDKPlatformProvider$PlatformDescriptionImpl);
	return $Files::exists(mod, $$new($LinkOptionArray, 0));
}

$Path* JDKPlatformProvider$PlatformDescriptionImpl::lambda$getFileManager$0($Path* jrtModules, $String* line) {
	$init(JDKPlatformProvider$PlatformDescriptionImpl);
	return $nc(jrtModules)->resolve(line);
}

JDKPlatformProvider$PlatformDescriptionImpl::JDKPlatformProvider$PlatformDescriptionImpl() {
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::classInfo$.name)) {
			return JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$0::load$(name, initialize);
		}
		if (name->equals(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::classInfo$.name)) {
			return JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$1$1::load$(name, initialize);
		}
		if (name->equals(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::classInfo$.name)) {
			return JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$2$2::load$(name, initialize);
		}
		if (name->equals(JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::classInfo$.name)) {
			return JDKPlatformProvider$PlatformDescriptionImpl$$Lambda$lambda$getFileManager$3$3::load$(name, initialize);
		}
	}
	$loadClass(JDKPlatformProvider$PlatformDescriptionImpl, name, initialize, &_JDKPlatformProvider$PlatformDescriptionImpl_ClassInfo_, allocate$JDKPlatformProvider$PlatformDescriptionImpl);
	return class$;
}

$Class* JDKPlatformProvider$PlatformDescriptionImpl::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com