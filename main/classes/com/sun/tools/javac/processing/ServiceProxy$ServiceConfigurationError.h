#ifndef _com_sun_tools_javac_processing_ServiceProxy$ServiceConfigurationError_h_
#define _com_sun_tools_javac_processing_ServiceProxy$ServiceConfigurationError_h_
//$ class com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class ServiceProxy$ServiceConfigurationError : public ::java::lang::Error {
	$class(ServiceProxy$ServiceConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	ServiceProxy$ServiceConfigurationError();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x6B4DE7D4E1B91EBF;
	ServiceProxy$ServiceConfigurationError(const ServiceProxy$ServiceConfigurationError& e);
	virtual void throw$() override;
	inline ServiceProxy$ServiceConfigurationError* operator ->() {
		return (ServiceProxy$ServiceConfigurationError*)throwing$;
	}
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_processing_ServiceProxy$ServiceConfigurationError_h_