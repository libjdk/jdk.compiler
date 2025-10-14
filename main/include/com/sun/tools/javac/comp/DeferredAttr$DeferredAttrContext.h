#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrContext_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrContext_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
					class DeferredAttr$DeferredAttrContext$StuckNode;
					class DeferredAttr$DeferredAttrNode;
					class DeferredAttr$DeferredStuckPolicy;
					class DeferredAttr$DeferredType;
					class Infer$GraphSolver$InferenceGraph;
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
					class List;
					class Warner;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$DeferredAttrContext : public ::java::lang::Object {
	$class(DeferredAttr$DeferredAttrContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredAttr$DeferredAttrContext();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* parent, ::com::sun::tools::javac::util::Warner* warn);
	virtual void addDeferredAttrNode(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy);
	virtual ::com::sun::tools::javac::util::List* buildStuckGraph();
	virtual bool canInfluence(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* graph, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext$StuckNode* sn1, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext$StuckNode* sn2);
	virtual void complete();
	virtual bool insideOverloadPhase();
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext$StuckNode* lambda$buildStuckGraph$0(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* x$0);
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* pickDeferredNode();
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode = nullptr;
	::com::sun::tools::javac::code::Symbol* msym = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase = nullptr;
	::com::sun::tools::javac::comp::InferenceContext* inferenceContext = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* parent = nullptr;
	::com::sun::tools::javac::util::Warner* warn = nullptr;
	::java::util::ArrayList* deferredAttrNodes = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrContext_h_