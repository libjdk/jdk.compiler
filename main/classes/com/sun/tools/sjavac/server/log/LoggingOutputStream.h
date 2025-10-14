#ifndef _com_sun_tools_sjavac_server_log_LoggingOutputStream_h_
#define _com_sun_tools_sjavac_server_log_LoggingOutputStream_h_
//$ class com.sun.tools.sjavac.server.log.LoggingOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("LINE_SEP")
#undef LINE_SEP

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Log$Level;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {
						class LoggingOutputStream$EolTrackingByteArrayOutputStream;
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {

class LoggingOutputStream : public ::java::io::FilterOutputStream {
	$class(LoggingOutputStream, 0, ::java::io::FilterOutputStream)
public:
	LoggingOutputStream();
	void init$(::java::io::OutputStream* out, ::com::sun::tools::sjavac::Log$Level* level, $String* linePrefix);
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	static $bytes* LINE_SEP;
	::com::sun::tools::sjavac::Log$Level* level = nullptr;
	$String* linePrefix = nullptr;
	::com::sun::tools::sjavac::server::log::LoggingOutputStream$EolTrackingByteArrayOutputStream* buf = nullptr;
};

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("LINE_SEP")

#endif // _com_sun_tools_sjavac_server_log_LoggingOutputStream_h_