#ifndef _com_sun_tools_javac_code_DeferredCompletionFailureHandler$FlipSymbolDescription_h_
#define _com_sun_tools_javac_code_DeferredCompletionFailureHandler$FlipSymbolDescription_h_
//$ class com.sun.tools.javac.code.DeferredCompletionFailureHandler$FlipSymbolDescription
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Scope$WriteableScope;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Type;
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

class DeferredCompletionFailureHandler$FlipSymbolDescription : public ::java::lang::Object {
	$class(DeferredCompletionFailureHandler$FlipSymbolDescription, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredCompletionFailureHandler$FlipSymbolDescription();
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::com::sun::tools::javac::code::Symbol$Completer* completer);
	virtual void flip();
	::com::sun::tools::javac::code::Symbol$ClassSymbol* sym = nullptr;
	::com::sun::tools::javac::code::Type* type = nullptr;
	::com::sun::tools::javac::code::Kinds$Kind* kind = nullptr;
	::com::sun::tools::javac::code::Scope$WriteableScope* members = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* completer = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_DeferredCompletionFailureHandler$FlipSymbolDescription_h_