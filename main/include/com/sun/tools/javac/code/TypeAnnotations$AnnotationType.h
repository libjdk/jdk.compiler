#ifndef _com_sun_tools_javac_code_TypeAnnotations$AnnotationType_h_
#define _com_sun_tools_javac_code_TypeAnnotations$AnnotationType_h_
//$ class com.sun.tools.javac.code.TypeAnnotations$AnnotationType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BOTH")
#undef BOTH
#pragma push_macro("DECLARATION")
#undef DECLARATION
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("TYPE")
#undef TYPE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import TypeAnnotations$AnnotationType : public ::java::lang::Enum {
	$class(TypeAnnotations$AnnotationType, 0, ::java::lang::Enum)
public:
	TypeAnnotations$AnnotationType();
	static $Array<::com::sun::tools::javac::code::TypeAnnotations$AnnotationType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::TypeAnnotations$AnnotationType>* values();
	static ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* DECLARATION;
	static ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* TYPE;
	static ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* NONE;
	static ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* BOTH;
	static $Array<::com::sun::tools::javac::code::TypeAnnotations$AnnotationType>* $VALUES;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("BOTH")
#pragma pop_macro("DECLARATION")
#pragma pop_macro("NONE")
#pragma pop_macro("TYPE")

#endif // _com_sun_tools_javac_code_TypeAnnotations$AnnotationType_h_