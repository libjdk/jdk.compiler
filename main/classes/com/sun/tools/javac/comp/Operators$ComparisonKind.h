#ifndef _com_sun_tools_javac_comp_Operators$ComparisonKind_h_
#define _com_sun_tools_javac_comp_Operators$ComparisonKind_h_
//$ class com.sun.tools.javac.comp.Operators$ComparisonKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("NUMERIC_OR_BOOLEAN")
#undef NUMERIC_OR_BOOLEAN
#pragma push_macro("REFERENCE")
#undef REFERENCE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Operators$ComparisonKind : public ::java::lang::Enum {
	$class(Operators$ComparisonKind, 0, ::java::lang::Enum)
public:
	Operators$ComparisonKind();
	static $Array<::com::sun::tools::javac::comp::Operators$ComparisonKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::comp::Operators$ComparisonKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Operators$ComparisonKind>* values();
	static ::com::sun::tools::javac::comp::Operators$ComparisonKind* NUMERIC_OR_BOOLEAN;
	static ::com::sun::tools::javac::comp::Operators$ComparisonKind* REFERENCE;
	static ::com::sun::tools::javac::comp::Operators$ComparisonKind* INVALID;
	static $Array<::com::sun::tools::javac::comp::Operators$ComparisonKind>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("INVALID")
#pragma pop_macro("NUMERIC_OR_BOOLEAN")
#pragma pop_macro("REFERENCE")

#endif // _com_sun_tools_javac_comp_Operators$ComparisonKind_h_