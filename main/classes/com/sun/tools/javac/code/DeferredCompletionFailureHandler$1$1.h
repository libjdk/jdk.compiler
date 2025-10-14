#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler$1$1_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler$1$1_h_
//$ class com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1
//$ extends com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler$1;
					class Symbol;
					class Symbol$Completer;
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

class DeferredCompletionFailureHandler$1$1 : public ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter {
	$class(DeferredCompletionFailureHandler$1$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter)
public:
	DeferredCompletionFailureHandler$1$1();
	void init$(::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1* this$1, ::com::sun::tools::javac::code::Symbol$Completer* origCompleter);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1* this$1 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler$1$1_h_