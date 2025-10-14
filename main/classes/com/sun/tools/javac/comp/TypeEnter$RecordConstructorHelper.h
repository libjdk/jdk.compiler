#ifndef _com_sun_tools_javac_comp_TypeEnter$RecordConstructorHelper_h_
#define _com_sun_tools_javac_comp_TypeEnter$RecordConstructorHelper_h_
//$ class com.sun.tools.javac.comp.TypeEnter$RecordConstructorHelper
//$ extends com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper

#include <com/sun/tools/javac/comp/TypeEnter$BasicConstructorHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$RecordComponent;
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

class $export TypeEnter$RecordConstructorHelper : public ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper {
	$class(TypeEnter$RecordConstructorHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper)
public:
	TypeEnter$RecordConstructorHelper();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0, ::com::sun::tools::javac::code::Symbol$ClassSymbol* owner, ::com::sun::tools::javac::util::List* recordFieldDecls);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* constructorSymbol() override;
	virtual ::com::sun::tools::javac::code::Type* constructorType() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* finalAdjustment(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* md) override;
	static bool lambda$new$0(::com::sun::tools::javac::code::Symbol$RecordComponent* rc);
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
	bool lastIsVarargs = false;
	::com::sun::tools::javac::util::List* recordFieldDecls = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$RecordConstructorHelper_h_