#ifndef _com_sun_tools_javac_main_Arguments$1_h_
#define _com_sun_tools_javac_main_Arguments$1_h_
//$ class com.sun.tools.javac.main.Arguments$1
//$ extends com.sun.tools.javac.main.OptionHelper

#include <com/sun/tools/javac/main/OptionHelper.h>

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
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Arguments$1 : public ::com::sun::tools::javac::main::OptionHelper {
	$class(Arguments$1, $NO_CLASS_INIT, ::com::sun::tools::javac::main::OptionHelper)
public:
	Arguments$1();
	void init$(::com::sun::tools::javac::main::Arguments* this$0);
	virtual void addClassName($String* s) override;
	virtual void addFile(::java::nio::file::Path* p) override;
	virtual $String* get(::com::sun::tools::javac::main::Option* option) override;
	virtual ::com::sun::tools::javac::util::Log* getLog() override;
	virtual $String* getOwnName() override;
	virtual bool handleFileManagerOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual void put($String* name, $String* value) override;
	virtual void remove($String* name) override;
	::com::sun::tools::javac::main::Arguments* this$0 = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Arguments$1_h_