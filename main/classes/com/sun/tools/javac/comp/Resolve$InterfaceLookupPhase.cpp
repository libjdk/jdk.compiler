#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase$1.h>
#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase$2.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABSTRACT_OK
#undef DEFAULT_OK

using $Resolve$InterfaceLookupPhaseArray = $Array<::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InterfaceLookupPhase$1 = ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase$1;
using $Resolve$InterfaceLookupPhase$2 = ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase$2;
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

$FieldInfo _Resolve$InterfaceLookupPhase_FieldInfo_[] = {
	{"ABSTRACT_OK", "Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$InterfaceLookupPhase, ABSTRACT_OK)},
	{"DEFAULT_OK", "Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$InterfaceLookupPhase, DEFAULT_OK)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$InterfaceLookupPhase, $VALUES)},
	{}
};

$MethodInfo _Resolve$InterfaceLookupPhase_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Resolve$InterfaceLookupPhaseArray*(*)()>(&Resolve$InterfaceLookupPhase::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Resolve$InterfaceLookupPhase::*)($String*,int32_t)>(&Resolve$InterfaceLookupPhase::init$))},
	{"update", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve;)Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Resolve$InterfaceLookupPhase*(*)($String*)>(&Resolve$InterfaceLookupPhase::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Resolve$InterfaceLookupPhaseArray*(*)()>(&Resolve$InterfaceLookupPhase::values))},
	{}
};

$InnerClassInfo _Resolve$InterfaceLookupPhase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase", "com.sun.tools.javac.comp.Resolve", "InterfaceLookupPhase", $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$InterfaceLookupPhase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase",
	"java.lang.Enum",
	nullptr,
	_Resolve$InterfaceLookupPhase_FieldInfo_,
	_Resolve$InterfaceLookupPhase_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Resolve$InterfaceLookupPhase;>;",
	nullptr,
	_Resolve$InterfaceLookupPhase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InterfaceLookupPhase($Class* clazz) {
	return $of($alloc(Resolve$InterfaceLookupPhase));
}

Resolve$InterfaceLookupPhase* Resolve$InterfaceLookupPhase::ABSTRACT_OK = nullptr;
Resolve$InterfaceLookupPhase* Resolve$InterfaceLookupPhase::DEFAULT_OK = nullptr;
$Resolve$InterfaceLookupPhaseArray* Resolve$InterfaceLookupPhase::$VALUES = nullptr;

$Resolve$InterfaceLookupPhaseArray* Resolve$InterfaceLookupPhase::$values() {
	$init(Resolve$InterfaceLookupPhase);
	return $new($Resolve$InterfaceLookupPhaseArray, {
		Resolve$InterfaceLookupPhase::ABSTRACT_OK,
		Resolve$InterfaceLookupPhase::DEFAULT_OK
	});
}

$Resolve$InterfaceLookupPhaseArray* Resolve$InterfaceLookupPhase::values() {
	$init(Resolve$InterfaceLookupPhase);
	return $cast($Resolve$InterfaceLookupPhaseArray, Resolve$InterfaceLookupPhase::$VALUES->clone());
}

Resolve$InterfaceLookupPhase* Resolve$InterfaceLookupPhase::valueOf($String* name) {
	$init(Resolve$InterfaceLookupPhase);
	return $cast(Resolve$InterfaceLookupPhase, $Enum::valueOf(Resolve$InterfaceLookupPhase::class$, name));
}

void Resolve$InterfaceLookupPhase::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Resolve$InterfaceLookupPhase($Class* class$) {
	$assignStatic(Resolve$InterfaceLookupPhase::ABSTRACT_OK, $new($Resolve$InterfaceLookupPhase$1, "ABSTRACT_OK"_s, 0));
	$assignStatic(Resolve$InterfaceLookupPhase::DEFAULT_OK, $new($Resolve$InterfaceLookupPhase$2, "DEFAULT_OK"_s, 1));
	$assignStatic(Resolve$InterfaceLookupPhase::$VALUES, Resolve$InterfaceLookupPhase::$values());
}

Resolve$InterfaceLookupPhase::Resolve$InterfaceLookupPhase() {
}

$Class* Resolve$InterfaceLookupPhase::load$($String* name, bool initialize) {
	$loadClass(Resolve$InterfaceLookupPhase, name, initialize, &_Resolve$InterfaceLookupPhase_ClassInfo_, clinit$Resolve$InterfaceLookupPhase, allocate$Resolve$InterfaceLookupPhase);
	return class$;
}

$Class* Resolve$InterfaceLookupPhase::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com