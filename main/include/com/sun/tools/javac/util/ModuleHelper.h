#ifndef _com_sun_tools_javac_util_ModuleHelper_h_
#define _com_sun_tools_javac_util_ModuleHelper_h_
//$ class com.sun.tools.javac.util.ModuleHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import ModuleHelper : public ::java::lang::Object {
	$class(ModuleHelper, 0, ::java::lang::Object)
public:
	ModuleHelper();
	void init$();
	static void addExports(::java::lang::Module* from, ::java::lang::Module* to);
	static $StringArray* javacInternalPackages;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ModuleHelper_h_