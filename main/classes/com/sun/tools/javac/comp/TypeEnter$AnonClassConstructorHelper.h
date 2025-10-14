#ifndef _com_sun_tools_javac_comp_TypeEnter$AnonClassConstructorHelper_h_
#define _com_sun_tools_javac_comp_TypeEnter$AnonClassConstructorHelper_h_
//$ class com.sun.tools.javac.comp.TypeEnter$AnonClassConstructorHelper
//$ extends com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper

#include <com/sun/tools/javac/comp/TypeEnter$BasicConstructorHelper.h>

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
				namespace comp {
					class TypeEnter;
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
					class JCTree$JCExpression;
					class JCTree$JCVariableDecl;
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

class $export TypeEnter$AnonClassConstructorHelper : public ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper {
	$class(TypeEnter$AnonClassConstructorHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper)
public:
	TypeEnter$AnonClassConstructorHelper();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0, ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner, ::com::sun::tools::javac::code::Symbol$MethodSymbol* constr, ::com::sun::tools::javac::tree::JCTree$JCExpression* encl);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* constructorSymbol() override;
	virtual ::com::sun::tools::javac::code::Type* constructorType() override;
	virtual ::com::sun::tools::javac::code::Type* enclosingType() override;
	static ::com::sun::tools::javac::util::Name* lambda$superArgs$0(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	virtual ::com::sun::tools::javac::util::List* superArgs() override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* constr = nullptr;
	::com::sun::tools::javac::code::Type* encl = nullptr;
	bool based = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$AnonClassConstructorHelper_h_