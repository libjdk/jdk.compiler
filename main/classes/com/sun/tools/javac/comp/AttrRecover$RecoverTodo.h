#ifndef _com_sun_tools_javac_comp_AttrRecover$RecoverTodo_h_
#define _com_sun_tools_javac_comp_AttrRecover$RecoverTodo_h_
//$ class com.sun.tools.javac.comp.AttrRecover$RecoverTodo
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
					class Attr$ResultInfo;
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

class AttrRecover$RecoverTodo : public ::java::lang::Object {
	$class(AttrRecover$RecoverTodo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AttrRecover$RecoverTodo();
	void init$(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol* errSym, ::com::sun::tools::javac::code::Symbol* candSym, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	::com::sun::tools::javac::tree::JCTree* tree = nullptr;
	::com::sun::tools::javac::code::Type* site = nullptr;
	::com::sun::tools::javac::code::Symbol* errSym = nullptr;
	::com::sun::tools::javac::code::Symbol* candSym = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrRecover$RecoverTodo_h_