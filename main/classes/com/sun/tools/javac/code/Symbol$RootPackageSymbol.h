#ifndef _com_sun_tools_javac_code_Symbol$RootPackageSymbol_h_
#define _com_sun_tools_javac_code_Symbol$RootPackageSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$RootPackageSymbol
//$ extends com.sun.tools.javac.code.Symbol$PackageSymbol

#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class MissingInfoHandler;
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

class $export Symbol$RootPackageSymbol : public ::com::sun::tools::javac::code::Symbol$PackageSymbol {
	$class(Symbol$RootPackageSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$PackageSymbol)
public:
	Symbol$RootPackageSymbol();
	using ::com::sun::tools::javac::code::Symbol$PackageSymbol::clone;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::MissingInfoHandler* missingInfoHandler, bool allowPrivateInvokeVirtual);
	::com::sun::tools::javac::code::MissingInfoHandler* missingInfoHandler = nullptr;
	bool allowPrivateInvokeVirtual = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$RootPackageSymbol_h_