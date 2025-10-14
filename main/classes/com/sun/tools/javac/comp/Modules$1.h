#ifndef _com_sun_tools_javac_comp_Modules$1_h_
#define _com_sun_tools_javac_comp_Modules$1_h_
//$ class com.sun.tools.javac.comp.Modules$1
//$ extends com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace comp {
					class Modules;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Modules$1 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Modules$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Modules$1();
	void init$(::com::sun::tools::javac::comp::Modules* this$0);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	void initErrModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym);
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Modules* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Modules$1_h_