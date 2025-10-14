#ifndef _com_sun_tools_javac_comp_Analyzer$AnalyzerMode_h_
#define _com_sun_tools_javac_comp_Analyzer$AnalyzerMode_h_
//$ class com.sun.tools.javac.comp.Analyzer$AnalyzerMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DIAMOND")
#undef DIAMOND
#pragma push_macro("LAMBDA")
#undef LAMBDA
#pragma push_macro("LOCAL")
#undef LOCAL
#pragma push_macro("METHOD")
#undef METHOD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Source;
					class Source$Feature;
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

class $export Analyzer$AnalyzerMode : public ::java::lang::Enum {
	$class(Analyzer$AnalyzerMode, 0, ::java::lang::Enum)
public:
	Analyzer$AnalyzerMode();
	static $Array<::com::sun::tools::javac::comp::Analyzer$AnalyzerMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* opt, ::com::sun::tools::javac::code::Source$Feature* feature);
	static ::java::util::EnumSet* getAnalyzerModes($String* opt, ::com::sun::tools::javac::code::Source* source);
	static ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Analyzer$AnalyzerMode>* values();
	static ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* DIAMOND;
	static ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* LAMBDA;
	static ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* METHOD;
	static ::com::sun::tools::javac::comp::Analyzer$AnalyzerMode* LOCAL;
	static $Array<::com::sun::tools::javac::comp::Analyzer$AnalyzerMode>* $VALUES;
	$String* opt = nullptr;
	::com::sun::tools::javac::code::Source$Feature* feature = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DIAMOND")
#pragma pop_macro("LAMBDA")
#pragma pop_macro("LOCAL")
#pragma pop_macro("METHOD")

#endif // _com_sun_tools_javac_comp_Analyzer$AnalyzerMode_h_