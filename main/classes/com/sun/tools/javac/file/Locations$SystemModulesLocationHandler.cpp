#include <com/sun/tools/javac/file/Locations$SystemModulesLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemNotFoundException.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderNotFoundException.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef SYSTEM
#undef SYSTEM_MODULES

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $URLArray = $Array<::java::net::URL>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModuleTable = ::com::sun::tools::javac::file::Locations$ModuleTable;
using $Option = ::com::sun::tools::javac::main::Option;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemNotFoundException = ::java::nio::file::FileSystemNotFoundException;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $ProviderNotFoundException = ::java::nio::file::ProviderNotFoundException;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0 : public $DirectoryStream$Filter {
	$class(Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0, $NO_CLASS_INIT, $DirectoryStream$Filter)
public:
	void init$() {
	}
	virtual bool accept(Object$* x$0) override {
		 return Locations$SystemModulesLocationHandler::lambda$initSystemModules$0($cast($Path, x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::*)()>(&Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0",
	"java.lang.Object",
	"java.nio.file.DirectoryStream$Filter",
	nullptr,
	methodInfos
};
$Class* Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::load$($String* name, bool initialize) {
	$loadClass(Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::class$ = nullptr;

$FieldInfo _Locations$SystemModulesLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$SystemModulesLocationHandler, this$0)},
	{"systemJavaHome", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Locations$SystemModulesLocationHandler, systemJavaHome)},
	{"modules", "Ljava/nio/file/Path;", nullptr, $PRIVATE, $field(Locations$SystemModulesLocationHandler, modules)},
	{"moduleTable", "Lcom/sun/tools/javac/file/Locations$ModuleTable;", nullptr, $PRIVATE, $field(Locations$SystemModulesLocationHandler, moduleTable)},
	{}
};

$MethodInfo _Locations$SystemModulesLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, 0, $method(static_cast<void(Locations$SystemModulesLocationHandler::*)($Locations*)>(&Locations$SystemModulesLocationHandler::init$))},
	{"checkPaths", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/util/List<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$List*(Locations$SystemModulesLocationHandler::*)($Iterable*)>(&Locations$SystemModulesLocationHandler::checkPaths)), "java.io.IOException"},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"initSystemModules", "()V", nullptr, $PRIVATE, $method(static_cast<void(Locations$SystemModulesLocationHandler::*)()>(&Locations$SystemModulesLocationHandler::initSystemModules)), "java.io.IOException"},
	{"isCurrentPlatform", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Locations$SystemModulesLocationHandler::*)($Path*)>(&Locations$SystemModulesLocationHandler::isCurrentPlatform))},
	{"lambda$initSystemModules$0", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Path*)>(&Locations$SystemModulesLocationHandler::lambda$initSystemModules$0)), "java.io.IOException"},
	{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0, nullptr, "java.io.IOException"},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"update", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(static_cast<void(Locations$SystemModulesLocationHandler::*)($Path*)>(&Locations$SystemModulesLocationHandler::update))},
	{}
};

$InnerClassInfo _Locations$SystemModulesLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$SystemModulesLocationHandler", "com.sun.tools.javac.file.Locations", "SystemModulesLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$SystemModulesLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$SystemModulesLocationHandler",
	"com.sun.tools.javac.file.Locations$BasicLocationHandler",
	nullptr,
	_Locations$SystemModulesLocationHandler_FieldInfo_,
	_Locations$SystemModulesLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$SystemModulesLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$SystemModulesLocationHandler($Class* clazz) {
	return $of($alloc(Locations$SystemModulesLocationHandler));
}

void Locations$SystemModulesLocationHandler::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$init($StandardLocation);
	$init($Option);
	$Locations$BasicLocationHandler::init$($StandardLocation::SYSTEM_MODULES, $$new($OptionArray, {$Option::SYSTEM}));
	$init($Locations);
	$set(this, systemJavaHome, $Locations::javaHome);
}

bool Locations$SystemModulesLocationHandler::handleOption($Option* option, $String* value) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	this->explicit$ = true;
	if (value == nullptr) {
		$init($Locations);
		$set(this, systemJavaHome, $Locations::javaHome);
	} else if ($nc(value)->equals("none"_s)) {
		$set(this, systemJavaHome, nullptr);
	} else {
		update($(this->this$0->getPath(value, $$new($StringArray, 0))));
	}
	$set(this, modules, nullptr);
	return true;
}

$Collection* Locations$SystemModulesLocationHandler::getPaths() {
	return (this->systemJavaHome == nullptr) ? ($Collection*)nullptr : static_cast<$Collection*>($Collections::singleton(this->systemJavaHome));
}

void Locations$SystemModulesLocationHandler::setPaths($Iterable* files) {
	if (files == nullptr) {
		$set(this, systemJavaHome, nullptr);
	} else {
		this->explicit$ = true;
		$var($Path, dir, checkSingletonDirectory(files));
		update(dir);
	}
}

void Locations$SystemModulesLocationHandler::setPathsForModule($String* name, $Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$var($List, checkedPaths, checkPaths(paths));
	initSystemModules();
	$var($Locations$ModuleLocationHandler, l, $nc(this->moduleTable)->get(name));
	if (l == nullptr) {
		$assign(l, $new($Locations$ModuleLocationHandler, this->this$0, this, $$str({$($nc(this->location)->getName()), "["_s, name, "]"_s}), name, checkedPaths, true));
		$nc(this->moduleTable)->add(l);
	} else {
		$set($nc(l), searchPath, checkedPaths);
		$nc(this->moduleTable)->updatePaths(l);
	}
	this->explicit$ = true;
}

