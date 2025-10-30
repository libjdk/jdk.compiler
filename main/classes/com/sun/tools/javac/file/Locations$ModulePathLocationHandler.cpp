#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler.h>

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations$ModulePathLocationHandler$ModulePathIterator.h>
#include <com/sun/tools/javac/file/Locations$ModuleTable.h>
#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <jcpp.h>

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $IterableArray = $Array<::java::lang::Iterable>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$BasicLocationHandler = ::com::sun::tools::javac::file::Locations$BasicLocationHandler;
using $Locations$LocationHandler = ::com::sun::tools::javac::file::Locations$LocationHandler;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Locations$ModulePathLocationHandler$ModulePathIterator = ::com::sun::tools::javac::file::Locations$ModulePathLocationHandler$ModulePathIterator;
using $Locations$ModuleTable = ::com::sun::tools::javac::file::Locations$ModuleTable;
using $Locations$SimpleLocationHandler = ::com::sun::tools::javac::file::Locations$SimpleLocationHandler;
using $Option = ::com::sun::tools::javac::main::Option;
using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0 : public $Iterable {
	$class(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$(Locations$ModulePathLocationHandler* inst) {
		$set(this, inst$, inst);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$listLocationsForModules$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0>());
	}
	Locations$ModulePathLocationHandler* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, inst$)},
	{}
};
$MethodInfo Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations$ModulePathLocationHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::*)(Locations$ModulePathLocationHandler*)>(&Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::load$($String* name, bool initialize) {
	$loadClass(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::class$ = nullptr;

class Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1 : public $Iterable {
	$class(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* explicitLocationsList, $Iterable* searchPathLocations) {
		$set(this, explicitLocationsList, explicitLocationsList);
		$set(this, searchPathLocations, searchPathLocations);
	}
	virtual $Iterator* iterator() override {
		 return Locations$ModulePathLocationHandler::lambda$listLocationsForModules$1(explicitLocationsList, searchPathLocations);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1>());
	}
	$Iterable* explicitLocationsList = nullptr;
	$Iterable* searchPathLocations = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::fieldInfos[3] = {
	{"explicitLocationsList", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, explicitLocationsList)},
	{"searchPathLocations", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, searchPathLocations)},
	{}
};
$MethodInfo Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::*)($Iterable*,$Iterable*)>(&Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::load$($String* name, bool initialize) {
	$loadClass(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::class$ = nullptr;

class Locations$ModulePathLocationHandler$$Lambda$iterator$2 : public $Function {
	$class(Locations$ModulePathLocationHandler$$Lambda$iterator$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Iterable, inst$)->iterator());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModulePathLocationHandler$$Lambda$iterator$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$ModulePathLocationHandler$$Lambda$iterator$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModulePathLocationHandler$$Lambda$iterator$2::*)()>(&Locations$ModulePathLocationHandler$$Lambda$iterator$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModulePathLocationHandler$$Lambda$iterator$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$$Lambda$iterator$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Locations$ModulePathLocationHandler$$Lambda$iterator$2::load$($String* name, bool initialize) {
	$loadClass(Locations$ModulePathLocationHandler$$Lambda$iterator$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModulePathLocationHandler$$Lambda$iterator$2::class$ = nullptr;

$FieldInfo _Locations$ModulePathLocationHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModulePathLocationHandler, this$0)},
	{"moduleTable", "Lcom/sun/tools/javac/file/Locations$ModuleTable;", nullptr, $PRIVATE, $field(Locations$ModulePathLocationHandler, moduleTable)},
	{}
};

$MethodInfo _Locations$ModulePathLocationHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;Ljavax/tools/JavaFileManager$Location;[Lcom/sun/tools/javac/main/Option;)V", nullptr, $TRANSIENT, $method(static_cast<void(Locations$ModulePathLocationHandler::*)($Locations*,$JavaFileManager$Location*,$OptionArray*)>(&Locations$ModulePathLocationHandler::init$))},
	{"checkPaths", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)Ljava/util/List<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$List*(Locations$ModulePathLocationHandler::*)($Iterable*)>(&Locations$ModulePathLocationHandler::checkPaths)), "java.io.IOException"},
	{"checkValidModulePathEntry", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(static_cast<void(Locations$ModulePathLocationHandler::*)($Path*)>(&Locations$ModulePathLocationHandler::checkValidModulePathEntry))},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getLocationForModule", "(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC},
	{"getLocationForModule", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PUBLIC},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"initModuleLocations", "()V", nullptr, $PRIVATE, $method(static_cast<void(Locations$ModulePathLocationHandler::*)()>(&Locations$ModulePathLocationHandler::initModuleLocations))},
	{"isModuleName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Locations$ModulePathLocationHandler::*)($String*)>(&Locations$ModulePathLocationHandler::isModuleName))},
	{"lambda$listLocationsForModules$0", "()Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Iterator*(Locations$ModulePathLocationHandler::*)()>(&Locations$ModulePathLocationHandler::lambda$listLocationsForModules$0))},
	{"lambda$listLocationsForModules$1", "(Ljava/lang/Iterable;Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*,$Iterable*)>(&Locations$ModulePathLocationHandler::lambda$listLocationsForModules$1))},
	{"listLocationsForModules", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;>;", 0},
	{"setPaths", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0},
	{"setPathsForModule", "(Ljava/lang/String;Ljava/lang/Iterable;)V", "(Ljava/lang/String;Ljava/lang/Iterable<+Ljava/nio/file/Path;>;)V", 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Locations$ModulePathLocationHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "com.sun.tools.javac.file.Locations", "ModulePathLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$SimpleLocationHandler", "com.sun.tools.javac.file.Locations", "SimpleLocationHandler", $PRIVATE},
	{"com.sun.tools.javac.file.Locations$ModulePathLocationHandler$ModulePathIterator", "com.sun.tools.javac.file.Locations$ModulePathLocationHandler", "ModulePathIterator", 0},
	{}
};

$ClassInfo _Locations$ModulePathLocationHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$ModulePathLocationHandler",
	"com.sun.tools.javac.file.Locations$SimpleLocationHandler",
	nullptr,
	_Locations$ModulePathLocationHandler_FieldInfo_,
	_Locations$ModulePathLocationHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$ModulePathLocationHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$ModulePathLocationHandler($Class* clazz) {
	return $of($alloc(Locations$ModulePathLocationHandler));
}

void Locations$ModulePathLocationHandler::init$($Locations* this$0, $JavaFileManager$Location* location, $OptionArray* options) {
	$set(this, this$0, this$0);
	$Locations$SimpleLocationHandler::init$(this$0, location, options);
}

bool Locations$ModulePathLocationHandler::handleOption($Option* option, $String* value) {
	if (!$nc(this->options)->contains(option)) {
		return false;
	}
	setPaths(value == nullptr ? ($Iterable*)nullptr : $(this->this$0->getPathEntries(value)));
	return true;
}

$JavaFileManager$Location* Locations$ModulePathLocationHandler::getLocationForModule($String* moduleName) {
	initModuleLocations();
	return $nc(this->moduleTable)->get(moduleName);
}

$JavaFileManager$Location* Locations$ModulePathLocationHandler::getLocationForModule($Path* file) {
	initModuleLocations();
	return $nc(this->moduleTable)->get(file);
}

$Iterable* Locations$ModulePathLocationHandler::listLocationsForModules() {
	$useLocalCurrentObjectStackCache();
	$var($Set, explicitLocations, this->moduleTable != nullptr ? $nc(this->moduleTable)->explicitLocations() : $Collections::emptySet());
	$var($Iterable, explicitLocationsList, !$nc(explicitLocations)->isEmpty() ? static_cast<$Iterable*>($Collections::singletonList(explicitLocations)) : static_cast<$Iterable*>($Collections::emptyList()));
	if (this->searchPath == nullptr) {
		return explicitLocationsList;
	}
	$var($Iterable, searchPathLocations, static_cast<$Iterable*>($new(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0, this)));
	return static_cast<$Iterable*>($new(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1, explicitLocationsList, searchPathLocations));
}

bool Locations$ModulePathLocationHandler::contains($Path* file) {
	if (this->moduleTable == nullptr) {
		initModuleLocations();
	}
	return $nc(this->moduleTable)->contains(file);
}

void Locations$ModulePathLocationHandler::setPaths($Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	if (paths != nullptr) {
		{
			$var($Iterator, i$, paths->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Path, p, $cast($Path, i$->next()));
				{
					checkValidModulePathEntry(p);
				}
			}
		}
	}
	$Locations$SimpleLocationHandler::setPaths(paths);
	$set(this, moduleTable, nullptr);
}

void Locations$ModulePathLocationHandler::setPathsForModule($String* name, $Iterable* paths) {
	$useLocalCurrentObjectStackCache();
	$var($List, checkedPaths, checkPaths(paths));
	initModuleLocations();
	$var($Locations$ModuleLocationHandler, l, $nc(this->moduleTable)->get(name));
	if (l == nullptr) {
		$assign(l, $new($Locations$ModuleLocationHandler, this->this$0, this, $$str({$($nc(this->location)->getName()), "["_s, name, "]"_s}), name, checkedPaths, true));
		$nc(this->moduleTable)->add(l);
	} else {
		$set($nc(l), searchPath, checkedPaths);
		$nc(this->moduleTable)->updatePaths(l);
	}
	$nc(l)->explicit$ = true;
	this->explicit$ = true;
}

$List* Locations$ModulePathLocationHandler::checkPaths($Iterable* paths) {
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

void Locations$ModulePathLocationHandler::initModuleLocations() {
	$useLocalCurrentObjectStackCache();
	if (this->moduleTable != nullptr) {
		return;
	}
	$set(this, moduleTable, $new($Locations$ModuleTable, this->this$0));
	{
		$var($Iterator, i$, $nc($(listLocationsForModules()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Set, set, $cast($Set, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(set)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JavaFileManager$Location, locn, $cast($JavaFileManager$Location, i$->next()));
						{
							{
								$var($Locations$ModuleLocationHandler, moduleLocationHandler, nullptr);
								bool var$0 = $instanceOf($Locations$ModuleLocationHandler, locn);
								if (var$0) {
									$assign(moduleLocationHandler, $cast($Locations$ModuleLocationHandler, locn));
									var$0 = true;
								}
								if (var$0) {
									if (!$nc($nc(this->moduleTable)->nameMap)->containsKey($nc(moduleLocationHandler)->moduleName)) {
										$nc(this->moduleTable)->add(moduleLocationHandler);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void Locations$ModulePathLocationHandler::checkValidModulePathEntry($Path* p) {
	$useLocalCurrentObjectStackCache();
	if (!$Files::exists(p, $$new($LinkOptionArray, 0))) {
		return;
	}
	if ($Files::isDirectory(p, $$new($LinkOptionArray, 0))) {
		return;
	}
	$var($String, name, $nc($($nc(p)->getFileName()))->toString());
	int32_t lastDot = $nc(name)->lastIndexOf("."_s);
	if (lastDot > 0) {
		{
			$var($String, s43303$, name->substring(lastDot));
			int32_t tmp43303$ = -1;
			switch (s43303$->hashCode()) {
			case 0x0016832D:
				{
					if (s43303$->equals(".jar"_s)) {
						tmp43303$ = 0;
					}
					break;
				}
			case 0x02BA0F86:
				{
					if (s43303$->equals(".jmod"_s)) {
						tmp43303$ = 1;
					}
					break;
				}
			}
			switch (tmp43303$) {
			case 0:
				{}
			case 1:
				{
					return;
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $(p->toString()));
}

bool Locations$ModulePathLocationHandler::isModuleName($String* name) {
	$useLocalCurrentObjectStackCache();
	int32_t next = 0;
	int32_t off = 0;
	while ((next = $nc(name)->indexOf((int32_t)u'.', off)) != -1) {
		$var($String, id, name->substring(off, next));
		if (!$SourceVersion::isName(id)) {
			return false;
		}
		off = next + 1;
	}
	$var($String, last, $nc(name)->substring(off));
	return $SourceVersion::isName(last);
}

$Iterator* Locations$ModulePathLocationHandler::lambda$listLocationsForModules$1($Iterable* explicitLocationsList, $Iterable* searchPathLocations) {
	$init(Locations$ModulePathLocationHandler);
	$useLocalCurrentObjectStackCache();
	$var($Iterable, var$0, static_cast<$Iterable*>($Arrays::asList($$new($IterableArray, {
		explicitLocationsList,
		searchPathLocations
	}))));
	return $Iterators::createCompoundIterator(var$0, static_cast<$Function*>($$new(Locations$ModulePathLocationHandler$$Lambda$iterator$2)));
}

$Iterator* Locations$ModulePathLocationHandler::lambda$listLocationsForModules$0() {
	return $new($Locations$ModulePathLocationHandler$ModulePathIterator, this);
}

Locations$ModulePathLocationHandler::Locations$ModulePathLocationHandler() {
}

$Class* Locations$ModulePathLocationHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::classInfo$.name)) {
			return Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$0::load$(name, initialize);
		}
		if (name->equals(Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::classInfo$.name)) {
			return Locations$ModulePathLocationHandler$$Lambda$lambda$listLocationsForModules$1$1::load$(name, initialize);
		}
		if (name->equals(Locations$ModulePathLocationHandler$$Lambda$iterator$2::classInfo$.name)) {
			return Locations$ModulePathLocationHandler$$Lambda$iterator$2::load$(name, initialize);
		}
	}
	$loadClass(Locations$ModulePathLocationHandler, name, initialize, &_Locations$ModulePathLocationHandler_ClassInfo_, allocate$Locations$ModulePathLocationHandler);
	return class$;
}

$Class* Locations$ModulePathLocationHandler::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com