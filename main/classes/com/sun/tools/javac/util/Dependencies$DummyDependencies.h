#ifndef _com_sun_tools_javac_util_Dependencies$DummyDependencies_h_
#define _com_sun_tools_javac_util_Dependencies$DummyDependencies_h_
//$ class com.sun.tools.javac.util.Dependencies$DummyDependencies
//$ extends com.sun.tools.javac.util.Dependencies

#include <com/sun/tools/javac/util/Dependencies.h>

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

class Dependencies$DummyDependencies : public ::com::sun::tools::javac::util::Dependencies {
	$class(Dependencies$DummyDependencies, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Dependencies)
public:
	Dependencies$DummyDependencies();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void pop() override;
	virtual void push(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, ::com::sun::tools::javac::util::Dependencies$CompletionCause* phase) override;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies$DummyDependencies_h_