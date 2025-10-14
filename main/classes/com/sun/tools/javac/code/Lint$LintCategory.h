#ifndef _com_sun_tools_javac_code_Lint$LintCategory_h_
#define _com_sun_tools_javac_code_Lint$LintCategory_h_
//$ class com.sun.tools.javac.code.Lint$LintCategory
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AUXILIARYCLASS")
#undef AUXILIARYCLASS
#pragma push_macro("CAST")
#undef CAST
#pragma push_macro("CLASSFILE")
#undef CLASSFILE
#pragma push_macro("DEPRECATION")
#undef DEPRECATION
#pragma push_macro("DEP_ANN")
#undef DEP_ANN
#pragma push_macro("DIVZERO")
#undef DIVZERO
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("EXPORTS")
#undef EXPORTS
#pragma push_macro("FALLTHROUGH")
#undef FALLTHROUGH
#pragma push_macro("FINALLY")
#undef FINALLY
#pragma push_macro("MISSING_EXPLICIT_CTOR")
#undef MISSING_EXPLICIT_CTOR
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("OPENS")
#undef OPENS
#pragma push_macro("OPTIONS")
#undef OPTIONS
#pragma push_macro("OVERLOADS")
#undef OVERLOADS
#pragma push_macro("OVERRIDES")
#undef OVERRIDES
#pragma push_macro("PATH")
#undef PATH
#pragma push_macro("PREVIEW")
#undef PREVIEW
#pragma push_macro("PROCESSING")
#undef PROCESSING
#pragma push_macro("RAW")
#undef RAW
#pragma push_macro("REMOVAL")
#undef REMOVAL
#pragma push_macro("REQUIRES_AUTOMATIC")
#undef REQUIRES_AUTOMATIC
#pragma push_macro("REQUIRES_TRANSITIVE_AUTOMATIC")
#undef REQUIRES_TRANSITIVE_AUTOMATIC
#pragma push_macro("SERIAL")
#undef SERIAL
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STRICTFP")
#undef STRICTFP
#pragma push_macro("SYNCHRONIZATION")
#undef SYNCHRONIZATION
#pragma push_macro("TEXT_BLOCKS")
#undef TEXT_BLOCKS
#pragma push_macro("TRY")
#undef TRY
#pragma push_macro("UNCHECKED")
#undef UNCHECKED
#pragma push_macro("VARARGS")
#undef VARARGS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Lint$LintCategory : public ::java::lang::Enum {
	$class(Lint$LintCategory, 0, ::java::lang::Enum)
public:
	Lint$LintCategory();
	static $Array<::com::sun::tools::javac::code::Lint$LintCategory>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* option);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* option, bool hidden);
	static ::com::sun::tools::javac::code::Lint$LintCategory* get($String* option);
	static ::com::sun::tools::javac::code::Lint$LintCategory* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Lint$LintCategory>* values();
	static ::com::sun::tools::javac::code::Lint$LintCategory* AUXILIARYCLASS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* CAST;
	static ::com::sun::tools::javac::code::Lint$LintCategory* CLASSFILE;
	static ::com::sun::tools::javac::code::Lint$LintCategory* DEPRECATION;
	static ::com::sun::tools::javac::code::Lint$LintCategory* DEP_ANN;
	static ::com::sun::tools::javac::code::Lint$LintCategory* DIVZERO;
	static ::com::sun::tools::javac::code::Lint$LintCategory* EMPTY;
	static ::com::sun::tools::javac::code::Lint$LintCategory* EXPORTS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* FALLTHROUGH;
	static ::com::sun::tools::javac::code::Lint$LintCategory* FINALLY;
	static ::com::sun::tools::javac::code::Lint$LintCategory* MISSING_EXPLICIT_CTOR;
	static ::com::sun::tools::javac::code::Lint$LintCategory* MODULE;
	static ::com::sun::tools::javac::code::Lint$LintCategory* OPENS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* OPTIONS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* OVERLOADS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* OVERRIDES;
	static ::com::sun::tools::javac::code::Lint$LintCategory* PATH;
	static ::com::sun::tools::javac::code::Lint$LintCategory* PROCESSING;
	static ::com::sun::tools::javac::code::Lint$LintCategory* RAW;
	static ::com::sun::tools::javac::code::Lint$LintCategory* REMOVAL;
	static ::com::sun::tools::javac::code::Lint$LintCategory* REQUIRES_AUTOMATIC;
	static ::com::sun::tools::javac::code::Lint$LintCategory* REQUIRES_TRANSITIVE_AUTOMATIC;
	static ::com::sun::tools::javac::code::Lint$LintCategory* SERIAL;
	static ::com::sun::tools::javac::code::Lint$LintCategory* STATIC;
	static ::com::sun::tools::javac::code::Lint$LintCategory* STRICTFP;
	static ::com::sun::tools::javac::code::Lint$LintCategory* SYNCHRONIZATION;
	static ::com::sun::tools::javac::code::Lint$LintCategory* TEXT_BLOCKS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* TRY;
	static ::com::sun::tools::javac::code::Lint$LintCategory* UNCHECKED;
	static ::com::sun::tools::javac::code::Lint$LintCategory* VARARGS;
	static ::com::sun::tools::javac::code::Lint$LintCategory* PREVIEW;
	static $Array<::com::sun::tools::javac::code::Lint$LintCategory>* $VALUES;
	$String* option = nullptr;
	bool hidden = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("AUXILIARYCLASS")
#pragma pop_macro("CAST")
#pragma pop_macro("CLASSFILE")
#pragma pop_macro("DEPRECATION")
#pragma pop_macro("DEP_ANN")
#pragma pop_macro("DIVZERO")
#pragma pop_macro("EMPTY")
#pragma pop_macro("EXPORTS")
#pragma pop_macro("FALLTHROUGH")
#pragma pop_macro("FINALLY")
#pragma pop_macro("MISSING_EXPLICIT_CTOR")
#pragma pop_macro("MODULE")
#pragma pop_macro("OPENS")
#pragma pop_macro("OPTIONS")
#pragma pop_macro("OVERLOADS")
#pragma pop_macro("OVERRIDES")
#pragma pop_macro("PATH")
#pragma pop_macro("PREVIEW")
#pragma pop_macro("PROCESSING")
#pragma pop_macro("RAW")
#pragma pop_macro("REMOVAL")
#pragma pop_macro("REQUIRES_AUTOMATIC")
#pragma pop_macro("REQUIRES_TRANSITIVE_AUTOMATIC")
#pragma pop_macro("SERIAL")
#pragma pop_macro("STATIC")
#pragma pop_macro("STRICTFP")
#pragma pop_macro("SYNCHRONIZATION")
#pragma pop_macro("TEXT_BLOCKS")
#pragma pop_macro("TRY")
#pragma pop_macro("UNCHECKED")
#pragma pop_macro("VARARGS")

#endif // _com_sun_tools_javac_code_Lint$LintCategory_h_