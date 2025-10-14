#ifndef _com_sun_tools_javac_comp_Attr$CheckMode_h_
#define _com_sun_tools_javac_comp_Attr$CheckMode_h_
//$ class com.sun.tools.javac.comp.Attr$CheckMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("NO_INFERENCE_HOOK")
#undef NO_INFERENCE_HOOK
#pragma push_macro("NO_TREE_UPDATE")
#undef NO_TREE_UPDATE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Attr$CheckMode : public ::java::lang::Enum {
	$class(Attr$CheckMode, 0, ::java::lang::Enum)
public:
	Attr$CheckMode();
	static $Array<::com::sun::tools::javac::comp::Attr$CheckMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool installPostInferenceHook();
	virtual bool updateTreeType();
	static ::com::sun::tools::javac::comp::Attr$CheckMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Attr$CheckMode>* values();
	static ::com::sun::tools::javac::comp::Attr$CheckMode* NORMAL;
	static ::com::sun::tools::javac::comp::Attr$CheckMode* NO_TREE_UPDATE;
	static ::com::sun::tools::javac::comp::Attr$CheckMode* NO_INFERENCE_HOOK;
	static $Array<::com::sun::tools::javac::comp::Attr$CheckMode>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NORMAL")
#pragma pop_macro("NO_INFERENCE_HOOK")
#pragma pop_macro("NO_TREE_UPDATE")

#endif // _com_sun_tools_javac_comp_Attr$CheckMode_h_