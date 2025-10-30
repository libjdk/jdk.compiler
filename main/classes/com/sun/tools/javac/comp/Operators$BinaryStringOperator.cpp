#include <com/sun/tools/javac/comp/Operators$BinaryStringOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Operators$BinaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

#undef BOT
#undef TYPEVAR
#undef VOID

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
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

$FieldInfo _Operators$BinaryStringOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$BinaryStringOperator, this$0)},
	{}
};

$MethodInfo _Operators$BinaryStringOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$BinaryStringOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$BinaryStringOperator::init$))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"stringPromotion", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Operators$BinaryStringOperator::*)($Type*)>(&Operators$BinaryStringOperator::stringPromotion))},
	{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Operators$BinaryStringOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$BinaryStringOperator", "com.sun.tools.javac.comp.Operators", "BinaryStringOperator", 0},
	{"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "BinaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$BinaryStringOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$BinaryStringOperator",
	"com.sun.tools.javac.comp.Operators$BinaryOperatorHelper",
	nullptr,
	_Operators$BinaryStringOperator_FieldInfo_,
	_Operators$BinaryStringOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$BinaryStringOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$BinaryStringOperator($Class* clazz) {
	return $of($alloc(Operators$BinaryStringOperator));
}

void Operators$BinaryStringOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$BinaryOperatorHelper::init$(this$0, tag);
}

$Symbol$OperatorSymbol* Operators$BinaryStringOperator::resolve($Type* arg1, $Type* arg2) {
	$useLocalCurrentObjectStackCache();
	$var($Type, var$0, stringPromotion(arg1));
	return doLookup(var$0, $(stringPromotion(arg2)));
}

bool Operators$BinaryStringOperator::test($Type* arg1, $Type* arg2) {
	bool var$0 = $nc(this->this$0->types)->isSameType(arg1, $nc(this->this$0->syms)->stringType);
	bool hasStringOp = var$0 || $nc(this->this$0->types)->isSameType(arg2, $nc(this->this$0->syms)->stringType);
	$init($TypeTag);
	bool var$1 = $nc(arg1)->hasTag($TypeTag::VOID);
	bool hasVoidOp = var$1 || $nc(arg2)->hasTag($TypeTag::VOID);
	return hasStringOp && !hasVoidOp;
}

$Type* Operators$BinaryStringOperator::stringPromotion($Type* t) {
	if ($nc(t)->isPrimitive()) {
		return this->this$0->unaryPromotion(t);
	} else {
		$init($TypeTag);
		bool var$3 = t->hasTag($TypeTag::VOID);
		bool var$2 = var$3 || t->hasTag($TypeTag::BOT);
		if (var$2 || $nc(this->this$0->types)->isSameType(t, $nc(this->this$0->syms)->stringType)) {
			return t;
		} else {
			if (t->hasTag($TypeTag::TYPEVAR)) {
				return stringPromotion($(t->getUpperBound()));
			} else {
				return $nc(this->this$0->syms)->objectType;
			}
		}
	}
}

bool Operators$BinaryStringOperator::test(Object$* arg1, Object$* arg2) {
	return this->test($cast($Type, arg1), $cast($Type, arg2));
}

Operators$BinaryStringOperator::Operators$BinaryStringOperator() {
}

$Class* Operators$BinaryStringOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$BinaryStringOperator, name, initialize, &_Operators$BinaryStringOperator_ClassInfo_, allocate$Operators$BinaryStringOperator);
	return class$;
}

$Class* Operators$BinaryStringOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com