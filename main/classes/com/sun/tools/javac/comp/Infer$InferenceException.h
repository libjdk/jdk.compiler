#ifndef _com_sun_tools_javac_comp_Infer$InferenceException_h_
#define _com_sun_tools_javac_comp_Infer$InferenceException_h_
//$ class com.sun.tools.javac.comp.Infer$InferenceException
//$ extends com.sun.tools.javac.comp.Resolve$InapplicableMethodException

#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic;
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

class $export Infer$InferenceException : public ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException {
	$class(Infer$InferenceException, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException)
public:
	Infer$InferenceException();
	void init$();
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic() override;
	static const int64_t serialVersionUID = 0;
	::com::sun::tools::javac::util::List* messages = nullptr;
	Infer$InferenceException(const Infer$InferenceException& e);
	virtual void throw$() override;
	inline Infer$InferenceException* operator ->() {
		return (Infer$InferenceException*)throwing$;
	}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$InferenceException_h_