#ifndef _com_sun_tools_javac_comp_Flow$AssignAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$AssignAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$AssignAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$BaseAnalyzer

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$VarSymbol;
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
					class Flow;
					class Flow$FlowKind;
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
					class JCTree;
					class JCTree$JCAnnotatedType;
					class JCTree$JCAssert;
					class JCTree$JCAssign;
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCBindingPattern;
					class JCTree$JCBlock;
					class JCTree$JCBreak;
					class JCTree$JCClassDecl;
					class JCTree$JCConditional;
					class JCTree$JCContinue;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCExpression;
					class JCTree$JCFieldAccess;
					class JCTree$JCForLoop;
					class JCTree$JCIdent;
					class JCTree$JCIf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLambda;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCPackageDecl;
					class JCTree$JCReturn;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCThrow;
					class JCTree$JCTry;
					class JCTree$JCUnary;
					class JCTree$JCVariableDecl;
					class JCTree$JCWhileLoop;
					class JCTree$JCYield;
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
					class Bits;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Error;
					class List;
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

class $export Flow$AssignAnalyzer : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer {
	$class(Flow$AssignAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer)
public:
	Flow$AssignAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	void addVars(::com::sun::tools::javac::util::List* stats, ::com::sun::tools::javac::util::Bits* inits, ::com::sun::tools::javac::util::Bits* uninits);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void checkInit(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual void checkInit(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$Error* errkey);
	void clearPendingExits(bool inMethod);
	void handleSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases, bool hasTotalPattern);
	virtual void initParam(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* def);
	virtual bool isFinalUninitializedField(::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual bool isFinalUninitializedStaticField(::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual void letInit(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual void letInit(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void markDead() override;
	virtual void merge();
	virtual void newVar(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* varDecl);
	virtual void referenced(::com::sun::tools::javac::code::Symbol* sym);
	void resetBits($Array<::com::sun::tools::javac::util::Bits>* bits);
	using ::com::sun::tools::javac::comp::Flow$BaseAnalyzer::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void scanCond(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void scanExpr(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void scanExprs(::com::sun::tools::javac::util::List* trees);
	virtual void split(bool setToNull);
	virtual bool trackable(::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual void uninit(::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitAssert(::com::sun::tools::javac::tree::JCTree$JCAssert* tree) override;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitBinary(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) override;
	virtual void visitBindingPattern(::com::sun::tools::javac::tree::JCTree$JCBindingPattern* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	::com::sun::tools::javac::util::Bits* inits = nullptr;
	::com::sun::tools::javac::util::Bits* uninits = nullptr;
	::com::sun::tools::javac::util::Bits* uninitsTry = nullptr;
	::com::sun::tools::javac::util::Bits* initsWhenTrue = nullptr;
	::com::sun::tools::javac::util::Bits* initsWhenFalse = nullptr;
	::com::sun::tools::javac::util::Bits* uninitsWhenTrue = nullptr;
	::com::sun::tools::javac::util::Bits* uninitsWhenFalse = nullptr;
	$Array<::com::sun::tools::javac::tree::JCTree$JCVariableDecl>* vardecls = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* classDef = nullptr;
	int32_t firstadr = 0;
	int32_t nextadr = 0;
	int32_t returnadr = 0;
	::com::sun::tools::javac::code::Scope$WriteableScope* unrefdResources = nullptr;
	::com::sun::tools::javac::comp::Flow$FlowKind* flowKind = nullptr;
	int32_t startPos = 0;
	bool isInitialConstructor = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$AssignAnalyzer_h_