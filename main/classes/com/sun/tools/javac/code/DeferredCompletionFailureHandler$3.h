#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler$3_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler$3_h_
//$ class com.sun.tools.javac.code.DeferredCompletionFailureHandler$3
//$ extends com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
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

class DeferredCompletionFailureHandler$3 : public ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler {
	$class(DeferredCompletionFailureHandler$3, $NO_CLASS_INIT, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler)
public:
	DeferredCompletionFailureHandler$3();
	void init$(::com::sun::tools::javac::code::DeferredCompletionFailureHandler* this$0);
	virtual void classSymbolCompleteFailed(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::com::sun::tools::javac::code::Symbol$Completer* origCompleter) override;
	virtual void classSymbolRemoved(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym) override;
	virtual void handleAPICompletionFailure(::com::sun::tools::javac::code::Symbol$CompletionFailure* cf) override;
	virtual void install() override;
	virtual void uninstall() override;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler$3_h_