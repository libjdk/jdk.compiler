#ifndef _com_sun_tools_javac_comp_Resolve$ReferenceChooser_h_
#define _com_sun_tools_javac_comp_Resolve$ReferenceChooser_h_
//$ class com.sun.tools.javac.comp.Resolve$ReferenceChooser
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Resolve$ReferenceChooser : public ::java::lang::Object {
	$class(Resolve$ReferenceChooser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resolve$ReferenceChooser();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundResult(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundRes) {return nullptr;}
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* result(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundRes, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* unboundRes);
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* unboundResult(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* boundRes, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* unboundRes) {return nullptr;}
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$ReferenceChooser_h_