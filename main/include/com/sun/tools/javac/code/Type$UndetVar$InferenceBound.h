#ifndef _com_sun_tools_javac_code_Type$UndetVar$InferenceBound_h_
#define _com_sun_tools_javac_code_Type$UndetVar$InferenceBound_h_
//$ class com.sun.tools.javac.code.Type$UndetVar$InferenceBound
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("LOWER")
#undef LOWER
#pragma push_macro("UPPER")
#undef UPPER

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Type$UndetVar$InferenceBound : public ::java::lang::Enum {
	$class(Type$UndetVar$InferenceBound, 0, ::java::lang::Enum)
public:
	Type$UndetVar$InferenceBound();
	static $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* complement() {return nullptr;}
	virtual bool lessThan(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* that);
	static ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>* values();
	static ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* LOWER;
	static ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* EQ;
	static ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* UPPER;
	static $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EQ")
#pragma pop_macro("LOWER")
#pragma pop_macro("UPPER")

#endif // _com_sun_tools_javac_code_Type$UndetVar$InferenceBound_h_