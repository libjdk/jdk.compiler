#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Env = ::com::sun::tools::javac::comp::Env;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $JCTree$JCFunctionalExpression = ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, this$1)},
	{"tree", "Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;", "TT;", $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, tree)},
	{"owner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, owner)},
	{"depth", "I", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, depth)},
	{"prev", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<*>;", $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, prev)},
	{"bridges", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;", $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, bridges)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;)V", "(TT;)V", 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::*)($LambdaToMethod$LambdaAnalyzerPreprocessor*,$JCTree$JCFunctionalExpression*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::init$))},
	{"enclosingMethodName", "()Ljava/lang/String;", nullptr, 0},
	{"isSerializable", "()Z", nullptr, 0},
	{"needsAltMetafactory", "()Z", nullptr, 0},
	{"syntheticMethodNameComponent", "(Lcom/sun/tools/javac/util/Name;)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "TranslationContext", $ABSTRACT},
	{"com.sun.tools.javac.tree.JCTree$JCFunctionalExpression", "com.sun.tools.javac.tree.JCTree", "JCFunctionalExpression", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_MethodInfo_,
	"<T:Lcom/sun/tools/javac/tree/JCTree$JCFunctionalExpression;>Ljava/lang/Object;",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, $JCTree$JCFunctionalExpression* tree) {
	$set(this, this$1, this$1);
	$set(this, tree, tree);
	$set(this, owner, this$1->owner(true));
	this->depth = $nc(this$1->frameStack)->size() - 1;
	$set(this, prev, this$1->context());
	$var($Symbol$ClassSymbol, csym, $nc($nc(this$1->this$0)->types)->makeFunctionalInterfaceClass($nc(this$1->this$0)->attrEnv, $nc($nc(this$1->this$0)->names)->empty, $nc(tree)->target, 1024 | 512));
	$set(this, bridges, $nc($nc(this$1->this$0)->types)->functionalInterfaceBridges(csym));
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::needsAltMetafactory() {
	bool var$1 = $nc($nc(this->tree)->target)->isIntersection();
	bool var$0 = var$1 || isSerializable();
	return var$0 || $nc(this->bridges)->length() > 1;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::isSerializable() {
	if ($nc(this->this$1->this$0)->forceSerializable) {
		return true;
	}
	return $nc($nc(this->this$1->this$0)->types)->asSuper($nc(this->tree)->target, $nc($nc($nc(this->this$1->this$0)->syms)->serializableType)->tsym) != nullptr;
}

$String* LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::enclosingMethodName() {
	return syntheticMethodNameComponent($nc(this->owner)->name);
}

$String* LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::syntheticMethodNameComponent($Name* name) {
	if (name == nullptr) {
		return "null"_s;
	}
	$var($String, methodName, $nc(name)->toString());
	if ($nc(methodName)->equals("<clinit>"_s)) {
		$assign(methodName, "static"_s);
	} else if (methodName->equals("<init>"_s)) {
		$assign(methodName, "new"_s);
	}
	return methodName;
}

LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com