#ifndef _com_sun_tools_javac_comp_Resolve$InvalidSymbolError_h_
#define _com_sun_tools_javac_comp_Resolve$InvalidSymbolError_h_
//$ class com.sun.tools.javac.comp.Resolve$InvalidSymbolError
//$ extends com.sun.tools.javac.comp.Resolve$ResolveError

#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind;
					class Symbol;
					class Symbol$TypeSymbol;
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

class $import Resolve$InvalidSymbolError : public ::com::sun::tools::javac::comp::Resolve$ResolveError {
	$class(Resolve$InvalidSymbolError, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ResolveError)
public:
	Resolve$InvalidSymbolError();
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::accept;
	using ::com::sun::tools::javac::comp::Resolve$ResolveError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::code::Kinds$Kind* kind, ::com::sun::tools::javac::code::Symbol* sym, $String* debugName);
	virtual ::com::sun::tools::javac::code::Symbol* access(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* location) override;
	virtual bool exists() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$InvalidSymbolError_h_