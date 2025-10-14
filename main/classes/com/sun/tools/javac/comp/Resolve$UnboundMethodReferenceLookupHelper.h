#ifndef _com_sun_tools_javac_comp_Resolve$UnboundMethodReferenceLookupHelper_h_
#define _com_sun_tools_javac_comp_Resolve$UnboundMethodReferenceLookupHelper_h_
//$ class com.sun.tools.javac.comp.Resolve$UnboundMethodReferenceLookupHelper
//$ extends com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper

#include <com/sun/tools/javac/comp/Resolve$MethodReferenceLookupHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
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
					class InferenceContext;
					class Resolve;
					class Resolve$MethodResolutionPhase;
					class Resolve$ReferenceLookupHelper;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCMemberReference;
					class JCTree$JCMemberReference$ReferenceKind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
					class Name;
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

class $export Resolve$UnboundMethodReferenceLookupHelper : public ::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper {
	$class(Resolve$UnboundMethodReferenceLookupHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper)
public:
	Resolve$UnboundMethodReferenceLookupHelper();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase);
	virtual ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* referenceKind(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper* unboundLookup(::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$UnboundMethodReferenceLookupHelper_h_