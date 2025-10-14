#ifndef _com_sun_tools_sjavac_Log$Level_h_
#define _com_sun_tools_sjavac_Log$Level_h_
//$ class com.sun.tools.sjavac.Log$Level
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("WARN")
#undef WARN

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Log$Level : public ::java::lang::Enum {
	$class(Log$Level, 0, ::java::lang::Enum)
public:
	Log$Level();
	static $Array<::com::sun::tools::sjavac::Log$Level>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::sjavac::Log$Level* valueOf($String* name);
	static $Array<::com::sun::tools::sjavac::Log$Level>* values();
	static ::com::sun::tools::sjavac::Log$Level* ERROR;
	static ::com::sun::tools::sjavac::Log$Level* WARN;
	static ::com::sun::tools::sjavac::Log$Level* INFO;
	static ::com::sun::tools::sjavac::Log$Level* DEBUG;
	static ::com::sun::tools::sjavac::Log$Level* TRACE;
	static $Array<::com::sun::tools::sjavac::Log$Level>* $VALUES;
};

			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("ERROR")
#pragma pop_macro("INFO")
#pragma pop_macro("TRACE")
#pragma pop_macro("WARN")

#endif // _com_sun_tools_sjavac_Log$Level_h_