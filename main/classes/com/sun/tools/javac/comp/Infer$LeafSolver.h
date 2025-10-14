#ifndef _com_sun_tools_javac_comp_Infer$LeafSolver_h_
#define _com_sun_tools_javac_comp_Infer$LeafSolver_h_
//$ class com.sun.tools.javac.comp.Infer$LeafSolver
//$ extends com.sun.tools.javac.comp.Infer$GraphStrategy

#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Infer;
					class Infer$GraphSolver$InferenceGraph;
					class Infer$GraphSolver$InferenceGraph$Node;
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

class $export Infer$LeafSolver : public ::com::sun::tools::javac::comp::Infer$GraphStrategy {
	$class(Infer$LeafSolver, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$GraphStrategy)
public:
	Infer$LeafSolver();
	void init$(::com::sun::tools::javac::comp::Infer* this$0);
	virtual ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* pickNode(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* g) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$LeafSolver_h_