$List* Locations$SystemModulesLocationHandler::checkPaths($Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(paths);
	$var($List, validPaths, $new($ArrayList));
	{
		$var($Iterator, i$, paths->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				validPaths->add($(checkDirectory(p)));
			}
		}
	}
	return validPaths;
}

void Locations$SystemModulesLocationHandler::update($Path* p) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !isCurrentPlatform(p);
	bool var$0 = var$1 && !$Files::exists($($nc($($nc(p)->resolve("lib"_s)))->resolve("jrt-fs.jar"_s)), $$new($LinkOptionArray, 0));
	if (var$0 && !$Files::exists($($nc(this->systemJavaHome)->resolve("modules"_s)), $$new($LinkOptionArray, 0))) {
		$throwNew($IllegalArgumentException, $($nc(p)->toString()));
	}
	$set(this, systemJavaHome, p);
	$set(this, modules, nullptr);
}

bool Locations$SystemModulesLocationHandler::isCurrentPlatform($Path* p) {
	try {
		$init($Locations);
		return $Files::isSameFile(p, $Locations::javaHome);
	} catch ($IOException& ex) {
		$throwNew($IllegalArgumentException, $($nc(p)->toString()), ex);
	}
	$shouldNotReachHere();
}

$JavaFileManager$Location* Locations$SystemModulesLocationHandler::getLocationForModule($String* name) {
	initSystemModules();
	return $nc(this->moduleTable)->get(name);
}

$JavaFileManager$Location* Locations$SystemModulesLocationHandler::getLocationForModule($Path* file) {
	initSystemModules();
	return $nc(this->moduleTable)->get(file);
}

$Iterable* Locations$SystemModulesLocationHandler::listLocationsForModules() {
	initSystemModules();
	return $Collections::singleton($($nc(this->moduleTable)->locations()));
}

bool Locations$SystemModulesLocationHandler::contains($Path* file) {
	initSystemModules();
	return $nc(this->moduleTable)->contains(file);
}

void Locations$SystemModulesLocationHandler::initSystemModules() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->moduleTable != nullptr) {
		return;
	}
	if (this->systemJavaHome == nullptr) {
		$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
		return;
	}
	if (this->modules == nullptr) {
		try {
			$var($URI, jrtURI, $URI::create("jrt:/"_s));
			$var($FileSystem, jrtfs, nullptr);
			if (isCurrentPlatform(this->systemJavaHome)) {
				$assign(jrtfs, $FileSystems::getFileSystem(jrtURI));
			} else {
				try {
					$var($Map, attrMap, $Collections::singletonMap("java.home"_s, $($nc(this->systemJavaHome)->toString())));
					$assign(jrtfs, $FileSystems::newFileSystem(jrtURI, attrMap));
				} catch ($ProviderNotFoundException& ex) {
					$var($URL, javaHomeURL, $nc($($nc($($nc(this->systemJavaHome)->resolve("jrt-fs.jar"_s)))->toUri()))->toURL());
					$load($Locations);
					$var($ClassLoader, currentLoader, $Locations::class$->getClassLoader());
					$var($URLClassLoader, fsLoader, $new($URLClassLoader, $$new($URLArray, {javaHomeURL}), currentLoader));
					$assign(jrtfs, $FileSystems::newFileSystem(jrtURI, $($Collections::emptyMap()), static_cast<$ClassLoader*>(fsLoader)));
					$nc(this->this$0->closeables)->add(fsLoader);
				}
				$nc(this->this$0->closeables)->add(jrtfs);
			}
			$set(this, modules, $nc(jrtfs)->getPath("/modules"_s, $$new($StringArray, 0)));
		} catch ($FileSystemNotFoundException& e) {
			$set(this, modules, $nc(this->systemJavaHome)->resolve("modules"_s));
			if (!$Files::exists(this->modules, $$new($LinkOptionArray, 0))) {
				$throwNew($IOException, "can\'t find system classes"_s, e);
			}
		} catch ($ProviderNotFoundException& e) {
			$set(this, modules, $nc(this->systemJavaHome)->resolve("modules"_s));
			if (!$Files::exists(this->modules, $$new($LinkOptionArray, 0))) {
				$throwNew($IOException, "can\'t find system classes"_s, e);
			}
		}
	}
	$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	{
		$var($DirectoryStream, stream, $Files::newDirectoryStream(this->modules, static_cast<$DirectoryStream$Filter*>($$new(Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					{
						$var($Iterator, i$, $nc(stream)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, entry, $cast($Path, i$->next()));
							{
								$var($String, moduleName, $nc($($nc(entry)->getFileName()))->toString());
								$var($String, name, $str({$($nc(this->location)->getName()), "["_s, moduleName, "]"_s}));
								$var($Locations$ModuleLocationHandler, h, $new($Locations$ModuleLocationHandler, this->this$0, this, name, moduleName, $($Collections::singletonList(entry)), false));
								$nc(this->moduleTable)->add(h);
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
	}
}

bool Locations$SystemModulesLocationHandler::lambda$initSystemModules$0($Path* x$0) {
	$init(Locations$SystemModulesLocationHandler);
	return $Files::isDirectory(x$0, $$new($LinkOptionArray, 0));
}

Locations$SystemModulesLocationHandler::Locations$SystemModulesLocationHandler() {
}

$Class* Locations$SystemModulesLocationHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::classInfo$.name)) {
			return Locations$SystemModulesLocationHandler$$Lambda$lambda$initSystemModules$0::load$(name, initialize);
		}
	}
	$loadClass(Locations$SystemModulesLocationHandler, name, initialize, &_Locations$SystemModulesLocationHandler_ClassInfo_, allocate$Locations$SystemModulesLocationHandler);
	return class$;
}

$Class* Locations$SystemModulesLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com