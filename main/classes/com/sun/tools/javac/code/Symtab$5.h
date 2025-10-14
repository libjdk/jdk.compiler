#ifndef _com_sun_tools_javac_code_Symtab$5_h_
#define _com_sun_tools_javac_code_Symtab$5_h_
//$ class com.sun.tools.javac.code.Symtab$5
//$ extends com.sun.tools.javac.code.Symbol$ModuleSymbol

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>

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
				namespace util {
					class Name;
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

class Symtab$5 : public ::com::sun::tools::javac::code::Symbol$ModuleSymbol {
	$class(Symtab$5, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$ModuleSymbol)
public:
	Symtab$5();
	using ::com::sun::tools::javac::code::Symbol$ModuleSymbol::accept;
	using ::com::sun::tools::javac::code::Symbol$ModuleSymbol::clone;
	void init$(::com::sun::tools::javac::code::Symtab* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual bool isNoModule() override;
	::com::sun::tools::javac::code::Symtab* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symtab$5_h_