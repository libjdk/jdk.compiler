#ifndef _com_sun_tools_javac_comp_Resolve$ResolveDeferredRecoveryMap_h_
#define _com_sun_tools_javac_comp_Resolve$ResolveDeferredRecoveryMap_h_
//$ class com.sun.tools.javac.comp.Resolve$ResolveDeferredRecoveryMap
//$ extends com.sun.tools.javac.comp.DeferredAttr$RecoveryDeferredTypeMap

#include <com/sun/tools/javac/comp/DeferredAttr$RecoveryDeferredTypeMap.h>

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
					class DeferredAttr$AttrMode;
					class DeferredAttr$DeferredType;
					class Resolve;
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
				namespace comp {

class $import Resolve$ResolveDeferredRecoveryMap : public ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap {
	$class(Resolve$ResolveDeferredRecoveryMap, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap)
public:
	Resolve$ResolveDeferredRecoveryMap();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* step);
	virtual ::com::sun::tools::javac::code::Type* typeOf(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::code::Type* pt) override;
	virtual ::com::sun::tools::javac::code::Type* typeOf(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, Object$* pt) override;
	using ::com::sun::tools::javac::comp::DeferredAttr$RecoveryDeferredTypeMap::visit;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$ResolveDeferredRecoveryMap_h_