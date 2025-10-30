#include <com/sun/tools/javac/file/Locations.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$BootClassPathLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ClassPathLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleSourcePathLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$OutputLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$PatchModulesLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$SystemModulesLocationHandler.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/io/Closeable.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/regex/Pattern.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardJavaFileManager$PathFactory.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ANNOTATION_PROCESSOR_MODULE_PATH
#undef ANNOTATION_PROCESSOR_PATH
#undef CLASS_OUTPUT
#undef D
#undef H
#undef MODULE_PATH
#undef NATIVE_HEADER_OUTPUT
#undef PATH
#undef PLATFORM_CLASS_PATH
#undef PROCESSOR_MODULE_PATH
#undef PROCESSOR_PATH
#undef S
#undef SOURCE_OUTPUT
#undef SOURCE_PATH
#undef SYSTEM_MODULES
#undef UPGRADE_MODULE_PATH

using $Locations$BasicLocationHandlerArray = $Array<::com::sun::tools::javac::file::Locations$BasicLocationHandler>;
using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$BootClassPathLocationHandler = ::com::sun::tools::javac::file::Locations$BootClassPathLocationHandler;
using $Locations$ClassPathLocationHandler = ::com::sun::tools::javac::file::Locations$ClassPathLocationHandler;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Locations$ModulePathLocationHandler = ::com::sun::tools::javac::file::Locations$ModulePathLocationHandler;
using $Locations$ModuleSourcePathLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleSourcePathLocationHandler;
using $Locations$OutputLocationHandler = ::com::sun::tools::javac::file::Locations$OutputLocationHandler;
using $Locations$PatchModulesLocationHandler = ::com::sun::tools::javac::file::Locations$PatchModulesLocationHandler;
using $Locations$SimpleLocationHandler = ::com::sun::tools::javac::file::Locations$SimpleLocationHandler;
using $Locations$SystemModulesLocationHandler = ::com::sun::tools::javac::file::Locations$SystemModulesLocationHandler;
using $ModuleNameReader = ::com::sun::tools::javac::jvm::ModuleNameReader;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumMap = ::java::util::EnumMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Pattern = ::java::util::regex::Pattern;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardJavaFileManager$PathFactory = ::javax::tools::StandardJavaFileManager$PathFactory;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$$Lambda$get : public $StandardJavaFileManager$PathFactory {
	$class(Locations$$Lambda$get, $NO_CLASS_INIT, $StandardJavaFileManager$PathFactory)
public:
	void init$() {
	}
	virtual $Path* getPath($String* arg0, $StringArray* arg1) override {
		 return $Paths::get(arg0, arg1);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$$Lambda$get>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$$Lambda$get::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$$Lambda$get::*)()>(&Locations$$Lambda$get::init$))},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$$Lambda$get::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$$Lambda$get",
	"java.lang.Object",
	"javax.tools.StandardJavaFileManager$PathFactory",
	nullptr,
	methodInfos
};
$Class* Locations$$Lambda$get::load$($String* name, bool initialize) {
	$loadClass(Locations$$Lambda$get, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$$Lambda$get::class$ = nullptr;

class Locations$$Lambda$lambda$close$0$1 : public $Consumer {
	$class(Locations$$Lambda$lambda$close$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ListBuffer* list) {
		$set(this, list, list);
	}
	virtual void accept(Object$* closeable) override {
		Locations::lambda$close$0(list, $cast($Closeable, closeable));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$$Lambda$lambda$close$0$1>());
	}
	$ListBuffer* list = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$$Lambda$lambda$close$0$1::fieldInfos[2] = {
	{"list", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $PUBLIC, $field(Locations$$Lambda$lambda$close$0$1, list)},
	{}
};
$MethodInfo Locations$$Lambda$lambda$close$0$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$$Lambda$lambda$close$0$1::*)($ListBuffer*)>(&Locations$$Lambda$lambda$close$0$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$$Lambda$lambda$close$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$$Lambda$lambda$close$0$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Locations$$Lambda$lambda$close$0$1::load$($String* name, bool initialize) {
	$loadClass(Locations$$Lambda$lambda$close$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$$Lambda$lambda$close$0$1::class$ = nullptr;

$FieldInfo _Locations_FieldInfo_[] = {
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE, $field(Locations, log)},
	{"fsInfo", "Lcom/sun/tools/javac/file/FSInfo;", nullptr, $PRIVATE, $field(Locations, fsInfo)},
	{"warn", "Z", nullptr, $PRIVATE, $field(Locations, warn)},
	{"moduleNameReader", "Lcom/sun/tools/javac/jvm/ModuleNameReader;", nullptr, $PRIVATE, $field(Locations, moduleNameReader)},
	{"pathFactory", "Ljavax/tools/StandardJavaFileManager$PathFactory;", nullptr, $PRIVATE, $field(Locations, pathFactory)},
	{"javaHome", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(Locations, javaHome)},
	{"thisSystemModules", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(Locations, thisSystemModules)},
	{"fileSystems", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Ljava/nio/file/FileSystem;>;", 0, $field(Locations, fileSystems)},
	{"closeables", "Ljava/util/List;", "Ljava/util/List<Ljava/io/Closeable;>;", 0, $field(Locations, closeables)},
	{"fsEnv", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(Locations, fsEnv)},
	{"handlersForLocation", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/file/Locations$LocationHandler;>;", 0, $field(Locations, handlersForLocation)},
	{"handlersForOption", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/main/Option;Lcom/sun/tools/javac/file/Locations$LocationHandler;>;", 0, $field(Locations, handlersForOption)},
	{}
};

$MethodInfo _Locations_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Locations::*)()>(&Locations::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"contains", "(Ljava/util/Collection;Ljava/nio/file/Path;)Z", "(Ljava/util/Collection<Ljava/nio/file/Path;>;Ljava/nio/file/Path;)Z", $PRIVATE, $method(static_cast<bool(Locations::*)($Collection*,$Path*)>(&Locations::contains)), "java.io.IOException"},
	{"contains", "(Ljavax/tools/JavaFileManager$Location;Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getHandler", "(Ljavax/tools/JavaFileManager$Location;)Lcom/sun/tools/javac/file/Locations$LocationHandler;", nullptr, $PROTECTED},
	{"getLocation", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/Collection;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getOutputLocation", "(Ljavax/tools/JavaFileManager$Location;)Ljava/nio/file/Path;", nullptr, 0},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $TRANSIENT},
	{"getPathEntries", "(Ljava/lang/String;)Ljava/lang/Iterable;", "(Ljava/lang/String;)Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$Iterable*(Locations::*)($String*)>(&Locations::getPathEntries))},
	{"getPathEntries", "(Ljava/lang/String;Ljava/nio/file/Path;)Ljava/lang/Iterable;", "(Ljava/lang/String;Ljava/nio/file/Path;)Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$Iterable*(Locations::*)($String*,$Path*)>(&Locations::getPathEntries))},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"hasExplicitLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, 0},
	{"hasLocation", "(Ljavax/tools/JavaFileManager$Location;)Z", nullptr, 0},
	{"inferModuleName", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/String;", nullptr, 0},
	{"initHandlers", "()V", nullptr, 0},
	{"isArchive", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Locations::*)($Path*)>(&Locations::isArchive))},
	{"isDefaultBootClassPath", "()Z", nullptr, 0},
	{"isDefaultSystemModulesPath", "()Z", nullptr, 0},
	{"lambda$close$0", "(Lcom/sun/tools/javac/util/ListBuffer;Ljava/io/Closeable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ListBuffer*,$Closeable*)>(&Locations::lambda$close$0))},
	{"listLocationsForModules", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable;", "(Ljavax/tools/JavaFileManager$Location;)Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, nullptr, "java.io.IOException"},
	{"normalize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)($Path*)>(&Locations::normalize))},
	{"setLocation", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"setLocationForModule", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"setMultiReleaseValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPathFactory", "(Ljavax/tools/StandardJavaFileManager$PathFactory;)V", nullptr, 0},
	{"update", "(Lcom/sun/tools/javac/util/Log;ZLcom/sun/tools/javac/file/FSInfo;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Locations_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.file.Locations$PatchModulesLocationHandler", "com.sun.tools.javac.file.Locations", "PatchModulesLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$SystemModulesLocationHandler", "com.sun.tools.javac.file.Locations", "SystemModulesLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler", "com.sun.tools.javac.file.Locations", "ModuleSourcePathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "com.sun.tools.javac.file.Locations", "ModulePathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ModuleTable", "com.sun.tools.javac.file.Locations", "ModuleTable", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ModuleLocationHandler", "com.sun.tools.javac.file.Locations", "ModuleLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BootClassPathLocationHandler", "com.sun.tools.javac.file.Locations", "BootClassPathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ClassPathLocationHandler", "com.sun.tools.javac.file.Locations", "ClassPathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$SimpleLocationHandler", "com.sun.tools.javac.file.Locations", "SimpleLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$OutputLocationHandler", "com.sun.tools.javac.file.Locations", "OutputLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.file.Locations$LocationHandler", "com.sun.tools.javac.file.Locations", "LocationHandler", $PROTECTED | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.file.Locations$SearchPath", "com.sun.tools.javac.file.Locations", "SearchPath", $PRIVATE},
	{}
};

$ClassInfo _Locations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.Locations",
	"java.lang.Object",
	nullptr,
	_Locations_FieldInfo_,
	_Locations_MethodInfo_,
	nullptr,
	nullptr,
	_Locations_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations$1,com.sun.tools.javac.file.Locations$PatchModulesLocationHandler,com.sun.tools.javac.file.Locations$SystemModulesLocationHandler,com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler,com.sun.tools.javac.file.Locations$ModulePathLocationHandler,com.sun.tools.javac.file.Locations$ModulePathLocationHandler$ModulePathIterator,com.sun.tools.javac.file.Locations$ModuleTable,com.sun.tools.javac.file.Locations$ModuleLocationHandler,com.sun.tools.javac.file.Locations$BootClassPathLocationHandler,com.sun.tools.javac.file.Locations$ClassPathLocationHandler,com.sun.tools.javac.file.Locations$SimpleLocationHandler,com.sun.tools.javac.file.Locations$OutputLocationHandler,com.sun.tools.javac.file.Locations$BasicLocationHandler,com.sun.tools.javac.file.Locations$LocationHandler,com.sun.tools.javac.file.Locations$SearchPath"
};

$Object* allocate$Locations($Class* clazz) {
	return $of($alloc(Locations));
}

$Path* Locations::javaHome = nullptr;
$Path* Locations::thisSystemModules = nullptr;

void Locations::init$() {
	$set(this, pathFactory, static_cast<$StandardJavaFileManager$PathFactory*>($new(Locations$$Lambda$get)));
	$set(this, fileSystems, $new($LinkedHashMap));
	$set(this, closeables, $new($ArrayList));
	$set(this, fsEnv, $Collections::emptyMap());
	initHandlers();
}

$Path* Locations::getPath($String* first, $StringArray* more) {
	try {
		return $nc(this->pathFactory)->getPath(first, more);
	} catch ($InvalidPathException& ipe) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(ipe));
	}
	$shouldNotReachHere();
}

void Locations::close() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, list, $new($ListBuffer));
	$nc(this->closeables)->forEach(static_cast<$Consumer*>($$new(Locations$$Lambda$lambda$close$0$1, list)));
	if (list->nonEmpty()) {
		$var($IOException, ex, $new($IOException));
		{
			$var($Iterator, i$, list->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($IOException, e, $cast($IOException, i$->next()));
				ex->addSuppressed(e);
			}
		}
		$throw(ex);
	}
}

void Locations::update($Log* log, bool warn, $FSInfo* fsInfo) {
	$set(this, log, log);
	this->warn = warn;
	$set(this, fsInfo, fsInfo);
}

void Locations::setPathFactory($StandardJavaFileManager$PathFactory* f) {
	$set(this, pathFactory, f);
}

bool Locations::isDefaultBootClassPath() {
	$init($StandardLocation);
	$var($Locations$BootClassPathLocationHandler, h, $cast($Locations$BootClassPathLocationHandler, getHandler($StandardLocation::PLATFORM_CLASS_PATH)));
	return $nc(h)->isDefault();
}

bool Locations::isDefaultSystemModulesPath() {
	$init($StandardLocation);
	$var($Locations$SystemModulesLocationHandler, h, $cast($Locations$SystemModulesLocationHandler, getHandler($StandardLocation::SYSTEM_MODULES)));
	return !$nc(h)->isExplicit();
}

$Iterable* Locations::getPathEntries($String* searchPath) {
	return getPathEntries(searchPath, nullptr);
}

$Iterable* Locations::getPathEntries($String* searchPath, $Path* emptyPathDefault) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, entries, $new($ListBuffer));
	{
		$init($File);
		$var($StringArray, arr$, $nc(searchPath)->split($($Pattern::quote($File::pathSeparator)), -1));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if ($nc(s)->isEmpty()) {
					if (emptyPathDefault != nullptr) {
						entries->add(emptyPathDefault);
					}
				} else {
					try {
						entries->add($(getPath(s, $$new($StringArray, 0))));
					} catch ($IllegalArgumentException& e) {
						if (this->warn) {
							$init($Lint$LintCategory);
							$nc(this->log)->warning($Lint$LintCategory::PATH, $($CompilerProperties$Warnings::InvalidPath(s)));
						}
					}
				}
			}
		}
	}
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(entries))));
}

