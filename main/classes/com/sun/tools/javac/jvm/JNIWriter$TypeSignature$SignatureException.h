#ifndef _com_sun_tools_javac_jvm_JNIWriter$TypeSignature$SignatureException_h_
#define _com_sun_tools_javac_jvm_JNIWriter$TypeSignature$SignatureException_h_
//$ class com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class JNIWriter$TypeSignature$SignatureException : public ::java::lang::Exception {
	$class(JNIWriter$TypeSignature$SignatureException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	JNIWriter$TypeSignature$SignatureException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)1;
	JNIWriter$TypeSignature$SignatureException(const JNIWriter$TypeSignature$SignatureException& e);
	virtual void throw$() override;
	inline JNIWriter$TypeSignature$SignatureException* operator ->() {
		return (JNIWriter$TypeSignature$SignatureException*)throwing$;
	}
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_JNIWriter$TypeSignature$SignatureException_h_