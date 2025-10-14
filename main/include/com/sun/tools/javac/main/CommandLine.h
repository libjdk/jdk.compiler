#ifndef _com_sun_tools_javac_main_CommandLine_h_
#define _com_sun_tools_javac_main_CommandLine_h_
//$ class com.sun.tools.javac.main.CommandLine
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $import CommandLine : public ::java::lang::Object {
	$class(CommandLine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CommandLine();
	void init$();
	static void appendParsedCommandArgs(::java::util::List* newArgs, ::java::util::List* args);
	static void appendParsedEnvVariables(::java::util::List* newArgs, $String* envVariable);
	static void loadCmdFile($String* name, ::java::util::List* args);
	static ::java::util::List* parse(::java::util::List* args);
	static ::java::util::List* parse($String* envVariable, ::java::util::List* args);
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_CommandLine_h_