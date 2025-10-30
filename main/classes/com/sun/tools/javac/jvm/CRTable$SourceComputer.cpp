#include <com/sun/tools/javac/jvm/CRTable$SourceComputer.h>

#include <com/sun/tools/javac/jvm/CRTable$SourceRange.h>
#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCSkip.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitch.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCSynchronized.h>
#include <com/sun/tools/javac/tree/JCTree$JCThrow.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef NOPOS

using $CRTable = ::com::sun::tools::javac::jvm::CRTable;
using $CRTable$SourceRange = ::com::sun::tools::javac::jvm::CRTable$SourceRange;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCAssert = ::com::sun::tools::javac::tree::JCTree$JCAssert;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOperatorExpression = ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCSkip = ::com::sun::tools::javac::tree::JCTree$JCSkip;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCSwitch = ::com::sun::tools::javac::tree::JCTree$JCSwitch;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCSynchronized = ::com::sun::tools::javac::tree::JCTree$JCSynchronized;
using $JCTree$JCThrow = ::com::sun::tools::javac::tree::JCTree$JCThrow;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _CRTable$SourceComputer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/CRTable;", nullptr, $FINAL | $SYNTHETIC, $field(CRTable$SourceComputer, this$0)},
	{"result", "Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", nullptr, 0, $field(CRTable$SourceComputer, result)},
	{}
};

$MethodInfo _CRTable$SourceComputer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/CRTable;)V", nullptr, 0, $method(static_cast<void(CRTable$SourceComputer::*)($CRTable*)>(&CRTable$SourceComputer::init$))},
	{"csp", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", nullptr, $PUBLIC},
	{"csp", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", $PUBLIC},
	{"cspCases", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCase;>;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", $PUBLIC},
	{"cspCatchers", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCCatch;>;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", $PUBLIC},
	{"endPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"startPos", "(Lcom/sun/tools/javac/tree/JCTree;)I", nullptr, $PUBLIC},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC},
	{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CRTable$SourceComputer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.CRTable$SourceComputer", "com.sun.tools.javac.jvm.CRTable", "SourceComputer", 0},
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CRTable$SourceComputer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.CRTable$SourceComputer",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	_CRTable$SourceComputer_FieldInfo_,
	_CRTable$SourceComputer_MethodInfo_,
	nullptr,
	nullptr,
	_CRTable$SourceComputer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.CRTable"
};

$Object* allocate$CRTable$SourceComputer($Class* clazz) {
	return $of($alloc(CRTable$SourceComputer));
}

void CRTable$SourceComputer::init$($CRTable* this$0) {
	$set(this, this$0, this$0);
	$JCTree$Visitor::init$();
}

$CRTable$SourceRange* CRTable$SourceComputer::csp($JCTree* tree) {
	if (tree == nullptr) {
		return nullptr;
	}
	$nc(tree)->accept(this);
	if (this->result != nullptr) {
		$nc(this->this$0->positions)->put(tree, this->result);
	}
	return this->result;
}

$CRTable$SourceRange* CRTable$SourceComputer::csp($List* trees) {
	$useLocalCurrentObjectStackCache();
	if ((trees == nullptr) || !($nc(trees)->nonEmpty())) {
		return nullptr;
	}
	$var($CRTable$SourceRange, list_sr, $new($CRTable$SourceRange));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			list_sr->mergeWith($(csp($cast($JCTree, l->head))));
		}
	}
	$nc(this->this$0->positions)->put(trees, list_sr);
	return list_sr;
}

$CRTable$SourceRange* CRTable$SourceComputer::cspCases($List* trees) {
	$useLocalCurrentObjectStackCache();
	if ((trees == nullptr) || !($nc(trees)->nonEmpty())) {
		return nullptr;
	}
	$var($CRTable$SourceRange, list_sr, $new($CRTable$SourceRange));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			list_sr->mergeWith($(csp($cast($JCTree, l->head))));
		}
	}
	$nc(this->this$0->positions)->put(trees, list_sr);
	return list_sr;
}

$CRTable$SourceRange* CRTable$SourceComputer::cspCatchers($List* trees) {
	$useLocalCurrentObjectStackCache();
	if ((trees == nullptr) || !($nc(trees)->nonEmpty())) {
		return nullptr;
	}
	$var($CRTable$SourceRange, list_sr, $new($CRTable$SourceRange));
	{
		$var($List, l, trees);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			list_sr->mergeWith($(csp($cast($JCTree, l->head))));
		}
	}
	$nc(this->this$0->positions)->put(trees, list_sr);
	return list_sr;
}

