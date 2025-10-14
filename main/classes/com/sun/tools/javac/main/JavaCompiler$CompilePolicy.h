#ifndef _com_sun_tools_javac_main_JavaCompiler$CompilePolicy_h_
#define _com_sun_tools_javac_main_JavaCompiler$CompilePolicy_h_
//$ class com.sun.tools.javac.main.JavaCompiler$CompilePolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BY_FILE")
#undef BY_FILE
#pragma push_macro("BY_TODO")
#undef BY_TODO
#pragma push_macro("SIMPLE")
#undef SIMPLE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export JavaCompiler$CompilePolicy : public ::java::lang::Enum {
	$class(JavaCompiler$CompilePolicy, 0, ::java::lang::Enum)
public:
	JavaCompiler$CompilePolicy();
	static $Array<::com::sun::tools::javac::main::JavaCompiler$CompilePolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* decode($String* option);
	static ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::JavaCompiler$CompilePolicy>* values();
	static ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* SIMPLE;
	static ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* BY_FILE;
	static ::com::sun::tools::javac::main::JavaCompiler$CompilePolicy* BY_TODO;
	static $Array<::com::sun::tools::javac::main::JavaCompiler$CompilePolicy>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BY_FILE")
#pragma pop_macro("BY_TODO")
#pragma pop_macro("SIMPLE")

#endif // _com_sun_tools_javac_main_JavaCompiler$CompilePolicy_h_