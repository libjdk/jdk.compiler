#include <com/sun/tools/javac/comp/Attr$3.h>

#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
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

$FieldInfo _Attr$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$3, this$0)},
	{}
};

$MethodInfo _Attr$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(static_cast<void(Attr$3::*)($Attr*,$Check$CheckContext*)>(&Attr$3::init$))},
	{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"visitTry",
	"(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V"
};

$InnerClassInfo _Attr$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
	{"com.sun.tools.javac.tree.JCTree$JCTry", "com.sun.tools.javac.tree.JCTree", "JCTry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attr$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$3",
	"com.sun.tools.javac.comp.Check$NestedCheckContext",
	nullptr,
	_Attr$3_FieldInfo_,
	_Attr$3_MethodInfo_,
	nullptr,
	&_Attr$3_EnclosingMethodInfo_,
	_Attr$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$3($Class* clazz) {
	return $of($alloc(Attr$3));
}

void Attr$3::init$($Attr* this$0, $Check$CheckContext* enclosingContext) {
	$set(this, this$0, this$0);
	$Check$NestedCheckContext::init$(enclosingContext);
}

void Attr$3::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$useLocalCurrentObjectStackCache();
	$nc($nc(this->this$0->chk)->basicHandler)->report(pos, $($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::TryNotApplicableToType(details)))));
}

Attr$3::Attr$3() {
}

$Class* Attr$3::load$($String* name, bool initialize) {
	$loadClass(Attr$3, name, initialize, &_Attr$3_ClassInfo_, allocate$Attr$3);
	return class$;
}

$Class* Attr$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com