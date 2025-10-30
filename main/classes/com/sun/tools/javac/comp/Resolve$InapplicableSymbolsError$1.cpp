#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError$1.h>

#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$InapplicableSymbolsError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
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

$FieldInfo _Resolve$InapplicableSymbolsError$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Resolve$InapplicableSymbolsError;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InapplicableSymbolsError$1, this$1)},
	{"val$p", "Lcom/sun/tools/javac/util/Pair;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InapplicableSymbolsError$1, val$p)},
	{}
};

$MethodInfo _Resolve$InapplicableSymbolsError$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$InapplicableSymbolsError;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/util/Pair;)V", nullptr, 0, $method(static_cast<void(Resolve$InapplicableSymbolsError$1::*)($Resolve$InapplicableSymbolsError*,$Resolve$MethodResolutionContext*,$Pair*)>(&Resolve$InapplicableSymbolsError$1::init$))},
	{"errCandidate", "()Lcom/sun/tools/javac/util/Pair;", "()Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _Resolve$InapplicableSymbolsError$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError",
	"getDiagnostic",
	"(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;"
};

$InnerClassInfo _Resolve$InapplicableSymbolsError$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolsError", 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticType", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Resolve$InapplicableSymbolsError$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$1",
	"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
	nullptr,
	_Resolve$InapplicableSymbolsError$1_FieldInfo_,
	_Resolve$InapplicableSymbolsError$1_MethodInfo_,
	nullptr,
	&_Resolve$InapplicableSymbolsError$1_EnclosingMethodInfo_,
	_Resolve$InapplicableSymbolsError$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InapplicableSymbolsError$1($Class* clazz) {
	return $of($alloc(Resolve$InapplicableSymbolsError$1));
}

void Resolve$InapplicableSymbolsError$1::init$($Resolve$InapplicableSymbolsError* this$1, $Resolve$MethodResolutionContext* context, $Pair* val$p) {
	$set(this, this$1, this$1);
	$set(this, val$p, val$p);
	$Resolve$InapplicableSymbolError::init$(this$1->this$0, context);
}

$Pair* Resolve$InapplicableSymbolsError$1::errCandidate() {
	return this->val$p;
}

Resolve$InapplicableSymbolsError$1::Resolve$InapplicableSymbolsError$1() {
}

$Class* Resolve$InapplicableSymbolsError$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$InapplicableSymbolsError$1, name, initialize, &_Resolve$InapplicableSymbolsError$1_ClassInfo_, allocate$Resolve$InapplicableSymbolsError$1);
	return class$;
}

$Class* Resolve$InapplicableSymbolsError$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com