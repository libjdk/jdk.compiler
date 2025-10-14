#ifndef _com_sun_tools_javac_code_Attribute$RetentionPolicy_h_
#define _com_sun_tools_javac_code_Attribute$RetentionPolicy_h_
//$ class com.sun.tools.javac.code.Attribute$RetentionPolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("RUNTIME")
#undef RUNTIME
#pragma push_macro("SOURCE")
#undef SOURCE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Attribute$RetentionPolicy : public ::java::lang::Enum {
	$class(Attribute$RetentionPolicy, 0, ::java::lang::Enum)
public:
	Attribute$RetentionPolicy();
	static $Array<::com::sun::tools::javac::code::Attribute$RetentionPolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::Attribute$RetentionPolicy* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Attribute$RetentionPolicy>* values();
	static ::com::sun::tools::javac::code::Attribute$RetentionPolicy* SOURCE;
	static ::com::sun::tools::javac::code::Attribute$RetentionPolicy* CLASS;
	static ::com::sun::tools::javac::code::Attribute$RetentionPolicy* RUNTIME;
	static $Array<::com::sun::tools::javac::code::Attribute$RetentionPolicy>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("RUNTIME")
#pragma pop_macro("SOURCE")

#endif // _com_sun_tools_javac_code_Attribute$RetentionPolicy_h_