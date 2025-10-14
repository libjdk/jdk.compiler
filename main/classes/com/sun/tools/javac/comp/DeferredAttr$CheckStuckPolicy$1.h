#ifndef _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy$1_h_
#define _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy$1_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$1
//$ extends com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner

#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>

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

class DeferredAttr$CheckStuckPolicy$1 : public ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner {
	$class(DeferredAttr$CheckStuckPolicy$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner)
public:
	DeferredAttr$CheckStuckPolicy$1();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy* this$1, ::com::sun::tools::javac::code::Type* val$pt);
	using ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner::scan;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy* this$1 = nullptr;
	::com::sun::tools::javac::code::Type* val$pt = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy$1_h_