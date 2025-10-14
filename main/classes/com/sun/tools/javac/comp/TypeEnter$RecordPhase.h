#ifndef _com_sun_tools_javac_comp_TypeEnter$RecordPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$RecordPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$RecordPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$AbstractMembersPhase

#include <com/sun/tools/javac/comp/TypeEnter$AbstractMembersPhase.h>

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

class TypeEnter$RecordPhase : public ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase {
	$class(TypeEnter$RecordPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$AbstractMembersPhase)
public:
	TypeEnter$RecordPhase();
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0);
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$RecordPhase_h_