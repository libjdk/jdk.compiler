#ifndef _com_sun_tools_javac_main_Option$31_h_
#define _com_sun_tools_javac_main_Option$31_h_
//$ class com.sun.tools.javac.main.Option$31
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
				namespace main {

class Option$31 : public ::com::sun::tools::javac::main::Option {
	$class(Option$31, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$31();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	virtual bool matches($String* s) override;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option) override;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option, $String* arg) override;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$31_h_