void Locations::setMultiReleaseValue($String* multiReleaseValue) {
	$set(this, fsEnv, $Collections::singletonMap("releaseVersion"_s, multiReleaseValue));
}

bool Locations::contains($Collection* searchPath, $Path* file) {
	$useLocalCurrentObjectStackCache();
	if (searchPath == nullptr) {
		return false;
	}
	$var($Path, enclosingJar, nullptr);
	if ($nc($($nc(file)->getFileSystem()))->provider() == $nc(this->fsInfo)->getJarFSProvider()) {
		$var($URI, uri, file->toUri());
		if ($nc($($nc(uri)->getScheme()))->equals("jar"_s)) {
			$var($String, ssp, uri->getSchemeSpecificPart());
			int32_t sep = $nc(ssp)->lastIndexOf("!"_s);
			if (ssp->startsWith("file:"_s) && sep > 0) {
				$assign(enclosingJar, $Paths::get($($URI::create($(ssp->substring(0, sep))))));
			}
		}
	}
	$var($Path, nf, normalize(file));
	{
		$var($Iterator, i$, $nc(searchPath)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				$var($Path, np, normalize(p));
				bool var$1 = $nc(np)->getFileSystem() == $nc(nf)->getFileSystem();
				bool var$0 = var$1 && $Files::isDirectory(np, $$new($LinkOptionArray, 0));
				if (var$0 && nf->startsWith(np)) {
					return true;
				}
				if (enclosingJar != nullptr && $Files::isSameFile(enclosingJar, np)) {
					return true;
				}
			}
		}
	}
	return false;
}

