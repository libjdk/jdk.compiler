#ifndef _com_sun_tools_javac_resources_launcher_zh_CN_h_
#define _com_sun_tools_javac_resources_launcher_zh_CN_h_
//$ class com.sun.tools.javac.resources.launcher_zh_CN
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

class $import launcher_zh_CN : public ::java::util::ListResourceBundle {
	$class(launcher_zh_CN, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_zh_CN();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_resources_launcher_zh_CN_h_