#ifndef _com_sun_tools_javac_comp_Resolve$ReferenceLookupResult$StaticKind_h_
#define _com_sun_tools_javac_comp_Resolve$ReferenceLookupResult$StaticKind_h_
//$ class com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$StaticKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BOTH")
#undef BOTH
#pragma push_macro("NON_STATIC")
#undef NON_STATIC
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("UNDEFINED")
#undef UNDEFINED

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

class $import Resolve$ReferenceLookupResult$StaticKind : public ::java::lang::Enum {
	$class(Resolve$ReferenceLookupResult$StaticKind, 0, ::java::lang::Enum)
public:
	Resolve$ReferenceLookupResult$StaticKind();
	static $Array<::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* from(::com::sun::tools::javac::code::Symbol* s);
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* reduce(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* sk1, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* sk2);
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind>* values();
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* STATIC;
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* NON_STATIC;
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* BOTH;
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* UNDEFINED;
	static $Array<::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BOTH")
#pragma pop_macro("NON_STATIC")
#pragma pop_macro("STATIC")
#pragma pop_macro("UNDEFINED")

#endif // _com_sun_tools_javac_comp_Resolve$ReferenceLookupResult$StaticKind_h_