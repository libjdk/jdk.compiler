#ifndef _com_sun_tools_javac_util_LayoutCharacters_h_
#define _com_sun_tools_javac_util_LayoutCharacters_h_
//$ interface com.sun.tools.javac.util.LayoutCharacters
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CR")
#undef CR
#pragma push_macro("EOI")
#undef EOI
#pragma push_macro("FF")
#undef FF
#pragma push_macro("LF")
#undef LF
#pragma push_macro("TAB")
#undef TAB

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import LayoutCharacters : public ::java::lang::Object {
	$interface(LayoutCharacters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static int32_t tabulate(int32_t column);
	static const int32_t TabInc = 8;
	static const int32_t DiagInc = 4;
	static const int32_t DetailsInc = 2;
	static const int8_t TAB = 9;
	static const int8_t LF = 10;
	static const int8_t FF = 12;
	static const int8_t CR = 13;
	static const int8_t EOI = 26;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CR")
#pragma pop_macro("EOI")
#pragma pop_macro("FF")
#pragma pop_macro("LF")
#pragma pop_macro("TAB")

#endif // _com_sun_tools_javac_util_LayoutCharacters_h_