#ifndef _com_sun_tools_javac_comp_TreeDiffer_h_
#define _com_sun_tools_javac_comp_TreeDiffer_h_
//$ class com.sun.tools.javac.comp.TreeDiffer
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

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
					class JCTree$JCPrimitiveTypeTree;
					class JCTree$JCProvides;
					class JCTree$JCRequires;
					class JCTree$JCReturn;
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
				namespace util {
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import TreeDiffer : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(TreeDiffer, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	TreeDiffer();
	void init$(::java::util::Collection* symbols, ::java::util::Collection* otherSymbols);
	static ::java::util::Map* equiv(::java::util::Collection* symbols, ::java::util::Collection* otherSymbols);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual bool scan(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree* parameter);
	bool scan(::java::lang::Iterable* xs, ::java::lang::Iterable* ys);
	bool scanDimAnnotations(::com::sun::tools::javac::util::List* xs, ::com::sun::tools::javac::util::List* ys);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitCase(::com::sun::tools::javac::tree::JCTree$JCCase* tree) override;
	virtual void visitCatch(::com::sun::tools::javac::tree::JCTree$JCCatch* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitDefaultCaseLabel(::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitErroneous(::com::sun::tools::javac::tree::JCTree$JCErroneous* tree) override;
	virtual void visitExec(::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* tree) override;
	virtual void visitExports(::com::sun::tools::javac::tree::JCTree$JCExports* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitImport(::com::sun::tools::javac::tree::JCTree$JCImport* tree) override;
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitLetExpr(::com::sun::tools::javac::tree::JCTree$LetExpr* tree) override;
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitModifiers(::com::sun::tools::javac::tree::JCTree$JCModifiers* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitOpens(::com::sun::tools::javac::tree::JCTree$JCOpens* tree) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	virtual void visitProvides(::com::sun::tools::javac::tree::JCTree$JCProvides* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitRequires(::com::sun::tools::javac::tree::JCTree$JCRequires* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitSynchronized(::com::sun::tools::javac::tree::JCTree$JCSynchronized* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTopLevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* tree) override;
	virtual void visitTypeBoundKind(::com::sun::tools::javac::tree::JCTree$TypeBoundKind* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitTypeIdent(::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree* tree) override;
	virtual void visitTypeIntersection(::com::sun::tools::javac::tree::JCTree$JCTypeIntersection* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* tree) override;
	virtual void visitTypeUnion(::com::sun::tools::javac::tree::JCTree$JCTypeUnion* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitUses(::com::sun::tools::javac::tree::JCTree$JCUses* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitWildcard(::com::sun::tools::javac::tree::JCTree$JCWildcard* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::tree::JCTree* parameter = nullptr;
	bool result = false;
	::java::util::Map* equiv$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TreeDiffer_h_