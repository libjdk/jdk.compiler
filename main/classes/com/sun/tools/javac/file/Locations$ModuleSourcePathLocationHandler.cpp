#include <com/sun/tools/javac/file/Locations$ModuleSourcePathLocationHandler.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Warnings.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef MARKER
#undef MODULE_SOURCE_PATH
#undef PATH

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModuleTable = ::com::sun::tools::javac::file::Locations$ModuleTable;
using $Option = ::com::sun::tools::javac::main::Option;
using $CompilerProperties$Warnings = ::com::sun::tools::javac::resources::CompilerProperties$Warnings;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $Log = ::com::sun::tools::javac::util::Log;
using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
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
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Stream = ::java::util::stream::Stream;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1 : public $Predicate {
	$class(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p) override {
		 return Locations$ModuleSourcePathLocationHandler::lambda$new$1($cast($Path, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::*)()>(&Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::class$ = nullptr;

class Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1 : public $Consumer {
	$class(Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(Locations$ModuleSourcePathLocationHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* value) override {
		$nc(inst$)->initForModule($cast($String, value));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1>());
	}
	Locations$ModuleSourcePathLocationHandler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1, inst$)},
	{}
};
$MethodInfo Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations$ModuleSourcePathLocationHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::*)(Locations$ModuleSourcePathLocationHandler*)>(&Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::class$ = nullptr;

class Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2 : public $BiConsumer {
	$class(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Locations$ModuleSourcePathLocationHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* modName, Object$* modPath) override {
		$nc(inst$)->lambda$initModuleTable$0($cast($String, modName), $cast($List, modPath));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2>());
	}
	Locations$ModuleSourcePathLocationHandler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2, inst$)},
	{}
};
$MethodInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations$ModuleSourcePathLocationHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::*)(Locations$ModuleSourcePathLocationHandler*)>(&Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::class$ = nullptr;

class Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3 : public $DirectoryStream$Filter {
	$class(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3, $NO_CLASS_INIT, $DirectoryStream$Filter)
public:
	void init$() {
	}
	virtual bool accept(Object$* path) override {
		 return Locations$ModuleSourcePathLocationHandler::lambda$add$2($cast($Path, path));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::*)()>(&Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3",
	"java.lang.Object",
	"java.nio.file.DirectoryStream$Filter",
	nullptr,
	methodInfos
};
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::class$ = nullptr;

$FieldInfo _Locations$ModuleSourcePathLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModuleSourcePathLocationHandler, this$0)},
	{"moduleTable", "Lcom/sun/tools/javac/file/Locations$ModuleTable;", nullptr, $PRIVATE, $field(Locations$ModuleSourcePathLocationHandler, moduleTable)},
	{"paths", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/file/Path;>;", $PRIVATE, $field(Locations$ModuleSourcePathLocationHandler, paths)},
	{"checkModuleInfo", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(Locations$ModuleSourcePathLocationHandler, checkModuleInfo)},
	{}
};

$MethodInfo _Locations$ModuleSourcePathLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, 0, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler::*)($Locations*)>(&Locations$ModuleSourcePathLocationHandler::init$))},
	{"add", "(Ljava/util/Map;Ljava/nio/file/Path;Ljava/nio/file/Path;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/nio/file/Path;>;>;Ljava/nio/file/Path;Ljava/nio/file/Path;)V", 0},
	{"checkPaths", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/util/List<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$List*(Locations$ModuleSourcePathLocationHandler::*)($Iterable*)>(&Locations$ModuleSourcePathLocationHandler::checkPaths)), "java.io.IOException"},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"expandBraces", "(Ljava/lang/String;Ljava/util/Collection;)V", "(Ljava/lang/String;Ljava/util/Collection<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler::*)($String*,$Collection*)>(&Locations$ModuleSourcePathLocationHandler::expandBraces))},
	{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0},
	{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, 0},
	{"getMatchingBrace", "(Ljava/lang/String;I)I", nullptr, 0},
	{"getPaths", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/nio/file/Path;>;", 0},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, 0},
	{"init", "(Ljava/lang/String;)V", nullptr, 0},
	{"initForModule", "(Ljava/lang/String;)V", nullptr, 0},
	{"initFromPattern", "(Ljava/lang/String;)V", nullptr, 0},
	{"initModuleTable", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/nio/file/Path;>;>;)V", $PRIVATE, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler::*)($Map*)>(&Locations$ModuleSourcePathLocationHandler::initModuleTable))},
	{"isSeparator", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(Locations$ModuleSourcePathLocationHandler::*)(char16_t)>(&Locations$ModuleSourcePathLocationHandler::isSeparator))},
	{"isSet", "()Z", nullptr, 0},
	{"lambda$add$2", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Path*)>(&Locations$ModuleSourcePathLocationHandler::lambda$add$2)), "java.io.IOException"},
	{"lambda$initModuleTable$0", "(Ljava/lang/String;Ljava/util/List;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Locations$ModuleSourcePathLocationHandler::*)($String*,$List*)>(&Locations$ModuleSourcePathLocationHandler::lambda$initModuleTable$0))},
	{"lambda$new$1", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Path*)>(&Locations$ModuleSourcePathLocationHandler::lambda$new$1))},
	{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Locations$ModuleSourcePathLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler", "com.sun.tools.javac.file.Locations", "ModuleSourcePathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$BasicLocationHandler", "com.sun.tools.javac.file.Locations", "BasicLocationHandler", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Locations$ModuleSourcePathLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler",
	"com.sun.tools.javac.file.Locations$BasicLocationHandler",
	nullptr,
	_Locations$ModuleSourcePathLocationHandler_FieldInfo_,
	_Locations$ModuleSourcePathLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$ModuleSourcePathLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$ModuleSourcePathLocationHandler($Class* clazz) {
	return $of($alloc(Locations$ModuleSourcePathLocationHandler));
}

void Locations$ModuleSourcePathLocationHandler::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$init($StandardLocation);
	$init($Option);
	$Locations$BasicLocationHandler::init$($StandardLocation::MODULE_SOURCE_PATH, $$new($OptionArray, {$Option::MODULE_SOURCE_PATH}));
	$set(this, checkModuleInfo, static_cast<$Predicate*>($new(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1)));
}

