#ifndef _com_sun_tools_javac_code_Symbol$ModuleResolutionFlags_h_
#define _com_sun_tools_javac_code_Symbol$ModuleResolutionFlags_h_
//$ class com.sun.tools.javac.code.Symbol$ModuleResolutionFlags
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DO_NOT_RESOLVE_BY_DEFAULT")
#undef DO_NOT_RESOLVE_BY_DEFAULT
#pragma push_macro("WARN_DEPRECATED")
#undef WARN_DEPRECATED
#pragma push_macro("WARN_DEPRECATED_REMOVAL")
#undef WARN_DEPRECATED_REMOVAL
#pragma push_macro("WARN_INCUBATING")
#undef WARN_INCUBATING

namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Symbol$ModuleResolutionFlags : public ::java::lang::Enum {
	$class(Symbol$ModuleResolutionFlags, 0, ::java::lang::Enum)
public:
	Symbol$ModuleResolutionFlags();
	static $Array<::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value);
	static int32_t value(::java::util::Set* s);
	static ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags>* values();
	static ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags* DO_NOT_RESOLVE_BY_DEFAULT;
	static ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags* WARN_DEPRECATED;
	static ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags* WARN_DEPRECATED_REMOVAL;
	static ::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags* WARN_INCUBATING;
	static $Array<::com::sun::tools::javac::code::Symbol$ModuleResolutionFlags>* $VALUES;
	int32_t value$ = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DO_NOT_RESOLVE_BY_DEFAULT")
#pragma pop_macro("WARN_DEPRECATED")
#pragma pop_macro("WARN_DEPRECATED_REMOVAL")
#pragma pop_macro("WARN_INCUBATING")

#endif // _com_sun_tools_javac_code_Symbol$ModuleResolutionFlags_h_