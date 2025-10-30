#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BOTH
#undef NON_STATIC
#undef STATIC
#undef UNDEFINED

using $Resolve$ReferenceLookupResult$StaticKindArray = $Array<::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve$ReferenceLookupResult = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult;
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

$FieldInfo _Resolve$ReferenceLookupResult$StaticKind_FieldInfo_[] = {
	{"STATIC", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$ReferenceLookupResult$StaticKind, STATIC)},
	{"NON_STATIC", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$ReferenceLookupResult$StaticKind, NON_STATIC)},
	{"BOTH", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$ReferenceLookupResult$StaticKind, BOTH)},
	{"UNDEFINED", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$ReferenceLookupResult$StaticKind, UNDEFINED)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$ReferenceLookupResult$StaticKind, $VALUES)},
	{}
};

$MethodInfo _Resolve$ReferenceLookupResult$StaticKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Resolve$ReferenceLookupResult$StaticKindArray*(*)()>(&Resolve$ReferenceLookupResult$StaticKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Resolve$ReferenceLookupResult$StaticKind::*)($String*,int32_t)>(&Resolve$ReferenceLookupResult$StaticKind::init$))},
	{"from", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $STATIC, $method(static_cast<Resolve$ReferenceLookupResult$StaticKind*(*)($Symbol*)>(&Resolve$ReferenceLookupResult$StaticKind::from))},
	{"reduce", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $STATIC, $method(static_cast<Resolve$ReferenceLookupResult$StaticKind*(*)(Resolve$ReferenceLookupResult$StaticKind*,Resolve$ReferenceLookupResult$StaticKind*)>(&Resolve$ReferenceLookupResult$StaticKind::reduce))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Resolve$ReferenceLookupResult$StaticKind*(*)($String*)>(&Resolve$ReferenceLookupResult$StaticKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Resolve$ReferenceLookupResult$StaticKindArray*(*)()>(&Resolve$ReferenceLookupResult$StaticKind::values))},
	{}
};

$InnerClassInfo _Resolve$ReferenceLookupResult$StaticKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupResult", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$StaticKind", "com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "StaticKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$ReferenceLookupResult$StaticKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$StaticKind",
	"java.lang.Enum",
	nullptr,
	_Resolve$ReferenceLookupResult$StaticKind_FieldInfo_,
	_Resolve$ReferenceLookupResult$StaticKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;>;",
	nullptr,
	_Resolve$ReferenceLookupResult$StaticKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$ReferenceLookupResult$StaticKind($Class* clazz) {
	return $of($alloc(Resolve$ReferenceLookupResult$StaticKind));
}

Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::STATIC = nullptr;
Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::NON_STATIC = nullptr;
Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::BOTH = nullptr;
Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::UNDEFINED = nullptr;
$Resolve$ReferenceLookupResult$StaticKindArray* Resolve$ReferenceLookupResult$StaticKind::$VALUES = nullptr;

$Resolve$ReferenceLookupResult$StaticKindArray* Resolve$ReferenceLookupResult$StaticKind::$values() {
	$init(Resolve$ReferenceLookupResult$StaticKind);
	return $new($Resolve$ReferenceLookupResult$StaticKindArray, {
		Resolve$ReferenceLookupResult$StaticKind::STATIC,
		Resolve$ReferenceLookupResult$StaticKind::NON_STATIC,
		Resolve$ReferenceLookupResult$StaticKind::BOTH,
		Resolve$ReferenceLookupResult$StaticKind::UNDEFINED
	});
}

$Resolve$ReferenceLookupResult$StaticKindArray* Resolve$ReferenceLookupResult$StaticKind::values() {
	$init(Resolve$ReferenceLookupResult$StaticKind);
	return $cast($Resolve$ReferenceLookupResult$StaticKindArray, Resolve$ReferenceLookupResult$StaticKind::$VALUES->clone());
}

Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::valueOf($String* name) {
	$init(Resolve$ReferenceLookupResult$StaticKind);
	return $cast(Resolve$ReferenceLookupResult$StaticKind, $Enum::valueOf(Resolve$ReferenceLookupResult$StaticKind::class$, name));
}

void Resolve$ReferenceLookupResult$StaticKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::from($Symbol* s) {
	$init(Resolve$ReferenceLookupResult$StaticKind);
	return $nc(s)->isStatic() ? Resolve$ReferenceLookupResult$StaticKind::STATIC : Resolve$ReferenceLookupResult$StaticKind::NON_STATIC;
}

Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult$StaticKind::reduce(Resolve$ReferenceLookupResult$StaticKind* sk1, Resolve$ReferenceLookupResult$StaticKind* sk2) {
	$init(Resolve$ReferenceLookupResult$StaticKind);
	if (sk1 == Resolve$ReferenceLookupResult$StaticKind::UNDEFINED) {
		return sk2;
	} else {
		if (sk2 == Resolve$ReferenceLookupResult$StaticKind::UNDEFINED) {
			return sk1;
		} else {
			return sk1 == sk2 ? sk1 : Resolve$ReferenceLookupResult$StaticKind::BOTH;
		}
	}
}

void clinit$Resolve$ReferenceLookupResult$StaticKind($Class* class$) {
	$assignStatic(Resolve$ReferenceLookupResult$StaticKind::STATIC, $new(Resolve$ReferenceLookupResult$StaticKind, "STATIC"_s, 0));
	$assignStatic(Resolve$ReferenceLookupResult$StaticKind::NON_STATIC, $new(Resolve$ReferenceLookupResult$StaticKind, "NON_STATIC"_s, 1));
	$assignStatic(Resolve$ReferenceLookupResult$StaticKind::BOTH, $new(Resolve$ReferenceLookupResult$StaticKind, "BOTH"_s, 2));
	$assignStatic(Resolve$ReferenceLookupResult$StaticKind::UNDEFINED, $new(Resolve$ReferenceLookupResult$StaticKind, "UNDEFINED"_s, 3));
	$assignStatic(Resolve$ReferenceLookupResult$StaticKind::$VALUES, Resolve$ReferenceLookupResult$StaticKind::$values());
}

Resolve$ReferenceLookupResult$StaticKind::Resolve$ReferenceLookupResult$StaticKind() {
}

$Class* Resolve$ReferenceLookupResult$StaticKind::load$($String* name, bool initialize) {
	$loadClass(Resolve$ReferenceLookupResult$StaticKind, name, initialize, &_Resolve$ReferenceLookupResult$StaticKind_ClassInfo_, clinit$Resolve$ReferenceLookupResult$StaticKind, allocate$Resolve$ReferenceLookupResult$StaticKind);
	return class$;
}

$Class* Resolve$ReferenceLookupResult$StaticKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com