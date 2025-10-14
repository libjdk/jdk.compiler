#ifndef _com_sun_tools_javac_comp_Resolve$InterfaceLookupPhase_h_
#define _com_sun_tools_javac_comp_Resolve$InterfaceLookupPhase_h_
//$ class com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABSTRACT_OK")
#undef ABSTRACT_OK
#pragma push_macro("DEFAULT_OK")
#undef DEFAULT_OK

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
					class Resolve;
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

class $import Resolve$InterfaceLookupPhase : public ::java::lang::Enum {
	$class(Resolve$InterfaceLookupPhase, 0, ::java::lang::Enum)
public:
	Resolve$InterfaceLookupPhase();
	static $Array<::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase* update(::com::sun::tools::javac::code::Symbol* s, ::com::sun::tools::javac::comp::Resolve* rs) {return nullptr;}
	static ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase>* values();
	static ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase* ABSTRACT_OK;
	static ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase* DEFAULT_OK;
	static $Array<::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ABSTRACT_OK")
#pragma pop_macro("DEFAULT_OK")

#endif // _com_sun_tools_javac_comp_Resolve$InterfaceLookupPhase_h_