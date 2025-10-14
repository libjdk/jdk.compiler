#ifndef _com_sun_tools_javac_main_Arguments$2_h_
#define _com_sun_tools_javac_main_Arguments$2_h_
//$ class com.sun.tools.javac.main.Arguments$2
//$ extends com.sun.tools.javac.main.OptionHelper$GrumpyHelper

#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Arguments;
					class Option;
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

class Arguments$2 : public ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper {
	$class(Arguments$2, $NO_CLASS_INIT, ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper)
public:
	Arguments$2();
	void init$(::com::sun::tools::javac::main::Arguments* this$0, ::com::sun::tools::javac::util::Log* log);
	virtual $String* get(::com::sun::tools::javac::main::Option* option) override;
	virtual ::com::sun::tools::javac::util::Log* getLog() override;
	virtual void put($String* name, $String* value) override;
	virtual void remove($String* name) override;
	::com::sun::tools::javac::main::Arguments* this$0 = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Arguments$2_h_