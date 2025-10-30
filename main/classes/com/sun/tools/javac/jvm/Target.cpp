#include <com/sun/tools/javac/jvm/Target.h>

#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DEFAULT
#undef JDK1_1
#undef JDK1_2
#undef JDK1_3
#undef JDK1_4
#undef JDK1_5
#undef JDK1_6
#undef JDK1_7
#undef JDK1_8
#undef JDK1_9
#undef MAX
#undef MIN
#undef TARGET

using $TargetArray = $Array<::com::sun::tools::javac::jvm::Target>;
using $Option = ::com::sun::tools::javac::main::Option;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Target_FieldInfo_[] = {
	{"JDK1_1", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_1)},
	{"JDK1_2", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_2)},
	{"JDK1_3", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_3)},
	{"JDK1_4", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_4)},
	{"JDK1_5", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_5)},
	{"JDK1_6", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_6)},
	{"JDK1_7", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_7)},
	{"JDK1_8", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_8)},
	{"JDK1_9", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_9)},
	{"JDK1_10", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_10)},
	{"JDK1_11", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_11)},
	{"JDK1_12", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_12)},
	{"JDK1_13", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_13)},
	{"JDK1_14", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_14)},
	{"JDK1_15", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_15)},
	{"JDK1_16", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_16)},
	{"JDK1_17", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Target, JDK1_17)},
	{"$VALUES", "[Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Target, $VALUES)},
	{"targetKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/Target;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Target, targetKey)},
	{"MIN", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Target, MIN)},
	{"MAX", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Target, MAX)},
	{"tab", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/jvm/Target;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Target, tab)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Target, name$)},
	{"majorVersion", "I", nullptr, $PUBLIC | $FINAL, $field(Target, majorVersion)},
	{"minorVersion", "I", nullptr, $PUBLIC | $FINAL, $field(Target, minorVersion)},
	{"DEFAULT", "Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Target, DEFAULT)},
	{}
};

$MethodInfo _Target_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/jvm/Target;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TargetArray*(*)()>(&Target::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;II)V", "(Ljava/lang/String;II)V", $PRIVATE, $method(static_cast<void(Target::*)($String*,int32_t,$String*,int32_t,int32_t)>(&Target::init$))},
	{"allApiModulesAreRoots", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::allApiModulesAreRoots))},
	{"hasMethodParameters", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::hasMethodParameters))},
	{"hasNestmateAccess", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::hasNestmateAccess))},
	{"hasSealedClasses", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::hasSealedClasses))},
	{"hasStringConcatFactory", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::hasStringConcatFactory))},
	{"hasVirtualPrivateInvoke", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::hasVirtualPrivateInvoke))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Target*(*)($Context*)>(&Target::instance))},
	{"isSupported", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::isSupported))},
	{"lookup", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Target*(*)($String*)>(&Target::lookup))},
	{"multiReleaseValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Target::*)()>(&Target::multiReleaseValue))},
	{"obsoleteAccStrict", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::obsoleteAccStrict))},
	{"runtimeUseNestAccess", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Target::*)()>(&Target::runtimeUseNestAccess))},
	{"syntheticNameChar", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(Target::*)()>(&Target::syntheticNameChar))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Target*(*)($String*)>(&Target::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/jvm/Target;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TargetArray*(*)()>(&Target::values))},
	{}
};

$ClassInfo _Target_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.Target",
	"java.lang.Enum",
	nullptr,
	_Target_FieldInfo_,
	_Target_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/Target;>;"
};

$Object* allocate$Target($Class* clazz) {
	return $of($alloc(Target));
}

Target* Target::JDK1_1 = nullptr;
Target* Target::JDK1_2 = nullptr;
Target* Target::JDK1_3 = nullptr;
Target* Target::JDK1_4 = nullptr;
Target* Target::JDK1_5 = nullptr;
Target* Target::JDK1_6 = nullptr;
Target* Target::JDK1_7 = nullptr;
Target* Target::JDK1_8 = nullptr;
Target* Target::JDK1_9 = nullptr;
Target* Target::JDK1_10 = nullptr;
Target* Target::JDK1_11 = nullptr;
Target* Target::JDK1_12 = nullptr;
Target* Target::JDK1_13 = nullptr;
Target* Target::JDK1_14 = nullptr;
Target* Target::JDK1_15 = nullptr;
Target* Target::JDK1_16 = nullptr;
Target* Target::JDK1_17 = nullptr;
$TargetArray* Target::$VALUES = nullptr;
$Context$Key* Target::targetKey = nullptr;
Target* Target::MIN = nullptr;
Target* Target::MAX = nullptr;
$Map* Target::tab = nullptr;
Target* Target::DEFAULT = nullptr;

$TargetArray* Target::$values() {
	$init(Target);
	return $new($TargetArray, {
		Target::JDK1_1,
		Target::JDK1_2,
		Target::JDK1_3,
		Target::JDK1_4,
		Target::JDK1_5,
		Target::JDK1_6,
		Target::JDK1_7,
		Target::JDK1_8,
		Target::JDK1_9,
		Target::JDK1_10,
		Target::JDK1_11,
		Target::JDK1_12,
		Target::JDK1_13,
		Target::JDK1_14,
		Target::JDK1_15,
		Target::JDK1_16,
		Target::JDK1_17
	});
}

$TargetArray* Target::values() {
	$init(Target);
	return $cast($TargetArray, Target::$VALUES->clone());
}

Target* Target::valueOf($String* name) {
	$init(Target);
	return $cast(Target, $Enum::valueOf(Target::class$, name));
}

