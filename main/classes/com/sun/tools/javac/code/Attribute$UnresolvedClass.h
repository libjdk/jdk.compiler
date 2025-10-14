#ifndef _com_sun_tools_javac_code_Attribute$UnresolvedClass_h_
#define _com_sun_tools_javac_code_Attribute$UnresolvedClass_h_
//$ class com.sun.tools.javac.code.Attribute$UnresolvedClass
//$ extends com.sun.tools.javac.code.Attribute$Error

#include <com/sun/tools/javac/code/Attribute$Error.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $export Attribute$UnresolvedClass : public ::com::sun::tools::javac::code::Attribute$Error {
	$class(Attribute$UnresolvedClass, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Error)
public:
	Attribute$UnresolvedClass();
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Type* classType);
	::com::sun::tools::javac::code::Type* classType = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$UnresolvedClass_h_