#ifndef _com_sun_tools_javac_comp_Flow$LambdaAssignAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$LambdaAssignAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$LambdaAssignAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$AssignAnalyzer

#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$WriteableScope;
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
					class JCTree$JCClassDecl;
					class JCTree$JCLambda;
					class JCTree$JCVariableDecl;
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

class $export Flow$LambdaAssignAnalyzer : public ::com::sun::tools::javac::comp::Flow$AssignAnalyzer {
	$class(Flow$LambdaAssignAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$AssignAnalyzer)
public:
	Flow$LambdaAssignAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0, ::com::sun::tools::javac::comp::Env* env);
	using ::com::sun::tools::javac::comp::Flow$AssignAnalyzer::scan;
	virtual bool trackable(::com::sun::tools::javac::code::Symbol$VarSymbol* sym) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	::com::sun::tools::javac::code::Scope$WriteableScope* enclosedSymbols = nullptr;
	bool inLambda = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$LambdaAssignAnalyzer_h_