#ifndef _com_sun_tools_javac_code_Symbol$Completer_h_
#define _com_sun_tools_javac_code_Symbol$Completer_h_
//$ interface com.sun.tools.javac.code.Symbol$Completer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NULL_COMPLETER")
#undef NULL_COMPLETER

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class $import Symbol$Completer : public ::java::lang::Object {
	$interface(Symbol$Completer, 0, ::java::lang::Object)
public:
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) {}
	virtual bool isTerminal();
	static ::com::sun::tools::javac::code::Symbol$Completer* NULL_COMPLETER;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NULL_COMPLETER")

#endif // _com_sun_tools_javac_code_Symbol$Completer_h_