void Locations::initHandlers() {
	$useLocalCurrentObjectStackCache();
	$set(this, handlersForLocation, $new($HashMap));
	$load($Option);
	$set(this, handlersForOption, $new($EnumMap, $Option::class$));
	$init($StandardLocation);
	$init($Option);
	$var($Locations$BasicLocationHandlerArray, handlers, $new($Locations$BasicLocationHandlerArray, {
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$BootClassPathLocationHandler, this)),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$ClassPathLocationHandler, this)),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$SimpleLocationHandler, this, $StandardLocation::SOURCE_PATH, $$new($OptionArray, {$Option::SOURCE_PATH}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$SimpleLocationHandler, this, $StandardLocation::ANNOTATION_PROCESSOR_PATH, $$new($OptionArray, {$Option::PROCESSOR_PATH}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$SimpleLocationHandler, this, $StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH, $$new($OptionArray, {$Option::PROCESSOR_MODULE_PATH}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$OutputLocationHandler, this, $StandardLocation::CLASS_OUTPUT, $$new($OptionArray, {$Option::D}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$OutputLocationHandler, this, $StandardLocation::SOURCE_OUTPUT, $$new($OptionArray, {$Option::S}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$OutputLocationHandler, this, $StandardLocation::NATIVE_HEADER_OUTPUT, $$new($OptionArray, {$Option::H}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$ModuleSourcePathLocationHandler, this)),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$PatchModulesLocationHandler, this)),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$ModulePathLocationHandler, this, $StandardLocation::UPGRADE_MODULE_PATH, $$new($OptionArray, {$Option::UPGRADE_MODULE_PATH}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$ModulePathLocationHandler, this, $StandardLocation::MODULE_PATH, $$new($OptionArray, {$Option::MODULE_PATH}))),
		static_cast<$Locations$BasicLocationHandler*>($$new($Locations$SystemModulesLocationHandler, this))
	}));
	{
		$var($Locations$BasicLocationHandlerArray, arr$, handlers);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locations$BasicLocationHandler, h, arr$->get(i$));
			{
				$nc(this->handlersForLocation)->put($nc(h)->location, h);
				{
					$var($Iterator, i$, $nc($nc(h)->options)->iterator());
					for (; $nc(i$)->hasNext();) {
						$Option* o = $cast($Option, i$->next());
						{
							$nc(this->handlersForOption)->put(o, h);
						}
					}
				}
			}
		}
	}
}

