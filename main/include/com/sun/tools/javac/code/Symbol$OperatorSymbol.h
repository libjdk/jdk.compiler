#ifndef _com_sun_tools_javac_code_Symbol$OperatorSymbol_h_
#define _com_sun_tools_javac_code_Symbol$OperatorSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$OperatorSymbol
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$Visitor;
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
				namespace tree {
					class JCTree$Tag;
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

class $import Symbol$OperatorSymbol : public ::com::sun::tools::javac::code::Symbol$MethodSymbol {
	$class(Symbol$OperatorSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol)
public:
	Symbol$OperatorSymbol();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::accept;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, int32_t opcode, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual int32_t getAccessCode(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	int32_t opcode = 0;
	int32_t accessCode = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$OperatorSymbol_h_