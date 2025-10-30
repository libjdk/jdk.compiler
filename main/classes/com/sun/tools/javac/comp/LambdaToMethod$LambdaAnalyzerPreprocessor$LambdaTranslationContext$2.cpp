#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2.h>

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
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

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_FieldInfo_[] = {
	{"this$2", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2, this$2)},
	{"val$sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2, val$sym)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;JLcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::*)($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*,int64_t,$Name*,$Type*,$Symbol*,$Symbol*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::init$))},
	{"baseSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext",
	"translate",
	"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Lcom/sun/tools/javac/code/Symbol;"
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaSymbolKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2",
	"com.sun.tools.javac.code.Symbol$VarSymbol",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_MethodInfo_,
	nullptr,
	&_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_EnclosingMethodInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::init$($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2, int64_t flags, $Name* name, $Type* type, $Symbol* owner, $Symbol* val$sym) {
	$set(this, this$2, this$2);
	$set(this, val$sym, val$sym);
	$Symbol$VarSymbol::init$(flags, name, type, owner);
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::baseSymbol() {
	return this->val$sym;
}

LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com