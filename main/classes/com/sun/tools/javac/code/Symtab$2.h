#ifndef _com_sun_tools_javac_code_Symtab$2_h_
#define _com_sun_tools_javac_code_Symtab$2_h_
//$ class com.sun.tools.javac.code.Symtab$2
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symtab;
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

class Symtab$2 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Symtab$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Symtab$2();
	void init$(::com::sun::tools::javac::code::Symtab* this$0, ::com::sun::tools::javac::code::Symbol$Completer* val$completer, ::com::sun::tools::javac::code::Type* val$type);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual bool isTerminal() override;
	::com::sun::tools::javac::code::Symtab* this$0 = nullptr;
	::com::sun::tools::javac::code::Type* val$type = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* val$completer = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symtab$2_h_