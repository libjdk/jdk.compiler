#include <com/sun/tools/javac/comp/Attr$1.h>

#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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

$FieldInfo _Attr$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$1, this$0)},
	{"val$caseTypes", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$1, val$caseTypes)},
	{"val$caseTypePositions", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$1, val$caseTypePositions)},
	{"val$tree", "Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$1, val$tree)},
	{}
};

$MethodInfo _Attr$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(Attr$1::*)($Attr*,$JCTree$JCSwitchExpression*,$ListBuffer*,$ListBuffer*)>(&Attr$1::init$))},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Attr$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	"visitSwitchExpression",
	"(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V"
};

$InnerClassInfo _Attr$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Attr$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Attr$1",
	"com.sun.tools.javac.tree.TreeScanner",
	nullptr,
	_Attr$1_FieldInfo_,
	_Attr$1_MethodInfo_,
	nullptr,
	&_Attr$1_EnclosingMethodInfo_,
	_Attr$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$1($Class* clazz) {
	return $of($alloc(Attr$1));
}

void Attr$1::init$($Attr* this$0, $JCTree$JCSwitchExpression* val$tree, $ListBuffer* val$caseTypePositions, $ListBuffer* val$caseTypes) {
	$set(this, this$0, this$0);
	$set(this, val$tree, val$tree);
	$set(this, val$caseTypePositions, val$caseTypePositions);
	$set(this, val$caseTypes, val$caseTypes);
	$TreeScanner::init$();
}

void Attr$1::visitYield($JCTree$JCYield* brk) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(brk)->target, this->val$tree)) {
		$nc(this->val$caseTypePositions)->append(brk->value != nullptr ? $($nc(brk->value)->pos()) : $(brk->pos()));
		$nc(this->val$caseTypes)->append(brk->value != nullptr ? $nc(brk->value)->type : $nc(this->this$0->syms)->errType);
	}
	$TreeScanner::visitYield(brk);
}

void Attr$1::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Attr$1::visitLambda($JCTree$JCLambda* tree) {
}

Attr$1::Attr$1() {
}

$Class* Attr$1::load$($String* name, bool initialize) {
	$loadClass(Attr$1, name, initialize, &_Attr$1_ClassInfo_, allocate$Attr$1);
	return class$;
}

$Class* Attr$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com