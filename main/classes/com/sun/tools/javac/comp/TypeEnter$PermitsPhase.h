#ifndef _com_sun_tools_javac_comp_TypeEnter$PermitsPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$PermitsPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$PermitsPhase
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

class TypeEnter$PermitsPhase : public ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase {
	$class(TypeEnter$PermitsPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase)
public:
	TypeEnter$PermitsPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0);
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$PermitsPhase_h_