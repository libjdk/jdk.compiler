#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SIMPLE_NAMES")
#undef SIMPLE_NAMES
#pragma push_macro("UNIQUE_TYPEVAR_NAMES")
#undef UNIQUE_TYPEVAR_NAMES
#pragma push_macro("WHERE_CLAUSES")
#undef WHERE_CLAUSES

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature : public ::java::lang::Enum {
	$class(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, 0, ::java::lang::Enum)
public:
	RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature();
	static $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature>* values();
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* WHERE_CLAUSES;
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* SIMPLE_NAMES;
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* UNIQUE_TYPEVAR_NAMES;
	static $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("SIMPLE_NAMES")
#pragma pop_macro("UNIQUE_TYPEVAR_NAMES")
#pragma pop_macro("WHERE_CLAUSES")

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature_h_