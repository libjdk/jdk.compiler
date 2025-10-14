#ifndef _com_sun_tools_javac_code_Directive$RequiresFlag_h_
#define _com_sun_tools_javac_code_Directive$RequiresFlag_h_
//$ class com.sun.tools.javac.code.Directive$RequiresFlag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXTRA")
#undef EXTRA
#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("STATIC_PHASE")
#undef STATIC_PHASE
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("TRANSITIVE")
#undef TRANSITIVE

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

class $export Directive$RequiresFlag : public ::java::lang::Enum {
	$class(Directive$RequiresFlag, 0, ::java::lang::Enum)
public:
	Directive$RequiresFlag();
	static $Array<::com::sun::tools::javac::code::Directive$RequiresFlag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value);
	virtual $String* toString() override;
	static int32_t value(::java::util::Set* s);
	static ::com::sun::tools::javac::code::Directive$RequiresFlag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Directive$RequiresFlag>* values();
	static ::com::sun::tools::javac::code::Directive$RequiresFlag* TRANSITIVE;
	static ::com::sun::tools::javac::code::Directive$RequiresFlag* STATIC_PHASE;
	static ::com::sun::tools::javac::code::Directive$RequiresFlag* SYNTHETIC;
	static ::com::sun::tools::javac::code::Directive$RequiresFlag* MANDATED;
	static ::com::sun::tools::javac::code::Directive$RequiresFlag* EXTRA;
	static $Array<::com::sun::tools::javac::code::Directive$RequiresFlag>* $VALUES;
	int32_t value$ = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EXTRA")
#pragma pop_macro("MANDATED")
#pragma pop_macro("STATIC_PHASE")
#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("TRANSITIVE")

#endif // _com_sun_tools_javac_code_Directive$RequiresFlag_h_