#ifndef _com_sun_tools_javac_code_TypeTag$NumericClasses_h_
#define _com_sun_tools_javac_code_TypeTag$NumericClasses_h_
//$ class com.sun.tools.javac.code.TypeTag$NumericClasses
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BYTE_CLASS")
#undef BYTE_CLASS
#pragma push_macro("BYTE_SUPERCLASSES")
#undef BYTE_SUPERCLASSES
#pragma push_macro("CHAR_CLASS")
#undef CHAR_CLASS
#pragma push_macro("CHAR_SUPERCLASSES")
#undef CHAR_SUPERCLASSES
#pragma push_macro("DOUBLE_CLASS")
#undef DOUBLE_CLASS
#pragma push_macro("FLOAT_CLASS")
#undef FLOAT_CLASS
#pragma push_macro("FLOAT_SUPERCLASSES")
#undef FLOAT_SUPERCLASSES
#pragma push_macro("INT_CLASS")
#undef INT_CLASS
#pragma push_macro("INT_SUPERCLASSES")
#undef INT_SUPERCLASSES
#pragma push_macro("LONG_CLASS")
#undef LONG_CLASS
#pragma push_macro("LONG_SUPERCLASSES")
#undef LONG_SUPERCLASSES
#pragma push_macro("SHORT_CLASS")
#undef SHORT_CLASS
#pragma push_macro("SHORT_SUPERCLASSES")
#undef SHORT_SUPERCLASSES

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeTag$NumericClasses : public ::java::lang::Object {
	$class(TypeTag$NumericClasses, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeTag$NumericClasses();
	void init$();
	static const int32_t BYTE_CLASS = 1;
	static const int32_t CHAR_CLASS = 2;
	static const int32_t SHORT_CLASS = 4;
	static const int32_t INT_CLASS = 8;
	static const int32_t LONG_CLASS = 16;
	static const int32_t FLOAT_CLASS = 32;
	static const int32_t DOUBLE_CLASS = 64;
	static const int32_t BYTE_SUPERCLASSES = 125; // BYTE_CLASS | SHORT_CLASS | INT_CLASS | LONG_CLASS | FLOAT_CLASS | DOUBLE_CLASS
	static const int32_t CHAR_SUPERCLASSES = 122; // CHAR_CLASS | INT_CLASS | LONG_CLASS | FLOAT_CLASS | DOUBLE_CLASS
	static const int32_t SHORT_SUPERCLASSES = 124; // SHORT_CLASS | INT_CLASS | LONG_CLASS | FLOAT_CLASS | DOUBLE_CLASS
	static const int32_t INT_SUPERCLASSES = 120; // INT_CLASS | LONG_CLASS | FLOAT_CLASS | DOUBLE_CLASS
	static const int32_t LONG_SUPERCLASSES = 112; // LONG_CLASS | FLOAT_CLASS | DOUBLE_CLASS
	static const int32_t FLOAT_SUPERCLASSES = 96; // FLOAT_CLASS | DOUBLE_CLASS
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BYTE_CLASS")
#pragma pop_macro("BYTE_SUPERCLASSES")
#pragma pop_macro("CHAR_CLASS")
#pragma pop_macro("CHAR_SUPERCLASSES")
#pragma pop_macro("DOUBLE_CLASS")
#pragma pop_macro("FLOAT_CLASS")
#pragma pop_macro("FLOAT_SUPERCLASSES")
#pragma pop_macro("INT_CLASS")
#pragma pop_macro("INT_SUPERCLASSES")
#pragma pop_macro("LONG_CLASS")
#pragma pop_macro("LONG_SUPERCLASSES")
#pragma pop_macro("SHORT_CLASS")
#pragma pop_macro("SHORT_SUPERCLASSES")

#endif // _com_sun_tools_javac_code_TypeTag$NumericClasses_h_