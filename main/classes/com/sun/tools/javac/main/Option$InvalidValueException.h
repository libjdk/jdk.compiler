#ifndef _com_sun_tools_javac_main_Option$InvalidValueException_h_
#define _com_sun_tools_javac_main_Option$InvalidValueException_h_
//$ class com.sun.tools.javac.main.Option$InvalidValueException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export Option$InvalidValueException : public ::java::lang::Exception {
	$class(Option$InvalidValueException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	Option$InvalidValueException();
	void init$($String* msg);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (-1);
	Option$InvalidValueException(const Option$InvalidValueException& e);
	virtual void throw$() override;
	inline Option$InvalidValueException* operator ->() {
		return (Option$InvalidValueException*)throwing$;
	}
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$InvalidValueException_h_