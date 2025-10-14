#ifndef _com_sun_tools_javac_comp_TypeEnter$HeaderPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$HeaderPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$HeaderPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase

#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>

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
				namespace comp {

class TypeEnter$HeaderPhase : public ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase {
	$class(TypeEnter$HeaderPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase)
public:
	TypeEnter$HeaderPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0);
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$HeaderPhase_h_