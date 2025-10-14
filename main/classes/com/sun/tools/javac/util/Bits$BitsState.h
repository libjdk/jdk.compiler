#ifndef _com_sun_tools_javac_util_Bits$BitsState_h_
#define _com_sun_tools_javac_util_Bits$BitsState_h_
//$ class com.sun.tools.javac.util.Bits$BitsState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("UNINIT")
#undef UNINIT
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Bits$BitsState : public ::java::lang::Enum {
	$class(Bits$BitsState, 0, ::java::lang::Enum)
public:
	Bits$BitsState();
	static $Array<::com::sun::tools::javac::util::Bits$BitsState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::util::Bits$BitsState* getState($ints* someBits, bool reset);
	static ::com::sun::tools::javac::util::Bits$BitsState* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::Bits$BitsState>* values();
	static ::com::sun::tools::javac::util::Bits$BitsState* UNKNOWN;
	static ::com::sun::tools::javac::util::Bits$BitsState* UNINIT;
	static ::com::sun::tools::javac::util::Bits$BitsState* NORMAL;
	static $Array<::com::sun::tools::javac::util::Bits$BitsState>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NORMAL")
#pragma pop_macro("UNINIT")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_tools_javac_util_Bits$BitsState_h_