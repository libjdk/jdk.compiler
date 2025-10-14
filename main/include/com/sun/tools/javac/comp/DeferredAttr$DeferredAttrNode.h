#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Attr$ResultInfo;
					class DeferredAttr;
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$DeferredStuckPolicy;
					class DeferredAttr$DeferredType;
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

class $import DeferredAttr$DeferredAttrNode : public ::java::lang::Object {
	$class(DeferredAttr$DeferredAttrNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredAttr$DeferredAttrNode();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy);
	virtual bool process(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext);
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode_h_