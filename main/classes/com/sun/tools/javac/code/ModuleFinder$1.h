#ifndef _com_sun_tools_javac_code_ModuleFinder$1_h_
#define _com_sun_tools_javac_code_ModuleFinder$1_h_
//$ class com.sun.tools.javac.code.ModuleFinder$1
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class ModuleFinder;
					class Symbol;
					class Symbol$ModuleSymbol;
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

class ModuleFinder$1 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(ModuleFinder$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	ModuleFinder$1();
	void init$(::com::sun::tools::javac::code::ModuleFinder* this$0, ::com::sun::tools::javac::code::Symbol$ModuleSymbol* val$msym);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::ModuleFinder* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* val$msym = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ModuleFinder$1_h_