#ifndef _com_sun_tools_javac_code_Symbol$ParamSymbol_h_
#define _com_sun_tools_javac_code_Symbol$ParamSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$ParamSymbol
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
					class Name;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Symbol$ParamSymbol : public ::com::sun::tools::javac::code::Symbol$VarSymbol {
	$class(Symbol$ParamSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$VarSymbol)
public:
	Symbol$ParamSymbol();
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::clone;
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$ParamSymbol_h_