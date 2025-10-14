#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler$1_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler$1_h_
//$ class com.sun.tools.javac.code.DeferredCompletionFailureHandler$1
//$ extends com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler

#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class DeferredCompletionFailureHandler;
					class DeferredCompletionFailureHandler$FlipSymbolDescription;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$CompletionFailure;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class DeferredCompletionFailureHandler$1 : public ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler {
	$class(DeferredCompletionFailureHandler$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$Handler)
public:
	DeferredCompletionFailureHandler$1();
	void init$(::com::sun::tools::javac::code::DeferredCompletionFailureHandler* this$0);
	virtual void classSymbolCompleteFailed(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::com::sun::tools::javac::code::Symbol$Completer* origCompleter) override;
	virtual void classSymbolRemoved(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym) override;
	virtual void handleAPICompletionFailure(::com::sun::tools::javac::code::Symbol$CompletionFailure* cf) override;
	virtual void install() override;
	static void lambda$install$0(::com::sun::tools::javac::code::DeferredCompletionFailureHandler$FlipSymbolDescription* f);
	virtual void uninstall() override;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* this$0 = nullptr;
	::java::util::Map* class2Flip = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler$1_h_