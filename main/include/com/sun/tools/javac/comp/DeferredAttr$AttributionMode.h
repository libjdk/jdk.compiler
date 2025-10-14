#ifndef _com_sun_tools_javac_comp_DeferredAttr$AttributionMode_h_
#define _com_sun_tools_javac_comp_DeferredAttr$AttributionMode_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$AttributionMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANALYZER")
#undef ANALYZER
#pragma push_macro("ATTRIB_TO_TREE")
#undef ATTRIB_TO_TREE
#pragma push_macro("FULL")
#undef FULL
#pragma push_macro("SPECULATIVE")
#undef SPECULATIVE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$AttributionMode : public ::java::lang::Enum {
	$class(DeferredAttr$AttributionMode, 0, ::java::lang::Enum)
public:
	DeferredAttr$AttributionMode();
	static $Array<::com::sun::tools::javac::comp::DeferredAttr$AttributionMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, bool isSpeculative, bool recover);
	virtual bool isSpeculative();
	virtual bool recover();
	static ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::DeferredAttr$AttributionMode>* values();
	static ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* FULL;
	static ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* ATTRIB_TO_TREE;
	static ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* ANALYZER;
	static ::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* SPECULATIVE;
	static $Array<::com::sun::tools::javac::comp::DeferredAttr$AttributionMode>* $VALUES;
	bool isSpeculative$ = false;
	bool recover$ = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANALYZER")
#pragma pop_macro("ATTRIB_TO_TREE")
#pragma pop_macro("FULL")
#pragma pop_macro("SPECULATIVE")

#endif // _com_sun_tools_javac_comp_DeferredAttr$AttributionMode_h_