#ifndef _com_sun_tools_javac_main_Main$Result_h_
#define _com_sun_tools_javac_main_Main$Result_h_
//$ class com.sun.tools.javac.main.Main$Result
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABNORMAL")
#undef ABNORMAL
#pragma push_macro("CMDERR")
#undef CMDERR
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("OK")
#undef OK
#pragma push_macro("SYSERR")
#undef SYSERR

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class $export Main$Result : public ::java::lang::Enum {
	$class(Main$Result, 0, ::java::lang::Enum)
public:
	Main$Result();
	static $Array<::com::sun::tools::javac::main::Main$Result>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t exitCode);
	virtual bool isOK();
	static ::com::sun::tools::javac::main::Main$Result* valueOf($String* name);
	static $Array<::com::sun::tools::javac::main::Main$Result>* values();
	static ::com::sun::tools::javac::main::Main$Result* OK;
	static ::com::sun::tools::javac::main::Main$Result* ERROR;
	static ::com::sun::tools::javac::main::Main$Result* CMDERR;
	static ::com::sun::tools::javac::main::Main$Result* SYSERR;
	static ::com::sun::tools::javac::main::Main$Result* ABNORMAL;
	static $Array<::com::sun::tools::javac::main::Main$Result>* $VALUES;
	int32_t exitCode = 0;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ABNORMAL")
#pragma pop_macro("CMDERR")
#pragma pop_macro("ERROR")
#pragma pop_macro("OK")
#pragma pop_macro("SYSERR")

#endif // _com_sun_tools_javac_main_Main$Result_h_