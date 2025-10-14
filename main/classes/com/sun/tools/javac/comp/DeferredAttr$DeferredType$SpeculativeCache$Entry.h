#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredType$SpeculativeCache$Entry_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredType$SpeculativeCache$Entry_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Attr$ResultInfo;
					class DeferredAttr$DeferredType$SpeculativeCache;
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
				namespace comp {

class $export DeferredAttr$DeferredType$SpeculativeCache$Entry : public ::java::lang::Object {
	$class(DeferredAttr$DeferredType$SpeculativeCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredAttr$DeferredType$SpeculativeCache$Entry();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache* this$2, ::com::sun::tools::javac::tree::JCTree* speculativeTree, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual bool matches(::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache* this$2 = nullptr;
	::com::sun::tools::javac::tree::JCTree* speculativeTree = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredType$SpeculativeCache$Entry_h_