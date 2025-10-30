#ifndef _com_sun_tools_javac_code_Types$SignatureGenerator$InvalidSignatureException_h_
#define _com_sun_tools_javac_code_Types$SignatureGenerator$InvalidSignatureException_h_
//$ class com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

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
				namespace code {

class $export Types$SignatureGenerator$InvalidSignatureException : public ::java::lang::RuntimeException {
	$class(Types$SignatureGenerator$InvalidSignatureException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Types$SignatureGenerator$InvalidSignatureException();
	void init$(::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::code::Type* type();
	static const int64_t serialVersionUID = 0;
	::com::sun::tools::javac::code::Type* type$ = nullptr;
	Types$SignatureGenerator$InvalidSignatureException(const Types$SignatureGenerator$InvalidSignatureException& e);
	virtual void throw$() override;
	inline Types$SignatureGenerator$InvalidSignatureException* operator ->() {
		return (Types$SignatureGenerator$InvalidSignatureException*)throwing$;
	}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$SignatureGenerator$InvalidSignatureException_h_