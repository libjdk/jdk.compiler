#include <com/sun/tools/javac/file/Locations$BootClassPathLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$1.h>
#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$SearchPath.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumMap.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef BOOT_CLASS_PATH
#undef DJAVA_ENDORSED_DIRS
#undef DJAVA_EXT_DIRS
#undef ENDORSEDDIRS
#undef EXTDIRS
#undef PLATFORM_CLASS_PATH
#undef XBOOTCLASSPATH
#undef XBOOTCLASSPATH_APPEND
#undef XBOOTCLASSPATH_PREPEND

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$1 = ::com::sun::tools::javac::file::Locations$1;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$SearchPath = ::com::sun::tools::javac::file::Locations$SearchPath;
using $Option = ::com::sun::tools::javac::main::Option;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumMap = ::java::util::EnumMap;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _Locations$BootClassPathLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$BootClassPathLocationHandler, this$0)},
	{"searchPath", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/nio/file/Path;>;", $PRIVATE, $field(Locations$BootClassPathLocationHandler, searchPath)},
	{"optionValues", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/main/Option;Ljava/lang/String;>;", $FINAL, $field(Locations$BootClassPathLocationHandler, optionValues)},
	{"isDefault", "Z", nullptr, $PRIVATE, $field(Locations$BootClassPathLocationHandler, isDefault$)},
	{}
};

$MethodInfo _Locations$BootClassPathLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, 0, $method(static_cast<void(Locations$BootClassPathLocationHandler::*)($Locations*)>(&Locations$BootClassPathLocationHandler::init$))},
	{"canonicalize", "(Lcom/sun/tools/javac/main/Option;)Lcom/sun/tools/javac/main/Option;", nullptr, $PRIVATE, $method(static_cast<$Option*(Locations$BootClassPathLocationHandler::*)($Option*)>(&Locations$BootClassPathLocationHandler::canonicalize))},
	{"computePath", "()Lcom/sun/tools/javac/file/Locations$SearchPath;", nullptr, 0, nullptr, "java.io.IOException"},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"isDefault", "()Z", nullptr, 0},
	{"lazy", "()V", nullptr, $PRIVATE, $method(static_cast<void(Locations$BootClassPathLocationHandler::*)()>(&Locations$BootClassPathLocationHandler::lazy))},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0},
	{"systemClasses", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$Collection*(Locations$BootClassPathLocationHandler::*)()>(&Locations$BootClassPathLocationHandler::systemClasses)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Locations$BootClassPathLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$BootClassPathLocationHandler", "com.sun.tools.javac.file.Locations", "BootClassPathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$BootClassPathLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$BootClassPathLocationHandler",
	"com.sun.tools.javac.file.Locations$BasicLocationHandler",
	nullptr,
	_Locations$BootClassPathLocationHandler_FieldInfo_,
	_Locations$BootClassPathLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$BootClassPathLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$BootClassPathLocationHandler($Class* clazz) {
	return $of($alloc(Locations$BootClassPathLocationHandler));
}

void Locations$BootClassPathLocationHandler::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$init($StandardLocation);
	$init($Option);
	$Locations$BasicLocationHandler::init$($StandardLocation::PLATFORM_CLASS_PATH, $$new($OptionArray, {
		$Option::BOOT_CLASS_PATH,
		$Option::XBOOTCLASSPATH,
		$Option::XBOOTCLASSPATH_PREPEND,
		$Option::XBOOTCLASSPATH_APPEND,
		$Option::ENDORSEDDIRS,
		$Option::DJAVA_ENDORSED_DIRS,
		$Option::EXTDIRS,
		$Option::DJAVA_EXT_DIRS
	}));
	$set(this, optionValues, $new($EnumMap, $Option::class$));
}

bool Locations$BootClassPathLocationHandler::isDefault() {
	lazy();
	return this->isDefault$;
}

bool Locations$BootClassPathLocationHandler::handleOption($Option* option$renamed, $String* value) {
	$var($Option, option, option$renamed);
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	this->explicit$ = true;
	option = canonicalize(option);
	$nc(this->optionValues)->put(option, value);
	$init($Option);
	if (option == $Option::BOOT_CLASS_PATH) {
		$nc(this->optionValues)->remove($Option::XBOOTCLASSPATH_PREPEND);
		$nc(this->optionValues)->remove($Option::XBOOTCLASSPATH_APPEND);
	}
	$set(this, searchPath, nullptr);
	return true;
}

$Option* Locations$BootClassPathLocationHandler::canonicalize($Option* option) {
	$init($Locations$1);
	switch ($nc($Locations$1::$SwitchMap$com$sun$tools$javac$main$Option)->get($nc((option))->ordinal())) {
	case 1:
		{
			$init($Option);
			return $Option::BOOT_CLASS_PATH;
		}
	case 2:
		{
			$init($Option);
			return $Option::ENDORSEDDIRS;
		}
	case 3:
		{
			$init($Option);
			return $Option::EXTDIRS;
		}
	default:
		{
			return option;
		}
	}
}

