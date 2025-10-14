#ifndef _com_sun_tools_javac_comp_Infer$SubstBounds_h_
#define _com_sun_tools_javac_comp_Infer$SubstBounds_h_
//$ class com.sun.tools.javac.comp.Infer$SubstBounds
//$ extends com.sun.tools.javac.comp.Infer$CheckInst

#include <com/sun/tools/javac/comp/Infer$CheckInst.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type$UndetVar;
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
					class InferenceContext;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Warner;
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

class $import Infer$SubstBounds : public ::com::sun::tools::javac::comp::Infer$CheckInst {
	$class(Infer$SubstBounds, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$CheckInst)
public:
	Infer$SubstBounds();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv);
	virtual void apply(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual void checkCompatibleUpperBounds(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$SubstBounds_h_