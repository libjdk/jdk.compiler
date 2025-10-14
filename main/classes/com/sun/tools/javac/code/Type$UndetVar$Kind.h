#ifndef _com_sun_tools_javac_code_Type$UndetVar$Kind_h_
#define _com_sun_tools_javac_code_Type$UndetVar$Kind_h_
//$ class com.sun.tools.javac.code.Type$UndetVar$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CAPTURED")
#undef CAPTURED
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("THROWS")
#undef THROWS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Type$UndetVar$Kind : public ::java::lang::Enum {
	$class(Type$UndetVar$Kind, 0, ::java::lang::Enum)
public:
	Type$UndetVar$Kind();
	static $Array<::com::sun::tools::javac::code::Type$UndetVar$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::Type$UndetVar$Kind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Type$UndetVar$Kind>* values();
	static ::com::sun::tools::javac::code::Type$UndetVar$Kind* NORMAL;
	static ::com::sun::tools::javac::code::Type$UndetVar$Kind* CAPTURED;
	static ::com::sun::tools::javac::code::Type$UndetVar$Kind* THROWS;
	static $Array<::com::sun::tools::javac::code::Type$UndetVar$Kind>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CAPTURED")
#pragma pop_macro("NORMAL")
#pragma pop_macro("THROWS")

#endif // _com_sun_tools_javac_code_Type$UndetVar$Kind_h_