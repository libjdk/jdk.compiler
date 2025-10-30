#include <com/sun/tools/javac/comp/Attr$7.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
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

$FieldInfo _Attr$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$7, this$0)},
	{"val$tsym", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$7, val$tsym)},
	{"val$clazz", "Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$7, val$clazz)},
	{}
};

$MethodInfo _Attr$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(Attr$7::*)($Attr*,$Check$CheckContext*,$JCTree$JCNewClass*,$Symbol$TypeSymbol*)>(&Attr$7::init$))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"diamondContext",
	"(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Check$CheckContext;)Lcom/sun/tools/javac/comp/Check$CheckContext;"
};

$InnerClassInfo _Attr$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCNewClass", "com.sun.tools.javac.tree.JCTree", "JCNewClass", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Attr$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$7",
	"com.sun.tools.javac.comp.Check$NestedCheckContext",
	nullptr,
	_Attr$7_FieldInfo_,
	_Attr$7_MethodInfo_,
	nullptr,
	&_Attr$7_EnclosingMethodInfo_,
	_Attr$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$7($Class* clazz) {
	return $of($alloc(Attr$7));
}

void Attr$7::init$($Attr* this$0, $Check$CheckContext* enclosingContext, $JCTree$JCNewClass* val$clazz, $Symbol$TypeSymbol* val$tsym) {
	$set(this, this$0, this$0);
	$set(this, val$clazz, val$clazz);
	$set(this, val$tsym, val$tsym);
	$Check$NestedCheckContext::init$(enclosingContext);
}

void Attr$7::report($JCDiagnostic$DiagnosticPosition* _unused, $JCDiagnostic* details) {
	$useLocalCurrentObjectStackCache();
	$nc(this->enclosingContext)->report($nc(this->val$clazz)->clazz, $($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::CantApplyDiamond1($($CompilerProperties$Fragments::Diamond(this->val$tsym)), details)))));
}

Attr$7::Attr$7() {
}

$Class* Attr$7::load$($String* name, bool initialize) {
	$loadClass(Attr$7, name, initialize, &_Attr$7_ClassInfo_, allocate$Attr$7);
	return class$;
}

$Class* Attr$7::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com