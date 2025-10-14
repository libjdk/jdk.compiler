#ifndef _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_h_
#define _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_h_
//$ class com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AFTER_SUMMARY")
#undef AFTER_SUMMARY
#pragma push_macro("BOTTOM")
#undef BOTTOM

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export BasicDiagnosticFormatter$BasicConfiguration$SourcePosition : public ::java::lang::Enum {
	$class(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, 0, ::java::lang::Enum)
public:
	BasicDiagnosticFormatter$BasicConfiguration$SourcePosition();
	static $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition>* values();
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BOTTOM;
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* AFTER_SUMMARY;
	static $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("AFTER_SUMMARY")
#pragma pop_macro("BOTTOM")

#endif // _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_h_