#include <com/sun/tools/javac/tree/TreeScanner.h>

#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssert.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCBindingPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCCase.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCDoWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCEnhancedForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExports.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCForLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCGuardPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCIf.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCLabeledStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCModuleDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCOpens.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$JCParenthesizedPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCProvides.h>
#include <com/sun/tools/javac/tree/JCTree$JCRequires.h>
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
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$JCUses.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWhileLoop.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree$LetExpr.h>
#include <com/sun/tools/javac/tree/JCTree$TypeBoundKind.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCAssert = ::com::sun::tools::javac::tree::JCTree$JCAssert;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $JCTree$JCBindingPattern = ::com::sun::tools::javac::tree::JCTree$JCBindingPattern;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCCase = ::com::sun::tools::javac::tree::JCTree$JCCase;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCDefaultCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel;
using $JCTree$JCDoWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop;
using $JCTree$JCEnhancedForLoop = ::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop;
using $JCTree$JCErroneous = ::com::sun::tools::javac::tree::JCTree$JCErroneous;
using $JCTree$JCExports = ::com::sun::tools::javac::tree::JCTree$JCExports;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCForLoop = ::com::sun::tools::javac::tree::JCTree$JCForLoop;
using $JCTree$JCGuardPattern = ::com::sun::tools::javac::tree::JCTree$JCGuardPattern;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCIf = ::com::sun::tools::javac::tree::JCTree$JCIf;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCLabeledStatement = ::com::sun::tools::javac::tree::JCTree$JCLabeledStatement;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCModuleDecl = ::com::sun::tools::javac::tree::JCTree$JCModuleDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCOpens = ::com::sun::tools::javac::tree::JCTree$JCOpens;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$JCParenthesizedPattern = ::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
using $JCTree$JCProvides = ::com::sun::tools::javac::tree::JCTree$JCProvides;
using $JCTree$JCRequires = ::com::sun::tools::javac::tree::JCTree$JCRequires;
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
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $JCTree$JCUses = ::com::sun::tools::javac::tree::JCTree$JCUses;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWhileLoop = ::com::sun::tools::javac::tree::JCTree$JCWhileLoop;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $JCTree$LetExpr = ::com::sun::tools::javac::tree::JCTree$LetExpr;
using $JCTree$TypeBoundKind = ::com::sun::tools::javac::tree::JCTree$TypeBoundKind;
using $JCTree$Visitor = ::com::sun::tools::javac::tree::JCTree$Visitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$MethodInfo _TreeScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TreeScanner::*)()>(&TreeScanner::init$))},
	{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"scan", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree;>;)V", $PUBLIC},
	{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC},
	{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC},
	{"visitAssert", "(Lcom/sun/tools/javac/tree/JCTree$JCAssert;)V", nullptr, $PUBLIC},
	{"visitAssign", "(Lcom/sun/tools/javac/tree/JCTree$JCAssign;)V", nullptr, $PUBLIC},
	{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC},
	{"visitBinary", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)V", nullptr, $PUBLIC},
	{"visitBindingPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCBindingPattern;)V", nullptr, $PUBLIC},
	{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC},
	{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC},
	{"visitCase", "(Lcom/sun/tools/javac/tree/JCTree$JCCase;)V", nullptr, $PUBLIC},
	{"visitCatch", "(Lcom/sun/tools/javac/tree/JCTree$JCCatch;)V", nullptr, $PUBLIC},
	{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC},
	{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC},
	{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC},
	{"visitDefaultCaseLabel", "(Lcom/sun/tools/javac/tree/JCTree$JCDefaultCaseLabel;)V", nullptr, $PUBLIC},
	{"visitDoLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCDoWhileLoop;)V", nullptr, $PUBLIC},
	{"visitErroneous", "(Lcom/sun/tools/javac/tree/JCTree$JCErroneous;)V", nullptr, $PUBLIC},
	{"visitExec", "(Lcom/sun/tools/javac/tree/JCTree$JCExpressionStatement;)V", nullptr, $PUBLIC},
	{"visitExports", "(Lcom/sun/tools/javac/tree/JCTree$JCExports;)V", nullptr, $PUBLIC},
	{"visitForLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCForLoop;)V", nullptr, $PUBLIC},
	{"visitForeachLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCEnhancedForLoop;)V", nullptr, $PUBLIC},
	{"visitGuardPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCGuardPattern;)V", nullptr, $PUBLIC},
	{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC},
	{"visitIf", "(Lcom/sun/tools/javac/tree/JCTree$JCIf;)V", nullptr, $PUBLIC},
	{"visitImport", "(Lcom/sun/tools/javac/tree/JCTree$JCImport;)V", nullptr, $PUBLIC},
	{"visitIndexed", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayAccess;)V", nullptr, $PUBLIC},
	{"visitLabelled", "(Lcom/sun/tools/javac/tree/JCTree$JCLabeledStatement;)V", nullptr, $PUBLIC},
	{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC},
	{"visitLetExpr", "(Lcom/sun/tools/javac/tree/JCTree$LetExpr;)V", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/tools/javac/tree/JCTree$JCLiteral;)V", nullptr, $PUBLIC},
	{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC},
	{"visitModifiers", "(Lcom/sun/tools/javac/tree/JCTree$JCModifiers;)V", nullptr, $PUBLIC},
	{"visitModuleDef", "(Lcom/sun/tools/javac/tree/JCTree$JCModuleDecl;)V", nullptr, $PUBLIC},
	{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC},
	{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC},
	{"visitOpens", "(Lcom/sun/tools/javac/tree/JCTree$JCOpens;)V", nullptr, $PUBLIC},
	{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC},
	{"visitParens", "(Lcom/sun/tools/javac/tree/JCTree$JCParens;)V", nullptr, $PUBLIC},
	{"visitParenthesizedPattern", "(Lcom/sun/tools/javac/tree/JCTree$JCParenthesizedPattern;)V", nullptr, $PUBLIC},
	{"visitProvides", "(Lcom/sun/tools/javac/tree/JCTree$JCProvides;)V", nullptr, $PUBLIC},
	{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC},
	{"visitRequires", "(Lcom/sun/tools/javac/tree/JCTree$JCRequires;)V", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC},
	{"visitSkip", "(Lcom/sun/tools/javac/tree/JCTree$JCSkip;)V", nullptr, $PUBLIC},
	{"visitSwitch", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitch;)V", nullptr, $PUBLIC},
	{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC},
	{"visitSynchronized", "(Lcom/sun/tools/javac/tree/JCTree$JCSynchronized;)V", nullptr, $PUBLIC},
	{"visitThrow", "(Lcom/sun/tools/javac/tree/JCTree$JCThrow;)V", nullptr, $PUBLIC},
	{"visitTopLevel", "(Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;)V", nullptr, $PUBLIC},
	{"visitTree", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC},
	{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC},
	{"visitTypeApply", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeApply;)V", nullptr, $PUBLIC},
	{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeBoundKind", "(Lcom/sun/tools/javac/tree/JCTree$TypeBoundKind;)V", nullptr, $PUBLIC},
	{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC},
	{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC},
	{"visitTypeIntersection", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeIntersection;)V", nullptr, $PUBLIC},
	{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC},
	{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC},
	{"visitTypeUnion", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeUnion;)V", nullptr, $PUBLIC},
	{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC},
	{"visitUses", "(Lcom/sun/tools/javac/tree/JCTree$JCUses;)V", nullptr, $PUBLIC},
	{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC},
	{"visitWhileLoop", "(Lcom/sun/tools/javac/tree/JCTree$JCWhileLoop;)V", nullptr, $PUBLIC},
	{"visitWildcard", "(Lcom/sun/tools/javac/tree/JCTree$JCWildcard;)V", nullptr, $PUBLIC},
	{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeScanner_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.JCTree$Visitor", "com.sun.tools.javac.tree.JCTree", "Visitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.TreeScanner",
	"com.sun.tools.javac.tree.JCTree$Visitor",
	nullptr,
	nullptr,
	_TreeScanner_MethodInfo_,
	nullptr,
	nullptr,
	_TreeScanner_InnerClassesInfo_
};

$Object* allocate$TreeScanner($Class* clazz) {
	return $of($alloc(TreeScanner));
}

void TreeScanner::init$() {
	$JCTree$Visitor::init$();
}

void TreeScanner::scan($JCTree* tree) {
	if (tree != nullptr) {
		tree->accept(this);
	}
}

void TreeScanner::scan($List* trees) {
	if (trees != nullptr) {
		{
			$var($List, l, trees);
			for (; l->nonEmpty(); $assign(l, l->tail)) {
				scan($cast($JCTree, $nc(l)->head));
			}
		}
	}
}

void TreeScanner::visitTopLevel($JCTree$JCCompilationUnit* tree) {
	scan($nc(tree)->defs);
}

void TreeScanner::visitPackageDef($JCTree$JCPackageDecl* tree) {
	scan($nc(tree)->annotations);
	scan(static_cast<$JCTree*>($nc(tree)->pid));
}

void TreeScanner::visitModuleDef($JCTree$JCModuleDecl* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan(static_cast<$JCTree*>($nc(tree)->qualId));
	scan($nc(tree)->directives);
}

void TreeScanner::visitExports($JCTree$JCExports* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->qualid));
	scan($nc(tree)->moduleNames);
}

