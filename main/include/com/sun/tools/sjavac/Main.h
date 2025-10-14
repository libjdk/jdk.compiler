#ifndef _com_sun_tools_sjavac_Main_h_
#define _com_sun_tools_sjavac_Main_h_
//$ class com.sun.tools.sjavac.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class $import Main : public ::java::lang::Object {
	$class(Main, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main();
	void init$();
	static int32_t go($StringArray* args);
	static bool lambda$go$0($String* arg);
	static void main($StringArray* args);
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Main_h_