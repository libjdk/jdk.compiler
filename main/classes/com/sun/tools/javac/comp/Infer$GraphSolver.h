#ifndef _com_sun_tools_javac_comp_Infer$GraphSolver_h_
#define _com_sun_tools_javac_comp_Infer$GraphSolver_h_
//$ class com.sun.tools.javac.comp.Infer$GraphSolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Infer;
					class Infer$GraphStrategy;
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
					class Warner;
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

class $export Infer$GraphSolver : public ::java::lang::Object {
	$class(Infer$GraphSolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Infer$GraphSolver();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::Warner* warn);
	virtual void solve(::com::sun::tools::javac::comp::Infer$GraphStrategy* sstrategy);
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::comp::InferenceContext* inferenceContext = nullptr;
	::com::sun::tools::javac::util::Warner* warn = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$GraphSolver_h_