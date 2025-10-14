#ifndef _com_sun_tools_javac_code_TypeMetadata$Entry_h_
#define _com_sun_tools_javac_code_TypeMetadata$Entry_h_
//$ interface com.sun.tools.javac.code.TypeMetadata$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeMetadata$Entry$Kind;
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

class $import TypeMetadata$Entry : public ::java::lang::Object {
	$interface(TypeMetadata$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::code::TypeMetadata$Entry* combine(::com::sun::tools::javac::code::TypeMetadata$Entry* other) {return nullptr;}
	virtual ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* kind() {return nullptr;}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_TypeMetadata$Entry_h_