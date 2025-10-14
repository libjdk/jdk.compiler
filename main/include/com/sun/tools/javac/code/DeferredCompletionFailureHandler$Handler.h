#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler$Handler_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler$Handler_h_
//$ interface com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$CompletionFailure;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import DeferredCompletionFailureHandler$Handler : public ::java::lang::Object {
	$interface(DeferredCompletionFailureHandler$Handler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void classSymbolCompleteFailed(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::com::sun::tools::javac::code::Symbol$Completer* origCompleter) {}
	virtual void classSymbolRemoved(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym) {}
	virtual void handleAPICompletionFailure(::com::sun::tools::javac::code::Symbol$CompletionFailure* cf) {}
	virtual void install() {}
	virtual void uninstall() {}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler$Handler_h_