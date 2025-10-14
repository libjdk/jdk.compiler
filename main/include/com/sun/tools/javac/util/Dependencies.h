#ifndef _com_sun_tools_javac_util_Dependencies_h_
#define _com_sun_tools_javac_util_Dependencies_h_
//$ class com.sun.tools.javac.util.Dependencies
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
					class Context;
					class Context$Key;
					class Dependencies$CompletionCause;
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

class $import Dependencies : public ::java::lang::Object {
	$class(Dependencies, 0, ::java::lang::Object)
public:
	Dependencies();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::util::Dependencies* instance(::com::sun::tools::javac::util::Context* context);
	virtual void pop() {}
	virtual void push(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, ::com::sun::tools::javac::util::Dependencies$CompletionCause* phase) {}
	static ::com::sun::tools::javac::util::Context$Key* dependenciesKey;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies_h_