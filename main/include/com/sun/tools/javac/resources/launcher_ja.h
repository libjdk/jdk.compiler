#ifndef _com_sun_tools_javac_resources_launcher_ja_h_
#define _com_sun_tools_javac_resources_launcher_ja_h_
//$ class com.sun.tools.javac.resources.launcher_ja
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $import launcher_ja : public ::java::util::ListResourceBundle {
	$class(launcher_ja, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_ja();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_launcher_ja_h_