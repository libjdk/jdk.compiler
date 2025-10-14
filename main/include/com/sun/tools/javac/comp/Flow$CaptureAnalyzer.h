#ifndef _com_sun_tools_javac_comp_Flow$CaptureAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$CaptureAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$CaptureAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$BaseAnalyzer

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class JCTree$JCAssign;
					class JCTree$JCAssignOp;
					class JCTree$JCClassDecl;
					class JCTree$JCGuardPattern;
					class JCTree$JCIdent;
					class JCTree$JCLambda;
					class JCTree$JCModuleDecl;
					class JCTree$JCTry;
					class JCTree$JCUnary;
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

class $import Flow$CaptureAnalyzer : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer {
	$class(Flow$CaptureAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer)
public:
	Flow$CaptureAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void analyzeTree(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::TreeMaker* make);
	virtual void checkEffectivelyFinal(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	virtual void letInit(::com::sun::tools::javac::tree::JCTree* tree);
	virtual void markDead() override;
	virtual void reportEffectivelyFinalError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void reportInnerClsNeedsFinalError(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	using ::com::sun::tools::javac::comp::Flow$BaseAnalyzer::scan;
	virtual void visitAssign(::com::sun::tools::javac::tree::JCTree$JCAssign* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitGuardPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitModuleDef(::com::sun::tools::javac::tree::JCTree$JCModuleDecl* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree* currentTree = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$CaptureAnalyzer_h_