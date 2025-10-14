#ifndef _com_sun_tools_javac_code_Types$ProjectionKind_h_
#define _com_sun_tools_javac_code_Types$ProjectionKind_h_
//$ class com.sun.tools.javac.code.Types$ProjectionKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DOWNWARDS")
#undef DOWNWARDS
#pragma push_macro("UPWARDS")
#undef UPWARDS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$ProjectionKind : public ::java::lang::Enum {
	$class(Types$ProjectionKind, 0, ::java::lang::Enum)
public:
	Types$ProjectionKind();
	static $Array<::com::sun::tools::javac::code::Types$ProjectionKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::code::Types$ProjectionKind* complement() {return nullptr;}
	static ::com::sun::tools::javac::code::Types$ProjectionKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Types$ProjectionKind>* values();
	static ::com::sun::tools::javac::code::Types$ProjectionKind* UPWARDS;
	static ::com::sun::tools::javac::code::Types$ProjectionKind* DOWNWARDS;
	static $Array<::com::sun::tools::javac::code::Types$ProjectionKind>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DOWNWARDS")
#pragma pop_macro("UPWARDS")

#endif // _com_sun_tools_javac_code_Types$ProjectionKind_h_