bool Locations$ModuleSourcePathLocationHandler::handleOption($Option* option, $String* value) {
	this->explicit$ = true;
	init(value);
	return true;
}

void Locations$ModuleSourcePathLocationHandler::init($String* value) {
	$useLocalCurrentObjectStackCache();
	$var($Pattern, moduleSpecificForm, $Pattern::compile("([\\p{Alnum}$_.]+)=(.*)"_s));
	$var($List, pathsForModules, $new($ArrayList));
	$var($String, modulePattern, nullptr);
	{
		$var($StringArray, arr$, $nc(value)->split($cstr({'\0'})));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, v, arr$->get(i$));
			{
				if ($nc($($nc(moduleSpecificForm)->matcher(v)))->matches()) {
					pathsForModules->add(v);
				} else {
					$assign(modulePattern, v);
				}
			}
		}
	}
	if (modulePattern != nullptr) {
		initFromPattern(modulePattern);
	}
	pathsForModules->forEach(static_cast<$Consumer*>($$new(Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1, this)));
}

void Locations$ModuleSourcePathLocationHandler::initForModule($String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t eq = $nc(value)->indexOf((int32_t)u'=');
	$var($String, name, value->substring(0, eq));
	$var($List, paths, $new($ArrayList));
	{
		$init($File);
		$var($StringArray, arr$, $(value->substring(eq + 1))->split($File::pathSeparator));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, v, arr$->get(i$));
			{
				try {
					paths->add($($Paths::get(v, $$new($StringArray, 0))));
				} catch ($InvalidPathException& e) {
					$throwNew($IllegalArgumentException, $$str({"invalid path: "_s, v}), e);
				}
			}
		}
	}
	try {
		setPathsForModule(name, paths);
	} catch ($IOException& e) {
		e->printStackTrace();
		$throwNew($IllegalArgumentException, $$str({"cannot set path for module "_s, name}), e);
	}
}

void Locations$ModuleSourcePathLocationHandler::initFromPattern($String* value) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, segments, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($ArrayList)))));
	{
		$init($File);
		$var($StringArray, arr$, $nc(value)->split($File::pathSeparator));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				expandBraces(s, segments);
			}
		}
	}
	$var($Map, map, $new($LinkedHashMap));
	$var($List, noSuffixPaths, $new($ArrayList));
	bool anySuffix = false;
	$var($String, MARKER, "*"_s);
	{
		$var($Iterator, i$, segments->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, seg, $cast($String, i$->next()));
			{
				int32_t markStart = $nc(seg)->indexOf(MARKER);
				if (markStart == -1) {
					$var($Path, p, this->this$0->getPath(seg, $$new($StringArray, 0)));
					add(map, p, nullptr);
					noSuffixPaths->add(p);
				} else {
					if (markStart == 0 || !isSeparator(seg->charAt(markStart - 1))) {
						$throwNew($IllegalArgumentException, $$str({"illegal use of "_s, MARKER, " in "_s, seg}));
					}
					$var($Path, prefix, this->this$0->getPath($(seg->substring(0, markStart - 1)), $$new($StringArray, 0)));
					$var($Path, suffix, nullptr);
					int32_t markEnd = markStart + MARKER->length();
					if (markEnd == seg->length()) {
						$assign(suffix, nullptr);
					} else {
						bool var$1 = !isSeparator(seg->charAt(markEnd));
						if (var$1 || seg->indexOf(MARKER, markEnd) != -1) {
							$throwNew($IllegalArgumentException, $$str({"illegal use of "_s, MARKER, " in "_s, seg}));
						} else {
							$assign(suffix, this->this$0->getPath($(seg->substring(markEnd + 1)), $$new($StringArray, 0)));
							anySuffix = true;
						}
					}
					add(map, prefix, suffix);
					if (suffix == nullptr) {
						noSuffixPaths->add(prefix);
					}
				}
			}
		}
	}
	initModuleTable(map);
	$set(this, paths, anySuffix ? ($List*)nullptr : noSuffixPaths);
}

