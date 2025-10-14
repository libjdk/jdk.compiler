#ifndef _com_sun_tools_javac_api_Messages_h_
#define _com_sun_tools_javac_api_Messages_h_
//$ interface com.sun.tools.javac.api.Messages
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export Messages : public ::java::lang::Object {
	$interface(Messages, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void add($String* bundleName) {}
	virtual $String* getLocalizedString(::java::util::Locale* l, $String* key, $ObjectArray* args) {return nullptr;}
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_Messages_h_