bool Locations::handleOption($Option* option, $String* value) {
	$var($Locations$LocationHandler, h, $cast($Locations$LocationHandler, $nc(this->handlersForOption)->get(option)));
	return (h == nullptr ? false : $nc(h)->handleOption(option, value));
}

bool Locations::hasLocation($JavaFileManager$Location* location) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? false : $nc(h)->isSet());
}

bool Locations::hasExplicitLocation($JavaFileManager$Location* location) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? false : $nc(h)->isExplicit());
}

$Collection* Locations::getLocation($JavaFileManager$Location* location) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? ($Collection*)nullptr : $nc(h)->getPaths());
}

$Path* Locations::getOutputLocation($JavaFileManager$Location* location) {
	if (!$nc(location)->isOutputLocation()) {
		$throwNew($IllegalArgumentException);
	}
	$var($Locations$LocationHandler, h, getHandler(location));
	return $nc(($cast($Locations$OutputLocationHandler, h)))->outputDir;
}

void Locations::setLocation($JavaFileManager$Location* location, $Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$var($Locations$LocationHandler, h, getHandler(location));
	if (h == nullptr) {
		if ($nc(location)->isOutputLocation()) {
			$assign(h, $new($Locations$OutputLocationHandler, this, location, $$new($OptionArray, 0)));
		} else {
			$assign(h, $new($Locations$SimpleLocationHandler, this, location, $$new($OptionArray, 0)));
		}
		$nc(this->handlersForLocation)->put(location, h);
	}
	$nc(h)->setPaths(files);
}