void Locations$ModuleSourcePathLocationHandler::initModuleTable($Map* map) {
	$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	$nc(map)->forEach(static_cast<$BiConsumer*>($$new(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2, this)));
}

bool Locations$ModuleSourcePathLocationHandler::isSeparator(char16_t ch) {
	$init($File);
	return (ch == $File::separatorChar) || (ch == u'/');
}

void Locations$ModuleSourcePathLocationHandler::add($Map* map, $Path* prefix, $Path* suffix) {
	$useLocalCurrentObjectStackCache();
	if (!$Files::isDirectory(prefix, $$new($LinkOptionArray, 0))) {
		if (this->this$0->warn) {
			$var($JCDiagnostic$Warning, key, $Files::exists(prefix, $$new($LinkOptionArray, 0)) ? $CompilerProperties$Warnings::DirPathElementNotDirectory(prefix) : $CompilerProperties$Warnings::DirPathElementNotFound(prefix));
			$init($Lint$LintCategory);
			$nc(this->this$0->log)->warning($Lint$LintCategory::PATH, key);
		}
		return;
	}
	try {
		$var($DirectoryStream, stream, $Files::newDirectoryStream(prefix, static_cast<$DirectoryStream$Filter*>($$new(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					{
						$var($Iterator, i$, $nc(stream)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, entry, $cast($Path, i$->next()));
							{
								$var($Path, path, (suffix == nullptr) ? entry : $nc(entry)->resolve(suffix));
								if ($Files::isDirectory(path, $$new($LinkOptionArray, 0))) {
									$var($String, name, $nc($(entry->getFileName()))->toString());
									$var($List, paths, $cast($List, $nc(map)->get(name)));
									if (paths == nullptr) {
										map->put(name, $assign(paths, $new($ArrayList)));
									}
									$nc(paths)->add(path);
								}
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
	} catch ($IOException& e) {
		$nc($System::err)->println($of(e));
	}
}

void Locations$ModuleSourcePathLocationHandler::expandBraces($String* value, $Collection* results) {
	$useLocalCurrentObjectStackCache();
	int32_t depth = 0;
	int32_t start = -1;
	$var($String, prefix, nullptr);
	$var($String, suffix, nullptr);
	for (int32_t i = 0; i < $nc(value)->length(); ++i) {
		switch (value->charAt(i)) {
		case u'{':
			{
				++depth;
				if (depth == 1) {
					$assign(prefix, value->substring(0, i));
					$assign(suffix, value->substring(getMatchingBrace(value, i) + 1));
					start = i + 1;
				}
				break;
			}
		case u',':
			{
				if (depth == 1) {
					$var($String, elem, value->substring(start, i));
					expandBraces($$str({prefix, elem, suffix}), results);
					start = i + 1;
				}
				break;
			}
		case u'}':
			{
				{
					$var($String, elem, nullptr)
					switch (depth) {
					case 0:
						{
							$throwNew($IllegalArgumentException, "mismatched braces"_s);
						}
					case 1:
						{
							$assign(elem, value->substring(start, i));
							expandBraces($$str({prefix, elem, suffix}), results);
							return;
						}
					default:
						{
							--depth;
						}
					}
				}
				break;
			}
		}
	}
	if (depth > 0) {
		$throwNew($IllegalArgumentException, "mismatched braces"_s);
	}
	$nc(results)->add(value);
}

int32_t Locations$ModuleSourcePathLocationHandler::getMatchingBrace($String* value, int32_t offset) {
	int32_t depth = 1;
	for (int32_t i = offset + 1; i < $nc(value)->length(); ++i) {
		switch (value->charAt(i)) {
		case u'{':
			{
				++depth;
				break;
			}
		case u'}':
			{
				if (--depth == 0) {
					return i;
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "mismatched braces"_s);
}

bool Locations$ModuleSourcePathLocationHandler::isSet() {
	return (this->moduleTable != nullptr);
}

$Collection* Locations$ModuleSourcePathLocationHandler::getPaths() {
	if (this->paths == nullptr) {
		$throwNew($IllegalStateException, "paths not available"_s);
	}
	return this->paths;
}

void Locations$ModuleSourcePathLocationHandler::setPaths($Iterable* files) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $new($LinkedHashMap));
	$var($List, newPaths, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, file, $cast($Path, i$->next()));
			{
				add(map, file, nullptr);
				newPaths->add(file);
			}
		}
	}
	initModuleTable(map);
	this->explicit$ = true;
	$set(this, paths, $Collections::unmodifiableList(newPaths));
}

void Locations$ModuleSourcePathLocationHandler::setPathsForModule($String* name, $Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$var($List, validPaths, checkPaths(paths));
	if (this->moduleTable == nullptr) {
		$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	}
	$var($Locations$ModuleLocationHandler, l, $nc(this->moduleTable)->get(name));
	if (l == nullptr) {
		$assign(l, $new($Locations$ModuleLocationHandler, this->this$0, this, $$str({$($nc(this->location)->getName()), "["_s, name, "]"_s}), name, validPaths, true));
		$nc(this->moduleTable)->add(l);
	} else {
		$set($nc(l), searchPath, validPaths);
		$nc(this->moduleTable)->updatePaths(l);
	}
	this->explicit$ = true;
}

$List* Locations$ModuleSourcePathLocationHandler::checkPaths($Iterable* paths) {
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

$JavaFileManager$Location* Locations$ModuleSourcePathLocationHandler::getLocationForModule($String* name) {
	return (this->moduleTable == nullptr) ? ($JavaFileManager$Location*)nullptr : static_cast<$JavaFileManager$Location*>($nc(this->moduleTable)->get(name));
}

$JavaFileManager$Location* Locations$ModuleSourcePathLocationHandler::getLocationForModule($Path* file) {
	return (this->moduleTable == nullptr) ? ($JavaFileManager$Location*)nullptr : static_cast<$JavaFileManager$Location*>($nc(this->moduleTable)->get(file));
}

$Iterable* Locations$ModuleSourcePathLocationHandler::listLocationsForModules() {
	if (this->moduleTable == nullptr) {
		return $Collections::emptySet();
	}
	return $Collections::singleton($($nc(this->moduleTable)->locations()));
}

bool Locations$ModuleSourcePathLocationHandler::contains($Path* file) {
	return (this->moduleTable == nullptr) ? false : $nc(this->moduleTable)->contains(file);
}

bool Locations$ModuleSourcePathLocationHandler::lambda$add$2($Path* path) {
	$init(Locations$ModuleSourcePathLocationHandler);
	return $Files::isDirectory(path, $$new($LinkOptionArray, 0));
}

bool Locations$ModuleSourcePathLocationHandler::lambda$new$1($Path* p) {
	$init(Locations$ModuleSourcePathLocationHandler);
	$useLocalCurrentObjectStackCache();
	return $Files::exists($($nc(p)->resolve("module-info.java"_s)), $$new($LinkOptionArray, 0));
}

void Locations$ModuleSourcePathLocationHandler::lambda$initModuleTable$0($String* modName, $List* modPath) {
	$useLocalCurrentObjectStackCache();
	bool hasModuleInfo = $nc($($nc(modPath)->stream()))->anyMatch(this->checkModuleInfo);
	if (hasModuleInfo) {
		$var($String, locnName, $str({$($nc(this->location)->getName()), "["_s, modName, "]"_s}));
		$var($Locations$ModuleLocationHandler, l, $new($Locations$ModuleLocationHandler, this->this$0, this, locnName, modName, modPath, false));
		$nc(this->moduleTable)->add(l);
	}
}

Locations$ModuleSourcePathLocationHandler::Locations$ModuleSourcePathLocationHandler() {
}

$Class* Locations$ModuleSourcePathLocationHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::classInfo$.name)) {
			return Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$new$1::load$(name, initialize);
		}
		if (name->equals(Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::classInfo$.name)) {
			return Locations$ModuleSourcePathLocationHandler$$Lambda$initForModule$1::load$(name, initialize);
		}
		if (name->equals(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::classInfo$.name)) {
			return Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$initModuleTable$0$2::load$(name, initialize);
		}
		if (name->equals(Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::classInfo$.name)) {
			return Locations$ModuleSourcePathLocationHandler$$Lambda$lambda$add$2$3::load$(name, initialize);
		}
	}
	$loadClass(Locations$ModuleSourcePathLocationHandler, name, initialize, &_Locations$ModuleSourcePathLocationHandler_ClassInfo_, allocate$Locations$ModuleSourcePathLocationHandler);
	return class$;
}

$Class* Locations$ModuleSourcePathLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com