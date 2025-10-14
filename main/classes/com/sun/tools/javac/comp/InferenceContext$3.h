#ifndef _com_sun_tools_javac_comp_InferenceContext$3_h_
#define _com_sun_tools_javac_comp_InferenceContext$3_h_
//$ class com.sun.tools.javac.comp.InferenceContext$3
//$ extends com.sun.tools.javac.comp.Infer$BestLeafSolver

#include <com/sun/tools/javac/comp/Infer$BestLeafSolver.h>

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

class InferenceContext$3 : public ::com::sun::tools::javac::comp::Infer$BestLeafSolver {
	$class(InferenceContext$3, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$BestLeafSolver)
public:
	InferenceContext$3();
	void init$(::com::sun::tools::javac::comp::InferenceContext* this$0, ::com::sun::tools::javac::comp::Infer* x0, ::com::sun::tools::javac::util::List* varsToSolve);
	virtual bool done() override;
	::com::sun::tools::javac::comp::InferenceContext* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_InferenceContext$3_h_