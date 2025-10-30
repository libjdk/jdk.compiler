#include <com/sun/tools/javac/comp/TransPatterns$BindingDeclarationFenceBindingContext.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransPatterns$BasicBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BasicBindingContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TransPatterns$BindingDeclarationFenceBindingContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$BindingDeclarationFenceBindingContext, this$0)},
	{}
};

$MethodInfo _TransPatterns$BindingDeclarationFenceBindingContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;)V", nullptr, $PRIVATE, $method(static_cast<void(TransPatterns$BindingDeclarationFenceBindingContext::*)($TransPatterns*)>(&TransPatterns$BindingDeclarationFenceBindingContext::init$))},
	{"bindingDeclared", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;)Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, 0},
	{}
};

$InnerClassInfo _TransPatterns$BindingDeclarationFenceBindingContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingDeclarationFenceBindingContext", $PRIVATE},
	{"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BasicBindingContext", 0},
	{}
};

$ClassInfo _TransPatterns$BindingDeclarationFenceBindingContext_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext",
	"com.sun.tools.javac.comp.TransPatterns$BasicBindingContext",
	nullptr,
	_TransPatterns$BindingDeclarationFenceBindingContext_FieldInfo_,
	_TransPatterns$BindingDeclarationFenceBindingContext_MethodInfo_,
	nullptr,
	nullptr,
	_TransPatterns$BindingDeclarationFenceBindingContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns"
};

$Object* allocate$TransPatterns$BindingDeclarationFenceBindingContext($Class* clazz) {
	return $of($alloc(TransPatterns$BindingDeclarationFenceBindingContext));
}

void TransPatterns$BindingDeclarationFenceBindingContext::init$($TransPatterns* this$0) {
	$set(this, this$0, this$0);
	$TransPatterns$BasicBindingContext::init$(this$0);
}

$Symbol$VarSymbol* TransPatterns$BindingDeclarationFenceBindingContext::bindingDeclared($Symbol$BindingSymbol* varSymbol) {
	return nullptr;
}

TransPatterns$BindingDeclarationFenceBindingContext::TransPatterns$BindingDeclarationFenceBindingContext() {
}

$Class* TransPatterns$BindingDeclarationFenceBindingContext::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$BindingDeclarationFenceBindingContext, name, initialize, &_TransPatterns$BindingDeclarationFenceBindingContext_ClassInfo_, allocate$TransPatterns$BindingDeclarationFenceBindingContext);
	return class$;
}

$Class* TransPatterns$BindingDeclarationFenceBindingContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com