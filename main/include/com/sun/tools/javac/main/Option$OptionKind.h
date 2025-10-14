#ifndef _com_sun_tools_javac_main_Option$OptionKind_h_
#define _com_sun_tools_javac_main_Option$OptionKind_h_
//$ class com.sun.tools.javac.main.Option$OptionKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXTENDED")
#undef EXTENDED
#pragma push_macro("HIDDEN")
#undef HIDDEN
#pragma push_macro("STANDARD")
#undef STANDARD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import Option$OptionKind : public ::java::lang::Enum {
	$class(Option$OptionKind, 0, ::java::lang::Enum)
public:
	Option$OptionKind();
	static $Array<::com::sun::tools::javac::main::Option$OptionKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::Option$OptionKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option$OptionKind>* values();
	static ::com::sun::tools::javac::main::Option$OptionKind* STANDARD;
	static ::com::sun::tools::javac::main::Option$OptionKind* EXTENDED;
	static ::com::sun::tools::javac::main::Option$OptionKind* HIDDEN;
	static $Array<::com::sun::tools::javac::main::Option$OptionKind>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EXTENDED")
#pragma pop_macro("HIDDEN")
#pragma pop_macro("STANDARD")

#endif // _com_sun_tools_javac_main_Option$OptionKind_h_