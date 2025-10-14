#ifndef _com_sun_tools_javac_comp_Resolve$MethodCheckDiag_h_
#define _com_sun_tools_javac_comp_Resolve$MethodCheckDiag_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodCheckDiag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARG_MISMATCH")
#undef ARG_MISMATCH
#pragma push_macro("ARITY_MISMATCH")
#undef ARITY_MISMATCH
#pragma push_macro("INACCESSIBLE_VARARGS")
#undef INACCESSIBLE_VARARGS
#pragma push_macro("VARARG_MISMATCH")
#undef VARARG_MISMATCH

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Resolve$MethodCheckDiag : public ::java::lang::Enum {
	$class(Resolve$MethodCheckDiag, 0, ::java::lang::Enum)
public:
	Resolve$MethodCheckDiag();
	static $Array<::com::sun::tools::javac::comp::Resolve$MethodCheckDiag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* basicKey, $String* inferKey);
	virtual $String* regex();
	static ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Resolve$MethodCheckDiag>* values();
	static ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* ARITY_MISMATCH;
	static ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* ARG_MISMATCH;
	static ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* VARARG_MISMATCH;
	static ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* INACCESSIBLE_VARARGS;
	static $Array<::com::sun::tools::javac::comp::Resolve$MethodCheckDiag>* $VALUES;
	$String* basicKey = nullptr;
	$String* inferKey = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ARG_MISMATCH")
#pragma pop_macro("ARITY_MISMATCH")
#pragma pop_macro("INACCESSIBLE_VARARGS")
#pragma pop_macro("VARARG_MISMATCH")

#endif // _com_sun_tools_javac_comp_Resolve$MethodCheckDiag_h_