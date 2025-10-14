#ifndef _com_sun_tools_javac_code_Kinds$Kind_h_
#define _com_sun_tools_javac_code_Kinds$Kind_h_
//$ class com.sun.tools.javac.code.Kinds$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABSENT_MTH")
#undef ABSENT_MTH
#pragma push_macro("ABSENT_TYP")
#undef ABSENT_TYP
#pragma push_macro("ABSENT_VAR")
#undef ABSENT_VAR
#pragma push_macro("AMBIGUOUS")
#undef AMBIGUOUS
#pragma push_macro("BAD_RESTRICTED_TYPE")
#undef BAD_RESTRICTED_TYPE
#pragma push_macro("ERR")
#undef ERR
#pragma push_macro("HIDDEN")
#undef HIDDEN
#pragma push_macro("MDL")
#undef MDL
#pragma push_macro("MISSING_ENCL")
#undef MISSING_ENCL
#pragma push_macro("MTH")
#undef MTH
#pragma push_macro("NIL")
#undef NIL
#pragma push_macro("PCK")
#undef PCK
#pragma push_macro("POLY")
#undef POLY
#pragma push_macro("STATICERR")
#undef STATICERR
#pragma push_macro("TYP")
#undef TYP
#pragma push_macro("VAR")
#undef VAR
#pragma push_macro("WRONG_MTH")
#undef WRONG_MTH
#pragma push_macro("WRONG_MTHS")
#undef WRONG_MTHS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Kinds$Kind$Category;
					class Kinds$KindName;
					class Kinds$KindSelector;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Kinds$Kind : public ::java::lang::Enum {
	$class(Kinds$Kind, 0, ::java::lang::Enum)
public:
	Kinds$Kind();
	static $Array<::com::sun::tools::javac::code::Kinds$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Kinds$Kind$Category* category);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Kinds$Kind$Category* category, ::com::sun::tools::javac::code::Kinds$KindSelector* selector);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Kinds$Kind$Category* category, ::com::sun::tools::javac::code::Kinds$KindName* absentKind);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Kinds$Kind$Category* category, ::com::sun::tools::javac::code::Kinds$KindName* kindName, ::com::sun::tools::javac::code::Kinds$KindSelector* selector);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Kinds$Kind$Category* category, ::com::sun::tools::javac::code::Kinds$KindName* kindName, ::com::sun::tools::javac::code::Kinds$KindName* absentKind, ::com::sun::tools::javac::code::Kinds$KindSelector* selector);
	virtual ::com::sun::tools::javac::code::Kinds$KindName* absentKind();
	virtual bool betterThan(::com::sun::tools::javac::code::Kinds$Kind* other);
	virtual bool isResolutionError();
	virtual bool isResolutionTargetError();
	virtual bool isValid();
	virtual ::com::sun::tools::javac::code::Kinds$KindName* kindName();
	virtual bool matches(::com::sun::tools::javac::code::Kinds$KindSelector* kindSelectors);
	virtual ::com::sun::tools::javac::code::Kinds$KindSelector* toSelector();
	static ::com::sun::tools::javac::code::Kinds$Kind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Kinds$Kind>* values();
	static ::com::sun::tools::javac::code::Kinds$Kind* NIL;
	static ::com::sun::tools::javac::code::Kinds$Kind* PCK;
	static ::com::sun::tools::javac::code::Kinds$Kind* TYP;
	static ::com::sun::tools::javac::code::Kinds$Kind* VAR;
	static ::com::sun::tools::javac::code::Kinds$Kind* MTH;
	static ::com::sun::tools::javac::code::Kinds$Kind* POLY;
	static ::com::sun::tools::javac::code::Kinds$Kind* MDL;
	static ::com::sun::tools::javac::code::Kinds$Kind* ERR;
	static ::com::sun::tools::javac::code::Kinds$Kind* AMBIGUOUS;
	static ::com::sun::tools::javac::code::Kinds$Kind* HIDDEN;
	static ::com::sun::tools::javac::code::Kinds$Kind* STATICERR;
	static ::com::sun::tools::javac::code::Kinds$Kind* MISSING_ENCL;
	static ::com::sun::tools::javac::code::Kinds$Kind* BAD_RESTRICTED_TYPE;
	static ::com::sun::tools::javac::code::Kinds$Kind* ABSENT_VAR;
	static ::com::sun::tools::javac::code::Kinds$Kind* WRONG_MTHS;
	static ::com::sun::tools::javac::code::Kinds$Kind* WRONG_MTH;
	static ::com::sun::tools::javac::code::Kinds$Kind* ABSENT_MTH;
	static ::com::sun::tools::javac::code::Kinds$Kind* ABSENT_TYP;
	static $Array<::com::sun::tools::javac::code::Kinds$Kind>* $VALUES;
	::com::sun::tools::javac::code::Kinds$KindName* kindName$ = nullptr;
	::com::sun::tools::javac::code::Kinds$KindName* absentKind$ = nullptr;
	::com::sun::tools::javac::code::Kinds$KindSelector* selector = nullptr;
	::com::sun::tools::javac::code::Kinds$Kind$Category* category = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ABSENT_MTH")
#pragma pop_macro("ABSENT_TYP")
#pragma pop_macro("ABSENT_VAR")
#pragma pop_macro("AMBIGUOUS")
#pragma pop_macro("BAD_RESTRICTED_TYPE")
#pragma pop_macro("ERR")
#pragma pop_macro("HIDDEN")
#pragma pop_macro("MDL")
#pragma pop_macro("MISSING_ENCL")
#pragma pop_macro("MTH")
#pragma pop_macro("NIL")
#pragma pop_macro("PCK")
#pragma pop_macro("POLY")
#pragma pop_macro("STATICERR")
#pragma pop_macro("TYP")
#pragma pop_macro("VAR")
#pragma pop_macro("WRONG_MTH")
#pragma pop_macro("WRONG_MTHS")

#endif // _com_sun_tools_javac_code_Kinds$Kind_h_