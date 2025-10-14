#ifndef _com_sun_tools_javac_comp_Infer$InferenceStep$6_h_
#define _com_sun_tools_javac_comp_Infer$InferenceStep$6_h_
//$ class com.sun.tools.javac.comp.Infer$InferenceStep$6
//$ extends com.sun.tools.javac.comp.Infer$InferenceStep

#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>

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
				namespace comp {

class Infer$InferenceStep$6 : public ::com::sun::tools::javac::comp::Infer$InferenceStep {
	$class(Infer$InferenceStep$6, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$InferenceStep)
public:
	Infer$InferenceStep$6();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib);
	virtual bool accepts(::com::sun::tools::javac::code::Type$UndetVar* t, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
	virtual ::com::sun::tools::javac::code::Type* solve(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$InferenceStep$6_h_