#ifndef _com_sun_tools_javac_comp_Flow$FlowAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$FlowAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$FlowAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$BaseAnalyzer

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class Flow;
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
					class JCTree$JCBlock;
					class JCTree$JCBreak;
					class JCTree$JCClassDecl;
					class JCTree$JCContinue;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCExpression;
					class JCTree$JCForLoop;
					class JCTree$JCIf;
					class JCTree$JCLabeledStatement;
					class JCTree$JCLambda;
					class JCTree$JCMethodDecl;
					class JCTree$JCMethodInvocation;
					class JCTree$JCModuleDecl;
					class JCTree$JCNewClass;
					class JCTree$JCReturn;
					class JCTree$JCSwitch;
					class JCTree$JCSwitchExpression;
					class JCTree$JCThrow;
					class JCTree$JCTry;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Flow$FlowAnalyzer : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer {
	$class(Flow$FlowAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer)
public:
	Flow$FlowAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void checkCaughtType(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Type* exc, ::com::sun::tools::javac::util::List* thrownInTry, ::com::sun::tools::javac::util::List* caughtInTry);
	virtual void errorUncaught();
	void handleSwitch(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases);
	bool isExceptionOrThrowable(::com::sun::tools::javac::code::Type* exc);
	virtual void markDead() override;
	virtual void markThrown(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* exc);
	using ::com::sun::tools::javac::comp::Flow$BaseAnalyzer::scan;
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitBreak(::com::sun::tools::javac::tree::JCTree$JCBreak* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitContinue(::com::sun::tools::javac::tree::JCTree$JCContinue* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitLabelled(::com::sun::tools::javac::tree::JCTree$JCLabeledStatement* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	virtual void visitThrow(::com::sun::tools::javac::tree::JCTree$JCThrow* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	::java::util::HashMap* preciseRethrowTypes = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* classDef = nullptr;
	::com::sun::tools::javac::util::List* thrown = nullptr;
	::com::sun::tools::javac::util::List* caught = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$FlowAnalyzer_h_