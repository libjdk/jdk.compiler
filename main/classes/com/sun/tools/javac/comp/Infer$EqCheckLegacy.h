#ifndef _com_sun_tools_javac_comp_Infer$EqCheckLegacy_h_
#define _com_sun_tools_javac_comp_Infer$EqCheckLegacy_h_
//$ class com.sun.tools.javac.comp.Infer$EqCheckLegacy
//$ extends com.sun.tools.javac.comp.Infer$CheckBounds

#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Infer;
					class Infer$IncorporationAction;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer$EqCheckLegacy : public ::com::sun::tools::javac::comp::Infer$CheckBounds {
	$class(Infer$EqCheckLegacy, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$CheckBounds)
public:
	Infer$EqCheckLegacy();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* from);
	virtual ::java::util::EnumSet* boundsToCheck() override;
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$EqCheckLegacy_h_