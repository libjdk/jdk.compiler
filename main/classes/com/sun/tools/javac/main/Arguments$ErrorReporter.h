#ifndef _com_sun_tools_javac_main_Arguments$ErrorReporter_h_
#define _com_sun_tools_javac_main_Arguments$ErrorReporter_h_
//$ interface com.sun.tools.javac.main.Arguments$ErrorReporter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
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
				namespace main {

class Arguments$ErrorReporter : public ::java::lang::Object {
	$interface(Arguments$ErrorReporter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void report(::com::sun::tools::javac::main::Option* o) {}
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Arguments$ErrorReporter_h_