$JavaFileManager$Location* Locations::getLocationForModule($JavaFileManager$Location* location, $String* name) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? ($JavaFileManager$Location*)nullptr : $nc(h)->getLocationForModule(name));
}

$JavaFileManager$Location* Locations::getLocationForModule($JavaFileManager$Location* location, $Path* file) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? ($JavaFileManager$Location*)nullptr : $nc(h)->getLocationForModule(file));
}

void Locations::setLocationForModule($JavaFileManager$Location* location, $String* moduleName, $Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$var($Locations$LocationHandler, h, getHandler(location));
	if (h == nullptr) {
		if ($nc(location)->isOutputLocation()) {
			$assign(h, $new($Locations$OutputLocationHandler, this, location, $$new($OptionArray, 0)));
		} else {
			$assign(h, $new($Locations$ModulePathLocationHandler, this, location, $$new($OptionArray, 0)));
		}
		$nc(this->handlersForLocation)->put(location, h);
	}
	$nc(h)->setPathsForModule(moduleName, files);
}

$String* Locations::inferModuleName($JavaFileManager$Location* location) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? ($String*)nullptr : $nc(h)->inferModuleName());
}

$Iterable* Locations::listLocationsForModules($JavaFileManager$Location* location) {
	$var($Locations$LocationHandler, h, getHandler(location));
	return (h == nullptr ? ($Iterable*)nullptr : $nc(h)->listLocationsForModules());
}

