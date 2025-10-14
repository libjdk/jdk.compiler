#ifndef _com_sun_tools_javac_code_Symbol$Completer$1_h_
#define _com_sun_tools_javac_code_Symbol$Completer$1_h_
//$ class com.sun.tools.javac.code.Symbol$Completer$1
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

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

class Symbol$Completer$1 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Symbol$Completer$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Symbol$Completer$1();
	void init$();
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual bool isTerminal() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$Completer$1_h_