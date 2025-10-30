#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>

#include <com/sun/tools/javac/comp/Resolve.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ARG_MISMATCH
#undef ARITY_MISMATCH
#undef INACCESSIBLE_VARARGS
#undef VARARG_MISMATCH

using $Resolve$MethodCheckDiagArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodCheckDiag>;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
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

$FieldInfo _Resolve$MethodCheckDiag_FieldInfo_[] = {
	{"ARITY_MISMATCH", "Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodCheckDiag, ARITY_MISMATCH)},
	{"ARG_MISMATCH", "Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodCheckDiag, ARG_MISMATCH)},
	{"VARARG_MISMATCH", "Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodCheckDiag, VARARG_MISMATCH)},
	{"INACCESSIBLE_VARARGS", "Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$MethodCheckDiag, INACCESSIBLE_VARARGS)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$MethodCheckDiag, $VALUES)},
	{"basicKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Resolve$MethodCheckDiag, basicKey)},
	{"inferKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Resolve$MethodCheckDiag, inferKey)},
	{}
};

$MethodInfo _Resolve$MethodCheckDiag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Resolve$MethodCheckDiagArray*(*)()>(&Resolve$MethodCheckDiag::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Resolve$MethodCheckDiag::*)($String*,int32_t,$String*,$String*)>(&Resolve$MethodCheckDiag::init$))},
	{"regex", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(Resolve$MethodCheckDiag::*)()>(&Resolve$MethodCheckDiag::regex))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Resolve$MethodCheckDiag*(*)($String*)>(&Resolve$MethodCheckDiag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Resolve$MethodCheckDiagArray*(*)()>(&Resolve$MethodCheckDiag::values))},
	{}
};

$InnerClassInfo _Resolve$MethodCheckDiag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodCheckDiag", "com.sun.tools.javac.comp.Resolve", "MethodCheckDiag", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$MethodCheckDiag_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Resolve$MethodCheckDiag",
	"java.lang.Enum",
	nullptr,
	_Resolve$MethodCheckDiag_FieldInfo_,
	_Resolve$MethodCheckDiag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;>;",
	nullptr,
	_Resolve$MethodCheckDiag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodCheckDiag($Class* clazz) {
	return $of($alloc(Resolve$MethodCheckDiag));
}

Resolve$MethodCheckDiag* Resolve$MethodCheckDiag::ARITY_MISMATCH = nullptr;
Resolve$MethodCheckDiag* Resolve$MethodCheckDiag::ARG_MISMATCH = nullptr;
Resolve$MethodCheckDiag* Resolve$MethodCheckDiag::VARARG_MISMATCH = nullptr;
Resolve$MethodCheckDiag* Resolve$MethodCheckDiag::INACCESSIBLE_VARARGS = nullptr;
$Resolve$MethodCheckDiagArray* Resolve$MethodCheckDiag::$VALUES = nullptr;

$Resolve$MethodCheckDiagArray* Resolve$MethodCheckDiag::$values() {
	$init(Resolve$MethodCheckDiag);
	return $new($Resolve$MethodCheckDiagArray, {
		Resolve$MethodCheckDiag::ARITY_MISMATCH,
		Resolve$MethodCheckDiag::ARG_MISMATCH,
		Resolve$MethodCheckDiag::VARARG_MISMATCH,
		Resolve$MethodCheckDiag::INACCESSIBLE_VARARGS
	});
}

$Resolve$MethodCheckDiagArray* Resolve$MethodCheckDiag::values() {
	$init(Resolve$MethodCheckDiag);
	return $cast($Resolve$MethodCheckDiagArray, Resolve$MethodCheckDiag::$VALUES->clone());
}

Resolve$MethodCheckDiag* Resolve$MethodCheckDiag::valueOf($String* name) {
	$init(Resolve$MethodCheckDiag);
	return $cast(Resolve$MethodCheckDiag, $Enum::valueOf(Resolve$MethodCheckDiag::class$, name));
}

void Resolve$MethodCheckDiag::init$($String* $enum$name, int32_t $enum$ordinal, $String* basicKey, $String* inferKey) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, basicKey, basicKey);
	$set(this, inferKey, inferKey);
}

$String* Resolve$MethodCheckDiag::regex() {
	return $String::format("([a-z]*\\.)*(%s|%s)"_s, $$new($ObjectArray, {
		$of(this->basicKey),
		$of(this->inferKey)
	}));
}

void clinit$Resolve$MethodCheckDiag($Class* class$) {
	$assignStatic(Resolve$MethodCheckDiag::ARITY_MISMATCH, $new(Resolve$MethodCheckDiag, "ARITY_MISMATCH"_s, 0, "arg.length.mismatch"_s, "infer.arg.length.mismatch"_s));
	$assignStatic(Resolve$MethodCheckDiag::ARG_MISMATCH, $new(Resolve$MethodCheckDiag, "ARG_MISMATCH"_s, 1, "no.conforming.assignment.exists"_s, "infer.no.conforming.assignment.exists"_s));
	$assignStatic(Resolve$MethodCheckDiag::VARARG_MISMATCH, $new(Resolve$MethodCheckDiag, "VARARG_MISMATCH"_s, 2, "varargs.argument.mismatch"_s, "infer.varargs.argument.mismatch"_s));
	$assignStatic(Resolve$MethodCheckDiag::INACCESSIBLE_VARARGS, $new(Resolve$MethodCheckDiag, "INACCESSIBLE_VARARGS"_s, 3, "inaccessible.varargs.type"_s, "inaccessible.varargs.type"_s));
	$assignStatic(Resolve$MethodCheckDiag::$VALUES, Resolve$MethodCheckDiag::$values());
}

Resolve$MethodCheckDiag::Resolve$MethodCheckDiag() {
}

$Class* Resolve$MethodCheckDiag::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodCheckDiag, name, initialize, &_Resolve$MethodCheckDiag_ClassInfo_, clinit$Resolve$MethodCheckDiag, allocate$Resolve$MethodCheckDiag);
	return class$;
}

$Class* Resolve$MethodCheckDiag::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com