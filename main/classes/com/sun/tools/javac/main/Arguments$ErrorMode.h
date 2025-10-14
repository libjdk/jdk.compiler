#ifndef _com_sun_tools_javac_main_Arguments$ErrorMode_h_
#define _com_sun_tools_javac_main_Arguments$ErrorMode_h_
//$ class com.sun.tools.javac.main.Arguments$ErrorMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ILLEGAL_ARGUMENT")
#undef ILLEGAL_ARGUMENT
#pragma push_macro("ILLEGAL_STATE")
#undef ILLEGAL_STATE
#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Arguments$ErrorMode : public ::java::lang::Enum {
	$class(Arguments$ErrorMode, 0, ::java::lang::Enum)
public:
	Arguments$ErrorMode();
	static $Array<::com::sun::tools::javac::main::Arguments$ErrorMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::Arguments$ErrorMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Arguments$ErrorMode>* values();
	static ::com::sun::tools::javac::main::Arguments$ErrorMode* ILLEGAL_ARGUMENT;
	static ::com::sun::tools::javac::main::Arguments$ErrorMode* ILLEGAL_STATE;
	static ::com::sun::tools::javac::main::Arguments$ErrorMode* LOG;
	static $Array<::com::sun::tools::javac::main::Arguments$ErrorMode>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ILLEGAL_ARGUMENT")
#pragma pop_macro("ILLEGAL_STATE")
#pragma pop_macro("LOG")

#endif // _com_sun_tools_javac_main_Arguments$ErrorMode_h_