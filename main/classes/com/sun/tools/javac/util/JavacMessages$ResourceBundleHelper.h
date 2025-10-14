#ifndef _com_sun_tools_javac_util_JavacMessages$ResourceBundleHelper_h_
#define _com_sun_tools_javac_util_JavacMessages$ResourceBundleHelper_h_
//$ interface com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export JavacMessages$ResourceBundleHelper : public ::java::lang::Object {
	$interface(JavacMessages$ResourceBundleHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::ResourceBundle* getResourceBundle(::java::util::Locale* locale) {return nullptr;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_JavacMessages$ResourceBundleHelper_h_