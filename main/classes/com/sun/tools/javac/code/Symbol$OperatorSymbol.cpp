#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode.h>
#include <com/sun/tools/javac/code/Symbol$Visitor.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef MIN_VALUE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$OperatorSymbol$AccessCode = ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode;
using $Symbol$Visitor = ::com::sun::tools::javac::code::Symbol$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Symbol$OperatorSymbol_FieldInfo_[] = {
	{"opcode", "I", nullptr, $PUBLIC, $field(Symbol$OperatorSymbol, opcode)},
	{"accessCode", "I", nullptr, $PRIVATE, $field(Symbol$OperatorSymbol, accessCode)},
	{}
};

$MethodInfo _Symbol$OperatorSymbol_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;ILcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Symbol$OperatorSymbol::*)($Name*,$Type*,int32_t,$Symbol*)>(&Symbol$OperatorSymbol::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Symbol$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Symbol$Visitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"getAccessCode", "(Lcom/sun/tools/javac/tree/JCTree$Tag;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol$OperatorSymbol_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Symbol$OperatorSymbol", "com.sun.tools.javac.code.Symbol", "OperatorSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$OperatorSymbol$AccessCode", "com.sun.tools.javac.code.Symbol$OperatorSymbol", "AccessCode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Symbol$OperatorSymbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Symbol$OperatorSymbol",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	nullptr,
	_Symbol$OperatorSymbol_FieldInfo_,
	_Symbol$OperatorSymbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol$OperatorSymbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Symbol"
};

$Object* allocate$Symbol$OperatorSymbol($Class* clazz) {
	return $of($alloc(Symbol$OperatorSymbol));
}

void Symbol$OperatorSymbol::init$($Name* name, $Type* type, int32_t opcode, $Symbol* owner) {
	$Symbol$MethodSymbol::init$(1 | 8, name, type, owner);
	this->accessCode = $Integer::MIN_VALUE;
	this->opcode = opcode;
}

$Object* Symbol$OperatorSymbol::accept($Symbol$Visitor* v, Object$* p) {
	return $of($nc(v)->visitOperatorSymbol(this, p));
}

int32_t Symbol$OperatorSymbol::getAccessCode($JCTree$Tag* tag) {
	if (this->accessCode != $Integer::MIN_VALUE && !$nc(tag)->isIncOrDecUnaryOp()) {
		return this->accessCode;
	}
	this->accessCode = $Symbol$OperatorSymbol$AccessCode::from(tag, this->opcode);
	return this->accessCode;
}

Symbol$OperatorSymbol::Symbol$OperatorSymbol() {
}

$Class* Symbol$OperatorSymbol::load$($String* name, bool initialize) {
	$loadClass(Symbol$OperatorSymbol, name, initialize, &_Symbol$OperatorSymbol_ClassInfo_, allocate$Symbol$OperatorSymbol);
	return class$;
}

$Class* Symbol$OperatorSymbol::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com