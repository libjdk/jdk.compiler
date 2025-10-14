#ifndef _com_sun_tools_javac_code_Types$MostSpecificReturnCheck_h_
#define _com_sun_tools_javac_code_Types$MostSpecificReturnCheck_h_
//$ class com.sun.tools.javac.code.Types$MostSpecificReturnCheck
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BASIC")
#undef BASIC
#pragma push_macro("RTS")
#undef RTS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Types;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Types$MostSpecificReturnCheck : public ::java::lang::Enum {
	$class(Types$MostSpecificReturnCheck, 0, ::java::lang::Enum)
public:
	Types$MostSpecificReturnCheck();
	static $Array<::com::sun::tools::javac::code::Types$MostSpecificReturnCheck>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool test(::com::sun::tools::javac::code::Type* mt1, ::com::sun::tools::javac::code::Type* mt2, ::com::sun::tools::javac::code::Types* types) {return false;}
	static ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Types$MostSpecificReturnCheck>* values();
	static ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck* BASIC;
	static ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck* RTS;
	static $Array<::com::sun::tools::javac::code::Types$MostSpecificReturnCheck>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BASIC")
#pragma pop_macro("RTS")

#endif // _com_sun_tools_javac_code_Types$MostSpecificReturnCheck_h_