#ifndef _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$1_h_
#define _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$1_h_
//$ class com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$1
//$ extends com.sun.tools.javac.code.Type$ErrorType

#include <com/sun/tools/javac/code/Type$ErrorType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class Env;
					class TypeEnter$AbstractHeaderPhase;
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

class TypeEnter$AbstractHeaderPhase$1 : public ::com::sun::tools::javac::code::Type$ErrorType {
	$class(TypeEnter$AbstractHeaderPhase$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ErrorType)
public:
	TypeEnter$AbstractHeaderPhase$1();
	void init$(::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase* this$1, ::com::sun::tools::javac::code::Type* originalType, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::comp::Env* val$env, bool val$interfaceExpected, ::com::sun::tools::javac::tree::JCTree$JCExpression* val$tree);
	virtual ::com::sun::tools::javac::code::Type* getModelType() override;
	::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase* this$1 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* val$tree = nullptr;
	bool val$interfaceExpected = false;
	::com::sun::tools::javac::comp::Env* val$env = nullptr;
	::com::sun::tools::javac::code::Type* modelType = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$1_h_