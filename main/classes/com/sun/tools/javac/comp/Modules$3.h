#ifndef _com_sun_tools_javac_comp_Modules$3_h_
#define _com_sun_tools_javac_comp_Modules$3_h_
//$ class com.sun.tools.javac.comp.Modules$3
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

class Modules$3 : public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Modules$3, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Modules$3();
	void init$(::com::sun::tools::javac::comp::Modules* this$0);
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Modules* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Modules$3_h_