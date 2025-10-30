#ifndef _com_sun_tools_javac_comp_Infer$GraphStrategy$NodeNotFoundException_h_
#define _com_sun_tools_javac_comp_Infer$GraphStrategy$NodeNotFoundException_h_
//$ class com.sun.tools.javac.comp.Infer$GraphStrategy$NodeNotFoundException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Infer$GraphSolver$InferenceGraph;
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

class $export Infer$GraphStrategy$NodeNotFoundException : public ::java::lang::RuntimeException {
	$class(Infer$GraphStrategy$NodeNotFoundException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Infer$GraphStrategy$NodeNotFoundException();
	void init$(::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* graph);
	static const int64_t serialVersionUID = 0;
	::com::sun::tools::javac::comp::Infer$GraphSolver$InferenceGraph* graph = nullptr;
	Infer$GraphStrategy$NodeNotFoundException(const Infer$GraphStrategy$NodeNotFoundException& e);
	virtual void throw$() override;
	inline Infer$GraphStrategy$NodeNotFoundException* operator ->() {
		return (Infer$GraphStrategy$NodeNotFoundException*)throwing$;
	}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$GraphStrategy$NodeNotFoundException_h_