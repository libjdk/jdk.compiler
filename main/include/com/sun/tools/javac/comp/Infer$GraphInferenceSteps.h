#ifndef _com_sun_tools_javac_comp_Infer$GraphInferenceSteps_h_
#define _com_sun_tools_javac_comp_Infer$GraphInferenceSteps_h_
//$ class com.sun.tools.javac.comp.Infer$GraphInferenceSteps
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("EQ_LOWER")
#undef EQ_LOWER
#pragma push_macro("EQ_LOWER_THROWS_UPPER_CAPTURED")
#undef EQ_LOWER_THROWS_UPPER_CAPTURED

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

class $import Infer$GraphInferenceSteps : public ::java::lang::Enum {
	$class(Infer$GraphInferenceSteps, 0, ::java::lang::Enum)
public:
	Infer$GraphInferenceSteps();
	static $Array<::com::sun::tools::javac::comp::Infer$GraphInferenceSteps>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::util::EnumSet* steps);
	static ::com::sun::tools::javac::comp::Infer$GraphInferenceSteps* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Infer$GraphInferenceSteps>* values();
	static ::com::sun::tools::javac::comp::Infer$GraphInferenceSteps* EQ;
	static ::com::sun::tools::javac::comp::Infer$GraphInferenceSteps* EQ_LOWER;
	static ::com::sun::tools::javac::comp::Infer$GraphInferenceSteps* EQ_LOWER_THROWS_UPPER_CAPTURED;
	static $Array<::com::sun::tools::javac::comp::Infer$GraphInferenceSteps>* $VALUES;
	::java::util::EnumSet* steps = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EQ")
#pragma pop_macro("EQ_LOWER")
#pragma pop_macro("EQ_LOWER_THROWS_UPPER_CAPTURED")

#endif // _com_sun_tools_javac_comp_Infer$GraphInferenceSteps_h_