#include <com/sun/tools/javac/code/Scope$LookupKind.h>

#include <com/sun/tools/javac/code/Scope.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NON_RECURSIVE
#undef RECURSIVE

using $Scope$LookupKindArray = $Array<::com::sun::tools::javac::code::Scope$LookupKind>;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$LookupKind_FieldInfo_[] = {
	{"RECURSIVE", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Scope$LookupKind, RECURSIVE)},
	{"NON_RECURSIVE", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Scope$LookupKind, NON_RECURSIVE)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Scope$LookupKind, $VALUES)},
	{}
};

$MethodInfo _Scope$LookupKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Scope$LookupKindArray*(*)()>(&Scope$LookupKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Scope$LookupKind::*)($String*,int32_t)>(&Scope$LookupKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Scope$LookupKind*(*)($String*)>(&Scope$LookupKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Scope$LookupKindArray*(*)()>(&Scope$LookupKind::values))},
	{}
};

$InnerClassInfo _Scope$LookupKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Scope$LookupKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Scope$LookupKind",
	"java.lang.Enum",
	nullptr,
	_Scope$LookupKind_FieldInfo_,
	_Scope$LookupKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Scope$LookupKind;>;",
	nullptr,
	_Scope$LookupKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$LookupKind($Class* clazz) {
	return $of($alloc(Scope$LookupKind));
}

Scope$LookupKind* Scope$LookupKind::RECURSIVE = nullptr;
Scope$LookupKind* Scope$LookupKind::NON_RECURSIVE = nullptr;
$Scope$LookupKindArray* Scope$LookupKind::$VALUES = nullptr;

$Scope$LookupKindArray* Scope$LookupKind::$values() {
	$init(Scope$LookupKind);
	return $new($Scope$LookupKindArray, {
		Scope$LookupKind::RECURSIVE,
		Scope$LookupKind::NON_RECURSIVE
	});
}

$Scope$LookupKindArray* Scope$LookupKind::values() {
	$init(Scope$LookupKind);
	return $cast($Scope$LookupKindArray, Scope$LookupKind::$VALUES->clone());
}

Scope$LookupKind* Scope$LookupKind::valueOf($String* name) {
	$init(Scope$LookupKind);
	return $cast(Scope$LookupKind, $Enum::valueOf(Scope$LookupKind::class$, name));
}

void Scope$LookupKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Scope$LookupKind($Class* class$) {
	$assignStatic(Scope$LookupKind::RECURSIVE, $new(Scope$LookupKind, "RECURSIVE"_s, 0));
	$assignStatic(Scope$LookupKind::NON_RECURSIVE, $new(Scope$LookupKind, "NON_RECURSIVE"_s, 1));
	$assignStatic(Scope$LookupKind::$VALUES, Scope$LookupKind::$values());
}

Scope$LookupKind::Scope$LookupKind() {
}

$Class* Scope$LookupKind::load$($String* name, bool initialize) {
	$loadClass(Scope$LookupKind, name, initialize, &_Scope$LookupKind_ClassInfo_, clinit$Scope$LookupKind, allocate$Scope$LookupKind);
	return class$;
}

$Class* Scope$LookupKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com