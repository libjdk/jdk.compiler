#ifndef _com_sun_tools_javac_comp_Resolve$RecoveryLoadClass_h_
#define _com_sun_tools_javac_comp_Resolve$RecoveryLoadClass_h_
//$ interface com.sun.tools.javac.comp.Resolve$RecoveryLoadClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace comp {
					class Env;
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

class $import Resolve$RecoveryLoadClass : public ::java::lang::Object {
	$interface(Resolve$RecoveryLoadClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::code::Symbol* loadClass(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::util::Name* name) {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$RecoveryLoadClass_h_