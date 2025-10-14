#ifndef _com_sun_tools_javac_comp_Infer$InferenceStep$3_h_
#define _com_sun_tools_javac_comp_Infer$InferenceStep$3_h_
//$ class com.sun.tools.javac.comp.Infer$InferenceStep$3
//$ extends com.sun.tools.javac.comp.Infer$InferenceStep

#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symtab;
					class Type;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
					class Types;
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

class Infer$InferenceStep$3 : public ::com::sun::tools::javac::comp::Infer$InferenceStep {
	$class(Infer$InferenceStep$3, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$InferenceStep)
public:
	Infer$InferenceStep$3();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib);
	virtual bool accepts(::com::sun::tools::javac::code::Type$UndetVar* t, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
	static bool lambda$accepts$0(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::code::Type* b);
	static bool lambda$accepts$1(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Symtab* syms, ::com::sun::tools::javac::code::Type* u);
	virtual ::com::sun::tools::javac::code::Type* solve(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$InferenceStep$3_h_