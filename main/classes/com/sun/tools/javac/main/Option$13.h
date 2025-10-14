#ifndef _com_sun_tools_javac_main_Option$13_h_
#define _com_sun_tools_javac_main_Option$13_h_
//$ class com.sun.tools.javac.main.Option$13
//$ extends com.sun.tools.javac.main.Option

#include <com/sun/tools/javac/main/Option.h>

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
				namespace util {
					class Log;
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

class Option$13 : public ::com::sun::tools::javac::main::Option {
	$class(Option$13, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$13();
	using ::com::sun::tools::javac::main::Option::help;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	virtual void help(::com::sun::tools::javac::util::Log* log) override;
	using ::com::sun::tools::javac::main::Option::process;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option, $String* operand) override;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$13_h_