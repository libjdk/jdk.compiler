#ifndef _com_sun_tools_sjavac_comp_SmartWriter_h_
#define _com_sun_tools_sjavac_comp_SmartWriter_h_
//$ class com.sun.tools.sjavac.comp.SmartWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class StringWriter;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class SmartWriter : public ::java::io::Writer {
	$class(SmartWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	SmartWriter();
	void init$(::javax::tools::JavaFileObject* f, $String* s, $String* n);
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write($chars* chars, int32_t i, int32_t i1) override;
	$String* name = nullptr;
	::javax::tools::JavaFileObject* file = nullptr;
	$String* oldContent = nullptr;
	::java::io::StringWriter* newContent = nullptr;
	bool closed = false;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_SmartWriter_h_