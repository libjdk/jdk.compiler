#ifndef _com_sun_tools_javac_comp_Infer$CheckInst_h_
#define _com_sun_tools_javac_comp_Infer$CheckInst_h_
//$ class com.sun.tools.javac.comp.Infer$CheckInst
//$ extends com.sun.tools.javac.comp.Infer$CheckBounds

#include <com/sun/tools/javac/comp/Infer$CheckBounds.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class $export Infer$CheckInst : public ::com::sun::tools::javac::comp::Infer$CheckBounds {
	$class(Infer$CheckInst, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$CheckBounds)
public:
	Infer$CheckInst();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>* rest);
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::java::util::EnumSet* to);
	virtual ::java::util::EnumSet* boundsToCheck() override;
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) override;
	virtual void report(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* from, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* to) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::java::util::EnumSet* to = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$CheckInst_h_