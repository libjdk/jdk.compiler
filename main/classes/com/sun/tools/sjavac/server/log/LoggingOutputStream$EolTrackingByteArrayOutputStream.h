#ifndef _com_sun_tools_sjavac_server_log_LoggingOutputStream$EolTrackingByteArrayOutputStream_h_
#define _com_sun_tools_sjavac_server_log_LoggingOutputStream$EolTrackingByteArrayOutputStream_h_
//$ class com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("EOL")
#undef EOL

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {

class LoggingOutputStream$EolTrackingByteArrayOutputStream : public ::java::io::ByteArrayOutputStream {
	$class(LoggingOutputStream$EolTrackingByteArrayOutputStream, 0, ::java::io::ByteArrayOutputStream)
public:
	LoggingOutputStream$EolTrackingByteArrayOutputStream();
	void init$();
	bool isLineComplete();
	using ::java::io::ByteArrayOutputStream::write;
	static $bytes* EOL;
};

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("EOL")

#endif // _com_sun_tools_sjavac_server_log_LoggingOutputStream$EolTrackingByteArrayOutputStream_h_