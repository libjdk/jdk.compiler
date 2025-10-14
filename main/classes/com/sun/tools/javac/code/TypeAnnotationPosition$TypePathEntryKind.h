#ifndef _com_sun_tools_javac_code_TypeAnnotationPosition$TypePathEntryKind_h_
#define _com_sun_tools_javac_code_TypeAnnotationPosition$TypePathEntryKind_h_
//$ class com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntryKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("INNER_TYPE")
#undef INNER_TYPE
#pragma push_macro("TYPE_ARGUMENT")
#undef TYPE_ARGUMENT
#pragma push_macro("WILDCARD")
#undef WILDCARD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeAnnotationPosition$TypePathEntryKind : public ::java::lang::Enum {
	$class(TypeAnnotationPosition$TypePathEntryKind, 0, ::java::lang::Enum)
public:
	TypeAnnotationPosition$TypePathEntryKind();
	static $Array<::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t tag);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind>* values();
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* ARRAY;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* INNER_TYPE;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* WILDCARD;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind* TYPE_ARGUMENT;
	static $Array<::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind>* $VALUES;
	int32_t tag = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ARRAY")
#pragma pop_macro("INNER_TYPE")
#pragma pop_macro("TYPE_ARGUMENT")
#pragma pop_macro("WILDCARD")

#endif // _com_sun_tools_javac_code_TypeAnnotationPosition$TypePathEntryKind_h_