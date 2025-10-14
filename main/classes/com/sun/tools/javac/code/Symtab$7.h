#ifndef _com_sun_tools_javac_code_Symtab$7_h_
#define _com_sun_tools_javac_code_Symtab$7_h_
//$ class com.sun.tools.javac.code.Symtab$7
//$ extends com.sun.tools.javac.code.Symbol$PackageSymbol

#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>

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

class Symtab$7 : public ::com::sun::tools::javac::code::Symbol$PackageSymbol {
	$class(Symtab$7, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$PackageSymbol)
public:
	Symtab$7();
	using ::com::sun::tools::javac::code::Symbol$PackageSymbol::clone;
	void init$(::com::sun::tools::javac::code::Symtab* this$0, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symtab* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symtab$7_h_