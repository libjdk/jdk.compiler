#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredType$SpeculativeCache_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredType$SpeculativeCache_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredType$SpeculativeCache
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
					class DeferredAttr$DeferredType;
					class DeferredAttr$DeferredType$SpeculativeCache$Entry;
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
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export DeferredAttr$DeferredType$SpeculativeCache : public ::java::lang::Object {
	$class(DeferredAttr$DeferredType$SpeculativeCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredAttr$DeferredType$SpeculativeCache();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* this$1);
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache$Entry* get(::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	virtual void put(::com::sun::tools::javac::tree::JCTree* speculativeTree, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	::com::sun::tools::javac::comp::DeferredAttr$DeferredType* this$1 = nullptr;
	::java::util::Map* cache = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredType$SpeculativeCache_h_