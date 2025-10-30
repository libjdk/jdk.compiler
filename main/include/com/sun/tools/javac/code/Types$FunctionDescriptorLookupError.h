#ifndef _com_sun_tools_javac_code_Types$FunctionDescriptorLookupError_h_
#define _com_sun_tools_javac_code_Types$FunctionDescriptorLookupError_h_
//$ class com.sun.tools.javac.code.Types$FunctionDescriptorLookupError
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
				namespace code {

class $import Types$FunctionDescriptorLookupError : public ::java::lang::RuntimeException {
	$class(Types$FunctionDescriptorLookupError, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Types$FunctionDescriptorLookupError();
	void init$();
	virtual ::com::sun::tools::javac::util::JCDiagnostic* getDiagnostic();
	virtual ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError* setMessage(::com::sun::tools::javac::util::JCDiagnostic* diag);
	static const int64_t serialVersionUID = 0;
	::com::sun::tools::javac::util::JCDiagnostic* diagnostic = nullptr;
	Types$FunctionDescriptorLookupError(const Types$FunctionDescriptorLookupError& e);
	virtual void throw$() override;
	inline Types$FunctionDescriptorLookupError* operator ->() {
		return (Types$FunctionDescriptorLookupError*)throwing$;
	}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$FunctionDescriptorLookupError_h_