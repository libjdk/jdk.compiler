#ifndef _com_sun_tools_javac_comp_DeferredAttr$1_h_
#define _com_sun_tools_javac_comp_DeferredAttr$1_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$1
//$ extends com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Attr$ResultInfo;
					class DeferredAttr;
					class DeferredAttr$AttrMode;
					class DeferredAttr$DeferredStuckPolicy;
					class DeferredAttr$DeferredType;
					class InferenceContext;
					class Resolve$MethodResolutionPhase;
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
					class Warner;
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

class DeferredAttr$1 : public ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext {
	$class(DeferredAttr$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext)
public:
	DeferredAttr$1();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* parent, ::com::sun::tools::javac::util::Warner* warn);
	virtual void addDeferredAttrNode(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::comp::Attr$ResultInfo* ri, ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy) override;
	virtual void complete() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$1_h_