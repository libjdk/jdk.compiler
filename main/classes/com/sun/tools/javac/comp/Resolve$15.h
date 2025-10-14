#ifndef _com_sun_tools_javac_comp_Resolve$15_h_
#define _com_sun_tools_javac_comp_Resolve$15_h_
//$ class com.sun.tools.javac.comp.Resolve$15
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>

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
				namespace comp {
					class Resolve;
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
				namespace comp {

class Resolve$15 : public ::com::sun::tools::javac::code::Symbol$MethodSymbol {
	$class(Resolve$15, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol)
public:
	Resolve$15();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol* val$sym);
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$sym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$15_h_