#ifndef _com_sun_tools_javac_comp_Infer$GraphStrategy_h_
#define _com_sun_tools_javac_comp_Infer$GraphStrategy_h_
//$ interface com.sun.tools.javac.comp.Infer$GraphStrategy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
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

class $export Infer$GraphStrategy : public ::java::lang::Object {
	$interface(Infer$GraphStrategy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool done() {return false;}
	virtual ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* pickNode(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* g) {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$GraphStrategy_h_