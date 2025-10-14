#ifndef _com_sun_tools_javac_comp_AttrContextEnv_h_
#define _com_sun_tools_javac_comp_AttrContextEnv_h_
//$ class com.sun.tools.javac.comp.AttrContextEnv
//$ extends com.sun.tools.javac.comp.Env

#include <com/sun/tools/javac/comp/Env.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class AttrContext;
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
					class JCTree;
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

class $export AttrContextEnv : public ::com::sun::tools::javac::comp::Env {
	$class(AttrContextEnv, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Env)
public:
	AttrContextEnv();
	void init$(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::AttrContext* info);
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrContextEnv_h_