#ifndef _com_sun_tools_javac_comp_Infer$InferenceStep_h_
#define _com_sun_tools_javac_comp_Infer$InferenceStep_h_
//$ class com.sun.tools.javac.comp.Infer$InferenceStep
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CAPTURED")
#undef CAPTURED
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("LOWER")
#undef LOWER
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("UPPER")
#undef UPPER
#pragma push_macro("UPPER_LEGACY")
#undef UPPER_LEGACY

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
				namespace util {
					class List;
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

class $export Infer$InferenceStep : public ::java::lang::Enum {
	$class(Infer$InferenceStep, 0, ::java::lang::Enum)
public:
	Infer$InferenceStep();
	static $Array<::com::sun::tools::javac::comp::Infer$InferenceStep>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib);
	virtual bool accepts(::com::sun::tools::javac::code::Type$UndetVar* t, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual ::com::sun::tools::javac::util::List* filterBounds(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext);
	virtual ::com::sun::tools::javac::code::Type* solve(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext) {return nullptr;}
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Infer$InferenceStep>* values();
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* EQ;
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* LOWER;
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* THROWS;
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* UPPER;
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* UPPER_LEGACY;
	static ::com::sun::tools::javac::comp::Infer$InferenceStep* CAPTURED;
	static $Array<::com::sun::tools::javac::comp::Infer$InferenceStep>* $VALUES;
	::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CAPTURED")
#pragma pop_macro("EQ")
#pragma pop_macro("LOWER")
#pragma pop_macro("THROWS")
#pragma pop_macro("UPPER")
#pragma pop_macro("UPPER_LEGACY")

#endif // _com_sun_tools_javac_comp_Infer$InferenceStep_h_