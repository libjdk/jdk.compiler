#ifndef _com_sun_tools_sjavac_AutoFlushWriter_h_
#define _com_sun_tools_sjavac_AutoFlushWriter_h_
//$ class com.sun.tools.sjavac.AutoFlushWriter
//$ extends java.io.FilterWriter

#include <java/io/FilterWriter.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class AutoFlushWriter : public ::java::io::FilterWriter {
	$class(AutoFlushWriter, $NO_CLASS_INIT, ::java::io::FilterWriter)
public:
	AutoFlushWriter();
	void init$(::java::io::Writer* out);
	using ::java::io::FilterWriter::write;
	virtual void write(int32_t c) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_AutoFlushWriter_h_