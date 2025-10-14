#ifndef _com_sun_tools_javac_util_MandatoryWarningHandler$DeferredDiagnosticKind_h_
#define _com_sun_tools_javac_util_MandatoryWarningHandler$DeferredDiagnosticKind_h_
//$ class com.sun.tools.javac.util.MandatoryWarningHandler$DeferredDiagnosticKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ADDITIONAL_IN_FILE")
#undef ADDITIONAL_IN_FILE
#pragma push_macro("ADDITIONAL_IN_FILES")
#undef ADDITIONAL_IN_FILES
#pragma push_macro("IN_FILE")
#undef IN_FILE
#pragma push_macro("IN_FILES")
#undef IN_FILES

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class MandatoryWarningHandler$DeferredDiagnosticKind : public ::java::lang::Enum {
	$class(MandatoryWarningHandler$DeferredDiagnosticKind, 0, ::java::lang::Enum)
public:
	MandatoryWarningHandler$DeferredDiagnosticKind();
	static $Array<::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* v);
	virtual $String* getKey($String* prefix);
	static ::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind>* values();
	static ::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind* IN_FILE;
	static ::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind* ADDITIONAL_IN_FILE;
	static ::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind* IN_FILES;
	static ::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind* ADDITIONAL_IN_FILES;
	static $Array<::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind>* $VALUES;
	$String* value = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ADDITIONAL_IN_FILE")
#pragma pop_macro("ADDITIONAL_IN_FILES")
#pragma pop_macro("IN_FILE")
#pragma pop_macro("IN_FILES")

#endif // _com_sun_tools_javac_util_MandatoryWarningHandler$DeferredDiagnosticKind_h_