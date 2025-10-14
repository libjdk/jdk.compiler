#ifndef _com_sun_tools_javac_comp_Resolve$LogResolveHelper_h_
#define _com_sun_tools_javac_comp_Resolve$LogResolveHelper_h_
//$ interface com.sun.tools.javac.comp.Resolve$LogResolveHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export Resolve$LogResolveHelper : public ::java::lang::Object {
	$interface(Resolve$LogResolveHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::util::List* getArgumentTypes(::com::sun::tools::javac::comp::Resolve$ResolveError* errSym, ::com::sun::tools::javac::code::Symbol* accessedSym, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes) {return nullptr;}
	virtual bool resolveDiagnosticNeeded(::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes) {return false;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$LogResolveHelper_h_