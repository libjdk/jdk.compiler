#ifndef _com_sun_tools_javac_resources_javac_h_
#define _com_sun_tools_javac_resources_javac_h_
//$ class com.sun.tools.javac.resources.javac
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $export javac : public ::java::util::ListResourceBundle {
	$class(javac, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	javac();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_javac_h_