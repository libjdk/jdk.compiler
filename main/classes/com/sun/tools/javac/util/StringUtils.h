#ifndef _com_sun_tools_javac_util_StringUtils_h_
#define _com_sun_tools_javac_util_StringUtils_h_
//$ class com.sun.tools.javac.util.StringUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export StringUtils : public ::java::lang::Object {
	$class(StringUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringUtils();
	void init$();
	static int32_t indexOfIgnoreCase($String* text, $String* str);
	static int32_t indexOfIgnoreCase($String* text, $String* str, int32_t startIndex);
	static $String* toLowerCase($String* source);
	static $String* toUpperCase($String* source);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_StringUtils_h_