#ifndef _com_sun_tools_sjavac_client_PortFileInaccessibleException_h_
#define _com_sun_tools_sjavac_client_PortFileInaccessibleException_h_
//$ class com.sun.tools.sjavac.client.PortFileInaccessibleException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

class PortFileInaccessibleException : public ::java::io::IOException {
	$class(PortFileInaccessibleException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	PortFileInaccessibleException();
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xBE01EA836087E543;
	PortFileInaccessibleException(const PortFileInaccessibleException& e);
	virtual void throw$() override;
	inline PortFileInaccessibleException* operator ->() {
		return (PortFileInaccessibleException*)throwing$;
	}
};

				} // client
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_client_PortFileInaccessibleException_h_