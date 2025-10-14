#ifndef _com_sun_source_doctree_AttributeTree$ValueKind_h_
#define _com_sun_source_doctree_AttributeTree$ValueKind_h_
//$ class com.sun.source.doctree.AttributeTree$ValueKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("SINGLE")
#undef SINGLE
#pragma push_macro("UNQUOTED")
#undef UNQUOTED

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export AttributeTree$ValueKind : public ::java::lang::Enum {
	$class(AttributeTree$ValueKind, 0, ::java::lang::Enum)
public:
	AttributeTree$ValueKind();
	static $Array<::com::sun::source::doctree::AttributeTree$ValueKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::source::doctree::AttributeTree$ValueKind* valueOf($String* name);
	static $Array<::com::sun::source::doctree::AttributeTree$ValueKind>* values();
	static ::com::sun::source::doctree::AttributeTree$ValueKind* EMPTY;
	static ::com::sun::source::doctree::AttributeTree$ValueKind* UNQUOTED;
	static ::com::sun::source::doctree::AttributeTree$ValueKind* SINGLE;
	static ::com::sun::source::doctree::AttributeTree$ValueKind* DOUBLE;
	static $Array<::com::sun::source::doctree::AttributeTree$ValueKind>* $VALUES;
};

			} // doctree
		} // source
	} // sun
} // com

#pragma pop_macro("DOUBLE")
#pragma pop_macro("EMPTY")
#pragma pop_macro("SINGLE")
#pragma pop_macro("UNQUOTED")

#endif // _com_sun_source_doctree_AttributeTree$ValueKind_h_