#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler$DeferredCompleter_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler$DeferredCompleter_h_
//$ class com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class Symbol;
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

class DeferredCompletionFailureHandler$DeferredCompleter : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(DeferredCompletionFailureHandler$DeferredCompleter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	DeferredCompletionFailureHandler$DeferredCompleter();
	void init$(::com::sun::tools::javac::code::DeferredCompletionFailureHandler* this$0, ::com::sun::tools::javac::code::Symbol$Completer* origCompleter);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* origCompleter = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler$DeferredCompleter_h_