#ifndef _com_sun_tools_javac_code_Kinds$Kind$Category_h_
#define _com_sun_tools_javac_code_Kinds$Kind$Category_h_
//$ class com.sun.tools.javac.code.Kinds$Kind$Category
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BASIC")
#undef BASIC
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("RESOLUTION")
#undef RESOLUTION
#pragma push_macro("RESOLUTION_TARGET")
#undef RESOLUTION_TARGET

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Kinds$Kind$Category : public ::java::lang::Enum {
	$class(Kinds$Kind$Category, 0, ::java::lang::Enum)
public:
	Kinds$Kind$Category();
	static $Array<::com::sun::tools::javac::code::Kinds$Kind$Category>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::Kinds$Kind$Category* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Kinds$Kind$Category>* values();
	static ::com::sun::tools::javac::code::Kinds$Kind$Category* BASIC;
	static ::com::sun::tools::javac::code::Kinds$Kind$Category* ERROR;
	static ::com::sun::tools::javac::code::Kinds$Kind$Category* RESOLUTION;
	static ::com::sun::tools::javac::code::Kinds$Kind$Category* RESOLUTION_TARGET;
	static $Array<::com::sun::tools::javac::code::Kinds$Kind$Category>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BASIC")
#pragma pop_macro("ERROR")
#pragma pop_macro("RESOLUTION")
#pragma pop_macro("RESOLUTION_TARGET")

#endif // _com_sun_tools_javac_code_Kinds$Kind$Category_h_