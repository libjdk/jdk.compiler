#ifndef _com_sun_tools_javac_comp_Infer$BestLeafSolver_h_
#define _com_sun_tools_javac_comp_Infer$BestLeafSolver_h_
//$ class com.sun.tools.javac.comp.Infer$BestLeafSolver
//$ extends com.sun.tools.javac.comp.Infer$LeafSolver

#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>

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
				namespace util {
					class List;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Infer$BestLeafSolver : public ::com::sun::tools::javac::comp::Infer$LeafSolver {
	$class(Infer$BestLeafSolver, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$LeafSolver)
public:
	Infer$BestLeafSolver();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::util::List* varsToSolve);
	virtual ::com::sun::tools::javac::util::Pair* computeTreeToLeafs(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* n);
	virtual ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* pickNode(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* g) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::util::List* varsToSolve = nullptr;
	::java::util::Map* treeCache = nullptr;
	::com::sun::tools::javac::util::Pair* noPath = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$BestLeafSolver_h_