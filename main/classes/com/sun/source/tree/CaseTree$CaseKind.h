#ifndef _com_sun_source_tree_CaseTree$CaseKind_h_
#define _com_sun_source_tree_CaseTree$CaseKind_h_
//$ class com.sun.source.tree.CaseTree$CaseKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("RULE")
#undef RULE
#pragma push_macro("STATEMENT")
#undef STATEMENT

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export CaseTree$CaseKind : public ::java::lang::Enum {
	$class(CaseTree$CaseKind, 0, ::java::lang::Enum)
public:
	CaseTree$CaseKind();
	static $Array<::com::sun::source::tree::CaseTree$CaseKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::source::tree::CaseTree$CaseKind* valueOf($String* name);
	static $Array<::com::sun::source::tree::CaseTree$CaseKind>* values();
	static ::com::sun::source::tree::CaseTree$CaseKind* STATEMENT;
	static ::com::sun::source::tree::CaseTree$CaseKind* RULE;
	static $Array<::com::sun::source::tree::CaseTree$CaseKind>* $VALUES;
};

			} // tree
		} // source
	} // sun
} // com

#pragma pop_macro("RULE")
#pragma pop_macro("STATEMENT")

#endif // _com_sun_source_tree_CaseTree$CaseKind_h_