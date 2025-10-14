#ifndef _com_sun_tools_javac_comp_Flow$AssignAnalyzer$AssignPendingExit_h_
#define _com_sun_tools_javac_comp_Flow$AssignAnalyzer$AssignPendingExit_h_
//$ class com.sun.tools.javac.comp.Flow$AssignAnalyzer$AssignPendingExit
//$ extends com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit

#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Flow$AssignAnalyzer;
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
				namespace util {
					class Bits;
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

class $export Flow$AssignAnalyzer$AssignPendingExit : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit {
	$class(Flow$AssignAnalyzer$AssignPendingExit, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit)
public:
	Flow$AssignAnalyzer$AssignPendingExit();
	void init$(::com::sun::tools::javac::comp::Flow$AssignAnalyzer* this$1, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::Bits* inits, ::com::sun::tools::javac::util::Bits* uninits);
	virtual void resolveJump() override;
	::com::sun::tools::javac::comp::Flow$AssignAnalyzer* this$1 = nullptr;
	::com::sun::tools::javac::util::Bits* inits = nullptr;
	::com::sun::tools::javac::util::Bits* uninits = nullptr;
	::com::sun::tools::javac::util::Bits* exit_inits = nullptr;
	::com::sun::tools::javac::util::Bits* exit_uninits = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$AssignAnalyzer$AssignPendingExit_h_