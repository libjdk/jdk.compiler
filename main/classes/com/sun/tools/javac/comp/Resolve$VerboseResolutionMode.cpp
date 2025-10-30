#include <com/sun/tools/javac/comp/Resolve$VerboseResolutionMode.h>

#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef APPLICABLE
#undef DEFERRED_INST
#undef FAILURE
#undef INAPPLICABLE
#undef INTERNAL
#undef OBJECT_INIT
#undef PREDEF
#undef SUCCESS

using $Resolve$VerboseResolutionModeArray = $Array<::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode>;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Options = ::com::sun::tools::javac::util::Options;
using $CharSequence = ::java::lang::CharSequence;
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
				namespace comp {

$FieldInfo _Resolve$VerboseResolutionMode_FieldInfo_[] = {
	{"SUCCESS", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, SUCCESS)},
	{"FAILURE", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, FAILURE)},
	{"APPLICABLE", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, APPLICABLE)},
	{"INAPPLICABLE", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, INAPPLICABLE)},
	{"DEFERRED_INST", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, DEFERRED_INST)},
	{"PREDEF", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, PREDEF)},
	{"OBJECT_INIT", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, OBJECT_INIT)},
	{"INTERNAL", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, INTERNAL)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$VerboseResolutionMode, $VALUES)},
	{"opt", "Ljava/lang/String;", nullptr, $FINAL, $field(Resolve$VerboseResolutionMode, opt)},
	{}
};

$MethodInfo _Resolve$VerboseResolutionMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Resolve$VerboseResolutionModeArray*(*)()>(&Resolve$VerboseResolutionMode::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Resolve$VerboseResolutionMode::*)($String*,int32_t,$String*)>(&Resolve$VerboseResolutionMode::init$))},
	{"getVerboseResolutionMode", "(Lcom/sun/tools/javac/util/Options;)Ljava/util/EnumSet;", "(Lcom/sun/tools/javac/util/Options;)Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;>;", $STATIC, $method(static_cast<$EnumSet*(*)($Options*)>(&Resolve$VerboseResolutionMode::getVerboseResolutionMode))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Resolve$VerboseResolutionMode*(*)($String*)>(&Resolve$VerboseResolutionMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Resolve$VerboseResolutionModeArray*(*)()>(&Resolve$VerboseResolutionMode::values))},
	{}
};

$InnerClassInfo _Resolve$VerboseResolutionMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$VerboseResolutionMode", "com.sun.tools.javac.comp.Resolve", "VerboseResolutionMode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$VerboseResolutionMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Resolve$VerboseResolutionMode",
	"java.lang.Enum",
	nullptr,
	_Resolve$VerboseResolutionMode_FieldInfo_,
	_Resolve$VerboseResolutionMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;>;",
	nullptr,
	_Resolve$VerboseResolutionMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$VerboseResolutionMode($Class* clazz) {
	return $of($alloc(Resolve$VerboseResolutionMode));
}

Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::SUCCESS = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::FAILURE = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::APPLICABLE = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::INAPPLICABLE = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::DEFERRED_INST = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::PREDEF = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::OBJECT_INIT = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::INTERNAL = nullptr;
$Resolve$VerboseResolutionModeArray* Resolve$VerboseResolutionMode::$VALUES = nullptr;

$Resolve$VerboseResolutionModeArray* Resolve$VerboseResolutionMode::$values() {
	$init(Resolve$VerboseResolutionMode);
	return $new($Resolve$VerboseResolutionModeArray, {
		Resolve$VerboseResolutionMode::SUCCESS,
		Resolve$VerboseResolutionMode::FAILURE,
		Resolve$VerboseResolutionMode::APPLICABLE,
		Resolve$VerboseResolutionMode::INAPPLICABLE,
		Resolve$VerboseResolutionMode::DEFERRED_INST,
		Resolve$VerboseResolutionMode::PREDEF,
		Resolve$VerboseResolutionMode::OBJECT_INIT,
		Resolve$VerboseResolutionMode::INTERNAL
	});
}

$Resolve$VerboseResolutionModeArray* Resolve$VerboseResolutionMode::values() {
	$init(Resolve$VerboseResolutionMode);
	return $cast($Resolve$VerboseResolutionModeArray, Resolve$VerboseResolutionMode::$VALUES->clone());
}

Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::valueOf($String* name) {
	$init(Resolve$VerboseResolutionMode);
	return $cast(Resolve$VerboseResolutionMode, $Enum::valueOf(Resolve$VerboseResolutionMode::class$, name));
}

void Resolve$VerboseResolutionMode::init$($String* $enum$name, int32_t $enum$ordinal, $String* opt) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, opt, opt);
}

$EnumSet* Resolve$VerboseResolutionMode::getVerboseResolutionMode($Options* opts) {
	$init(Resolve$VerboseResolutionMode);
	$useLocalCurrentObjectStackCache();
	$var($String, s, $nc(opts)->get("debug.verboseResolution"_s));
	$var($EnumSet, res, $EnumSet::noneOf(Resolve$VerboseResolutionMode::class$));
	if (s == nullptr) {
		return res;
	}
	if ($nc(s)->contains("all"_s)) {
		$assign(res, $EnumSet::allOf(Resolve$VerboseResolutionMode::class$));
	}
	$var($Collection, args, $Arrays::asList($($nc(s)->split(","_s))));
	{
		$var($Resolve$VerboseResolutionModeArray, arr$, values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Resolve$VerboseResolutionMode* mode = arr$->get(i$);
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

void clinit$Resolve$VerboseResolutionMode($Class* class$) {
	$assignStatic(Resolve$VerboseResolutionMode::SUCCESS, $new(Resolve$VerboseResolutionMode, "SUCCESS"_s, 0, "success"_s));
	$assignStatic(Resolve$VerboseResolutionMode::FAILURE, $new(Resolve$VerboseResolutionMode, "FAILURE"_s, 1, "failure"_s));
	$assignStatic(Resolve$VerboseResolutionMode::APPLICABLE, $new(Resolve$VerboseResolutionMode, "APPLICABLE"_s, 2, "applicable"_s));
	$assignStatic(Resolve$VerboseResolutionMode::INAPPLICABLE, $new(Resolve$VerboseResolutionMode, "INAPPLICABLE"_s, 3, "inapplicable"_s));
	$assignStatic(Resolve$VerboseResolutionMode::DEFERRED_INST, $new(Resolve$VerboseResolutionMode, "DEFERRED_INST"_s, 4, "deferred-inference"_s));
	$assignStatic(Resolve$VerboseResolutionMode::PREDEF, $new(Resolve$VerboseResolutionMode, "PREDEF"_s, 5, "predef"_s));
	$assignStatic(Resolve$VerboseResolutionMode::OBJECT_INIT, $new(Resolve$VerboseResolutionMode, "OBJECT_INIT"_s, 6, "object-init"_s));
	$assignStatic(Resolve$VerboseResolutionMode::INTERNAL, $new(Resolve$VerboseResolutionMode, "INTERNAL"_s, 7, "internal"_s));
	$assignStatic(Resolve$VerboseResolutionMode::$VALUES, Resolve$VerboseResolutionMode::$values());
}

Resolve$VerboseResolutionMode::Resolve$VerboseResolutionMode() {
}

$Class* Resolve$VerboseResolutionMode::load$($String* name, bool initialize) {
	$loadClass(Resolve$VerboseResolutionMode, name, initialize, &_Resolve$VerboseResolutionMode_ClassInfo_, clinit$Resolve$VerboseResolutionMode, allocate$Resolve$VerboseResolutionMode);
	return class$;
}

$Class* Resolve$VerboseResolutionMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com