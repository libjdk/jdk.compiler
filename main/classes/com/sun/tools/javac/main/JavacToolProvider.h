#ifndef _com_sun_tools_javac_main_JavacToolProvider_h_
#define _com_sun_tools_javac_main_JavacToolProvider_h_
//$ class com.sun.tools.javac.main.JavacToolProvider
//$ extends java.util.spi.ToolProvider

#include <java/lang/Array.h>
#include <java/util/spi/ToolProvider.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export JavacToolProvider : public ::java::util::spi::ToolProvider {
	$class(JavacToolProvider, $NO_CLASS_INIT, ::java::util::spi::ToolProvider)
public:
	JavacToolProvider();
	void init$();
	virtual $String* name() override;
	using ::java::util::spi::ToolProvider::run;
	virtual int32_t run(::java::io::PrintWriter* out, ::java::io::PrintWriter* err, $StringArray* args) override;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_JavacToolProvider_h_