#ifndef _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$Phase

#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
					class JCTree$JCClassDecl;
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
				namespace util {
					class Dependencies$CompletionCause;
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

class TypeEnter$AbstractHeaderPhase : public ::com::sun::tools::javac::comp::TypeEnter$Phase {
	$class(TypeEnter$AbstractHeaderPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$Phase)
public:
	TypeEnter$AbstractHeaderPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0, ::com::sun::tools::javac::util::Dependencies$CompletionCause* phaseName, ::com::sun::tools::javac::comp::TypeEnter$Phase* next);
	virtual void attribSuperTypes(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Env* baseEnv);
	virtual ::com::sun::tools::javac::comp::Env* baseEnv(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* clearTypeParams(::com::sun::tools::javac::tree::JCTree$JCExpression* superType);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* enumBase(int32_t pos, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::code::Type* modelMissingTypes(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, bool interfaceExpected);
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase_h_