void CRTable$SourceComputer::visitMethodDef($JCTree$JCMethodDecl* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitVarDef($JCTree$JCVariableDecl* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	csp(static_cast<$JCTree*>($nc(tree)->vartype));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->init))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitSkip($JCTree$JCSkip* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, startPos(tree)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitBlock($JCTree$JCBlock* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	csp($nc(tree)->stats);
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->cond))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->cond))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitForLoop($JCTree$JCForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->init)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->cond))));
	sr->mergeWith($(csp($nc(tree)->step)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->var))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitLabelled($JCTree$JCLabeledStatement* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitSwitch($JCTree$JCSwitch* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->selector))));
	sr->mergeWith($(cspCases($nc(tree)->cases)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->selector))));
	sr->mergeWith($(cspCases($nc(tree)->cases)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitCase($JCTree$JCCase* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->labels)));
	sr->mergeWith($(csp($nc(tree)->stats)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* that) {
	$set(this, result, nullptr);
}

void CRTable$SourceComputer::visitSynchronized($JCTree$JCSynchronized* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->lock))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTry($JCTree$JCTry* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->resources)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	sr->mergeWith($(cspCatchers($nc(tree)->catchers)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->finalizer))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitCatch($JCTree$JCCatch* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->param))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->body))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitConditional($JCTree$JCConditional* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->cond))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->truepart))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->falsepart))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitIf($JCTree$JCIf* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->cond))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->thenpart))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->elsepart))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitExec($JCTree$JCExpressionStatement* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitBreak($JCTree$JCBreak* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitYield($JCTree$JCYield* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->value))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitContinue($JCTree$JCContinue* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitReturn($JCTree$JCReturn* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitThrow($JCTree$JCThrow* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitAssert($JCTree$JCAssert* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->cond))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->detail))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->meth))));
	sr->mergeWith($(csp($nc(tree)->args)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitNewClass($JCTree$JCNewClass* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->encl))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->clazz))));
	sr->mergeWith($(csp($nc(tree)->args)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->def))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->elemtype))));
	sr->mergeWith($(csp($nc(tree)->dims)));
	sr->mergeWith($(csp($nc(tree)->elems)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitParens($JCTree$JCParens* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitAssign($JCTree$JCAssign* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->lhs))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->rhs))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitAssignop($JCTree$JCAssignOp* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->lhs))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->rhs))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitUnary($JCTree$JCUnary* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->arg))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitBinary($JCTree$JCBinary* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->lhs))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->rhs))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeCast($JCTree$JCTypeCast* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->clazz)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeTest($JCTree$JCInstanceOf* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	sr->mergeWith($(csp($nc(tree)->pattern)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitIndexed($JCTree$JCArrayAccess* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->indexed))));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->index))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitSelect($JCTree$JCFieldAccess* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->selected))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitIdent($JCTree$JCIdent* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitLiteral($JCTree$JCLiteral* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->elemtype))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeApply($JCTree$JCTypeApply* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->clazz))));
	sr->mergeWith($(csp($nc(tree)->arguments)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitLetExpr($JCTree$LetExpr* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->defs)));
	sr->mergeWith($(csp(static_cast<$JCTree*>($nc(tree)->expr))));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->bounds)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = startPos(tree);
	$var($CRTable$SourceRange, sr, $new($CRTable$SourceRange, var$0, endPos(tree)));
	sr->mergeWith($(csp($nc(tree)->alternatives)));
	$set(this, result, sr);
}

void CRTable$SourceComputer::visitWildcard($JCTree$JCWildcard* tree) {
	$set(this, result, nullptr);
}

void CRTable$SourceComputer::visitErroneous($JCTree$JCErroneous* tree) {
	$set(this, result, nullptr);
}

void CRTable$SourceComputer::visitTree($JCTree* tree) {
	$Assert::error();
}

int32_t CRTable$SourceComputer::startPos($JCTree* tree) {
	if (tree == nullptr) {
		return $Position::NOPOS;
	}
	return $TreeInfo::getStartPos(tree);
}

int32_t CRTable$SourceComputer::endPos($JCTree* tree) {
	if (tree == nullptr) {
		return $Position::NOPOS;
	}
	return $TreeInfo::getEndPos(tree, this->this$0->endPosTable);
}

CRTable$SourceComputer::CRTable$SourceComputer() {
}

$Class* CRTable$SourceComputer::load$($String* name, bool initialize) {
	$loadClass(CRTable$SourceComputer, name, initialize, &_CRTable$SourceComputer_ClassInfo_, allocate$CRTable$SourceComputer);
	return class$;
}

$Class* CRTable$SourceComputer::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com