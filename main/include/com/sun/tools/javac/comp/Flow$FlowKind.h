#ifndef _com_sun_tools_javac_comp_Flow$FlowKind_h_
#define _com_sun_tools_javac_comp_Flow$FlowKind_h_
//$ class com.sun.tools.javac.comp.Flow$FlowKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("SPECULATIVE_LOOP")
#undef SPECULATIVE_LOOP

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Flow$FlowKind : public ::java::lang::Enum {
	$class(Flow$FlowKind, 0, ::java::lang::Enum)
public:
	Flow$FlowKind();
	static $Array<::com::sun::tools::javac::comp::Flow$FlowKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* errKey, bool isFinal);
	virtual bool isFinal();
	static ::com::sun::tools::javac::comp::Flow$FlowKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Flow$FlowKind>* values();
	static ::com::sun::tools::javac::comp::Flow$FlowKind* NORMAL;
	static ::com::sun::tools::javac::comp::Flow$FlowKind* SPECULATIVE_LOOP;
	static $Array<::com::sun::tools::javac::comp::Flow$FlowKind>* $VALUES;
	$String* errKey = nullptr;
	bool isFinal$ = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NORMAL")
#pragma pop_macro("SPECULATIVE_LOOP")

#endif // _com_sun_tools_javac_comp_Flow$FlowKind_h_