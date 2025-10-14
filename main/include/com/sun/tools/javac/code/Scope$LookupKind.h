#ifndef _com_sun_tools_javac_code_Scope$LookupKind_h_
#define _com_sun_tools_javac_code_Scope$LookupKind_h_
//$ class com.sun.tools.javac.code.Scope$LookupKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NON_RECURSIVE")
#undef NON_RECURSIVE
#pragma push_macro("RECURSIVE")
#undef RECURSIVE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Scope$LookupKind : public ::java::lang::Enum {
	$class(Scope$LookupKind, 0, ::java::lang::Enum)
public:
	Scope$LookupKind();
	static $Array<::com::sun::tools::javac::code::Scope$LookupKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::Scope$LookupKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Scope$LookupKind>* values();
	static ::com::sun::tools::javac::code::Scope$LookupKind* RECURSIVE;
	static ::com::sun::tools::javac::code::Scope$LookupKind* NON_RECURSIVE;
	static $Array<::com::sun::tools::javac::code::Scope$LookupKind>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NON_RECURSIVE")
#pragma pop_macro("RECURSIVE")

#endif // _com_sun_tools_javac_code_Scope$LookupKind_h_