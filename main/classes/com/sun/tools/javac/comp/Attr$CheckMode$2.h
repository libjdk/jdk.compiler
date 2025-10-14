#ifndef _com_sun_tools_javac_comp_Attr$CheckMode$2_h_
#define _com_sun_tools_javac_comp_Attr$CheckMode$2_h_
//$ class com.sun.tools.javac.comp.Attr$CheckMode$2
//$ extends com.sun.tools.javac.comp.Attr$CheckMode

#include <com/sun/tools/javac/comp/Attr$CheckMode.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Attr$CheckMode$2 : public ::com::sun::tools::javac::comp::Attr$CheckMode {
	$class(Attr$CheckMode$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$CheckMode)
public:
	Attr$CheckMode$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool installPostInferenceHook() override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$CheckMode$2_h_