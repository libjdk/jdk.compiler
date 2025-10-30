#include <com/sun/tools/javac/comp/Operators$UnaryReferenceOperator.h>

#include <com/sun/tools/javac/code/Symbol$OperatorSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators$UnaryOperatorHelper.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <jcpp.h>

using $Symbol$OperatorSymbol = ::com::sun::tools::javac::code::Symbol$OperatorSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
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

$FieldInfo _Operators$UnaryReferenceOperator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Operators;", nullptr, $FINAL | $SYNTHETIC, $field(Operators$UnaryReferenceOperator, this$0)},
	{}
};

$MethodInfo _Operators$UnaryReferenceOperator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Operators;Lcom/sun/tools/javac/tree/JCTree$Tag;)V", nullptr, 0, $method(static_cast<void(Operators$UnaryReferenceOperator::*)($Operators*,$JCTree$Tag*)>(&Operators$UnaryReferenceOperator::init$))},
	{"resolve", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Symbol$OperatorSymbol;", nullptr, $PUBLIC},
	{"test", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Operators$UnaryReferenceOperator_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Operators$UnaryReferenceOperator", "com.sun.tools.javac.comp.Operators", "UnaryReferenceOperator", 0},
	{"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper", "com.sun.tools.javac.comp.Operators", "UnaryOperatorHelper", $ABSTRACT},
	{}
};

$ClassInfo _Operators$UnaryReferenceOperator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Operators$UnaryReferenceOperator",
	"com.sun.tools.javac.comp.Operators$UnaryOperatorHelper",
	nullptr,
	_Operators$UnaryReferenceOperator_FieldInfo_,
	_Operators$UnaryReferenceOperator_MethodInfo_,
	nullptr,
	nullptr,
	_Operators$UnaryReferenceOperator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Operators"
};

$Object* allocate$Operators$UnaryReferenceOperator($Class* clazz) {
	return $of($alloc(Operators$UnaryReferenceOperator));
}

void Operators$UnaryReferenceOperator::init$($Operators* this$0, $JCTree$Tag* tag) {
	$set(this, this$0, this$0);
	$Operators$UnaryOperatorHelper::init$(this$0, tag);
}

bool Operators$UnaryReferenceOperator::test($Type* type) {
	return $nc(type)->isNullOrReference();
}

$Symbol$OperatorSymbol* Operators$UnaryReferenceOperator::resolve($Type* arg) {
	return doLookup($nc(this->this$0->syms)->objectType);
}

bool Operators$UnaryReferenceOperator::test(Object$* type) {
	return this->test($cast($Type, type));
}

Operators$UnaryReferenceOperator::Operators$UnaryReferenceOperator() {
}

$Class* Operators$UnaryReferenceOperator::load$($String* name, bool initialize) {
	$loadClass(Operators$UnaryReferenceOperator, name, initialize, &_Operators$UnaryReferenceOperator_ClassInfo_, allocate$Operators$UnaryReferenceOperator);
	return class$;
}

$Class* Operators$UnaryReferenceOperator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com