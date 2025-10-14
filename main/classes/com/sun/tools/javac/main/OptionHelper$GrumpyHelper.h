#ifndef _com_sun_tools_javac_main_OptionHelper$GrumpyHelper_h_
#define _com_sun_tools_javac_main_OptionHelper$GrumpyHelper_h_
//$ class com.sun.tools.javac.main.OptionHelper$GrumpyHelper
//$ extends com.sun.tools.javac.main.OptionHelper

#include <com/sun/tools/javac/main/OptionHelper.h>

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

class $export OptionHelper$GrumpyHelper : public ::com::sun::tools::javac::main::OptionHelper {
	$class(OptionHelper$GrumpyHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::main::OptionHelper)
public:
	OptionHelper$GrumpyHelper();
	void init$(::com::sun::tools::javac::util::Log* log);
	virtual void addClassName($String* s) override;
	virtual void addFile(::java::nio::file::Path* p) override;
	virtual $String* get(::com::sun::tools::javac::main::Option* option) override;
	virtual ::com::sun::tools::javac::util::Log* getLog() override;
	virtual $String* getOwnName() override;
	virtual bool handleFileManagerOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual void put($String* name, $String* value) override;
	virtual void remove($String* name) override;
	::com::sun::tools::javac::util::Log* log = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_OptionHelper$GrumpyHelper_h_