void TreeScanner::visitOpens($JCTree$JCOpens* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->qualid));
	scan($nc(tree)->moduleNames);
}

void TreeScanner::visitProvides($JCTree$JCProvides* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->serviceName));
	scan($nc(tree)->implNames);
}

void TreeScanner::visitRequires($JCTree$JCRequires* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->moduleName));
}

void TreeScanner::visitUses($JCTree$JCUses* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->qualid));
}

void TreeScanner::visitImport($JCTree$JCImport* tree) {
	scan($nc(tree)->qualid);
}

void TreeScanner::visitClassDef($JCTree$JCClassDecl* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan($nc(tree)->typarams);
	scan(static_cast<$JCTree*>($nc(tree)->extending));
	scan($nc(tree)->implementing);
	scan($nc(tree)->permitting);
	scan($nc(tree)->defs);
}

void TreeScanner::visitMethodDef($JCTree$JCMethodDecl* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan(static_cast<$JCTree*>($nc(tree)->restype));
	scan($nc(tree)->typarams);
	scan(static_cast<$JCTree*>($nc(tree)->recvparam));
	scan($nc(tree)->params);
	scan($nc(tree)->thrown);
	scan(static_cast<$JCTree*>($nc(tree)->defaultValue));
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitVarDef($JCTree$JCVariableDecl* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->mods));
	scan(static_cast<$JCTree*>($nc(tree)->vartype));
	scan(static_cast<$JCTree*>($nc(tree)->nameexpr));
	scan(static_cast<$JCTree*>($nc(tree)->init));
}

