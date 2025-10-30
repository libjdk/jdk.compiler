#include <com/sun/tools/javac/comp/TransPatterns$2.h>

#include <com/sun/tools/javac/code/Symbol$BindingSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/comp/TransPatterns$BasicBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns$BindingDeclarationFenceBindingContext.h>
#include <com/sun/tools/javac/comp/TransPatterns.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol$BindingSymbol = ::com::sun::tools::javac::code::Symbol$BindingSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $TransPatterns = ::com::sun::tools::javac::comp::TransPatterns;
using $TransPatterns$BasicBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BasicBindingContext;
using $TransPatterns$BindingDeclarationFenceBindingContext = ::com::sun::tools::javac::comp::TransPatterns$BindingDeclarationFenceBindingContext;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _TransPatterns$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TransPatterns;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$2, this$0)},
	{"val$statements", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(TransPatterns$2, val$statements)},
	{}
};

$MethodInfo _TransPatterns$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TransPatterns;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(TransPatterns$2::*)($TransPatterns*,$ListBuffer*)>(&TransPatterns$2::init$))},
	{"tryPrepend", "(Lcom/sun/tools/javac/code/Symbol$BindingSymbol;Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _TransPatterns$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TransPatterns",
	"visitBlock",
	"(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V"
};

$InnerClassInfo _TransPatterns$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TransPatterns$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext", "com.sun.tools.javac.comp.TransPatterns", "BindingDeclarationFenceBindingContext", $PRIVATE},
	{"com.sun.tools.javac.tree.JCTree$JCBlock", "com.sun.tools.javac.tree.JCTree", "JCBlock", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TransPatterns$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TransPatterns$2",
	"com.sun.tools.javac.comp.TransPatterns$BindingDeclarationFenceBindingContext",
	nullptr,
	_TransPatterns$2_FieldInfo_,
	_TransPatterns$2_MethodInfo_,
	nullptr,
	&_TransPatterns$2_EnclosingMethodInfo_,
	_TransPatterns$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TransPatterns"
};

$Object* allocate$TransPatterns$2($Class* clazz) {
	return $of($alloc(TransPatterns$2));
}

void TransPatterns$2::init$($TransPatterns* this$0, $ListBuffer* val$statements) {
	$set(this, this$0, this$0);
	$set(this, val$statements, val$statements);
	$TransPatterns$BindingDeclarationFenceBindingContext::init$(this$0);
}

bool TransPatterns$2::tryPrepend($Symbol$BindingSymbol* binding, $JCTree$JCVariableDecl* var) {
	$nc(this->hoistedVarMap)->put(binding, $nc(var)->sym);
	$nc(this->val$statements)->append(var);
	return true;
}

TransPatterns$2::TransPatterns$2() {
}

$Class* TransPatterns$2::load$($String* name, bool initialize) {
	$loadClass(TransPatterns$2, name, initialize, &_TransPatterns$2_ClassInfo_, allocate$TransPatterns$2);
	return class$;
}

$Class* TransPatterns$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com