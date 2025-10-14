#ifndef _com_sun_tools_javac_comp_Resolve$9_h_
#define _com_sun_tools_javac_comp_Resolve$9_h_
//$ class com.sun.tools.javac.comp.Resolve$9
//$ extends com.sun.tools.javac.comp.Resolve$LogResolveHelper

#include <com/sun/tools/javac/comp/Resolve$LogResolveHelper.h>

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
					class Resolve$ResolveError;
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
				namespace comp {

class Resolve$9 : public ::com::sun::tools::javac::comp::Resolve$LogResolveHelper {
	$class(Resolve$9, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$LogResolveHelper)
public:
	Resolve$9();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual ::com::sun::tools::javac::util::List* getArgumentTypes(::com::sun::tools::javac::comp::Resolve$ResolveError* errSym, ::com::sun::tools::javac::code::Symbol* accessedSym, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes) override;
	virtual bool resolveDiagnosticNeeded(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$9_h_