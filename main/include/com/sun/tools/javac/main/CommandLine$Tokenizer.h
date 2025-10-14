#ifndef _com_sun_tools_javac_main_CommandLine$Tokenizer_h_
#define _com_sun_tools_javac_main_CommandLine$Tokenizer_h_
//$ class com.sun.tools.javac.main.CommandLine$Tokenizer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class Reader;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import CommandLine$Tokenizer : public ::java::lang::Object {
	$class(CommandLine$Tokenizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CommandLine$Tokenizer();
	void init$(::java::io::Reader* in);
	virtual $String* nextToken();
	virtual void skipWhite();
	::java::io::Reader* in = nullptr;
	int32_t ch = 0;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_CommandLine$Tokenizer_h_