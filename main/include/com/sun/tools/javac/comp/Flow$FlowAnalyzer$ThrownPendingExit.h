#ifndef _com_sun_tools_javac_comp_Flow$FlowAnalyzer$ThrownPendingExit_h_
#define _com_sun_tools_javac_comp_Flow$FlowAnalyzer$ThrownPendingExit_h_
//$ class com.sun.tools.javac.comp.Flow$FlowAnalyzer$ThrownPendingExit
//$ extends com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>

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
					class Flow$FlowAnalyzer;
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

class $import Flow$FlowAnalyzer$ThrownPendingExit : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit {
	$class(Flow$FlowAnalyzer$ThrownPendingExit, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit)
public:
	Flow$FlowAnalyzer$ThrownPendingExit();
	void init$(::com::sun::tools::javac::comp::Flow$FlowAnalyzer* this$1, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* thrown);
	::com::sun::tools::javac::comp::Flow$FlowAnalyzer* this$1 = nullptr;
	::com::sun::tools::javac::code::Type* thrown = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$FlowAnalyzer$ThrownPendingExit_h_