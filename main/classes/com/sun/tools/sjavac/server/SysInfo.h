#ifndef _com_sun_tools_sjavac_server_SysInfo_h_
#define _com_sun_tools_sjavac_server_SysInfo_h_
//$ class com.sun.tools.sjavac.server.SysInfo
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class SysInfo : public ::java::io::Serializable {
	$class(SysInfo, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SysInfo();
	void init$(int32_t nc, int64_t mm);
	static const int64_t serialVersionUID = (int64_t)0xFFFFFD2F135932E5;
	int32_t numCores = 0;
	int64_t maxMemory = 0;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_SysInfo_h_