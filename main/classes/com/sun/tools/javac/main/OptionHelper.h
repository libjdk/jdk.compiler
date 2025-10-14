#ifndef _com_sun_tools_javac_main_OptionHelper_h_
#define _com_sun_tools_javac_main_OptionHelper_h_
//$ class com.sun.tools.javac.main.OptionHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option;
					class Option$InvalidValueException;
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
					class JCDiagnostic$Error;
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

class $export OptionHelper : public ::java::lang::Object {
	$class(OptionHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OptionHelper();
	void init$();
	virtual void addClassName($String* s) {}
	virtual void addFile(::java::nio::file::Path* p) {}
	virtual $String* get(::com::sun::tools::javac::main::Option* option) {return nullptr;}
	virtual ::com::sun::tools::javac::util::Log* getLog() {return nullptr;}
	virtual $String* getOwnName() {return nullptr;}
	virtual bool handleFileManagerOption(::com::sun::tools::javac::main::Option* option, $String* value) {return false;}
	virtual ::com::sun::tools::javac::main::Option$InvalidValueException* newInvalidValueException(::com::sun::tools::javac::util::JCDiagnostic$Error* error);
	virtual void put($String* name, $String* value) {}
	virtual void remove($String* name) {}
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_OptionHelper_h_