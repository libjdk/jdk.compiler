#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredTypeMap_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredTypeMap_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap
//$ extends com.sun.tools.javac.code.Type$StructuralTypeMapping

#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>

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
					class DeferredAttr;
					class DeferredAttr$AttrMode;
					class DeferredAttr$DeferredAttrContext;
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
				namespace comp {

class $import DeferredAttr$DeferredTypeMap : public ::com::sun::tools::javac::code::Type$StructuralTypeMapping {
	$class(DeferredAttr$DeferredTypeMap, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$StructuralTypeMapping)
public:
	DeferredAttr$DeferredTypeMap();
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	virtual ::com::sun::tools::javac::code::Type* typeOf(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, Object$* p);
	using ::com::sun::tools::javac::code::Type$StructuralTypeMapping::visit;
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* p) override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredTypeMap_h_