bool Locations::contains($JavaFileManager$Location* location, $Path* file) {
	$var($Locations$LocationHandler, h, getHandler(location));
	if (h == nullptr) {
		$throwNew($IllegalArgumentException, "unknown location"_s);
	}
	return $nc(h)->contains(file);
}

$Locations$LocationHandler* Locations::getHandler($JavaFileManager$Location* location) {
	$Objects::requireNonNull(location);
	$var($Locations$LocationHandler, locationHandler, nullptr);
	bool var$0 = $instanceOf($Locations$LocationHandler, location);
	if (var$0) {
		$assign(locationHandler, $cast($Locations$LocationHandler, location));
		var$0 = true;
	}
	return (var$0) ? locationHandler : $cast($Locations$LocationHandler, $nc(this->handlersForLocation)->get(location));
}

bool Locations::isArchive($Path* file) {
	$useLocalCurrentObjectStackCache();
	$var($String, n, $StringUtils::toLowerCase($($nc($($nc(file)->getFileName()))->toString())));
	bool var$0 = $nc(this->fsInfo)->isFile(file);
	if (var$0) {
		bool var$1 = $nc(n)->endsWith(".jar"_s);
		var$0 = (var$1 || $nc(n)->endsWith(".zip"_s));
	}
	return var$0;
}

$Path* Locations::normalize($Path* p) {
	$init(Locations);
	$useLocalCurrentObjectStackCache();
	try {
		return $nc(p)->toRealPath($$new($LinkOptionArray, 0));
	} catch ($IOException& e) {
		return $nc($($nc(p)->toAbsolutePath()))->normalize();
	}
	$shouldNotReachHere();
}

void Locations::lambda$close$0($ListBuffer* list, $Closeable* closeable) {
	$init(Locations);
	try {
		$nc(closeable)->close();
	} catch ($IOException& ex) {
		$nc(list)->add(ex);
	}
}

void clinit$Locations($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Locations::javaHome, $nc($($FileSystems::getDefault()))->getPath($($System::getProperty("java.home"_s)), $$new($StringArray, 0)));
	$assignStatic(Locations::thisSystemModules, $nc($($nc(Locations::javaHome)->resolve("lib"_s)))->resolve("modules"_s));
}

Locations::Locations() {
}

$Class* Locations::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locations$$Lambda$get::classInfo$.name)) {
			return Locations$$Lambda$get::load$(name, initialize);
		}
		if (name->equals(Locations$$Lambda$lambda$close$0$1::classInfo$.name)) {
			return Locations$$Lambda$lambda$close$0$1::load$(name, initialize);
		}
	}
	$loadClass(Locations, name, initialize, &_Locations_ClassInfo_, clinit$Locations, allocate$Locations);
	return class$;
}

$Class* Locations::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com