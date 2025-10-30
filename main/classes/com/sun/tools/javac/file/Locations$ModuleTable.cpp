#include <com/sun/tools/javac/file/Locations$ModuleTable.h>

#include <com/sun/tools/javac/file/Locations$ModuleLocationHandler.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Locations = ::com::sun::tools::javac::file::Locations;
using $Locations$ModuleLocationHandler = ::com::sun::tools::javac::file::Locations$ModuleLocationHandler;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Path = ::java::nio::file::Path;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModuleTable$$Lambda$lambda$explicitLocations$0 : public $Predicate {
	$class(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* e) override {
		 return Locations$ModuleTable::lambda$explicitLocations$0($cast($Map$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModuleTable$$Lambda$lambda$explicitLocations$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::*)()>(&Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModuleTable$$Lambda$lambda$explicitLocations$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::class$ = nullptr;

class Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1 : public $Function {
	$class(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Locations$ModuleTable::lambda$explicitLocations$1($cast($Map$Entry, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::*)()>(&Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::load$($String* name, bool initialize) {
	$loadClass(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::class$ = nullptr;

$FieldInfo _Locations$ModuleTable_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/Locations;", nullptr, $FINAL | $SYNTHETIC, $field(Locations$ModuleTable, this$0)},
	{"nameMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;>;", $PRIVATE | $FINAL, $field(Locations$ModuleTable, nameMap)},
	{"pathMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;>;", $PRIVATE | $FINAL, $field(Locations$ModuleTable, pathMap)},
	{}
};

$MethodInfo _Locations$ModuleTable_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/Locations;)V", nullptr, $PRIVATE, $method(static_cast<void(Locations$ModuleTable::*)($Locations*)>(&Locations$ModuleTable::init$))},
	{"add", "(Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;)V", nullptr, 0},
	{"clear", "()V", nullptr, 0},
	{"contains", "(Ljava/nio/file/Path;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"explicitLocations", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", 0},
	{"get", "(Ljava/lang/String;)Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;", nullptr, 0},
	{"get", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"lambda$explicitLocations$0", "(Ljava/util/Map$Entry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Map$Entry*)>(&Locations$ModuleTable::lambda$explicitLocations$0))},
	{"lambda$explicitLocations$1", "(Ljava/util/Map$Entry;)Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Locations$ModuleLocationHandler*(*)($Map$Entry*)>(&Locations$ModuleTable::lambda$explicitLocations$1))},
	{"locations", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/tools/JavaFileManager$Location;>;", 0},
	{"updatePaths", "(Lcom/sun/tools/javac/file/Locations$ModuleLocationHandler;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Locations$ModuleTable_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.Locations$ModuleTable", "com.sun.tools.javac.file.Locations", "ModuleTable", $PRIVATE},
	{}
};

$ClassInfo _Locations$ModuleTable_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.Locations$ModuleTable",
	"java.lang.Object",
	nullptr,
	_Locations$ModuleTable_FieldInfo_,
	_Locations$ModuleTable_MethodInfo_,
	nullptr,
	nullptr,
	_Locations$ModuleTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.Locations"
};

$Object* allocate$Locations$ModuleTable($Class* clazz) {
	return $of($alloc(Locations$ModuleTable));
}

void Locations$ModuleTable::init$($Locations* this$0) {
	$set(this, this$0, this$0);
	$set(this, nameMap, $new($LinkedHashMap));
	$set(this, pathMap, $new($LinkedHashMap));
}

void Locations$ModuleTable::add($Locations$ModuleLocationHandler* h) {
	$useLocalCurrentObjectStackCache();
	$nc(this->nameMap)->put($nc(h)->moduleName, h);
	{
		$var($Iterator, i$, $nc($nc(h)->searchPath)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				$nc(this->pathMap)->put($($Locations::normalize(p)), h);
			}
		}
	}
}

void Locations$ModuleTable::updatePaths($Locations$ModuleLocationHandler* h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, iter, $nc($($nc(this->pathMap)->entrySet()))->iterator());
		for (; $nc(iter)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, iter->next()));
			if ($equals($nc(e)->getValue(), h)) {
				iter->remove();
			}
		}
	}
	{
		$var($Iterator, i$, $nc($nc(h)->searchPath)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, p, $cast($Path, i$->next()));
			{
				$nc(this->pathMap)->put($($Locations::normalize(p)), h);
			}
		}
	}
}

$Locations$ModuleLocationHandler* Locations$ModuleTable::get($String* name) {
	return $cast($Locations$ModuleLocationHandler, $nc(this->nameMap)->get(name));
}

$Locations$ModuleLocationHandler* Locations$ModuleTable::get($Path* path$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Path, path, path$renamed);
	while (path != nullptr) {
		$var($Locations$ModuleLocationHandler, l, $cast($Locations$ModuleLocationHandler, $nc(this->pathMap)->get(path)));
		if (l != nullptr) {
			return l;
		}
		$assign(path, path->getParent());
	}
	return nullptr;
}

void Locations$ModuleTable::clear() {
	$nc(this->nameMap)->clear();
	$nc(this->pathMap)->clear();
}

bool Locations$ModuleTable::isEmpty() {
	return $nc(this->nameMap)->isEmpty();
}

bool Locations$ModuleTable::contains($Path* file) {
	return this->this$0->contains($(static_cast<$Collection*>($nc(this->pathMap)->keySet())), file);
}

$Set* Locations$ModuleTable::locations() {
	$useLocalCurrentObjectStackCache();
	return $Collections::unmodifiableSet($cast($Set, $($nc($($nc($($nc(this->nameMap)->values()))->stream()))->collect($($Collectors::toSet())))));
}

$Set* Locations$ModuleTable::explicitLocations() {
	$useLocalCurrentObjectStackCache();
	return $Collections::unmodifiableSet($cast($Set, $($nc($($nc($($nc($($nc($($nc(this->nameMap)->entrySet()))->stream()))->filter(static_cast<$Predicate*>($$new(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0)))))->map(static_cast<$Function*>($$new(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1)))))->collect($($Collectors::toSet())))));
}

$Locations$ModuleLocationHandler* Locations$ModuleTable::lambda$explicitLocations$1($Map$Entry* e) {
	return $cast($Locations$ModuleLocationHandler, $nc(e)->getValue());
}

bool Locations$ModuleTable::lambda$explicitLocations$0($Map$Entry* e) {
	return $nc(($cast($Locations$ModuleLocationHandler, $($nc(e)->getValue()))))->explicit$;
}

Locations$ModuleTable::Locations$ModuleTable() {
}

$Class* Locations$ModuleTable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::classInfo$.name)) {
			return Locations$ModuleTable$$Lambda$lambda$explicitLocations$0::load$(name, initialize);
		}
		if (name->equals(Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::classInfo$.name)) {
			return Locations$ModuleTable$$Lambda$lambda$explicitLocations$1$1::load$(name, initialize);
		}
	}
	$loadClass(Locations$ModuleTable, name, initialize, &_Locations$ModuleTable_ClassInfo_, allocate$Locations$ModuleTable);
	return class$;
}

$Class* Locations$ModuleTable::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com