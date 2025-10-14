#ifndef _com_sun_tools_javac_code_TypeMetadata$Entry$Kind_h_
#define _com_sun_tools_javac_code_TypeMetadata$Entry$Kind_h_
//$ class com.sun.tools.javac.code.TypeMetadata$Entry$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANNOTATIONS")
#undef ANNOTATIONS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeMetadata$Entry$Kind : public ::java::lang::Enum {
	$class(TypeMetadata$Entry$Kind, 0, ::java::lang::Enum)
public:
	TypeMetadata$Entry$Kind();
	static $Array<::com::sun::tools::javac::code::TypeMetadata$Entry$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::TypeMetadata$Entry$Kind>* values();
	static ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* ANNOTATIONS;
	static $Array<::com::sun::tools::javac::code::TypeMetadata$Entry$Kind>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANNOTATIONS")

#endif // _com_sun_tools_javac_code_TypeMetadata$Entry$Kind_h_