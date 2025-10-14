#ifndef _com_sun_tools_javac_main_Option$OptionGroup_h_
#define _com_sun_tools_javac_main_Option$OptionGroup_h_
//$ class com.sun.tools.javac.main.Option$OptionGroup
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BASIC")
#undef BASIC
#pragma push_macro("FILEMANAGER")
#undef FILEMANAGER
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("OPERAND")
#undef OPERAND

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import Option$OptionGroup : public ::java::lang::Enum {
	$class(Option$OptionGroup, 0, ::java::lang::Enum)
public:
	Option$OptionGroup();
	static $Array<::com::sun::tools::javac::main::Option$OptionGroup>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::Option$OptionGroup* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option$OptionGroup>* values();
	static ::com::sun::tools::javac::main::Option$OptionGroup* BASIC;
	static ::com::sun::tools::javac::main::Option$OptionGroup* FILEMANAGER;
	static ::com::sun::tools::javac::main::Option$OptionGroup* INFO;
	static ::com::sun::tools::javac::main::Option$OptionGroup* OPERAND;
	static $Array<::com::sun::tools::javac::main::Option$OptionGroup>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BASIC")
#pragma pop_macro("FILEMANAGER")
#pragma pop_macro("INFO")
#pragma pop_macro("OPERAND")

#endif // _com_sun_tools_javac_main_Option$OptionGroup_h_