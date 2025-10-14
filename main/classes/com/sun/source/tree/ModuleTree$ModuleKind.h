#ifndef _com_sun_source_tree_ModuleTree$ModuleKind_h_
#define _com_sun_source_tree_ModuleTree$ModuleKind_h_
//$ class com.sun.source.tree.ModuleTree$ModuleKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("STRONG")
#undef STRONG

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export ModuleTree$ModuleKind : public ::java::lang::Enum {
	$class(ModuleTree$ModuleKind, 0, ::java::lang::Enum)
public:
	ModuleTree$ModuleKind();
	static $Array<::com::sun::source::tree::ModuleTree$ModuleKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::source::tree::ModuleTree$ModuleKind* valueOf($String* name);
	static $Array<::com::sun::source::tree::ModuleTree$ModuleKind>* values();
	static ::com::sun::source::tree::ModuleTree$ModuleKind* OPEN;
	static ::com::sun::source::tree::ModuleTree$ModuleKind* STRONG;
	static $Array<::com::sun::source::tree::ModuleTree$ModuleKind>* $VALUES;
};

			} // tree
		} // source
	} // sun
} // com

#pragma pop_macro("OPEN")
#pragma pop_macro("STRONG")

#endif // _com_sun_source_tree_ModuleTree$ModuleKind_h_