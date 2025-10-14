#ifndef _com_sun_source_tree_MemberReferenceTree$ReferenceMode_h_
#define _com_sun_source_tree_MemberReferenceTree$ReferenceMode_h_
//$ class com.sun.source.tree.MemberReferenceTree$ReferenceMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INVOKE")
#undef INVOKE
#pragma push_macro("NEW")
#undef NEW

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import MemberReferenceTree$ReferenceMode : public ::java::lang::Enum {
	$class(MemberReferenceTree$ReferenceMode, 0, ::java::lang::Enum)
public:
	MemberReferenceTree$ReferenceMode();
	static $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* valueOf($String* name);
	static $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>* values();
	static ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* INVOKE;
	static ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* NEW;
	static $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>* $VALUES;
};

			} // tree
		} // source
	} // sun
} // com

#pragma pop_macro("INVOKE")
#pragma pop_macro("NEW")

#endif // _com_sun_source_tree_MemberReferenceTree$ReferenceMode_h_