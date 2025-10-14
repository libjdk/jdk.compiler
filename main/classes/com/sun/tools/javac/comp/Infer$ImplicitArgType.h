#ifndef _com_sun_tools_javac_comp_Infer$ImplicitArgType_h_
#define _com_sun_tools_javac_comp_Infer$ImplicitArgType_h_
//$ class com.sun.tools.javac.comp.Infer$ImplicitArgType
//$ extends com.sun.tools.javac.comp.DeferredAttr$DeferredTypeMap

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredTypeMap.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
					class Type$ClassType;
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
					class Infer;
					class Resolve$MethodResolutionPhase;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer$ImplicitArgType : public ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap {
	$class(Infer$ImplicitArgType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap)
public:
	Infer$ImplicitArgType();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	using ::com::sun::tools::javac::comp::DeferredAttr$DeferredTypeMap::visit;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* aVoid);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* aVoid) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* _unused);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* _unused) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$ImplicitArgType_h_