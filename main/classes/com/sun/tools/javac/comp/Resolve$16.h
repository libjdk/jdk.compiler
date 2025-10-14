#ifndef _com_sun_tools_javac_comp_Resolve$16_h_
#define _com_sun_tools_javac_comp_Resolve$16_h_
//$ class com.sun.tools.javac.comp.Resolve$16
//$ extends com.sun.tools.javac.comp.Resolve$ReferenceChooser

#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Resolve;
					class Resolve$ReferenceLookupResult;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$16 : public ::com::sun::tools::javac::comp::Resolve$ReferenceChooser {
	$class(Resolve$16, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ReferenceChooser)
public:
	Resolve$16();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundResult(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundRes) override;
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* unboundResult(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundRes, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* unboundRes) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$16_h_