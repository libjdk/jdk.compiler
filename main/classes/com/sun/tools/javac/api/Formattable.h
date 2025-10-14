#ifndef _com_sun_tools_javac_api_Formattable_h_
#define _com_sun_tools_javac_api_Formattable_h_
//$ interface com.sun.tools.javac.api.Formattable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class Messages;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export Formattable : public ::java::lang::Object {
	$interface(Formattable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getKind() {return nullptr;}
	using ::java::lang::Object::toString;
	virtual $String* toString(::java::util::Locale* locale, ::com::sun::tools::javac::api::Messages* messages) {return nullptr;}
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_Formattable_h_