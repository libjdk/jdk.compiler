#ifndef _com_sun_tools_javac_comp_DeferredAttr$RecoveryDeferredTypeMap_h_
#define _com_sun_tools_javac_comp_DeferredAttr$RecoveryDeferredTypeMap_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap
//$ extends com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
					class Type$MethodType;
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
					class DeferredAttr;
					class DeferredAttr$AttrMode;
					class DeferredAttr$DeferredType;
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

class $import DeferredAttr$RecoveryDeferredTypeMap : public ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap {
	$class(DeferredAttr$RecoveryDeferredTypeMap, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap)
public:
	DeferredAttr$RecoveryDeferredTypeMap();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	::com::sun::tools::javac::util::List* map(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::util::List* pts);
	::com::sun::tools::javac::code::Type* recover(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::code::Type* typeOf(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::code::Type* pt);
	virtual ::com::sun::tools::javac::code::Type* typeOf(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, Object$* pt) override;
	using ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap::visit;
	virtual ::com::sun::tools::javac::code::Type* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::code::Type* pt);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* pt) override;
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* p) override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$RecoveryDeferredTypeMap_h_