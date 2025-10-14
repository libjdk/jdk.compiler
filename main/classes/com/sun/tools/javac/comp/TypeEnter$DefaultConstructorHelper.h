#ifndef _com_sun_tools_javac_comp_TypeEnter$DefaultConstructorHelper_h_
#define _com_sun_tools_javac_comp_TypeEnter$DefaultConstructorHelper_h_
//$ interface com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
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
					class JCTree$JCMethodDecl;
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

class $export TypeEnter$DefaultConstructorHelper : public ::java::lang::Object {
	$interface(TypeEnter$DefaultConstructorHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* constructorSymbol() {return nullptr;}
	virtual ::com::sun::tools::javac::code::Type* constructorType() {return nullptr;}
	virtual ::com::sun::tools::javac::code::Type* enclosingType() {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* finalAdjustment(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* md);
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner() {return nullptr;}
	virtual ::com::sun::tools::javac::util::List* superArgs() {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$DefaultConstructorHelper_h_