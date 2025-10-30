#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase$1.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BASIC
#undef BOX
#undef VARARITY

using $Resolve$MethodResolutionPhaseArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionPhase$1 = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$MethodResolutionPhase_FieldInfo_[] = {
	{"BASIC", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodResolutionPhase, BASIC)},
	{"BOX", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodResolutionPhase, BOX)},
	{"VARARITY", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodResolutionPhase, VARARITY)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$MethodResolutionPhase, $VALUES)},
	{"isBoxingRequired", "Z", nullptr, $FINAL, $field(Resolve$MethodResolutionPhase, isBoxingRequired$)},
	{"isVarargsRequired", "Z", nullptr, $FINAL, $field(Resolve$MethodResolutionPhase, isVarargsRequired$)},
	{}
};

$MethodInfo _Resolve$MethodResolutionPhase_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Resolve$MethodResolutionPhaseArray*(*)()>(&Resolve$MethodResolutionPhase::$values))},
	{"<init>", "(Ljava/lang/String;IZZ)V", "(ZZ)V", $PRIVATE, $method(static_cast<void(Resolve$MethodResolutionPhase::*)($String*,int32_t,bool,bool)>(&Resolve$MethodResolutionPhase::init$))},
	{"isBoxingRequired", "()Z", nullptr, $PUBLIC},
	{"isVarargsRequired", "()Z", nullptr, $PUBLIC},
	{"mergeResults", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Resolve$MethodResolutionPhase*(*)($String*)>(&Resolve$MethodResolutionPhase::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Resolve$MethodResolutionPhaseArray*(*)()>(&Resolve$MethodResolutionPhase::values))},
	{}
};

$InnerClassInfo _Resolve$MethodResolutionPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase", "com.sun.tools.javac.comp.Resolve", "MethodResolutionPhase", $STATIC | $ENUM},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$MethodResolutionPhase_ClassInfo_ = {
	$ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase",
	"java.lang.Enum",
	nullptr,
	_Resolve$MethodResolutionPhase_FieldInfo_,
	_Resolve$MethodResolutionPhase_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Resolve$MethodResolutionPhase;>;",
	nullptr,
	_Resolve$MethodResolutionPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionPhase($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionPhase));
}

Resolve$MethodResolutionPhase* Resolve$MethodResolutionPhase::BASIC = nullptr;
Resolve$MethodResolutionPhase* Resolve$MethodResolutionPhase::BOX = nullptr;
Resolve$MethodResolutionPhase* Resolve$MethodResolutionPhase::VARARITY = nullptr;
$Resolve$MethodResolutionPhaseArray* Resolve$MethodResolutionPhase::$VALUES = nullptr;

$Resolve$MethodResolutionPhaseArray* Resolve$MethodResolutionPhase::$values() {
	$init(Resolve$MethodResolutionPhase);
	return $new($Resolve$MethodResolutionPhaseArray, {
		Resolve$MethodResolutionPhase::BASIC,
		Resolve$MethodResolutionPhase::BOX,
		Resolve$MethodResolutionPhase::VARARITY
	});
}

$Resolve$MethodResolutionPhaseArray* Resolve$MethodResolutionPhase::values() {
	$init(Resolve$MethodResolutionPhase);
	return $cast($Resolve$MethodResolutionPhaseArray, Resolve$MethodResolutionPhase::$VALUES->clone());
}

Resolve$MethodResolutionPhase* Resolve$MethodResolutionPhase::valueOf($String* name) {
	$init(Resolve$MethodResolutionPhase);
	return $cast(Resolve$MethodResolutionPhase, $Enum::valueOf(Resolve$MethodResolutionPhase::class$, name));
}

void Resolve$MethodResolutionPhase::init$($String* $enum$name, int32_t $enum$ordinal, bool isBoxingRequired, bool isVarargsRequired) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->isBoxingRequired$ = isBoxingRequired;
	this->isVarargsRequired$ = isVarargsRequired;
}

bool Resolve$MethodResolutionPhase::isBoxingRequired() {
	return this->isBoxingRequired$;
}

bool Resolve$MethodResolutionPhase::isVarargsRequired() {
	return this->isVarargsRequired$;
}

$Symbol* Resolve$MethodResolutionPhase::mergeResults($Symbol* prev, $Symbol* sym) {
	return sym;
}

void clinit$Resolve$MethodResolutionPhase($Class* class$) {
	$assignStatic(Resolve$MethodResolutionPhase::BASIC, $new(Resolve$MethodResolutionPhase, "BASIC"_s, 0, false, false));
	$assignStatic(Resolve$MethodResolutionPhase::BOX, $new(Resolve$MethodResolutionPhase, "BOX"_s, 1, true, false));
	$assignStatic(Resolve$MethodResolutionPhase::VARARITY, $new($Resolve$MethodResolutionPhase$1, "VARARITY"_s, 2, true, true));
	$assignStatic(Resolve$MethodResolutionPhase::$VALUES, Resolve$MethodResolutionPhase::$values());
}

Resolve$MethodResolutionPhase::Resolve$MethodResolutionPhase() {
}

$Class* Resolve$MethodResolutionPhase::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionPhase, name, initialize, &_Resolve$MethodResolutionPhase_ClassInfo_, clinit$Resolve$MethodResolutionPhase, allocate$Resolve$MethodResolutionPhase);
	return class$;
}

$Class* Resolve$MethodResolutionPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com