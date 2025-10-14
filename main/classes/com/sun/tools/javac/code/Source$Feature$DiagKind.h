#ifndef _com_sun_tools_javac_code_Source$Feature$DiagKind_h_
#define _com_sun_tools_javac_code_Source$Feature$DiagKind_h_
//$ class com.sun.tools.javac.code.Source$Feature$DiagKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("PLURAL")
#undef PLURAL

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Source$Feature$DiagKind : public ::java::lang::Enum {
	$class(Source$Feature$DiagKind, 0, ::java::lang::Enum)
public:
	Source$Feature$DiagKind();
	static $Array<::com::sun::tools::javac::code::Source$Feature$DiagKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::Source$Feature$DiagKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Source$Feature$DiagKind>* values();
	static ::com::sun::tools::javac::code::Source$Feature$DiagKind* NORMAL;
	static ::com::sun::tools::javac::code::Source$Feature$DiagKind* PLURAL;
	static $Array<::com::sun::tools::javac::code::Source$Feature$DiagKind>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NORMAL")
#pragma pop_macro("PLURAL")

#endif // _com_sun_tools_javac_code_Source$Feature$DiagKind_h_