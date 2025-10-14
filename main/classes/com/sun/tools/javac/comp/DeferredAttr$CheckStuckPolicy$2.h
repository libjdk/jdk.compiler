#ifndef _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy$2_h_
#define _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy$2_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$2
//$ extends com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner

#include <com/sun/tools/javac/comp/DeferredAttr$SwitchExpressionScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class DeferredAttr$CheckStuckPolicy;
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
					class JCTree$JCYield;
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

class DeferredAttr$CheckStuckPolicy$2 : public ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner {
	$class(DeferredAttr$CheckStuckPolicy$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner)
public:
	DeferredAttr$CheckStuckPolicy$2();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy* this$1);
	using ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner::scan;
	virtual void visitYield(::com::sun::tools::javac::tree::JCTree$JCYield* tree) override;
	::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy* this$1 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy$2_h_