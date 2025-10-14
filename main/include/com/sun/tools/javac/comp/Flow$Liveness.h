#ifndef _com_sun_tools_javac_comp_Flow$Liveness_h_
#define _com_sun_tools_javac_comp_Flow$Liveness_h_
//$ class com.sun.tools.javac.comp.Flow$Liveness
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALIVE")
#undef ALIVE
#pragma push_macro("DEAD")
#undef DEAD
#pragma push_macro("RECOVERY")
#undef RECOVERY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Flow$Liveness : public ::java::lang::Enum {
	$class(Flow$Liveness, 0, ::java::lang::Enum)
public:
	Flow$Liveness();
	static $Array<::com::sun::tools::javac::comp::Flow$Liveness>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* and$(::com::sun::tools::javac::comp::Flow$Liveness* other) {return nullptr;}
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* and$(bool value);
	static ::com::sun::tools::javac::comp::Flow$Liveness* from(bool value);
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* or$(::com::sun::tools::javac::comp::Flow$Liveness* other) {return nullptr;}
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* or$(bool value);
	static ::com::sun::tools::javac::comp::Flow$Liveness* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Flow$Liveness>* values();
	static ::com::sun::tools::javac::comp::Flow$Liveness* ALIVE;
	static ::com::sun::tools::javac::comp::Flow$Liveness* DEAD;
	static ::com::sun::tools::javac::comp::Flow$Liveness* RECOVERY;
	static $Array<::com::sun::tools::javac::comp::Flow$Liveness>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ALIVE")
#pragma pop_macro("DEAD")
#pragma pop_macro("RECOVERY")

#endif // _com_sun_tools_javac_comp_Flow$Liveness_h_