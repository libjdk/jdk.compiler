#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionPhase$1_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionPhase$1_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionPhase$1
//$ extends com.sun.tools.javac.comp.Resolve$MethodResolutionPhase

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>

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

class Resolve$MethodResolutionPhase$1 : public ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase {
	$class(Resolve$MethodResolutionPhase$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase)
public:
	Resolve$MethodResolutionPhase$1();
	void init$($String* $enum$name, int32_t $enum$ordinal, bool isBoxingRequired, bool isVarargsRequired);
	virtual ::com::sun::tools::javac::code::Symbol* mergeResults(::com::sun::tools::javac::code::Symbol* bestSoFar, ::com::sun::tools::javac::code::Symbol* sym) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionPhase$1_h_