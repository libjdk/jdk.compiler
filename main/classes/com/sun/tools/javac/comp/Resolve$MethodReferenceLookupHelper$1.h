#ifndef _com_sun_tools_javac_comp_Resolve$MethodReferenceLookupHelper$1_h_
#define _com_sun_tools_javac_comp_Resolve$MethodReferenceLookupHelper$1_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodReferenceLookupHelper$1
//$ extends com.sun.tools.javac.comp.Resolve$ReferenceLookupHelper

#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupHelper.h>

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
					class Env;
					class InferenceContext;
					class Resolve$MethodReferenceLookupHelper;
					class Resolve$MethodResolutionPhase;
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

class Resolve$MethodReferenceLookupHelper$1 : public ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper {
	$class(Resolve$MethodReferenceLookupHelper$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper)
public:
	Resolve$MethodReferenceLookupHelper$1();
	void init$(::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper* this$1, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase);
	virtual ::com::sun::tools::javac::code::Symbol* lookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* referenceKind(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper* unboundLookup(::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
	::com::sun::tools::javac::comp::Resolve$MethodReferenceLookupHelper* this$1 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodReferenceLookupHelper$1_h_