void TreeScanner::visitSkip($JCTree$JCSkip* tree) {
}

void TreeScanner::visitBlock($JCTree$JCBlock* tree) {
	scan($nc(tree)->stats);
}

void TreeScanner::visitDoLoop($JCTree$JCDoWhileLoop* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->body));
	scan(static_cast<$JCTree*>($nc(tree)->cond));
}

void TreeScanner::visitWhileLoop($JCTree$JCWhileLoop* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitForLoop($JCTree$JCForLoop* tree) {
	scan($nc(tree)->init);
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan($nc(tree)->step);
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitForeachLoop($JCTree$JCEnhancedForLoop* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->var));
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitLabelled($JCTree$JCLabeledStatement* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitSwitch($JCTree$JCSwitch* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->selector));
	scan($nc(tree)->cases);
}

void TreeScanner::visitCase($JCTree$JCCase* tree) {
	scan($nc(tree)->labels);
	scan($nc(tree)->stats);
}

void TreeScanner::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->selector));
	scan($nc(tree)->cases);
}

void TreeScanner::visitSynchronized($JCTree$JCSynchronized* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->lock));
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitTry($JCTree$JCTry* tree) {
	scan($nc(tree)->resources);
	scan(static_cast<$JCTree*>($nc(tree)->body));
	scan($nc(tree)->catchers);
	scan(static_cast<$JCTree*>($nc(tree)->finalizer));
}

void TreeScanner::visitCatch($JCTree$JCCatch* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->param));
	scan(static_cast<$JCTree*>($nc(tree)->body));
}

void TreeScanner::visitConditional($JCTree$JCConditional* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan(static_cast<$JCTree*>($nc(tree)->truepart));
	scan(static_cast<$JCTree*>($nc(tree)->falsepart));
}

void TreeScanner::visitIf($JCTree$JCIf* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan(static_cast<$JCTree*>($nc(tree)->thenpart));
	scan(static_cast<$JCTree*>($nc(tree)->elsepart));
}

void TreeScanner::visitExec($JCTree$JCExpressionStatement* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
}

void TreeScanner::visitBreak($JCTree$JCBreak* tree) {
}

void TreeScanner::visitYield($JCTree$JCYield* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->value));
}

void TreeScanner::visitContinue($JCTree$JCContinue* tree) {
}

void TreeScanner::visitReturn($JCTree$JCReturn* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
}

void TreeScanner::visitThrow($JCTree$JCThrow* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
}

void TreeScanner::visitAssert($JCTree$JCAssert* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->cond));
	scan(static_cast<$JCTree*>($nc(tree)->detail));
}

void TreeScanner::visitApply($JCTree$JCMethodInvocation* tree) {
	scan($nc(tree)->typeargs);
	scan(static_cast<$JCTree*>($nc(tree)->meth));
	scan($nc(tree)->args);
}

void TreeScanner::visitNewClass($JCTree$JCNewClass* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->encl));
	scan($nc(tree)->typeargs);
	scan(static_cast<$JCTree*>($nc(tree)->clazz));
	scan($nc(tree)->args);
	scan(static_cast<$JCTree*>($nc(tree)->def));
}

