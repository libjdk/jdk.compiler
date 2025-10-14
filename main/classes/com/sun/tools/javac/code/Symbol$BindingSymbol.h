#ifndef _com_sun_tools_javac_code_Symbol$BindingSymbol_h_
#define _com_sun_tools_javac_code_Symbol$BindingSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$BindingSymbol
//$ extends com.sun.tools.javac.code.Symbol$VarSymbol

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
				namespace util {
					class List;
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

class $export Symbol$BindingSymbol : public ::com::sun::tools::javac::code::Symbol$VarSymbol {
	$class(Symbol$BindingSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$VarSymbol)
public:
	Symbol$BindingSymbol();
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::clone;
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::com::sun::tools::javac::util::List* aliases();
	virtual bool isAliasFor(::com::sun::tools::javac::code::Symbol$BindingSymbol* b);
	virtual bool isPreserved();
	virtual void preserveBinding();
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$BindingSymbol_h_