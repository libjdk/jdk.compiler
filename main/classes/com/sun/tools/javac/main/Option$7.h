#ifndef _com_sun_tools_javac_main_Option$7_h_
#define _com_sun_tools_javac_main_Option$7_h_
//$ class com.sun.tools.javac.main.Option$7
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
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$7 : public ::com::sun::tools::javac::main::Option {
	$class(Option$7, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$7();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	virtual ::java::util::regex::Pattern* getPattern() override;
	static $String* lambda$process$0($String* s);
	using ::com::sun::tools::javac::main::Option::process;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option, $String* arg) override;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$7_h_