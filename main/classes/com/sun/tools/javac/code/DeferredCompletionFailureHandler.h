#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler_h_
//$ class com.sun.tools.javac.code.DeferredCompletionFailureHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler$Handler;
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
				namespace util {
					class Context;
					class Context$Key;
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

class $export DeferredCompletionFailureHandler : public ::java::lang::Object {
	$class(DeferredCompletionFailureHandler, 0, ::java::lang::Object)
public:
	DeferredCompletionFailureHandler();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void classSymbolCompleteFailed(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::com::sun::tools::javac::code::Symbol$Completer* origCompleter);
	virtual void classSymbolRemoved(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	virtual void handleAPICompletionFailure(::com::sun::tools::javac::code::Symbol$CompletionFailure* cf);
	static ::com::sun::tools::javac::code::DeferredCompletionFailureHandler* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isDeferredCompleter(::com::sun::tools::javac::code::Symbol$Completer* c);
	virtual ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler* setHandler(::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler* h);
	static ::com::sun::tools::javac::util::Context$Key* deferredCompletionFailureHandlerKey;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler* userCodeHandler = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler* speculativeCodeHandler = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler* javacCodeHandler = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler* handler = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler_h_