void TreeScanner::visitNewArray($JCTree$JCNewArray* tree) {
	$useLocalCurrentObjectStackCache();
	scan($nc(tree)->annotations);
	scan(static_cast<$JCTree*>($nc(tree)->elemtype));
	scan($nc(tree)->dims);
	{
		$var($Iterator, i$, $nc($nc(tree)->dimAnnotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, annos, $cast($List, i$->next()));
			scan(annos);
		}
	}
	scan(tree->elems);
}

void TreeScanner::visitLambda($JCTree$JCLambda* tree) {
	scan($nc(tree)->body);
	scan($nc(tree)->params);
}

void TreeScanner::visitParens($JCTree$JCParens* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
}

void TreeScanner::visitAssign($JCTree$JCAssign* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->lhs));
	scan(static_cast<$JCTree*>($nc(tree)->rhs));
}

void TreeScanner::visitAssignop($JCTree$JCAssignOp* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->lhs));
	scan(static_cast<$JCTree*>($nc(tree)->rhs));
}

void TreeScanner::visitUnary($JCTree$JCUnary* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->arg));
}

void TreeScanner::visitBinary($JCTree$JCBinary* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->lhs));
	scan(static_cast<$JCTree*>($nc(tree)->rhs));
}

void TreeScanner::visitTypeCast($JCTree$JCTypeCast* tree) {
	scan($nc(tree)->clazz);
	scan(static_cast<$JCTree*>($nc(tree)->expr));
}

void TreeScanner::visitTypeTest($JCTree$JCInstanceOf* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	scan($nc(tree)->pattern);
}

void TreeScanner::visitBindingPattern($JCTree$JCBindingPattern* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->var));
}

void TreeScanner::visitDefaultCaseLabel($JCTree$JCDefaultCaseLabel* tree) {
}

void TreeScanner::visitParenthesizedPattern($JCTree$JCParenthesizedPattern* that) {
	scan(static_cast<$JCTree*>($nc(that)->pattern));
}

void TreeScanner::visitGuardPattern($JCTree$JCGuardPattern* that) {
	scan(static_cast<$JCTree*>($nc(that)->patt));
	scan(static_cast<$JCTree*>($nc(that)->expr));
}

void TreeScanner::visitIndexed($JCTree$JCArrayAccess* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->indexed));
	scan(static_cast<$JCTree*>($nc(tree)->index));
}

void TreeScanner::visitSelect($JCTree$JCFieldAccess* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->selected));
}

void TreeScanner::visitReference($JCTree$JCMemberReference* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->expr));
	scan($nc(tree)->typeargs);
}

void TreeScanner::visitIdent($JCTree$JCIdent* tree) {
}

void TreeScanner::visitLiteral($JCTree$JCLiteral* tree) {
}

void TreeScanner::visitTypeIdent($JCTree$JCPrimitiveTypeTree* tree) {
}

void TreeScanner::visitTypeArray($JCTree$JCArrayTypeTree* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->elemtype));
}

void TreeScanner::visitTypeApply($JCTree$JCTypeApply* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->clazz));
	scan($nc(tree)->arguments);
}

void TreeScanner::visitTypeUnion($JCTree$JCTypeUnion* tree) {
	scan($nc(tree)->alternatives);
}

void TreeScanner::visitTypeIntersection($JCTree$JCTypeIntersection* tree) {
	scan($nc(tree)->bounds);
}

void TreeScanner::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	scan($nc(tree)->annotations);
	scan($nc(tree)->bounds);
}

void TreeScanner::visitWildcard($JCTree$JCWildcard* tree) {
	scan(static_cast<$JCTree*>($nc(tree)->kind));
	if ($nc(tree)->inner != nullptr) {
		scan(tree->inner);
	}
}

void TreeScanner::visitTypeBoundKind($JCTree$TypeBoundKind* that) {
}

void TreeScanner::visitModifiers($JCTree$JCModifiers* tree) {
	scan($nc(tree)->annotations);
}

void TreeScanner::visitAnnotation($JCTree$JCAnnotation* tree) {
	scan($nc(tree)->annotationType);
	scan($nc(tree)->args);
}

void TreeScanner::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	scan($nc(tree)->annotations);
	scan(static_cast<$JCTree*>($nc(tree)->underlyingType));
}

void TreeScanner::visitErroneous($JCTree$JCErroneous* tree) {
}

void TreeScanner::visitLetExpr($JCTree$LetExpr* tree) {
	scan($nc(tree)->defs);
	scan(static_cast<$JCTree*>($nc(tree)->expr));
}

void TreeScanner::visitTree($JCTree* tree) {
	$Assert::error();
}

TreeScanner::TreeScanner() {
}

$Class* TreeScanner::load$($String* name, bool initialize) {
	$loadClass(TreeScanner, name, initialize, &_TreeScanner_ClassInfo_, allocate$TreeScanner);
	return class$;
}

$Class* TreeScanner::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com