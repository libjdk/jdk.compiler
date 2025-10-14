#ifndef _com_sun_tools_javac_comp_Resolve$ArrayConstructorReferenceLookupHelper_h_
#define _com_sun_tools_javac_comp_Resolve$ArrayConstructorReferenceLookupHelper_h_
//$ class com.sun.tools.javac.comp.Resolve$ArrayConstructorReferenceLookupHelper
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
					class Resolve;
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

class $import Resolve$ArrayConstructorReferenceLookupHelper : public ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper {
	$class(Resolve$ArrayConstructorReferenceLookupHelper, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupHelper)
public:
	Resolve$ArrayConstructorReferenceLookupHelper();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* referenceTree, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* typeargtypes, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* maxPhase);
	virtual ::com::sun::tools::javac::code::Symbol* lookup(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCMemberReference$ReferenceKind* referenceKind(::com::sun::tools::javac::code::Symbol* sym) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$ArrayConstructorReferenceLookupHelper_h_