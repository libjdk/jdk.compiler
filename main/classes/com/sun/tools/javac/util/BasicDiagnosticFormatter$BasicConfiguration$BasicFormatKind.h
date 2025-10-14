#ifndef _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_h_
#define _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_h_
//$ class com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEFAULT_CLASS_FORMAT")
#undef DEFAULT_CLASS_FORMAT
#pragma push_macro("DEFAULT_NO_POS_FORMAT")
#undef DEFAULT_NO_POS_FORMAT
#pragma push_macro("DEFAULT_POS_FORMAT")
#undef DEFAULT_POS_FORMAT

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind : public ::java::lang::Enum {
	$class(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, 0, ::java::lang::Enum)
public:
	BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind();
	static $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind>* values();
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* DEFAULT_POS_FORMAT;
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* DEFAULT_NO_POS_FORMAT;
	static ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* DEFAULT_CLASS_FORMAT;
	static $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT_CLASS_FORMAT")
#pragma pop_macro("DEFAULT_NO_POS_FORMAT")
#pragma pop_macro("DEFAULT_POS_FORMAT")

#endif // _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_h_