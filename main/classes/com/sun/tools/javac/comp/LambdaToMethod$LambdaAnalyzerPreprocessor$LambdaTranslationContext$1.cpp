#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
using $Name = ::com::sun::tools::javac::util::Name;
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

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, this$2)},
	{"val$originalOwner", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, val$originalOwner)},
	{"val$this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, val$this$1)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::*)($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*,int64_t,$Name*,$Type*,$Symbol*,$LambdaToMethod$LambdaAnalyzerPreprocessor*,$Symbol$MethodSymbol*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::init$))},
	{"originalEnclosingMethod", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext",
	"<init>",
	"(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V"
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$MethodSymbol", "com.sun.tools.javac.code.Symbol", "MethodSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1",
	"com.sun.tools.javac.code.Symbol$MethodSymbol",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_MethodInfo_,
	nullptr,
	&_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_EnclosingMethodInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::init$($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $LambdaToMethod$LambdaAnalyzerPreprocessor* val$this$1, $Symbol$MethodSymbol* val$originalOwner) {
	$set(this, this$2, this$2);
	$set(this, val$this$1, val$this$1);
	$set(this, val$originalOwner, val$originalOwner);
	$Symbol$MethodSymbol::init$(flags, name, type, owner);
}

$Symbol$MethodSymbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::originalEnclosingMethod() {
	return this->val$originalOwner;
}

LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com