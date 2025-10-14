#ifndef _com_sun_tools_javac_code_Kinds$KindSelector_h_
#define _com_sun_tools_javac_code_Kinds$KindSelector_h_
//$ class com.sun.tools.javac.code.Kinds$KindSelector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ASG")
#undef ASG
#pragma push_macro("ERR")
#undef ERR
#pragma push_macro("MDL")
#undef MDL
#pragma push_macro("MTH")
#undef MTH
#pragma push_macro("NIL")
#undef NIL
#pragma push_macro("PCK")
#undef PCK
#pragma push_macro("POLY")
#undef POLY
#pragma push_macro("TYP")
#undef TYP
#pragma push_macro("TYP_PCK")
#undef TYP_PCK
#pragma push_macro("VAL")
#undef VAL
#pragma push_macro("VAL_MTH")
#undef VAL_MTH
#pragma push_macro("VAL_POLY")
#undef VAL_POLY
#pragma push_macro("VAL_TYP")
#undef VAL_TYP
#pragma push_macro("VAL_TYP_PCK")
#undef VAL_TYP_PCK
#pragma push_macro("VAR")
#undef VAR

namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Kinds$KindSelector : public ::java::lang::Object {
	$class(Kinds$KindSelector, 0, ::java::lang::Object)
public:
	Kinds$KindSelector();
	void init$(int32_t data);
	virtual bool contains(::com::sun::tools::javac::code::Kinds$KindSelector* other);
	virtual ::java::util::Set* kindNames();
	static ::com::sun::tools::javac::code::Kinds$KindSelector* of($Array<::com::sun::tools::javac::code::Kinds$KindSelector>* kindSelectors);
	virtual bool subset(::com::sun::tools::javac::code::Kinds$KindSelector* other);
	static ::com::sun::tools::javac::code::Kinds$KindSelector* NIL;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* PCK;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* TYP;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* VAR;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* VAL;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* MTH;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* POLY;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* MDL;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* ERR;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* ASG;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* TYP_PCK;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* VAL_MTH;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* VAL_POLY;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* VAL_TYP;
	static ::com::sun::tools::javac::code::Kinds$KindSelector* VAL_TYP_PCK;
	int8_t data = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ASG")
#pragma pop_macro("ERR")
#pragma pop_macro("MDL")
#pragma pop_macro("MTH")
#pragma pop_macro("NIL")
#pragma pop_macro("PCK")
#pragma pop_macro("POLY")
#pragma pop_macro("TYP")
#pragma pop_macro("TYP_PCK")
#pragma pop_macro("VAL")
#pragma pop_macro("VAL_MTH")
#pragma pop_macro("VAL_POLY")
#pragma pop_macro("VAL_TYP")
#pragma pop_macro("VAL_TYP_PCK")
#pragma pop_macro("VAR")

#endif // _com_sun_tools_javac_code_Kinds$KindSelector_h_