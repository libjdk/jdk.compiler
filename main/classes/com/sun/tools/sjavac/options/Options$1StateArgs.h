#ifndef _com_sun_tools_sjavac_options_Options$1StateArgs_h_
#define _com_sun_tools_sjavac_options_Options$1StateArgs_h_
//$ class com.sun.tools.sjavac.options.Options$1StateArgs
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {
					class Option;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

class Options$1StateArgs : public ::java::lang::Object {
	$class(Options$1StateArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Options$1StateArgs();
	void init$(::com::sun::tools::sjavac::options::Options* this$0);
	virtual void addAll(::java::util::Collection* toAdd);
	virtual void addArg(::com::sun::tools::sjavac::options::Option* opt);
	virtual void addArg(::com::sun::tools::sjavac::options::Option* opt, Object$* val);
	virtual void addSourceLocations(::com::sun::tools::sjavac::options::Option* opt, ::java::util::List* locs);
	virtual $String* getResult();
	::com::sun::tools::sjavac::options::Options* this$0 = nullptr;
	::java::util::List* args = nullptr;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_Options$1StateArgs_h_