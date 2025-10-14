#ifndef _com_sun_tools_javac_util_Constants_h_
#define _com_sun_tools_javac_util_Constants_h_
//$ class com.sun.tools.javac.util.Constants
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Constants : public ::java::lang::Object {
	$class(Constants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Constants();
	void init$();
	static $Object* decode(Object$* value, ::com::sun::tools::javac::code::Type* type);
	static $String* format(Object$* value, ::com::sun::tools::javac::code::Type* type);
	static $String* format(Object$* value);
	static $String* formatByte(int8_t b);
	static $String* formatChar(char16_t c);
	static $String* formatDouble(double d);
	static $String* formatFloat(float f);
	static $String* formatLong(int64_t lng);
	static $String* formatShort(int16_t s);
	static $String* formatString($String* s);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Constants_h_