#ifndef _com_sun_tools_javac_comp_Flow$LambdaFlowAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$LambdaFlowAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$LambdaFlowAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$FlowAnalyzer

#include <com/sun/tools/javac/comp/Flow$FlowAnalyzer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Flow$LambdaFlowAnalyzer : public ::com::sun::tools::javac::comp::Flow$FlowAnalyzer {
	$class(Flow$LambdaFlowAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$FlowAnalyzer)
public:
	Flow$LambdaFlowAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	using ::com::sun::tools::javac::comp::Flow$FlowAnalyzer::scan;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	::com::sun::tools::javac::util::List* inferredThrownTypes = nullptr;
	bool inLambda = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$LambdaFlowAnalyzer_h_