#ifndef _com_sun_tools_javac_comp_Resolve$InterfaceLookupPhase$1_h_
#define _com_sun_tools_javac_comp_Resolve$InterfaceLookupPhase$1_h_
//$ class com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase$1
//$ extends com.sun.tools.javac.comp.Resolve$InterfaceLookupPhase

#include <com/sun/tools/javac/comp/Resolve$InterfaceLookupPhase.h>

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

class Resolve$InterfaceLookupPhase$1 : public ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase {
	$class(Resolve$InterfaceLookupPhase$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase)
public:
	Resolve$InterfaceLookupPhase$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::comp::Resolve$InterfaceLookupPhase* update(::com::sun::tools::javac::code::Symbol* s, ::com::sun::tools::javac::comp::Resolve* rs) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$InterfaceLookupPhase$1_h_