#ifndef _com_sun_tools_javac_comp_TypeEnter$Phase_h_
#define _com_sun_tools_javac_comp_TypeEnter$Phase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$Phase
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
					class ListBuffer;
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

class $import TypeEnter$Phase : public ::java::lang::Object {
	$class(TypeEnter$Phase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeEnter$Phase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0, ::com::sun::tools::javac::util::Dependencies$CompletionCause* phaseName, ::com::sun::tools::javac::comp::TypeEnter$Phase* next);
	::com::sun::tools::javac::util::List* completeEnvs(::com::sun::tools::javac::util::List* envs);
	virtual void doCompleteEnvs(::com::sun::tools::javac::util::List* envs);
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) {}
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* queue = nullptr;
	::com::sun::tools::javac::comp::TypeEnter$Phase* next = nullptr;
	::com::sun::tools::javac::util::Dependencies$CompletionCause* phaseName = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$Phase_h_