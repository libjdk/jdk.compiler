#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode.h>

#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CLASS
#undef REDUNDANT
#undef SOURCE

using $Dependencies$GraphDependencies$DependenciesModeArray = $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode>;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Dependencies$GraphDependencies$DependenciesMode_FieldInfo_[] = {
	{"SOURCE", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$GraphDependencies$DependenciesMode, SOURCE)},
	{"CLASS", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$GraphDependencies$DependenciesMode, CLASS)},
	{"REDUNDANT", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$GraphDependencies$DependenciesMode, REDUNDANT)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Dependencies$GraphDependencies$DependenciesMode, $VALUES)},
	{"opt", "Ljava/lang/String;", nullptr, $FINAL, $field(Dependencies$GraphDependencies$DependenciesMode, opt)},
	{}
};

$MethodInfo _Dependencies$GraphDependencies$DependenciesMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Dependencies$GraphDependencies$DependenciesModeArray*(*)()>(&Dependencies$GraphDependencies$DependenciesMode::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Dependencies$GraphDependencies$DependenciesMode::*)($String*,int32_t,$String*)>(&Dependencies$GraphDependencies$DependenciesMode::init$))},
	{"getDependenciesModes", "([Ljava/lang/String;)Ljava/util/EnumSet;", "([Ljava/lang/String;)Ljava/util/EnumSet<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;>;", $STATIC, $method(static_cast<$EnumSet*(*)($StringArray*)>(&Dependencies$GraphDependencies$DependenciesMode::getDependenciesModes))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Dependencies$GraphDependencies$DependenciesMode*(*)($String*)>(&Dependencies$GraphDependencies$DependenciesMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dependencies$GraphDependencies$DependenciesModeArray*(*)()>(&Dependencies$GraphDependencies$DependenciesMode::values))},
	{}
};

$InnerClassInfo _Dependencies$GraphDependencies$DependenciesMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$DependenciesMode", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "DependenciesMode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dependencies$GraphDependencies$DependenciesMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$DependenciesMode",
	"java.lang.Enum",
	nullptr,
	_Dependencies$GraphDependencies$DependenciesMode_FieldInfo_,
	_Dependencies$GraphDependencies$DependenciesMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;>;",
	nullptr,
	_Dependencies$GraphDependencies$DependenciesMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$GraphDependencies$DependenciesMode($Class* clazz) {
	return $of($alloc(Dependencies$GraphDependencies$DependenciesMode));
}

Dependencies$GraphDependencies$DependenciesMode* Dependencies$GraphDependencies$DependenciesMode::SOURCE = nullptr;
Dependencies$GraphDependencies$DependenciesMode* Dependencies$GraphDependencies$DependenciesMode::CLASS = nullptr;
Dependencies$GraphDependencies$DependenciesMode* Dependencies$GraphDependencies$DependenciesMode::REDUNDANT = nullptr;
$Dependencies$GraphDependencies$DependenciesModeArray* Dependencies$GraphDependencies$DependenciesMode::$VALUES = nullptr;

$Dependencies$GraphDependencies$DependenciesModeArray* Dependencies$GraphDependencies$DependenciesMode::$values() {
	$init(Dependencies$GraphDependencies$DependenciesMode);
	return $new($Dependencies$GraphDependencies$DependenciesModeArray, {
		Dependencies$GraphDependencies$DependenciesMode::SOURCE,
		Dependencies$GraphDependencies$DependenciesMode::CLASS,
		Dependencies$GraphDependencies$DependenciesMode::REDUNDANT
	});
}

$Dependencies$GraphDependencies$DependenciesModeArray* Dependencies$GraphDependencies$DependenciesMode::values() {
	$init(Dependencies$GraphDependencies$DependenciesMode);
	return $cast($Dependencies$GraphDependencies$DependenciesModeArray, Dependencies$GraphDependencies$DependenciesMode::$VALUES->clone());
}

Dependencies$GraphDependencies$DependenciesMode* Dependencies$GraphDependencies$DependenciesMode::valueOf($String* name) {
	$init(Dependencies$GraphDependencies$DependenciesMode);
	return $cast(Dependencies$GraphDependencies$DependenciesMode, $Enum::valueOf(Dependencies$GraphDependencies$DependenciesMode::class$, name));
}

void Dependencies$GraphDependencies$DependenciesMode::init$($String* $enum$name, int32_t $enum$ordinal, $String* opt) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, opt, opt);
}

$EnumSet* Dependencies$GraphDependencies$DependenciesMode::getDependenciesModes($StringArray* modes) {
	$init(Dependencies$GraphDependencies$DependenciesMode);
	$useLocalCurrentObjectStackCache();
	$var($EnumSet, res, $EnumSet::noneOf(Dependencies$GraphDependencies$DependenciesMode::class$));
	$var($Collection, args, $Arrays::asList(modes));
	if ($nc(args)->contains("all"_s)) {
		$assign(res, $EnumSet::allOf(Dependencies$GraphDependencies$DependenciesMode::class$));
	}
	{
		$var($Dependencies$GraphDependencies$DependenciesModeArray, arr$, values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Dependencies$GraphDependencies$DependenciesMode* mode = arr$->get(i$);
			{
				if ($nc(args)->contains($nc(mode)->opt)) {
					$nc(res)->add(mode);
				} else if (args->contains($$str({"-"_s, $nc(mode)->opt}))) {
					$nc(res)->remove(mode);
				}
			}
		}
	}
	return res;
}

void clinit$Dependencies$GraphDependencies$DependenciesMode($Class* class$) {
	$assignStatic(Dependencies$GraphDependencies$DependenciesMode::SOURCE, $new(Dependencies$GraphDependencies$DependenciesMode, "SOURCE"_s, 0, "source"_s));
	$assignStatic(Dependencies$GraphDependencies$DependenciesMode::CLASS, $new(Dependencies$GraphDependencies$DependenciesMode, "CLASS"_s, 1, "class"_s));
	$assignStatic(Dependencies$GraphDependencies$DependenciesMode::REDUNDANT, $new(Dependencies$GraphDependencies$DependenciesMode, "REDUNDANT"_s, 2, "redundant"_s));
	$assignStatic(Dependencies$GraphDependencies$DependenciesMode::$VALUES, Dependencies$GraphDependencies$DependenciesMode::$values());
}

Dependencies$GraphDependencies$DependenciesMode::Dependencies$GraphDependencies$DependenciesMode() {
}

$Class* Dependencies$GraphDependencies$DependenciesMode::load$($String* name, bool initialize) {
	$loadClass(Dependencies$GraphDependencies$DependenciesMode, name, initialize, &_Dependencies$GraphDependencies$DependenciesMode_ClassInfo_, clinit$Dependencies$GraphDependencies$DependenciesMode, allocate$Dependencies$GraphDependencies$DependenciesMode);
	return class$;
}

$Class* Dependencies$GraphDependencies$DependenciesMode::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com