Target* Target::instance($Context* context) {
	$init(Target);
	$useLocalCurrentObjectStackCache();
	Target* instance = $cast(Target, $nc(context)->get(Target::targetKey));
	if (instance == nullptr) {
		$var($Options, options, $Options::instance(context));
		$init($Option);
		$var($String, targetString, $nc(options)->get($Option::TARGET));
		if (targetString != nullptr) {
			instance = lookup(targetString);
		}
		if (instance == nullptr) {
			instance = Target::DEFAULT;
		}
		context->put(Target::targetKey, $of(instance));
	}
	return instance;
}

void Target::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t majorVersion, int32_t minorVersion) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	this->majorVersion = majorVersion;
	this->minorVersion = minorVersion;
}

Target* Target::lookup($String* name) {
	$init(Target);
	return $cast(Target, $nc(Target::tab)->get(name));
}

bool Target::isSupported() {
	return this->compareTo(static_cast<$Enum*>(Target::MIN)) >= 0;
}

char16_t Target::syntheticNameChar() {
	return u'$';
}

bool Target::hasMethodParameters() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_8)) >= 0;
}

bool Target::hasStringConcatFactory() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_9)) >= 0;
}

$String* Target::multiReleaseValue() {
	int32_t var$0 = this->ordinal();
	return $Integer::toString(var$0 - Target::JDK1_1->ordinal() + 1);
}

bool Target::allApiModulesAreRoots() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_11)) >= 0;
}

bool Target::hasNestmateAccess() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_11)) >= 0;
}

bool Target::runtimeUseNestAccess() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_15)) >= 0;
}

bool Target::hasVirtualPrivateInvoke() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_11)) >= 0;
}

bool Target::hasSealedClasses() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_15)) >= 0;
}

bool Target::obsoleteAccStrict() {
	return compareTo(static_cast<$Enum*>(Target::JDK1_17)) >= 0;
}

void clinit$Target($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Target::JDK1_1, $new(Target, "JDK1_1"_s, 0, "1.1"_s, 45, 3));
	$assignStatic(Target::JDK1_2, $new(Target, "JDK1_2"_s, 1, "1.2"_s, 46, 0));
	$assignStatic(Target::JDK1_3, $new(Target, "JDK1_3"_s, 2, "1.3"_s, 47, 0));
	$assignStatic(Target::JDK1_4, $new(Target, "JDK1_4"_s, 3, "1.4"_s, 48, 0));
	$assignStatic(Target::JDK1_5, $new(Target, "JDK1_5"_s, 4, "5"_s, 49, 0));
	$assignStatic(Target::JDK1_6, $new(Target, "JDK1_6"_s, 5, "6"_s, 50, 0));
	$assignStatic(Target::JDK1_7, $new(Target, "JDK1_7"_s, 6, "7"_s, 51, 0));
	$assignStatic(Target::JDK1_8, $new(Target, "JDK1_8"_s, 7, "8"_s, 52, 0));
	$assignStatic(Target::JDK1_9, $new(Target, "JDK1_9"_s, 8, "9"_s, 53, 0));
	$assignStatic(Target::JDK1_10, $new(Target, "JDK1_10"_s, 9, "10"_s, 54, 0));
	$assignStatic(Target::JDK1_11, $new(Target, "JDK1_11"_s, 10, "11"_s, 55, 0));
	$assignStatic(Target::JDK1_12, $new(Target, "JDK1_12"_s, 11, "12"_s, 56, 0));
	$assignStatic(Target::JDK1_13, $new(Target, "JDK1_13"_s, 12, "13"_s, 57, 0));
	$assignStatic(Target::JDK1_14, $new(Target, "JDK1_14"_s, 13, "14"_s, 58, 0));
	$assignStatic(Target::JDK1_15, $new(Target, "JDK1_15"_s, 14, "15"_s, 59, 0));
	$assignStatic(Target::JDK1_16, $new(Target, "JDK1_16"_s, 15, "16"_s, 60, 0));
	$assignStatic(Target::JDK1_17, $new(Target, "JDK1_17"_s, 16, "17"_s, 61, 0));
	$assignStatic(Target::$VALUES, Target::$values());
	$assignStatic(Target::targetKey, $new($Context$Key));
	$assignStatic(Target::MIN, Target::JDK1_7);
	$assignStatic(Target::MAX, $nc($(Target::values()))->get($nc($(Target::values()))->length - 1));
	$assignStatic(Target::tab, $new($HashMap));
	{
		{
			$var($TargetArray, arr$, Target::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				Target* t = arr$->get(i$);
				{
					$nc(Target::tab)->put($nc(t)->name$, t);
				}
			}
		}
		$nc(Target::tab)->put("1.5"_s, Target::JDK1_5);
		$nc(Target::tab)->put("1.6"_s, Target::JDK1_6);
		$nc(Target::tab)->put("1.7"_s, Target::JDK1_7);
		$nc(Target::tab)->put("1.8"_s, Target::JDK1_8);
		$nc(Target::tab)->put("1.9"_s, Target::JDK1_9);
		$nc(Target::tab)->put("1.10"_s, Target::JDK1_10);
	}
	$assignStatic(Target::DEFAULT, $nc($(Target::values()))->get($nc($(Target::values()))->length - 1));
}

Target::Target() {
}

$Class* Target::load$($String* name, bool initialize) {
	$loadClass(Target, name, initialize, &_Target_ClassInfo_, clinit$Target, allocate$Target);
	return class$;
}

$Class* Target::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com