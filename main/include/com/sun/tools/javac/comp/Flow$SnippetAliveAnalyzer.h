#ifndef _com_sun_tools_javac_comp_Flow$SnippetAliveAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$SnippetAliveAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$SnippetAliveAnalyzer
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

class $import Flow$SnippetAliveAnalyzer : public ::com::sun::tools::javac::comp::Flow$AliveAnalyzer {
	$class(Flow$SnippetAliveAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$AliveAnalyzer)
public:
	Flow$SnippetAliveAnalyzer();
	void init$(::com::sun::tools::javac::comp::Flow* this$0);
	virtual bool isAlive();
	using ::com::sun::tools::javac::comp::Flow$AliveAnalyzer::scan;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	::com::sun::tools::javac::comp::Flow* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$SnippetAliveAnalyzer_h_