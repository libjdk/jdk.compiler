#ifndef _com_sun_tools_javac_comp_TypeEnter$BasicConstructorHelper_h_
#define _com_sun_tools_javac_comp_TypeEnter$BasicConstructorHelper_h_
//$ class com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper
//$ extends com.sun.tools.javac.comp.TypeEnter$DefaultConstructorHelper

#include <com/sun/tools/javac/comp/TypeEnter$DefaultConstructorHelper.h>

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

class $import TypeEnter$BasicConstructorHelper : public ::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper {
	$class(TypeEnter$BasicConstructorHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$DefaultConstructorHelper)
public:
	TypeEnter$BasicConstructorHelper();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0, ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* constructorSymbol() override;
	virtual ::com::sun::tools::javac::code::Type* constructorType() override;
	virtual ::com::sun::tools::javac::code::Type* enclosingType() override;
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner() override;
	virtual ::com::sun::tools::javac::util::List* superArgs() override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* owner$ = nullptr;
	::com::sun::tools::javac::code::Type* constructorType$ = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* constructorSymbol$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$BasicConstructorHelper_h_