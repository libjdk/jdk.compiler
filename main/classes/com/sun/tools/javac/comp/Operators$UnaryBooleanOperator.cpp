#include <com/sun/tools/javac/comp/Operators$UnaryBooleanOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
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

$FieldInfo _Operators$UnaryBooleanOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryBooleanOperator, this$0)},
	{}
};

$MethodInfo _Operators$UnaryBooleanOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$UnaryBooleanOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$UnaryBooleanOperator::init$))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"test", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Operators$UnaryBooleanOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$UnaryBooleanOperator", "com.sun.tools.javac.comp.Operators", "UnaryBooleanOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "UnaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$UnaryBooleanOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$UnaryBooleanOperator",
	"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper",
	nullptr,
	_Operators$UnaryBooleanOperator_FieldInfo_,
	_Operators$UnaryBooleanOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$UnaryBooleanOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$UnaryBooleanOperator($Class* clazz) {
	return $of($alloc(Operators$UnaryBooleanOperator));
}

void Operators$UnaryBooleanOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$UnaryOperatorHelper::init$(this$0, tag);
}

bool Operators$UnaryBooleanOperator::test($Type* type) {
	$init($TypeTag);
	return $nc($($nc(this->this$0->types)->unboxedTypeOrType(type)))->hasTag($TypeTag::BOOLEAN);
}

$Symbol$OperatorSymbol* Operators$UnaryBooleanOperator::resolve($Type* arg) {
	return doLookup(static_cast<$Type*>($nc(this->this$0->syms)->booleanType));
}

bool Operators$UnaryBooleanOperator::test(Object$* type) {
	return this->test($cast($Type, type));
}

Operators$UnaryBooleanOperator::Operators$UnaryBooleanOperator() {
}

$Class* Operators$UnaryBooleanOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$UnaryBooleanOperator, name, initialize, &_Operators$UnaryBooleanOperator_ClassInfo_, allocate$Operators$UnaryBooleanOperator);
	return class$;
}

$Class* Operators$UnaryBooleanOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com