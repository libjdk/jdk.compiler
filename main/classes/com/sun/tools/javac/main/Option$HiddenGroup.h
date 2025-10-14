#ifndef _com_sun_tools_javac_main_Option$HiddenGroup_h_
#define _com_sun_tools_javac_main_Option$HiddenGroup_h_
//$ class com.sun.tools.javac.main.Option$HiddenGroup
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DIAGS")
#undef DIAGS
#pragma push_macro("SHOULDSTOP")
#undef SHOULDSTOP

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class OptionHelper;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export Option$HiddenGroup : public ::java::lang::Enum {
	$class(Option$HiddenGroup, 0, ::java::lang::Enum)
public:
	Option$HiddenGroup();
	static $Array<::com::sun::tools::javac::main::Option$HiddenGroup>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text);
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option, $String* arg);
	static ::com::sun::tools::javac::main::Option$HiddenGroup* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Option$HiddenGroup>* values();
	static ::com::sun::tools::javac::main::Option$HiddenGroup* DIAGS;
	static ::com::sun::tools::javac::main::Option$HiddenGroup* DEBUG;
	static ::com::sun::tools::javac::main::Option$HiddenGroup* SHOULDSTOP;
	static $Array<::com::sun::tools::javac::main::Option$HiddenGroup>* $VALUES;
	$String* text = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DIAGS")
#pragma pop_macro("SHOULDSTOP")

#endif // _com_sun_tools_javac_main_Option$HiddenGroup_h_