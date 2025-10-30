#include <com/sun/tools/javac/comp/TransPatterns$BindingContext.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TransPatterns$BindingContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$BindingContext, this$0)},
	{}
};

$MethodInfo _TransPatterns$BindingContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;)V", nullptr, 0, $method(static_cast<void(TransPatterns$BindingContext::*)($TransPatterns*)>(&TransPatterns$BindingContext::init$))},
	{"bindingDeclared", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $ABSTRACT},
	{"bindingVars", "(I)Lcom/sun/tools/javac/util/List;", "(I)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;", $ABSTRACT},
	{"decorateExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $ABSTRACT},
	{"decorateStatement", "(Lcom/sun/tools/javac/tree/JCTree$JCStatement;)Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $ABSTRACT},
	{"getBindingFor", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $ABSTRACT},
	{"pop", "()Lcom/sun/tools/javac/comp/TransPatterns$BindingContext;", nullptr, $ABSTRACT},
	{"tryPrepend", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _TransPatterns$BindingContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$BindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingContext", $ABSTRACT},
	{}
};

$ClassInfo _TransPatterns$BindingContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.TransPatterns$BindingContext",
	"java.lang.Object",
	nullptr,
	_TransPatterns$BindingContext_FieldInfo_,
	_TransPatterns$BindingContext_MethodInfo_,
	nullptr,
	nullptr,
	_TransPatterns$BindingContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns"
};

$Object* allocate$TransPatterns$BindingContext($Class* clazz) {
	return $of($alloc(TransPatterns$BindingContext));
}

void TransPatterns$BindingContext::init$($TransPatterns* this$0) {
	$set(this, this$0, this$0);
}

TransPatterns$BindingContext::TransPatterns$BindingContext() {
}

$Class* TransPatterns$BindingContext::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$BindingContext, name, initialize, &_TransPatterns$BindingContext_ClassInfo_, allocate$TransPatterns$BindingContext);
	return class$;
}

$Class* TransPatterns$BindingContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com