#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaSymbolKind_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaSymbolKind_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaSymbolKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CAPTURED_OUTER_THIS")
#undef CAPTURED_OUTER_THIS
#pragma push_macro("CAPTURED_THIS")
#undef CAPTURED_THIS
#pragma push_macro("CAPTURED_VAR")
#undef CAPTURED_VAR
#pragma push_macro("LOCAL_VAR")
#undef LOCAL_VAR
#pragma push_macro("PARAM")
#undef PARAM

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import LambdaToMethod$LambdaSymbolKind : public ::java::lang::Enum {
	$class(LambdaToMethod$LambdaSymbolKind, 0, ::java::lang::Enum)
public:
	LambdaToMethod$LambdaSymbolKind();
	static $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool propagateAnnotations();
	static ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>* values();
	static ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* PARAM;
	static ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* LOCAL_VAR;
	static ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* CAPTURED_VAR;
	static ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* CAPTURED_THIS;
	static ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* CAPTURED_OUTER_THIS;
	static $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CAPTURED_OUTER_THIS")
#pragma pop_macro("CAPTURED_THIS")
#pragma pop_macro("CAPTURED_VAR")
#pragma pop_macro("LOCAL_VAR")
#pragma pop_macro("PARAM")

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaSymbolKind_h_