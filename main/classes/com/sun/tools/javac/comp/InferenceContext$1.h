#ifndef _com_sun_tools_javac_comp_InferenceContext$1_h_
#define _com_sun_tools_javac_comp_InferenceContext$1_h_
//$ class com.sun.tools.javac.comp.InferenceContext$1
//$ extends com.sun.tools.javac.comp.Infer$LeafSolver

#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Infer;
					class InferenceContext;
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

class InferenceContext$1 : public ::com::sun::tools::javac::comp::Infer$LeafSolver {
	$class(InferenceContext$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$LeafSolver)
public:
	InferenceContext$1();
	void init$(::com::sun::tools::javac::comp::InferenceContext* this$0, ::com::sun::tools::javac::comp::Infer* x0);
	virtual bool done() override;
	::com::sun::tools::javac::comp::InferenceContext* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_InferenceContext$1_h_