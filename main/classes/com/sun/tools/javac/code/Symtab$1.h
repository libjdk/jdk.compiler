#ifndef _com_sun_tools_javac_code_Symtab$1_h_
#define _com_sun_tools_javac_code_Symtab$1_h_
//$ class com.sun.tools.javac.code.Symtab$1
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symtab;
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

class Symtab$1 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Symtab$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Symtab$1();
	void init$(::com::sun::tools::javac::code::Symtab* this$0, ::com::sun::tools::javac::code::Symbol$Completer* val$completer);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual bool isTerminal() override;
	::com::sun::tools::javac::code::Symtab* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* val$completer = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symtab$1_h_