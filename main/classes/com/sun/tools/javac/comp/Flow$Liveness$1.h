#ifndef _com_sun_tools_javac_comp_Flow$Liveness$1_h_
#define _com_sun_tools_javac_comp_Flow$Liveness$1_h_
//$ class com.sun.tools.javac.comp.Flow$Liveness$1
//$ extends com.sun.tools.javac.comp.Flow$Liveness

#include <com/sun/tools/javac/comp/Flow$Liveness.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Flow$Liveness$1 : public ::com::sun::tools::javac::comp::Flow$Liveness {
	$class(Flow$Liveness$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Flow$Liveness)
public:
	Flow$Liveness$1();
	using ::com::sun::tools::javac::comp::Flow$Liveness::and$;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* and$(::com::sun::tools::javac::comp::Flow$Liveness* other) override;
	using ::com::sun::tools::javac::comp::Flow$Liveness::or$;
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* or$(::com::sun::tools::javac::comp::Flow$Liveness* other) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$Liveness$1_h_