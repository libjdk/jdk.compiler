#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionPhase_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionPhase_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionPhase
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BASIC")
#undef BASIC
#pragma push_macro("BOX")
#undef BOX
#pragma push_macro("VARARITY")
#undef VARARITY

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

class $import Resolve$MethodResolutionPhase : public ::java::lang::Enum {
	$class(Resolve$MethodResolutionPhase, 0, ::java::lang::Enum)
public:
	Resolve$MethodResolutionPhase();
	static $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, bool isBoxingRequired, bool isVarargsRequired);
	virtual bool isBoxingRequired();
	virtual bool isVarargsRequired();
	virtual ::com::sun::tools::javac::code::Symbol* mergeResults(::com::sun::tools::javac::code::Symbol* prev, ::com::sun::tools::javac::code::Symbol* sym);
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase>* values();
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* BASIC;
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* BOX;
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* VARARITY;
	static $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase>* $VALUES;
	bool isBoxingRequired$ = false;
	bool isVarargsRequired$ = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BASIC")
#pragma pop_macro("BOX")
#pragma pop_macro("VARARITY")

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionPhase_h_