#ifndef _com_sun_tools_javac_jvm_Gen_h_
#define _com_sun_tools_javac_jvm_Gen_h_
//$ class com.sun.tools.javac.jvm.Gen
//$ extends com.sun.tools.javac.tree.JCTree$Visitor

#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$OperatorSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Types;
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
					class Annotate;
					class Check;
					class Env;
					class Lower;
					class Resolve;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Code;
					class Code$Chain;
					class Code$StackMapFormat;
					class Gen$ClassReferenceVisitor;
					class Items;
					class Items$CondItem;
					class Items$Item;
					class Items$LocalItem;
					class PoolWriter;
					class StringConcat;
					class Target;
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
					class EndPosTable;
					class JCTree;
					class JCTree$JCArrayAccess;
					class JCTree$JCAssign;
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCBlock;
					class JCTree$JCBreak;
					class JCTree$JCCatch;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCConditional;
					class JCTree$JCContinue;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCExpression;
					class JCTree$JCExpressionStatement;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCInstanceOf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLiteral;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCParens;
					class JCTree$JCReturn;
					class JCTree$JCSkip;
					class JCTree$JCStatement;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCSynchronized;
					class JCTree$JCThrow;
					class JCTree$JCTry;
					class JCTree$JCTypeCast;
					class JCTree$JCTypeUnion;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCWildcard;
					class JCTree$JCYield;
					class JCTree$LetExpr;
					class TreeMaker;
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
					class Context;
					class Context$Key;
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export Gen : public ::com::sun::tools::javac::tree::JCTree$Visitor {
	$class(Gen, 0, ::com::sun::tools::javac::tree::JCTree$Visitor)
public:
	Gen();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::Symbol* binaryQualifier(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Type* site);
	virtual void callMethod(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes, bool isStatic);
	virtual ::com::sun::tools::javac::util::List* catchTypesWithAnnotations(::com::sun::tools::javac::tree::JCTree$JCCatch* tree);
	virtual ::com::sun::tools::javac::util::List* catchTypesWithAnnotationsFromMulticatch(::com::sun::tools::javac::tree::JCTree$JCTypeUnion* tree, ::com::sun::tools::javac::util::List* first);
	::com::sun::tools::javac::code::Type* checkDimension(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	void checkDimensionInternal(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* t);
	void checkStringConstant(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, Object$* constValue);
	virtual ::com::sun::tools::javac::jvm::Items$Item* completeBinop(::com::sun::tools::javac::tree::JCTree* lhs, ::com::sun::tools::javac::tree::JCTree* rhs, ::com::sun::tools::javac::code::Symbol$OperatorSymbol* operator$);
	void doHandleSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree);
	virtual void emitMinusOne(int32_t tc);
	virtual void endFinalizerGap(::com::sun::tools::javac::comp::Env* env);
	virtual void endFinalizerGaps(::com::sun::tools::javac::comp::Env* from, ::com::sun::tools::javac::comp::Env* to);
	virtual void genArgs(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::util::List* pts);
	virtual void genCatch(::com::sun::tools::javac::tree::JCTree$JCCatch* tree, ::com::sun::tools::javac::comp::Env* env, int32_t startpc, int32_t endpc, ::com::sun::tools::javac::util::List* gaps);
	virtual bool genClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* cdef);
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* genCond(::com::sun::tools::javac::tree::JCTree* tree, int32_t crtFlags);
	virtual ::com::sun::tools::javac::jvm::Items$CondItem* genCond(::com::sun::tools::javac::tree::JCTree* _tree, bool markBranches);
	virtual void genDef(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::jvm::Items$Item* genExpr(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* pt);
	virtual void genFinalizer(::com::sun::tools::javac::comp::Env* env);
	void genLoop(::com::sun::tools::javac::tree::JCTree$JCStatement* loop, ::com::sun::tools::javac::tree::JCTree$JCStatement* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::util::List* step, bool testFirst);
	virtual void genMethod(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::comp::Env* env, bool fatcode);
	void genNullCheck(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void genStat(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, int32_t crtFlags);
	virtual void genStat(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual void genStats(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env, int32_t crtFlags);
	virtual void genStats(::com::sun::tools::javac::util::List* trees, ::com::sun::tools::javac::comp::Env* env);
	virtual void genTry(::com::sun::tools::javac::tree::JCTree* body, ::com::sun::tools::javac::util::List* catchers, ::com::sun::tools::javac::comp::Env* env);
	void generateReferencesToPrunedTree(::com::sun::tools::javac::code::Symbol$ClassSymbol* classSymbol);
	::com::sun::tools::javac::util::List* getAndRemoveNonFieldTAs(::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual ::com::sun::tools::javac::comp::Env* getAttrEnv();
	virtual ::com::sun::tools::javac::jvm::Code* getCode();
	virtual ::com::sun::tools::javac::jvm::Items* getItems();
	void handleSwitch(::com::sun::tools::javac::tree::JCTree* swtch, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases, bool patternSwitch);
	virtual bool hasFinally(::com::sun::tools::javac::tree::JCTree* target, ::com::sun::tools::javac::comp::Env* env);
	bool hasTry(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree);
	int32_t initCode(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::comp::Env* env, bool fatcode);
	static ::com::sun::tools::javac::jvm::Gen* instance(::com::sun::tools::javac::util::Context* context);
	bool isAccessSuper(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* enclMethod);
	virtual bool isConstantDynamic(::com::sun::tools::javac::code::Symbol* sym);
	virtual bool isInvokeDynamic(::com::sun::tools::javac::code::Symbol* sym);
	bool isOddAccessName(::com::sun::tools::javac::util::Name* name);
	virtual void loadIntConst(int32_t n);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeNewArray(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* type, int32_t ndims);
	virtual int32_t makeRef(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::jvm::Items$LocalItem* makeTemp(::com::sun::tools::javac::code::Type* type);
	bool nonVirtualForPrivateAccess(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::util::List* normalizeDefs(::com::sun::tools::javac::util::List* defs, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void normalizeMethod(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* md, ::com::sun::tools::javac::util::List* initCode, ::com::sun::tools::javac::util::List* initTAs);
	static int32_t one(int32_t tc);
	static void qsort2($ints* keys, $ints* values, int32_t lo, int32_t hi);
	virtual void registerCatch(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, int32_t startpc, int32_t endpc, int32_t handler_pc, int32_t catch_type);
	void reloadStackBeforeSwitchExpr();
	void setTypeAnnotationPositions(int32_t treePos);
	virtual ::com::sun::tools::javac::comp::Env* unwind(::com::sun::tools::javac::tree::JCTree* target, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::comp::Env* unwindBreak(::com::sun::tools::javac::tree::JCTree* target);
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitExec(::com::sun::tools::javac::tree::JCTree$JCExpressionStatement* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitIndexed(::com::sun::tools::javac::tree::JCTree$JCArrayAccess* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitLetExpr(::com::sun::tools::javac::tree::JCTree$LetExpr* tree) override;
	virtual void visitLiteral(::com::sun::tools::javac::tree::JCTree$JCLiteral* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSkip(::com::sun::tools::javac::tree::JCTree$JCSkip* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitSynchronized(::com::sun::tools::javac::tree::JCTree$JCSynchronized* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitTypeCast(::com::sun::tools::javac::tree::JCTree$JCTypeCast* tree) override;
	virtual void visitTypeTest(::com::sun::tools::javac::tree::JCTree$JCInstanceOf* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitWildcard(::com::sun::tools::javac::tree::JCTree$JCWildcard* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	static int32_t zero(int32_t tc);
	static ::com::sun::tools::javac::util::Context$Key* genKey;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	::com::sun::tools::javac::util::Name* accessDollar = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Lower* lower = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::jvm::StringConcat* concat = nullptr;
	::com::sun::tools::javac::jvm::Code$StackMapFormat* stackMap = nullptr;
	::com::sun::tools::javac::code::Type* methodType = nullptr;
	::com::sun::tools::javac::jvm::PoolWriter* poolWriter = nullptr;
	bool lineDebugInfo = false;
	bool varDebugInfo = false;
	bool genCrt = false;
	bool debugCode = false;
	bool disableVirtualizedPrivateInvoke = false;
	::com::sun::tools::javac::jvm::Code* code = nullptr;
	::com::sun::tools::javac::jvm::Items* items = nullptr;
	::com::sun::tools::javac::comp::Env* attrEnv = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel = nullptr;
	int32_t nerrs = 0;
	::com::sun::tools::javac::tree::EndPosTable* endPosTable = nullptr;
	bool inCondSwitchExpression = false;
	::com::sun::tools::javac::jvm::Code$Chain* switchExpressionTrueChain = nullptr;
	::com::sun::tools::javac::jvm::Code$Chain* switchExpressionFalseChain = nullptr;
	::com::sun::tools::javac::util::List* stackBeforeSwitchExpression = nullptr;
	::com::sun::tools::javac::jvm::Items$LocalItem* switchResult = nullptr;
	::java::util::Map* qualifiedSymbolCache = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::code::Type* pt = nullptr;
	::com::sun::tools::javac::jvm::Items$Item* result = nullptr;
	::com::sun::tools::javac::jvm::Gen$ClassReferenceVisitor* classReferenceVisitor = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen_h_