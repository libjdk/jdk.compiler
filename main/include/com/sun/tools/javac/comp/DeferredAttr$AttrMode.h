#ifndef _com_sun_tools_javac_comp_DeferredAttr$AttrMode_h_
#define _com_sun_tools_javac_comp_DeferredAttr$AttrMode_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$AttrMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CHECK")
#undef CHECK
#pragma push_macro("SPECULATIVE")
#undef SPECULATIVE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$AttrMode : public ::java::lang::Enum {
	$class(DeferredAttr$AttrMode, 0, ::java::lang::Enum)
public:
	DeferredAttr$AttrMode();
	static $Array<::com::sun::tools::javac::comp::DeferredAttr$AttrMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::DeferredAttr$AttrMode>* values();
	static ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* SPECULATIVE;
	static ::com::sun::tools::javac::comp::DeferredAttr$AttrMode* CHECK;
	static $Array<::com::sun::tools::javac::comp::DeferredAttr$AttrMode>* $VALUES;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CHECK")
#pragma pop_macro("SPECULATIVE")

#endif // _com_sun_tools_javac_comp_DeferredAttr$AttrMode_h_