#ifndef _com_sun_tools_javac_tree_TreeInfo_h_
#define _com_sun_tools_javac_tree_TreeInfo_h_
//$ class com.sun.tools.javac.tree.TreeInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree$Kind;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Env;
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
					class DCTree$DCDocComment;
					class EndPosTable;
					class JCTree;
					class JCTree$JCBindingPattern;
					class JCTree$JCCase;
					class JCTree$JCCaseLabel;
					class JCTree$JCCatch;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCExpression;
					class JCTree$JCLabeledStatement;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModifiers;
					class JCTree$JCModuleDecl;
					class JCTree$JCPattern;
					class JCTree$JCPolyExpression$PolyKind;
					class JCTree$JCVariableDecl;
					class JCTree$Tag;
					class TreeInfo$PatternPrimaryType;
					class TreeInfo$PosKind;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import TreeInfo : public ::java::lang::Object {
	$class(TreeInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TreeInfo();
	void init$();
	static ::com::sun::tools::javac::util::List* args(::com::sun::tools::javac::tree::JCTree* t);
	static ::com::sun::tools::javac::util::Name* calledMethodName(::com::sun::tools::javac::tree::JCTree* tree);
	static bool containsTypeAnnotation(::com::sun::tools::javac::tree::JCTree* e);
	static ::com::sun::tools::javac::tree::JCTree* declarationFor(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* diagEndPos(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* diagnosticPositionFor(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* diagnosticPositionFor(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree, bool returnNullIfNotFound);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* diagnosticPositionFor(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::List* trees);
	static int32_t endPos(::com::sun::tools::javac::tree::JCTree* tree);
	static int32_t finalizerPos(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::TreeInfo$PosKind* posKind);
	static ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* firstConstructorCall(::com::sun::tools::javac::tree::JCTree* tree);
	static int64_t firstFlag(int64_t flags);
	static int32_t firstStatPos(::com::sun::tools::javac::tree::JCTree* tree);
	static $String* flagNames(int64_t flags);
	static int64_t flags(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::util::Name* fullName(::com::sun::tools::javac::tree::JCTree* tree);
	static $String* getCommentText(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::tree::DCTree$DCDocComment* getCommentTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::util::Name* getConstructorInvocationName(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::util::Names* names);
	static int32_t getEndPos(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::EndPosTable* endPosTable);
	static ::com::sun::tools::javac::tree::JCTree$JCModifiers* getModifiers(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::tree::JCTree$JCModuleDecl* getModule(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* t);
	static int32_t getStartPos(::com::sun::tools::javac::tree::JCTree* tree);
	static bool hasConstructors(::com::sun::tools::javac::util::List* trees);
	static ::com::sun::tools::javac::tree::JCTree* innermostType(::com::sun::tools::javac::tree::JCTree* type, bool skipAnnos);
	static bool isCanonicalConstructor(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isCompactConstructor(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isConstructor(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isDeclaration(::com::sun::tools::javac::tree::JCTree* node);
	static bool isDiamond(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isEnumInit(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isErrorEnumSwitch(::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases);
	static bool isExpressionStatement(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	static bool isIdentOrThisDotIdent(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isInAnnotation(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree);
	static bool isInitialConstructor(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isModuleInfo(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree);
	static bool isMultiCatch(::com::sun::tools::javac::tree::JCTree$JCCatch* catchClause);
	static bool isNull(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isPackageInfo(::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* tree);
	static bool isReceiverParam(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isSelfCall(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isStatement(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isStaticSelector(::com::sun::tools::javac::tree::JCTree* base, ::com::sun::tools::javac::util::Names* names);
	static bool isStaticSym(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isSuperCall(::com::sun::tools::javac::tree::JCTree* tree);
	static bool isSyntheticInit(::com::sun::tools::javac::tree::JCTree* stat);
	static bool isThisQualifier(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* lambda$diagnosticPositionFor$4(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* t);
	static bool lambda$diagnosticPositionFor$5(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* t);
	static ::java::util::stream::Stream* lambda$isErrorEnumSwitch$6(::com::sun::tools::javac::tree::JCTree$JCCase* c);
	static bool lambda$isErrorEnumSwitch$7(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* p);
	static ::com::sun::tools::javac::code::Type* lambda$recordFieldTypes$3(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	static bool lambda$recordFields$0(::com::sun::tools::javac::tree::JCTree* t);
	static ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* lambda$recordFields$1(::com::sun::tools::javac::tree::JCTree* t);
	static bool lambda$recordFields$2(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	static ::com::sun::tools::javac::util::Name* name(::com::sun::tools::javac::tree::JCTree* tree);
	static bool nonstaticSelect(::com::sun::tools::javac::tree::JCTree* tree);
	static int32_t opPrec(::com::sun::tools::javac::tree::JCTree$Tag* op);
	static ::com::sun::tools::javac::util::List* pathFor(::com::sun::tools::javac::tree::JCTree* node, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* unit);
	static int32_t positionFor(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::tree::JCTree$JCBindingPattern* primaryPatternTree(::com::sun::tools::javac::tree::JCTree$JCPattern* pat);
	static ::com::sun::tools::javac::tree::TreeInfo$PatternPrimaryType* primaryPatternType(::com::sun::tools::javac::tree::JCTree$JCPattern* pat);
	static ::com::sun::tools::javac::util::List* recordFieldTypes(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	static ::com::sun::tools::javac::util::List* recordFields(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	static ::com::sun::tools::javac::tree::JCTree* referencedStatement(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree);
	static ::com::sun::tools::javac::comp::Env* scopeFor(::com::sun::tools::javac::tree::JCTree* node, ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* unit);
	static ::com::sun::tools::javac::comp::Env* scopeFor(::com::sun::tools::javac::util::List* path);
	static void setPolyKind(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind* pkind);
	static void setSymbol(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Symbol* sym);
	static void setVarargsElement(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* varargsElement);
	static ::com::sun::tools::javac::tree::JCTree$JCExpression* skipParens(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	static ::com::sun::tools::javac::tree::JCTree* skipParens(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::code::Symbol* symbol(::com::sun::tools::javac::tree::JCTree* tree);
	static ::com::sun::tools::javac::code::Symbol* symbolFor(::com::sun::tools::javac::tree::JCTree* node);
	static ::com::sun::tools::javac::code::Symbol* symbolForImpl(::com::sun::tools::javac::tree::JCTree* node);
	static ::com::sun::source::tree::Tree$Kind* tagToKind(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	static ::com::sun::tools::javac::tree::JCTree$JCExpression* typeIn(::com::sun::tools::javac::tree::JCTree$JCExpression* tree);
	static ::com::sun::tools::javac::util::List* types(::com::sun::tools::javac::util::List* trees);
	static const int32_t notExpression = (-1);
	static const int32_t noPrec = 0;
	static const int32_t assignPrec = 1;
	static const int32_t assignopPrec = 2;
	static const int32_t condPrec = 3;
	static const int32_t orPrec = 4;
	static const int32_t andPrec = 5;
	static const int32_t bitorPrec = 6;
	static const int32_t bitxorPrec = 7;
	static const int32_t bitandPrec = 8;
	static const int32_t eqPrec = 9;
	static const int32_t ordPrec = 10;
	static const int32_t shiftPrec = 11;
	static const int32_t addPrec = 12;
	static const int32_t mulPrec = 13;
	static const int32_t prefixPrec = 14;
	static const int32_t postfixPrec = 15;
	static const int32_t precCount = 16;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo_h_