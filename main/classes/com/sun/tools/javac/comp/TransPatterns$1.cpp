#include <com/sun/tools/javac/comp/TransPatterns$1.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns$BindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransPatterns$BindingContext = ::com::sun::tools::javac::comp::TransPatterns$BindingContext;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TransPatterns$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$1, this$0)},
	{}
};

$MethodInfo _TransPatterns$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;)V", nullptr, 0, $method(static_cast<void(TransPatterns$1::*)($TransPatterns*)>(&TransPatterns$1::init$))},
	{"bindingDeclared", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{"bindingVars", "(I)Lcom/sun/tools/javac/util/List;", "(I)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", 0},
	{"decorateExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0},
	{"decorateStatement", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, 0},
	{"getBindingFor", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{"pop", "()Lcom/sun/tools/javac/comp/TransPatterns$BindingContext;", nullptr, 0},
	{"tryPrepend", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TransPatterns$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TransPatterns",
	nullptr,
	nullptr
};

$InnerClassInfo _TransPatterns$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.TransPatterns$BindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingContext", $ABSTRACT},
	{}
};

$ClassInfo _TransPatterns$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TransPatterns$1",
	"com.sun.tools.javac.comp.TransPatterns$BindingContext",
	nullptr,
	_TransPatterns$1_FieldInfo_,
	_TransPatterns$1_MethodInfo_,
	nullptr,
	&_TransPatterns$1_EnclosingMethodInfo_,
	_TransPatterns$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns"
};

$Object* allocate$TransPatterns$1($Class* clazz) {
	return $of($alloc(TransPatterns$1));
}

void TransPatterns$1::init$($TransPatterns* this$0) {
	$set(this, this$0, this$0);
	$TransPatterns$BindingContext::init$(this$0);
}

$Symbol$VarSymbol* TransPatterns$1::bindingDeclared($Symbol$BindingSymbol* varSymbol) {
	return nullptr;
}

$Symbol$VarSymbol* TransPatterns$1::getBindingFor($Symbol$BindingSymbol* varSymbol) {
	return nullptr;
}

$List* TransPatterns$1::bindingVars(int32_t diagPos) {
	return $List::nil();
}

$JCTree$JCStatement* TransPatterns$1::decorateStatement($JCTree$JCStatement* stat) {
	return stat;
}

$JCTree$JCExpression* TransPatterns$1::decorateExpression($JCTree$JCExpression* expr) {
	return expr;
}

$TransPatterns$BindingContext* TransPatterns$1::pop() {
	return this;
}

bool TransPatterns$1::tryPrepend($Symbol$BindingSymbol* binding, $JCTree$JCVariableDecl* var) {
	return false;
}

TransPatterns$1::TransPatterns$1() {
}

$Class* TransPatterns$1::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$1, name, initialize, &_TransPatterns$1_ClassInfo_, allocate$TransPatterns$1);
	return class$;
}

$Class* TransPatterns$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com