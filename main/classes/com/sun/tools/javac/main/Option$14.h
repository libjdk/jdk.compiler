#ifndef _com_sun_tools_javac_main_Option$14_h_
#define _com_sun_tools_javac_main_Option$14_h_
//$ class com.sun.tools.javac.main.Option$14
//$ extends com.sun.tools.javac.main.Option

#include <com/sun/tools/javac/main/Option.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option$OptionGroup;
					class Option$OptionKind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {
					class PlatformProvider;
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
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$14 : public ::com::sun::tools::javac::main::Option {
	$class(Option$14, $NO_CLASS_INIT, ::com::sun::tools::javac::main::Option)
public:
	Option$14();
	using ::com::sun::tools::javac::main::Option::help;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, ::com::sun::tools::javac::main::Option$OptionKind* kind, ::com::sun::tools::javac::main::Option$OptionGroup* group);
	virtual void help(::com::sun::tools::javac::util::Log* log) override;
	static ::java::util::stream::Stream* lambda$help$0(::com::sun::tools::javac::platform::PlatformProvider* provider);
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$14_h_