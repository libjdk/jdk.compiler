#include <com/sun/tools/javac/comp/Operators$BinaryEqualityOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators$ComparisonKind.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

#undef INVALID
#undef NUMERIC_OR_BOOLEAN
#undef REFERENCE

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$BinaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper;
using $Operators$ComparisonKind = ::com::sun::tools::javac::comp::Operators$ComparisonKind;
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

$FieldInfo _Operators$BinaryEqualityOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$BinaryEqualityOperator, this$0)},
	{}
};

$MethodInfo _Operators$BinaryEqualityOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$BinaryEqualityOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$BinaryEqualityOperator::init$))},
	{"getKind", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PRIVATE, $method(static_cast<$Operators$ComparisonKind*(Operators$BinaryEqualityOperator::*)($Type*,$Type*)>(&Operators$BinaryEqualityOperator::getKind))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Operators$BinaryEqualityOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$BinaryEqualityOperator", "com.sun.tools.javac.comp.Operators", "BinaryEqualityOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$BinaryEqualityOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$BinaryEqualityOperator",
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper",
	nullptr,
	_Operators$BinaryEqualityOperator_FieldInfo_,
	_Operators$BinaryEqualityOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$BinaryEqualityOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$BinaryEqualityOperator($Class* clazz) {
	return $of($alloc(Operators$BinaryEqualityOperator));
}

void Operators$BinaryEqualityOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$BinaryOperatorHelper::init$(this$0, tag);
}

bool Operators$BinaryEqualityOperator::test($Type* arg1, $Type* arg2) {
	$init($Operators$ComparisonKind);
	return getKind(arg1, arg2) != $Operators$ComparisonKind::INVALID;
}

$Symbol$OperatorSymbol* Operators$BinaryEqualityOperator::resolve($Type* t1, $Type* t2) {
	$Operators$ComparisonKind* kind = getKind(t1, t2);
	$init($Operators$ComparisonKind);
	$var($Type, t, (kind == $Operators$ComparisonKind::NUMERIC_OR_BOOLEAN) ? this->this$0->binaryPromotion(t1, t2) : $nc(this->this$0->syms)->objectType);
	return doLookup(t, t);
}

$Operators$ComparisonKind* Operators$BinaryEqualityOperator::getKind($Type* arg1, $Type* arg2) {
	$useLocalCurrentObjectStackCache();
	bool arg1Primitive = $nc(arg1)->isPrimitive();
	bool arg2Primitive = $nc(arg2)->isPrimitive();
	if (arg1Primitive && arg2Primitive) {
		$init($Operators$ComparisonKind);
		return $Operators$ComparisonKind::NUMERIC_OR_BOOLEAN;
	} else if (arg1Primitive) {
		$init($Operators$ComparisonKind);
		return $nc($(this->this$0->unaryPromotion(arg2)))->isPrimitive() ? $Operators$ComparisonKind::NUMERIC_OR_BOOLEAN : $Operators$ComparisonKind::INVALID;
	} else if (arg2Primitive) {
		$init($Operators$ComparisonKind);
		return $nc($(this->this$0->unaryPromotion(arg1)))->isPrimitive() ? $Operators$ComparisonKind::NUMERIC_OR_BOOLEAN : $Operators$ComparisonKind::INVALID;
	} else {
		bool var$0 = arg1->isNullOrReference();
		$init($Operators$ComparisonKind);
		return var$0 && arg2->isNullOrReference() ? $Operators$ComparisonKind::REFERENCE : $Operators$ComparisonKind::INVALID;
	}
}

bool Operators$BinaryEqualityOperator::test(Object$* arg1, Object$* arg2) {
	return this->test($cast($Type, arg1), $cast($Type, arg2));
}

Operators$BinaryEqualityOperator::Operators$BinaryEqualityOperator() {
}

$Class* Operators$BinaryEqualityOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$BinaryEqualityOperator, name, initialize, &_Operators$BinaryEqualityOperator_ClassInfo_, allocate$Operators$BinaryEqualityOperator);
	return class$;
}

$Class* Operators$BinaryEqualityOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com