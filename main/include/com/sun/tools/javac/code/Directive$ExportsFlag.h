#ifndef _com_sun_tools_javac_code_Directive$ExportsFlag_h_
#define _com_sun_tools_javac_code_Directive$ExportsFlag_h_
//$ class com.sun.tools.javac.code.Directive$ExportsFlag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("MANDATED")
#undef MANDATED
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

class $import Directive$ExportsFlag : public ::java::lang::Enum {
	$class(Directive$ExportsFlag, 0, ::java::lang::Enum)
public:
	Directive$ExportsFlag();
	static $Array<::com::sun::tools::javac::code::Directive$ExportsFlag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value);
	static int32_t value(::java::util::Set* s);
	static ::com::sun::tools::javac::code::Directive$ExportsFlag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Directive$ExportsFlag>* values();
	static ::com::sun::tools::javac::code::Directive$ExportsFlag* SYNTHETIC;
	static ::com::sun::tools::javac::code::Directive$ExportsFlag* MANDATED;
	static $Array<::com::sun::tools::javac::code::Directive$ExportsFlag>* $VALUES;
	int32_t value$ = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MANDATED")
#pragma pop_macro("SYNTHETIC")

#endif // _com_sun_tools_javac_code_Directive$ExportsFlag_h_