#ifndef _com_sun_tools_javac_comp_Flow$LambdaAliveAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$LambdaAliveAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$LambdaAliveAnalyzer
//$ extends com.sun.tools.javac.comp.Flow$AliveAnalyzer

#include <com/sun/tools/javac/comp/Flow$AliveAnalyzer.h>

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
					class JCTree$JCReturn;
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

class $import Flow$LambdaAliveAnalyzer : public ::com::sun::tools::javac::comp::Flow$AliveAnalyzer {
	$class(Flow$LambdaAliveAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$AliveAnalyzer)
public:
	Flow$LambdaAliveAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	using ::com::sun::tools::javac::comp::Flow$AliveAnalyzer::scan;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
	bool inLambda = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$LambdaAliveAnalyzer_h_