#ifndef _com_sun_tools_javac_util_ArrayUtils_h_
#define _com_sun_tools_javac_util_ArrayUtils_h_
//$ class com.sun.tools.javac.util.ArrayUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import ArrayUtils : public ::java::lang::Object {
	$class(ArrayUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayUtils();
	void init$();
	static int32_t calculateNewLength(int32_t currentLength, int32_t maxIndex);
	static $ObjectArray* ensureCapacity($ObjectArray* array, int32_t maxIndex);
	static $bytes* ensureCapacity($bytes* array, int32_t maxIndex);
	static $chars* ensureCapacity($chars* array, int32_t maxIndex);
	static $ints* ensureCapacity($ints* array, int32_t maxIndex);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ArrayUtils_h_