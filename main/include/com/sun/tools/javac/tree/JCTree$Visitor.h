#ifndef _com_sun_tools_javac_tree_JCTree$Visitor_h_
#define _com_sun_tools_javac_tree_JCTree$Visitor_h_
//$ class com.sun.tools.javac.tree.JCTree$Visitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCAnnotatedType;
					class JCTree$JCAnnotation;
					class JCTree$JCArrayAccess;
					class JCTree$JCArrayTypeTree;
					class JCTree$JCAssert;
					class JCTree$JCAssign;
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCBindingPattern;
					class JCTree$JCBlock;
					class JCTree$JCBreak;
					class JCTree$JCCase;
					class JCTree$JCCatch;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCConditional;
					class JCTree$JCContinue;
					class JCTree$JCDefaultCaseLabel;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCErroneous;
					class JCTree$JCExports;
					class JCTree$JCExpressionStatement;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCGuardPattern;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCImport;
					class JCTree$JCInstanceOf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLambda;
					class JCTree$JCLiteral;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModifiers;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCOpens;
					class JCTree$JCPackageDecl;
					class JCTree$JCParens;
					class JCTree$JCParenthesizedPattern;
					class JCTree$JCPrimitiveTypeTree;
					class JCTree$JCProvides;
					class JCTree$JCRequires;
					class JCTree$JCReturn;
					class JCTree$JCSkip;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCSynchronized;
					class JCTree$JCThrow;
					class JCTree$JCTry;
					class JCTree$JCTypeApply;
					class JCTree$JCTypeCast;
					class JCTree$JCTypeIntersection;
					class JCTree$JCTypeParameter;
					class JCTree$JCTypeUnion;
					class JCTree$JCUnary;
					class JCTree$JCUses;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCWildcard;
					class JCTree$JCYield;
					class JCTree$LetExpr;
					class JCTree$TypeBoundKind;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$Visitor : public ::java::lang::Object {
	$class(JCTree$Visitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JCTree$Visitor();
	void init$();
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* that);
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* that);
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* that);
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* that);
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* that);
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* that);
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* that);
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* that);
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* that);
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* that);
	virtual void visitCase(::com::sun::tools::javac::tree::JCTree$JCCase* that);
	virtual void visitCatch(::com::sun::tools::javac::tree::JCTree$JCCatch* that);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* that);
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* that);
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* that);
	virtual void visitDefaultCaseLabel(::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel* that);
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* that);
	virtual void visitErroneous(::com::sun::tools::javac::tree::JCTree$JCErroneous* that);
	virtual void visitExec(::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* that);
	virtual void visitExports(::com::sun::tools::javac::tree::JCTree$JCExports* that);
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* that);
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* that);
	virtual void visitGuardPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* that);
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* that);
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* that);
	virtual void visitImport(::com::sun::tools::javac::tree::JCTree$JCImport* that);
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* that);
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* that);
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* that);
	virtual void visitLetExpr(::com::sun::tools::javac::tree::JCTree$LetExpr* that);
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* that);
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* that);
	virtual void visitModifiers(::com::sun::tools::javac::tree::JCTree$JCModifiers* that);
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* that);
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* that);
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* that);
	virtual void visitOpens(::com::sun::tools::javac::tree::JCTree$JCOpens* that);
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* that);
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* that);
	virtual void visitParenthesizedPattern(::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern* that);
	virtual void visitProvides(::com::sun::tools::javac::tree::JCTree$JCProvides* that);
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* that);
	virtual void visitRequires(::com::sun::tools::javac::tree::JCTree$JCRequires* that);
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* that);
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* that);
	virtual void visitSkip(::com::sun::tools::javac::tree::JCTree$JCSkip* that);
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* that);
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* that);
	virtual void visitSynchronized(::com::sun::tools::javac::tree::JCTree$JCSynchronized* that);
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* that);
	virtual void visitTopLevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* that);
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* that);
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* that);
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* that);
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* that);
	virtual void visitTypeBoundKind(::com::sun::tools::javac::tree::JCTree$TypeBoundKind* that);
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* that);
	virtual void visitTypeIdent(::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* that);
	virtual void visitTypeIntersection(::com::sun::tools::javac::tree::JCTree$JCTypeIntersection* that);
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* that);
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* that);
	virtual void visitTypeUnion(::com::sun::tools::javac::tree::JCTree$JCTypeUnion* that);
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* that);
	virtual void visitUses(::com::sun::tools::javac::tree::JCTree$JCUses* that);
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* that);
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* that);
	virtual void visitWildcard(::com::sun::tools::javac::tree::JCTree$JCWildcard* that);
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* that);
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$Visitor_h_