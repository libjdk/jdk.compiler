#ifndef _sun_tools_serialver_Res_h_
#define _sun_tools_serialver_Res_h_
//$ class sun.tools.serialver.Res
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace sun {
	namespace tools {
		namespace serialver {

class Res : public ::java::lang::Object {
	$class(Res, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Res();
	void init$();
	static $String* getText($String* key);
	static $String* getText($String* key, $String* a1);
	static $String* getText($String* key, $String* a1, $String* a2);
	static $String* getText($String* key, $String* a1, $String* a2, $String* a3);
	static void initResource();
	static ::java::util::ResourceBundle* messageRB;
};

		} // serialver
	} // tools
} // sun

#endif // _sun_tools_serialver_Res_h_