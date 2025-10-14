#ifndef _com_sun_tools_javac_comp_Flow$AssignAnalyzer$1_h_
#define _com_sun_tools_javac_comp_Flow$AssignAnalyzer$1_h_
//$ class com.sun.tools.javac.comp.Flow$AssignAnalyzer$1
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

class Flow$AssignAnalyzer$1 : public ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit {
	$class(Flow$AssignAnalyzer$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit)
public:
	Flow$AssignAnalyzer$1();
	void init$(::com::sun::tools::javac::comp::Flow$AssignAnalyzer* this$1, ::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::Bits* val$initsAfterBreakWhenTrue, ::com::sun::tools::javac::util::Bits* val$initsAfterBreakWhenFalse, ::com::sun::tools::javac::util::Bits* val$uninitsAfterBreakWhenTrue, ::com::sun::tools::javac::util::Bits* val$uninitsAfterBreakWhenFalse);
	virtual void resolveJump() override;
	::com::sun::tools::javac::comp::Flow$AssignAnalyzer* this$1 = nullptr;
	::com::sun::tools::javac::util::Bits* val$uninitsAfterBreakWhenFalse = nullptr;
	::com::sun::tools::javac::util::Bits* val$uninitsAfterBreakWhenTrue = nullptr;
	::com::sun::tools::javac::util::Bits* val$initsAfterBreakWhenFalse = nullptr;
	::com::sun::tools::javac::util::Bits* val$initsAfterBreakWhenTrue = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$AssignAnalyzer$1_h_