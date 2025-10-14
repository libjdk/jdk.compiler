#ifndef _com_sun_tools_javac_code_Types$MostSpecificReturnCheck$1_h_
#define _com_sun_tools_javac_code_Types$MostSpecificReturnCheck$1_h_
//$ class com.sun.tools.javac.code.Types$MostSpecificReturnCheck$1
//$ extends com.sun.tools.javac.code.Types$MostSpecificReturnCheck

#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>

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

class Types$MostSpecificReturnCheck$1 : public ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck {
	$class(Types$MostSpecificReturnCheck$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck)
public:
	Types$MostSpecificReturnCheck$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool test(::com::sun::tools::javac::code::Type* mt1, ::com::sun::tools::javac::code::Type* mt2, ::com::sun::tools::javac::code::Types* types) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$MostSpecificReturnCheck$1_h_