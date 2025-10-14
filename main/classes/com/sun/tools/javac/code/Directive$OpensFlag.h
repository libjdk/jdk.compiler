#ifndef _com_sun_tools_javac_code_Directive$OpensFlag_h_
#define _com_sun_tools_javac_code_Directive$OpensFlag_h_
//$ class com.sun.tools.javac.code.Directive$OpensFlag
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

class $export Directive$OpensFlag : public ::java::lang::Enum {
	$class(Directive$OpensFlag, 0, ::java::lang::Enum)
public:
	Directive$OpensFlag();
	static $Array<::com::sun::tools::javac::code::Directive$OpensFlag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value);
	static int32_t value(::java::util::Set* s);
	static ::com::sun::tools::javac::code::Directive$OpensFlag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Directive$OpensFlag>* values();
	static ::com::sun::tools::javac::code::Directive$OpensFlag* SYNTHETIC;
	static ::com::sun::tools::javac::code::Directive$OpensFlag* MANDATED;
	static $Array<::com::sun::tools::javac::code::Directive$OpensFlag>* $VALUES;
	int32_t value$ = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MANDATED")
#pragma pop_macro("SYNTHETIC")

#endif // _com_sun_tools_javac_code_Directive$OpensFlag_h_