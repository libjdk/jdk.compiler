#ifndef _com_sun_tools_javac_main_Option$ChoiceKind_h_
#define _com_sun_tools_javac_main_Option$ChoiceKind_h_
//$ class com.sun.tools.javac.main.Option$ChoiceKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANYOF")
#undef ANYOF
#pragma push_macro("ONEOF")
#undef ONEOF

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import Option$ChoiceKind : public ::java::lang::Enum {
	$class(Option$ChoiceKind, 0, ::java::lang::Enum)
public:
	Option$ChoiceKind();
	static $Array<::com::sun::tools::javac::main::Option$ChoiceKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::Option$ChoiceKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option$ChoiceKind>* values();
	static ::com::sun::tools::javac::main::Option$ChoiceKind* ONEOF;
	static ::com::sun::tools::javac::main::Option$ChoiceKind* ANYOF;
	static $Array<::com::sun::tools::javac::main::Option$ChoiceKind>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANYOF")
#pragma pop_macro("ONEOF")

#endif // _com_sun_tools_javac_main_Option$ChoiceKind_h_