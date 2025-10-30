#ifndef _com_sun_tools_javac_comp_Resolve$InapplicableMethodException_h_
#define _com_sun_tools_javac_comp_Resolve$InapplicableMethodException_h_
//$ class com.sun.tools.javac.comp.Resolve$InapplicableMethodException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic;
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

class $export Resolve$InapplicableMethodException : public ::java::lang::RuntimeException {
	$class(Resolve$InapplicableMethodException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Resolve$InapplicableMethodException();
	void init$(::com::sun::tools::javac::util::JCDiagnostic* diag);
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic();
	static const int64_t serialVersionUID = 0;
	::com::sun::tools::javac::util::JCDiagnostic* diagnostic = nullptr;
	Resolve$InapplicableMethodException(const Resolve$InapplicableMethodException& e);
	virtual void throw$() override;
	inline Resolve$InapplicableMethodException* operator ->() {
		return (Resolve$InapplicableMethodException*)throwing$;
	}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$InapplicableMethodException_h_