#ifndef _com_sun_tools_javac_util_ClientCodeException_h_
#define _com_sun_tools_javac_util_ClientCodeException_h_
//$ class com.sun.tools.javac.util.ClientCodeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export ClientCodeException : public ::java::lang::RuntimeException {
	$class(ClientCodeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ClientCodeException();
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xB140256640399E45;
	ClientCodeException(const ClientCodeException& e);
	virtual void throw$() override;
	inline ClientCodeException* operator ->() {
		return (ClientCodeException*)throwing$;
	}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ClientCodeException_h_