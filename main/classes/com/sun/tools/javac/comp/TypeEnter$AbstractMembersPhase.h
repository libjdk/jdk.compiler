#ifndef _com_sun_tools_javac_comp_TypeEnter$AbstractMembersPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$AbstractMembersPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$Phase

#include <com/sun/tools/javac/comp/TypeEnter$Phase.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
				namespace util {
					class Dependencies$CompletionCause;
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

class TypeEnter$AbstractMembersPhase : public ::com::sun::tools::javac::comp::TypeEnter$Phase {
	$class(TypeEnter$AbstractMembersPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$Phase)
public:
	TypeEnter$AbstractMembersPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0, ::com::sun::tools::javac::util::Dependencies$CompletionCause* completionCause, ::com::sun::tools::javac::comp::TypeEnter$Phase* next);
	virtual void doCompleteEnvs(::com::sun::tools::javac::util::List* envs) override;
	virtual void enterThisAndSuper(::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
	bool completing = false;
	::com::sun::tools::javac::util::List* todo = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$AbstractMembersPhase_h_