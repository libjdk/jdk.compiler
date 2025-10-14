#ifndef _com_sun_tools_javac_resources_ct_h_
#define _com_sun_tools_javac_resources_ct_h_
//$ class com.sun.tools.javac.resources.ct
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $export ct : public ::java::util::ListResourceBundle {
	$class(ct, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	ct();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_ct_h_