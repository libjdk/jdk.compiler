#include <com/sun/tools/javac/comp/Operators$BinaryBooleanOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

#undef BOOLEAN

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
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

$FieldInfo _Operators$BinaryBooleanOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$BinaryBooleanOperator, this$0)},
	{}
};

$MethodInfo _Operators$BinaryBooleanOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$BinaryBooleanOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$BinaryBooleanOperator::init$))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Operators$BinaryBooleanOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$BinaryBooleanOperator", "com.sun.tools.javac.comp.Operators", "BinaryBooleanOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$BinaryBooleanOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$BinaryBooleanOperator",
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper",
	nullptr,
	_Operators$BinaryBooleanOperator_FieldInfo_,
	_Operators$BinaryBooleanOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$BinaryBooleanOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$BinaryBooleanOperator($Class* clazz) {
	return $of($alloc(Operators$BinaryBooleanOperator));
}

void Operators$BinaryBooleanOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$BinaryOperatorHelper::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$BinaryBooleanOperator::resolve($Type* arg1, $Type* arg2) {
	return doLookup($nc(this->this$0->syms)->booleanType, $nc(this->this$0->syms)->booleanType);
}

bool Operators$BinaryBooleanOperator::test($Type* arg1, $Type* arg2) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = $nc($($nc(this->this$0->types)->unboxedTypeOrType(arg1)))->hasTag($TypeTag::BOOLEAN);
	return var$0 && $nc($($nc(this->this$0->types)->unboxedTypeOrType(arg2)))->hasTag($TypeTag::BOOLEAN);
}

bool Operators$BinaryBooleanOperator::test(Object$* arg1, Object$* arg2) {
	return this->test($cast($Type, arg1), $cast($Type, arg2));
}

Operators$BinaryBooleanOperator::Operators$BinaryBooleanOperator() {
}

$Class* Operators$BinaryBooleanOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$BinaryBooleanOperator, name, initialize, &_Operators$BinaryBooleanOperator_ClassInfo_, allocate$Operators$BinaryBooleanOperator);
	return class$;
}

$Class* Operators$BinaryBooleanOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com