#ifndef _com_sun_tools_javac_comp_Resolve$VerboseResolutionMode_h_
#define _com_sun_tools_javac_comp_Resolve$VerboseResolutionMode_h_
//$ class com.sun.tools.javac.comp.Resolve$VerboseResolutionMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APPLICABLE")
#undef APPLICABLE
#pragma push_macro("DEFERRED_INST")
#undef DEFERRED_INST
#pragma push_macro("FAILURE")
#undef FAILURE
#pragma push_macro("INAPPLICABLE")
#undef INAPPLICABLE
#pragma push_macro("INTERNAL")
#undef INTERNAL
#pragma push_macro("OBJECT_INIT")
#undef OBJECT_INIT
#pragma push_macro("PREDEF")
#undef PREDEF
#pragma push_macro("SUCCESS")
#undef SUCCESS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Resolve$VerboseResolutionMode : public ::java::lang::Enum {
	$class(Resolve$VerboseResolutionMode, 0, ::java::lang::Enum)
public:
	Resolve$VerboseResolutionMode();
	static $Array<::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* opt);
	static ::java::util::EnumSet* getVerboseResolutionMode(::com::sun::tools::javac::util::Options* opts);
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* valueOf($String* name);
	static $Array<::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode>* values();
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* SUCCESS;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* FAILURE;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* APPLICABLE;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* INAPPLICABLE;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* DEFERRED_INST;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* PREDEF;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* OBJECT_INIT;
	static ::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode* INTERNAL;
	static $Array<::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode>* $VALUES;
	$String* opt = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("APPLICABLE")
#pragma pop_macro("DEFERRED_INST")
#pragma pop_macro("FAILURE")
#pragma pop_macro("INAPPLICABLE")
#pragma pop_macro("INTERNAL")
#pragma pop_macro("OBJECT_INIT")
#pragma pop_macro("PREDEF")
#pragma pop_macro("SUCCESS")

#endif // _com_sun_tools_javac_comp_Resolve$VerboseResolutionMode_h_