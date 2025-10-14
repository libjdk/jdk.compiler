#ifndef _com_sun_tools_javac_main_Option$22_h_
#define _com_sun_tools_javac_main_Option$22_h_
//$ class com.sun.tools.javac.main.Option$22
//$ extends com.sun.tools.javac.main.Option

#include <com/sun/tools/javac/main/Option.h>

#pragma push_macro("LINT_KEY_FORMAT")
#undef LINT_KEY_FORMAT

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option$OptionGroup;
					class Option$OptionKind;
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

class Option$22 : public ::com::sun::tools::javac::main::Option {
	$class(Option$22, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$22();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	using ::com::sun::tools::javac::main::Option::process;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option) override;
	$String* LINT_KEY_FORMAT = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("LINT_KEY_FORMAT")

#endif // _com_sun_tools_javac_main_Option$22_h_