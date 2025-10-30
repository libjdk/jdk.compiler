#include <com/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode.h>

#include <com/sun/tools/javac/code/Symbol$1.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ASSIGN
#undef DEREF
#undef FIRSTASGOP
#undef NO_TAG
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef UNKNOWN

using $Symbol$OperatorSymbol$AccessCodeArray = $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$1 = ::com::sun::tools::javac::code::Symbol$1;
using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
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

$FieldInfo _Symbol$OperatorSymbol$AccessCode_FieldInfo_[] = {
	{"UNKNOWN", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, UNKNOWN)},
	{"DEREF", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, DEREF)},
	{"ASSIGN", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, ASSIGN)},
	{"PREINC", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, PREINC)},
	{"PREDEC", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, PREDEC)},
	{"POSTINC", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, POSTINC)},
	{"POSTDEC", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, POSTDEC)},
	{"FIRSTASGOP", "Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Symbol$OperatorSymbol$AccessCode, FIRSTASGOP)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Symbol$OperatorSymbol$AccessCode, $VALUES)},
	{"code", "I", nullptr, $PUBLIC | $FINAL, $field(Symbol$OperatorSymbol$AccessCode, code)},
	{"tag", "Lcom/sun/tools/javac/tree/JCTree$Tag;", nullptr, $PUBLIC | $FINAL, $field(Symbol$OperatorSymbol$AccessCode, tag)},
	{"numberOfAccessCodes", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Symbol$OperatorSymbol$AccessCode, numberOfAccessCodes)},
	{}
};

$MethodInfo _Symbol$OperatorSymbol$AccessCode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Symbol$OperatorSymbol$AccessCodeArray*(*)()>(&Symbol$OperatorSymbol$AccessCode::$values))},
	{"<init>", "(Ljava/lang/String;IILcom/sun/tools/javac/tree/JCTree$Tag;)V", "(ILcom/sun/tools/javac/tree/JCTree$Tag;)V", $PRIVATE, $method(static_cast<void(Symbol$OperatorSymbol$AccessCode::*)($String*,int32_t,int32_t,$JCTree$Tag*)>(&Symbol$OperatorSymbol$AccessCode::init$))},
	{"from", "(Lcom/sun/tools/javac/tree/JCTree$Tag;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JCTree$Tag*,int32_t)>(&Symbol$OperatorSymbol$AccessCode::from))},
	{"getFromCode", "(I)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Symbol$OperatorSymbol$AccessCode*(*)(int32_t)>(&Symbol$OperatorSymbol$AccessCode::getFromCode))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Symbol$OperatorSymbol$AccessCode*(*)($String*)>(&Symbol$OperatorSymbol$AccessCode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Symbol$OperatorSymbol$AccessCodeArray*(*)()>(&Symbol$OperatorSymbol$AccessCode::values))},
	{}
};

$InnerClassInfo _Symbol$OperatorSymbol$AccessCode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$OperatorSymbol", "com.sun.tools.javac.code.Symbol", "OperatorSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$OperatorSymbol$AccessCode", "com.sun.tools.javac.code.Symbol$OperatorSymbol", "AccessCode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Symbol$OperatorSymbol$AccessCode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Symbol$OperatorSymbol$AccessCode",
	"java.lang.Enum",
	nullptr,
	_Symbol$OperatorSymbol$AccessCode_FieldInfo_,
	_Symbol$OperatorSymbol$AccessCode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode;>;",
	nullptr,
	_Symbol$OperatorSymbol$AccessCode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$OperatorSymbol$AccessCode($Class* clazz) {
	return $of($alloc(Symbol$OperatorSymbol$AccessCode));
}

Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::UNKNOWN = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::DEREF = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::ASSIGN = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::PREINC = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::PREDEC = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::POSTINC = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::POSTDEC = nullptr;
Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::FIRSTASGOP = nullptr;
$Symbol$OperatorSymbol$AccessCodeArray* Symbol$OperatorSymbol$AccessCode::$VALUES = nullptr;
int32_t Symbol$OperatorSymbol$AccessCode::numberOfAccessCodes = 0;

$Symbol$OperatorSymbol$AccessCodeArray* Symbol$OperatorSymbol$AccessCode::$values() {
	$init(Symbol$OperatorSymbol$AccessCode);
	return $new($Symbol$OperatorSymbol$AccessCodeArray, {
		Symbol$OperatorSymbol$AccessCode::UNKNOWN,
		Symbol$OperatorSymbol$AccessCode::DEREF,
		Symbol$OperatorSymbol$AccessCode::ASSIGN,
		Symbol$OperatorSymbol$AccessCode::PREINC,
		Symbol$OperatorSymbol$AccessCode::PREDEC,
		Symbol$OperatorSymbol$AccessCode::POSTINC,
		Symbol$OperatorSymbol$AccessCode::POSTDEC,
		Symbol$OperatorSymbol$AccessCode::FIRSTASGOP
	});
}

$Symbol$OperatorSymbol$AccessCodeArray* Symbol$OperatorSymbol$AccessCode::values() {
	$init(Symbol$OperatorSymbol$AccessCode);
	return $cast($Symbol$OperatorSymbol$AccessCodeArray, Symbol$OperatorSymbol$AccessCode::$VALUES->clone());
}

Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::valueOf($String* name) {
	$init(Symbol$OperatorSymbol$AccessCode);
	return $cast(Symbol$OperatorSymbol$AccessCode, $Enum::valueOf(Symbol$OperatorSymbol$AccessCode::class$, name));
}

void Symbol$OperatorSymbol$AccessCode::init$($String* $enum$name, int32_t $enum$ordinal, int32_t code, $JCTree$Tag* tag) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->code = code;
	$set(this, tag, tag);
}

