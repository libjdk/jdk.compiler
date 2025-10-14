#ifndef _com_sun_tools_javac_main_Option$23_h_
#define _com_sun_tools_javac_main_Option$23_h_
//$ class com.sun.tools.javac.main.Option$23
//$ extends com.sun.tools.javac.main.Option

#include <com/sun/tools/javac/main/Option.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option$ArgKind;
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

class Option$23 : public ::com::sun::tools::javac::main::Option {
	$class(Option$23, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$23();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group, ::com::sun::tools::javac::main::Option$ArgKind* ak);
	using ::com::sun::tools::javac::main::Option::process;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option) override;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$23_h_