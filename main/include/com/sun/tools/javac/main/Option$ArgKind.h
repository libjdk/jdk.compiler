#ifndef _com_sun_tools_javac_main_Option$ArgKind_h_
#define _com_sun_tools_javac_main_Option$ArgKind_h_
//$ class com.sun.tools.javac.main.Option$ArgKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ADJACENT")
#undef ADJACENT
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("REQUIRED")
#undef REQUIRED

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import Option$ArgKind : public ::java::lang::Enum {
	$class(Option$ArgKind, 0, ::java::lang::Enum)
public:
	Option$ArgKind();
	static $Array<::com::sun::tools::javac::main::Option$ArgKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::Option$ArgKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option$ArgKind>* values();
	static ::com::sun::tools::javac::main::Option$ArgKind* NONE;
	static ::com::sun::tools::javac::main::Option$ArgKind* REQUIRED;
	static ::com::sun::tools::javac::main::Option$ArgKind* ADJACENT;
	static $Array<::com::sun::tools::javac::main::Option$ArgKind>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ADJACENT")
#pragma pop_macro("NONE")
#pragma pop_macro("REQUIRED")

#endif // _com_sun_tools_javac_main_Option$ArgKind_h_