Symbol$OperatorSymbol$AccessCode* Symbol$OperatorSymbol$AccessCode::getFromCode(int32_t code) {
	$init(Symbol$OperatorSymbol$AccessCode);
	{
		$var($Symbol$OperatorSymbol$AccessCodeArray, arr$, Symbol$OperatorSymbol$AccessCode::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Symbol$OperatorSymbol$AccessCode* aCodes = arr$->get(i$);
			{
				if ($nc(aCodes)->code == code) {
					return aCodes;
				}
			}
		}
	}
	return Symbol$OperatorSymbol$AccessCode::UNKNOWN;
}

int32_t Symbol$OperatorSymbol$AccessCode::from($JCTree$Tag* tag, int32_t opcode) {
	$init(Symbol$OperatorSymbol$AccessCode);
	$init($Symbol$1);
	switch ($nc($Symbol$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc((tag))->ordinal())) {
	case 1:
		{
			return Symbol$OperatorSymbol$AccessCode::PREINC->code;
		}
	case 2:
		{
			return Symbol$OperatorSymbol$AccessCode::PREDEC->code;
		}
	case 3:
		{
			return Symbol$OperatorSymbol$AccessCode::POSTINC->code;
		}
	case 4:
		{
			return Symbol$OperatorSymbol$AccessCode::POSTDEC->code;
		}
	}
	if (96 <= opcode && opcode <= 131) {
		return (opcode - 96) * 2 + Symbol$OperatorSymbol$AccessCode::FIRSTASGOP->code;
	} else if (opcode == 256) {
		return (131 + 1 - 96) * 2 + Symbol$OperatorSymbol$AccessCode::FIRSTASGOP->code;
	} else if (270 <= opcode && opcode <= 275) {
		return (opcode - 270 + 131 + 2 - 96) * 2 + Symbol$OperatorSymbol$AccessCode::FIRSTASGOP->code;
	}
	return -1;
}

void clinit$Symbol$OperatorSymbol$AccessCode($Class* class$) {
	$init($JCTree$Tag);
	$assignStatic(Symbol$OperatorSymbol$AccessCode::UNKNOWN, $new(Symbol$OperatorSymbol$AccessCode, "UNKNOWN"_s, 0, -1, $JCTree$Tag::NO_TAG));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::DEREF, $new(Symbol$OperatorSymbol$AccessCode, "DEREF"_s, 1, 0, $JCTree$Tag::NO_TAG));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::ASSIGN, $new(Symbol$OperatorSymbol$AccessCode, "ASSIGN"_s, 2, 2, $JCTree$Tag::ASSIGN));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::PREINC, $new(Symbol$OperatorSymbol$AccessCode, "PREINC"_s, 3, 4, $JCTree$Tag::PREINC));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::PREDEC, $new(Symbol$OperatorSymbol$AccessCode, "PREDEC"_s, 4, 6, $JCTree$Tag::PREDEC));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::POSTINC, $new(Symbol$OperatorSymbol$AccessCode, "POSTINC"_s, 5, 8, $JCTree$Tag::POSTINC));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::POSTDEC, $new(Symbol$OperatorSymbol$AccessCode, "POSTDEC"_s, 6, 10, $JCTree$Tag::POSTDEC));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::FIRSTASGOP, $new(Symbol$OperatorSymbol$AccessCode, "FIRSTASGOP"_s, 7, 12, $JCTree$Tag::NO_TAG));
	$assignStatic(Symbol$OperatorSymbol$AccessCode::$VALUES, Symbol$OperatorSymbol$AccessCode::$values());
	Symbol$OperatorSymbol$AccessCode::numberOfAccessCodes = (275 - 270 + 131 + 2 - 96) * 2 + Symbol$OperatorSymbol$AccessCode::FIRSTASGOP->code + 2;
}

Symbol$OperatorSymbol$AccessCode::Symbol$OperatorSymbol$AccessCode() {
}

$Class* Symbol$OperatorSymbol$AccessCode::load$($String* name, bool initialize) {
	$loadClass(Symbol$OperatorSymbol$AccessCode, name, initialize, &_Symbol$OperatorSymbol$AccessCode_ClassInfo_, clinit$Symbol$OperatorSymbol$AccessCode, allocate$Symbol$OperatorSymbol$AccessCode);
	return class$;
}

$Class* Symbol$OperatorSymbol$AccessCode::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com