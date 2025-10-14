#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ExplicitLambdaType$1_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ExplicitLambdaType$1_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$1
//$ extends com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner

#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class ArgumentAttr$ExplicitLambdaType;
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
				namespace util {
					class ListBuffer;
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

class ArgumentAttr$ExplicitLambdaType$1 : public ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner {
	$class(ArgumentAttr$ExplicitLambdaType$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner)
public:
	ArgumentAttr$ExplicitLambdaType$1();
	void init$(::com::sun::tools::javac::comp::ArgumentAttr$ExplicitLambdaType* this$1, ::com::sun::tools::javac::util::ListBuffer* val$buf);
	using ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner::scan;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	::com::sun::tools::javac::comp::ArgumentAttr$ExplicitLambdaType* this$1 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$buf = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ExplicitLambdaType$1_h_