#ifndef _com_sun_tools_javac_tree_Pretty_h_
#define _com_sun_tools_javac_tree_Pretty_h_
//$ class com.sun.tools.javac.tree.Pretty
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>

#pragma push_macro("PREFERRED_LENGTH")
#undef PREFERRED_LENGTH

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class DocCommentTable;
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
					class JCTree$Tag;
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
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import Pretty : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Pretty, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Pretty();
	void init$(::java::io::Writer* out, bool sourceOutput);
	virtual void align();
	virtual void close(int32_t contextPrec, int32_t ownPrec);
	virtual void indent();
	virtual bool isEnumerator(::com::sun::tools::javac::tree::JCTree* t);
	virtual bool isUsed(::com::sun::tools::javac::code::Symbol* t, ::com::sun::tools::javac::tree::JCTree* cdef);
	static int32_t lineEndPos($String* s, int32_t start);
	virtual void open(int32_t contextPrec, int32_t ownPrec);
	virtual $String* operatorName(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual void print(Object$* s);
	virtual void printAnnotations(::com::sun::tools::javac::util::List* trees);
	void printBaseElementType(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void printBlock(::com::sun::tools::javac::util::List* stats);
	void printBrackets(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void printDocComment(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void printEnumBody(::com::sun::tools::javac::util::List* stats);
	virtual void printExpr(::com::sun::tools::javac::tree::JCTree* tree, int32_t prec);
	virtual void printExpr(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void printExprs(::com::sun::tools::javac::util::List* trees, $String* sep);
	virtual void printExprs(::com::sun::tools::javac::util::List* trees);
	virtual void printFlags(int64_t flags);
	virtual void printPattern(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void printStat(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void printStats(::com::sun::tools::javac::util::List* trees);
	virtual void printTypeAnnotations(::com::sun::tools::javac::util::List* trees);
	virtual void printTypeParameters(::com::sun::tools::javac::util::List* trees);
	virtual void printUnit(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef);
	virtual void println();
	static $String* toSimpleString(::com::sun::tools::javac::tree::JCTree* tree);
	static $String* toSimpleString(::com::sun::tools::javac::tree::JCTree* tree, int32_t maxLength);
	virtual void undent();
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* patt) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitCase(::com::sun::tools::javac::tree::JCTree$JCCase* tree) override;
	virtual void visitCatch(::com::sun::tools::javac::tree::JCTree$JCCatch* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitDefaultCaseLabel(::com::sun::tools::javac::tree::JCTree$JCDefaultCaseLabel* that) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitErroneous(::com::sun::tools::javac::tree::JCTree$JCErroneous* tree) override;
	virtual void visitExec(::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* tree) override;
	virtual void visitExports(::com::sun::tools::javac::tree::JCTree$JCExports* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitGuardPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* patt) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitImport(::com::sun::tools::javac::tree::JCTree$JCImport* tree) override;
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitLetExpr(::com::sun::tools::javac::tree::JCTree$LetExpr* tree) override;
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitModifiers(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitOpens(::com::sun::tools::javac::tree::JCTree$JCOpens* tree) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitParenthesizedPattern(::com::sun::tools::javac::tree::JCTree$JCParenthesizedPattern* patt) override;
	virtual void visitProvides(::com::sun::tools::javac::tree::JCTree$JCProvides* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitRequires(::com::sun::tools::javac::tree::JCTree$JCRequires* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSkip(::com::sun::tools::javac::tree::JCTree$JCSkip* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitSynchronized(::com::sun::tools::javac::tree::JCTree$JCSynchronized* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTopLevel(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree) override;
	virtual void visitTree(::com::sun::tools::javac::tree::JCTree* tree) override;
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
	bool sourceOutput = false;
	::java::io::Writer* out = nullptr;
	int32_t width = 0;
	int32_t lmargin = 0;
	::com::sun::tools::javac::util::Name* enclClassName = nullptr;
	::com::sun::tools::javac::tree::DocCommentTable* docComments = nullptr;
	static $String* trimSequence;
	static const int32_t PREFERRED_LENGTH = 20;
	$String* lineSep = nullptr;
	int32_t prec = 0;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("PREFERRED_LENGTH")

#endif // _com_sun_tools_javac_tree_Pretty_h_