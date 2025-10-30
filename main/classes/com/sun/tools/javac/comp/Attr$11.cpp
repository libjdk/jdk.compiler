#include <com/sun/tools/javac/comp/Attr$11.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Pair = ::com::sun::tools::javac::util::Pair;
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

$FieldInfo _Attr$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$11, this$0)},
	{"val$diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$11, val$diag)},
	{"val$sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$11, val$sym)},
	{}
};

$MethodInfo _Attr$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(static_cast<void(Attr$11::*)($Attr*,$Resolve*,$Resolve$MethodResolutionContext*,$Symbol*,$JCDiagnostic*)>(&Attr$11::init$))},
	{"errCandidate", "()Lcom/sun/tools/javac/util/Pair;", "()Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _Attr$11_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"checkMethod",
	"(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;"
};

$InnerClassInfo _Attr$11_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
	{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
	{}
};

$ClassInfo _Attr$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$11",
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
	nullptr,
	_Attr$11_FieldInfo_,
	_Attr$11_MethodInfo_,
	nullptr,
	&_Attr$11_EnclosingMethodInfo_,
	_Attr$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$11($Class* clazz) {
	return $of($alloc(Attr$11));
}

void Attr$11::init$($Attr* this$0, $Resolve* x0, $Resolve$MethodResolutionContext* context, $Symbol* val$sym, $JCDiagnostic* val$diag) {
	$set(this, this$0, this$0);
	$set(this, val$sym, val$sym);
	$set(this, val$diag, val$diag);
	$Resolve$InapplicableSymbolError::init$(static_cast<$Resolve*>($nc(x0)), context);
}

$Pair* Attr$11::errCandidate() {
	return $new($Pair, this->val$sym, this->val$diag);
}

Attr$11::Attr$11() {
}

$Class* Attr$11::load$($String* name, bool initialize) {
	$loadClass(Attr$11, name, initialize, &_Attr$11_ClassInfo_, allocate$Attr$11);
	return class$;
}

$Class* Attr$11::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com