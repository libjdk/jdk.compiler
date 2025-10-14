#ifndef _com_sun_tools_javac_comp_CompileStates$CompileState_h_
#define _com_sun_tools_javac_comp_CompileStates$CompileState_h_
//$ class com.sun.tools.javac.comp.CompileStates$CompileState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ATTR")
#undef ATTR
#pragma push_macro("ENTER")
#undef ENTER
#pragma push_macro("FLOW")
#undef FLOW
#pragma push_macro("GENERATE")
#undef GENERATE
#pragma push_macro("INIT")
#undef INIT
#pragma push_macro("LOWER")
#undef LOWER
#pragma push_macro("PARSE")
#undef PARSE
#pragma push_macro("PROCESS")
#undef PROCESS
#pragma push_macro("TRANSPATTERNS")
#undef TRANSPATTERNS
#pragma push_macro("TRANSTYPES")
#undef TRANSTYPES
#pragma push_macro("UNLAMBDA")
#undef UNLAMBDA

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import CompileStates$CompileState : public ::java::lang::Enum {
	$class(CompileStates$CompileState, 0, ::java::lang::Enum)
public:
	CompileStates$CompileState();
	static $Array<::com::sun::tools::javac::comp::CompileStates$CompileState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t value);
	virtual bool isAfter(::com::sun::tools::javac::comp::CompileStates$CompileState* other);
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* max(::com::sun::tools::javac::comp::CompileStates$CompileState* a, ::com::sun::tools::javac::comp::CompileStates$CompileState* b);
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::CompileStates$CompileState>* values();
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* INIT;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* PARSE;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* ENTER;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* PROCESS;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* ATTR;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* FLOW;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* TRANSTYPES;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* TRANSPATTERNS;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* UNLAMBDA;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* LOWER;
	static ::com::sun::tools::javac::comp::CompileStates$CompileState* GENERATE;
	static $Array<::com::sun::tools::javac::comp::CompileStates$CompileState>* $VALUES;
	int32_t value = 0;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ATTR")
#pragma pop_macro("ENTER")
#pragma pop_macro("FLOW")
#pragma pop_macro("GENERATE")
#pragma pop_macro("INIT")
#pragma pop_macro("LOWER")
#pragma pop_macro("PARSE")
#pragma pop_macro("PROCESS")
#pragma pop_macro("TRANSPATTERNS")
#pragma pop_macro("TRANSTYPES")
#pragma pop_macro("UNLAMBDA")

#endif // _com_sun_tools_javac_comp_CompileStates$CompileState_h_