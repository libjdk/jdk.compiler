#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionContext_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionContext_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Attr$ResultInfo;
					class DeferredAttr$AttrMode;
					class DeferredAttr$DeferredAttrContext;
					class InferenceContext;
					class Resolve;
					class Resolve$MethodCheck;
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
					class JCDiagnostic;
					class List;
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

class $import Resolve$MethodResolutionContext : public ::java::lang::Object {
	$class(Resolve$MethodResolutionContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resolve$MethodResolutionContext();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual void addApplicableCandidate(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Type* mtype);
	virtual void addInapplicableCandidate(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic* details);
	virtual ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* attrMode();
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::comp::Attr$ResultInfo* pendingResult, ::com::sun::tools::javac::util::Warner* warn);
	virtual bool internal();
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::util::List* candidates = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* step = nullptr;
	::com::sun::tools::javac::comp::Resolve$MethodCheck* methodCheck = nullptr;
	bool internalResolution = false;
	::com::sun::tools::javac::comp::DeferredAttr$AttrMode* attrMode$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionContext_h_