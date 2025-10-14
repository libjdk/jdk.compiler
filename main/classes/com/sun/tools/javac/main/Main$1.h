#ifndef _com_sun_tools_javac_main_Main$1_h_
#define _com_sun_tools_javac_main_Main$1_h_
//$ class com.sun.tools.javac.main.Main$1
//$ extends com.sun.tools.javac.main.OptionHelper$GrumpyHelper

#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Main;
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

class Main$1 : public ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper {
	$class(Main$1, $NO_CLASS_INIT, ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper)
public:
	Main$1();
	void init$(::com::sun::tools::javac::main::Main* this$0, ::com::sun::tools::javac::util::Log* log);
	virtual $String* getOwnName() override;
	virtual void put($String* name, $String* value) override;
	::com::sun::tools::javac::main::Main* this$0 = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Main$1_h_