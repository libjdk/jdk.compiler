#ifndef _com_sun_tools_javac_util_RichDiagnosticFormatter$WhereClauseKind_h_
#define _com_sun_tools_javac_util_RichDiagnosticFormatter$WhereClauseKind_h_
//$ class com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CAPTURED")
#undef CAPTURED
#pragma push_macro("INTERSECTION")
#undef INTERSECTION
#pragma push_macro("TYPEVAR")
#undef TYPEVAR

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export RichDiagnosticFormatter$WhereClauseKind : public ::java::lang::Enum {
	$class(RichDiagnosticFormatter$WhereClauseKind, 0, ::java::lang::Enum)
public:
	RichDiagnosticFormatter$WhereClauseKind();
	static $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* key);
	virtual $String* key();
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind>* values();
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind* TYPEVAR;
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind* CAPTURED;
	static ::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind* INTERSECTION;
	static $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind>* $VALUES;
	$String* key$ = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CAPTURED")
#pragma pop_macro("INTERSECTION")
#pragma pop_macro("TYPEVAR")

#endif // _com_sun_tools_javac_util_RichDiagnosticFormatter$WhereClauseKind_h_