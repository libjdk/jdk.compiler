#ifndef _com_sun_tools_javac_comp_Infer$LegacyInferenceSteps_h_
#define _com_sun_tools_javac_comp_Infer$LegacyInferenceSteps_h_
//$ class com.sun.tools.javac.comp.Infer$LegacyInferenceSteps
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EQ_LOWER")
#undef EQ_LOWER
#pragma push_macro("EQ_UPPER")
#undef EQ_UPPER

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

class $import Infer$LegacyInferenceSteps : public ::java::lang::Enum {
	$class(Infer$LegacyInferenceSteps, 0, ::java::lang::Enum)
public:
	Infer$LegacyInferenceSteps();
	static $Array<::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::util::EnumSet* steps);
	static ::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps>* values();
	static ::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps* EQ_LOWER;
	static ::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps* EQ_UPPER;
	static $Array<::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps>* $VALUES;
	::java::util::EnumSet* steps = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EQ_LOWER")
#pragma pop_macro("EQ_UPPER")

#endif // _com_sun_tools_javac_comp_Infer$LegacyInferenceSteps_h_