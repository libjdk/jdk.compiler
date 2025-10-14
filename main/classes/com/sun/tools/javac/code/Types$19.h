#ifndef _com_sun_tools_javac_code_Types$19_h_
#define _com_sun_tools_javac_code_Types$19_h_
//$ class com.sun.tools.javac.code.Types$19
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
					class Types;
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

class Types$19 : public ::com::sun::tools::javac::code::Symbol$MethodSymbol {
	$class(Types$19, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol)
public:
	Types$19();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	void init$(::com::sun::tools::javac::code::Types* this$0, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol* val$s);
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$s = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$19_h_