$Collection* Locations$BootClassPathLocationHandler::getPaths() {
	lazy();
	return this->searchPath;
}

void Locations$BootClassPathLocationHandler::setPaths($Iterable* files) {
	$useLocalCurrentObjectStackCache();
	if (files == nullptr) {
		$set(this, searchPath, nullptr);
	} else {
		this->isDefault$ = false;
		this->explicit$ = true;
		$var($Locations$SearchPath, p, $$new($Locations$SearchPath, this->this$0)->addFiles(files, false));
		$set(this, searchPath, $Collections::unmodifiableCollection(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(static_cast<$LinkedHashSet*>(p)))))));
		$nc(this->optionValues)->clear();
	}
}

$Locations$SearchPath* Locations$BootClassPathLocationHandler::computePath() {
	$useLocalCurrentObjectStackCache();
	$var($Locations$SearchPath, path, $new($Locations$SearchPath, this->this$0));
	$init($Option);
	$var($String, bootclasspathOpt, $cast($String, $nc(this->optionValues)->get($Option::BOOT_CLASS_PATH)));
	$var($String, endorseddirsOpt, $cast($String, $nc(this->optionValues)->get($Option::ENDORSEDDIRS)));
	$var($String, extdirsOpt, $cast($String, $nc(this->optionValues)->get($Option::EXTDIRS)));
	$var($String, xbootclasspathPrependOpt, $cast($String, $nc(this->optionValues)->get($Option::XBOOTCLASSPATH_PREPEND)));
	$var($String, xbootclasspathAppendOpt, $cast($String, $nc(this->optionValues)->get($Option::XBOOTCLASSPATH_APPEND)));
	path->addFiles(xbootclasspathPrependOpt);
	if (endorseddirsOpt != nullptr) {
		path->addDirectories(endorseddirsOpt);
	} else {
		path->addDirectories($($System::getProperty("java.endorsed.dirs"_s)), false);
	}
	if (bootclasspathOpt != nullptr) {
		path->addFiles(bootclasspathOpt);
	} else {
		$var($Collection, systemClasses, this->systemClasses());
		if (systemClasses != nullptr) {
			path->addFiles(static_cast<$Iterable*>(systemClasses), false);
		} else {
			$var($String, files, $System::getProperty("sun.boot.class.path"_s));
			path->addFiles(files, false);
		}
	}
	path->addFiles(xbootclasspathAppendOpt);
	if (extdirsOpt != nullptr) {
		path->addDirectories(extdirsOpt);
	} else {
		$init($Locations);
		$var($Path, jfxrt, $nc($Locations::javaHome)->resolve("lib/jfxrt.jar"_s));
		if ($Files::exists(jfxrt, $$new($LinkOptionArray, 0))) {
			path->addFile(jfxrt, false);
		}
		path->addDirectories($($System::getProperty("java.ext.dirs"_s)), false);
	}
	this->isDefault$ = (xbootclasspathPrependOpt == nullptr) && (bootclasspathOpt == nullptr) && (xbootclasspathAppendOpt == nullptr);
	return path;
}

$Collection* Locations$BootClassPathLocationHandler::systemClasses() {
	$useLocalCurrentObjectStackCache();
	$init($Locations);
	if ($Files::isRegularFile($Locations::thisSystemModules, $$new($LinkOptionArray, 0))) {
		return $Collections::singleton($Locations::thisSystemModules);
	}
	$var($Path, modules, $nc($Locations::javaHome)->resolve("modules"_s));
	if ($Files::isDirectory($($nc(modules)->resolve("java.base"_s)), $$new($LinkOptionArray, 0))) {
		{
			$var($Stream, listedModules, $Files::list(modules));
			{
				$var($Throwable, var$0, nullptr);
				$var($Collection, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$assign(var$2, $nc(listedModules)->toList());
						return$1 = true;
						goto $finally;
					} catch ($Throwable& t$) {
						if (listedModules != nullptr) {
							try {
								listedModules->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					if (listedModules != nullptr) {
						listedModules->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	}
	return nullptr;
}

void Locations$BootClassPathLocationHandler::lazy() {
	if (this->searchPath == nullptr) {
		try {
			$set(this, searchPath, $Collections::unmodifiableCollection($(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(static_cast<$LinkedHashSet*>(computePath()))))))));
		} catch ($IOException& e) {
			$throwNew($UncheckedIOException, e);
		}
	}
}

bool Locations$BootClassPathLocationHandler::contains($Path* file) {
	return this->this$0->contains(this->searchPath, file);
}

Locations$BootClassPathLocationHandler::Locations$BootClassPathLocationHandler() {
}

$Class* Locations$BootClassPathLocationHandler::load$($String* name, bool initialize) {
	$loadClass(Locations$BootClassPathLocationHandler, name, initialize, &_Locations$BootClassPathLocationHandler_ClassInfo_, allocate$Locations$BootClassPathLocationHandler);
	return class$;
}

$Class* Locations$BootClassPathLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com