#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$1_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$1_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$1
//$ extends com.sun.tools.javac.comp.Check$NestedCheckContext

#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check$CheckContext;
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$DeferredAttrNode;
					class InferenceContext;
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

class DeferredAttr$DeferredAttrNode$1 : public ::com::sun::tools::javac::comp::Check$NestedCheckContext {
	$class(DeferredAttr$DeferredAttrNode$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Check$NestedCheckContext)
public:
	DeferredAttr$DeferredAttrNode$1();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* this$1, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* val$deferredAttrContext);
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext() override;
	virtual ::com::sun::tools::javac::comp::InferenceContext* inferenceContext() override;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* this$1 = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* val$deferredAttrContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$1_h_