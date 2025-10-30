#include <com/sun/tools/javac/comp/Operators$BinaryShiftOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

#undef INT
#undef LONG

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Operators = ::com::sun::tools::javac::comp::Operators;
using $Operators$BinaryOperatorHelper = ::com::sun::tools::javac::comp::Operators$BinaryOperatorHelper;
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

$FieldInfo _Operators$BinaryShiftOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$BinaryShiftOperator, this$0)},
	{}
};

$MethodInfo _Operators$BinaryShiftOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$BinaryShiftOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$BinaryShiftOperator::init$))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Operators$BinaryShiftOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$BinaryShiftOperator", "com.sun.tools.javac.comp.Operators", "BinaryShiftOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$BinaryShiftOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$BinaryShiftOperator",
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper",
	nullptr,
	_Operators$BinaryShiftOperator_FieldInfo_,
	_Operators$BinaryShiftOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$BinaryShiftOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$BinaryShiftOperator($Class* clazz) {
	return $of($alloc(Operators$BinaryShiftOperator));
}

void Operators$BinaryShiftOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$BinaryOperatorHelper::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$BinaryShiftOperator::resolve($Type* arg1, $Type* arg2) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, this->this$0->unaryPromotion(arg1));
	return doLookup(var$0, $(this->this$0->unaryPromotion(arg2)));
}

bool Operators$BinaryShiftOperator::test($Type* arg1, $Type* arg2) {
	$useLocalCurrentObjectStackCache();
	$TypeTag* op1 = $nc($(this->this$0->unaryPromotion(arg1)))->getTag();
	$TypeTag* op2 = $nc($(this->this$0->unaryPromotion(arg2)))->getTag();
	$init($TypeTag);
	return (op1 == $TypeTag::LONG || op1 == $TypeTag::INT) && (op2 == $TypeTag::LONG || op2 == $TypeTag::INT);
}

bool Operators$BinaryShiftOperator::test(Object$* arg1, Object$* arg2) {
	return this->test($cast($Type, arg1), $cast($Type, arg2));
}

Operators$BinaryShiftOperator::Operators$BinaryShiftOperator() {
}

$Class* Operators$BinaryShiftOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$BinaryShiftOperator, name, initialize, &_Operators$BinaryShiftOperator_ClassInfo_, allocate$Operators$BinaryShiftOperator);
	return class$;
}

$Class* Operators$BinaryShiftOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com