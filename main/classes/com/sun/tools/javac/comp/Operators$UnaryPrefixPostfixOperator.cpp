#include <com/sun/tools/javac/comp/Operators$UnaryPrefixPostfixOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$UnaryNumericOperator.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$UnaryNumericOperator = ::com::sun::tools::javac::comp::Operators$UnaryNumericOperator;
using $Operators$UnaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$UnaryOperatorHelper;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Operators$UnaryPrefixPostfixOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryPrefixPostfixOperator, this$0)},
	{}
};

$MethodInfo _Operators$UnaryPrefixPostfixOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$UnaryPrefixPostfixOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$UnaryPrefixPostfixOperator::init$))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Operators$UnaryPrefixPostfixOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator", "com.sun.tools.javac.comp.Operators", "UnaryPrefixPostfixOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryNumericOperator", "com.sun.tools.javac.comp.Operators", "UnaryNumericOperator", 0},
	{}
};

$ClassInfo _Operators$UnaryPrefixPostfixOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$UnaryPrefixPostfixOperator",
	"com.sun.tools.javac.comp.Operators$UnaryNumericOperator",
	nullptr,
	_Operators$UnaryPrefixPostfixOperator_FieldInfo_,
	_Operators$UnaryPrefixPostfixOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$UnaryPrefixPostfixOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$UnaryPrefixPostfixOperator($Class* clazz) {
	return $of($alloc(Operators$UnaryPrefixPostfixOperator));
}

void Operators$UnaryPrefixPostfixOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$UnaryNumericOperator::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$UnaryPrefixPostfixOperator::resolve($Type* arg) {
	return doLookup($($nc(this->this$0->types)->unboxedTypeOrType(arg)));
}

Operators$UnaryPrefixPostfixOperator::Operators$UnaryPrefixPostfixOperator() {
}

$Class* Operators$UnaryPrefixPostfixOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$UnaryPrefixPostfixOperator, name, initialize, &_Operators$UnaryPrefixPostfixOperator_ClassInfo_, allocate$Operators$UnaryPrefixPostfixOperator);
	return class$;
}

$Class* Operators$UnaryPrefixPostfixOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com