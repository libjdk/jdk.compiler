#ifndef _com_sun_tools_javac_code_Symbol$ModuleFlags_h_
#define _com_sun_tools_javac_code_Symbol$ModuleFlags_h_
//$ class com.sun.tools.javac.code.Symbol$ModuleFlags
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC

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

class $import Symbol$ModuleFlags : public ::java::lang::Enum {
	$class(Symbol$ModuleFlags, 0, ::java::lang::Enum)
public:
	Symbol$ModuleFlags();
	static $Array<::com::sun::tools::javac::code::Symbol$ModuleFlags>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value);
	static int32_t value(::java::util::Set* s);
	static ::com::sun::tools::javac::code::Symbol$ModuleFlags* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Symbol$ModuleFlags>* values();
	static ::com::sun::tools::javac::code::Symbol$ModuleFlags* OPEN;
	static ::com::sun::tools::javac::code::Symbol$ModuleFlags* SYNTHETIC;
	static ::com::sun::tools::javac::code::Symbol$ModuleFlags* MANDATED;
	static $Array<::com::sun::tools::javac::code::Symbol$ModuleFlags>* $VALUES;
	int32_t value$ = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MANDATED")
#pragma pop_macro("OPEN")
#pragma pop_macro("SYNTHETIC")

#endif // _com_sun_tools_javac_code_Symbol$ModuleFlags_h_