#ifndef _com_sun_tools_javac_comp_Infer$GraphSolver$InferenceGraph_h_
#define _com_sun_tools_javac_comp_Infer$GraphSolver$InferenceGraph_h_
//$ class com.sun.tools.javac.comp.Infer$GraphSolver$InferenceGraph
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
					class Infer$GraphSolver;
					class Infer$GraphSolver$InferenceGraph$Node;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Infer$GraphSolver$InferenceGraph : public ::java::lang::Object {
	$class(Infer$GraphSolver$InferenceGraph, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Infer$GraphSolver$InferenceGraph();
	void init$(::com::sun::tools::javac::comp::Infer$GraphSolver* this$1);
	virtual void deleteNode(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* n);
	virtual ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* findNode(::com::sun::tools::javac::code::Type* t);
	virtual void initNodes();
	virtual void notifyUpdate(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* from, ::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph$Node* to);
	virtual $String* toDot();
	::com::sun::tools::javac::comp::Infer$GraphSolver* this$1 = nullptr;
	::java::util::ArrayList* nodes = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$GraphSolver$InferenceGraph_h_