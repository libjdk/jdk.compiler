#ifndef _com_sun_tools_javac_main_Option$39_h_
#define _com_sun_tools_javac_main_Option$39_h_
//$ class com.sun.tools.javac.main.Option$39
//$ extends com.sun.tools.javac.main.Option

#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Array.h>

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

class Option$39 : public ::com::sun::tools::javac::main::Option {
	$class(Option$39, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$39();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	$Array<::com::sun::tools::javac::main::Option>* getSupportedRuntimeOptions();
	static $String* lambda$process$0($String* arg);
	static bool lambda$process$1($String* s);
	using ::com::sun::tools::javac::main::Option::process;
	virtual void process(::com::sun::tools::javac::main::OptionHelper* helper, $String* option) override;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$39_h_