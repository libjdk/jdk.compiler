#ifndef _com_sun_tools_javac_main_JavaCompiler$ImplicitSourcePolicy_h_
#define _com_sun_tools_javac_main_JavaCompiler$ImplicitSourcePolicy_h_
//$ class com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("UNSET")
#undef UNSET

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export JavaCompiler$ImplicitSourcePolicy : public ::java::lang::Enum {
	$class(JavaCompiler$ImplicitSourcePolicy, 0, ::java::lang::Enum)
public:
	JavaCompiler$ImplicitSourcePolicy();
	static $Array<::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy* decode($String* option);
	static ::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy>* values();
	static ::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy* NONE;
	static ::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy* CLASS;
	static ::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy* UNSET;
	static $Array<::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy>* $VALUES;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("NONE")
#pragma pop_macro("UNSET")

#endif // _com_sun_tools_javac_main_JavaCompiler$ImplicitSourcePolicy_h_