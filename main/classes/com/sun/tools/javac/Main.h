#ifndef _com_sun_tools_javac_Main_h_
#define _com_sun_tools_javac_Main_h_
//$ class com.sun.tools.javac.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {

class $export Main : public ::java::lang::Object {
	$class(Main, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main();
	void init$();
	static int32_t compile($StringArray* args);
	static int32_t compile($StringArray* args, ::java::io::PrintWriter* out);
	static void main($StringArray* args);
};

			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_Main_h_