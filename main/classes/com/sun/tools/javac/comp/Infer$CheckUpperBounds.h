#ifndef _com_sun_tools_javac_comp_Infer$CheckUpperBounds_h_
#define _com_sun_tools_javac_comp_Infer$CheckUpperBounds_h_
//$ class com.sun.tools.javac.comp.Infer$CheckUpperBounds
//$ extends com.sun.tools.javac.comp.Infer$IncorporationAction

#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $export Infer$CheckUpperBounds : public ::com::sun::tools::javac::comp::Infer$IncorporationAction {
	$class(Infer$CheckUpperBounds, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$IncorporationAction)
public:
	Infer$CheckUpperBounds();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type* t);
	virtual void apply(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$CheckUpperBounds_h_