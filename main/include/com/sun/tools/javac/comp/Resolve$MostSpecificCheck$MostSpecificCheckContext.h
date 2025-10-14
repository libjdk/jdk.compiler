#ifndef _com_sun_tools_javac_comp_Resolve$MostSpecificCheck$MostSpecificCheckContext_h_
#define _com_sun_tools_javac_comp_Resolve$MostSpecificCheck$MostSpecificCheckContext_h_
//$ class com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext
//$ extends com.sun.tools.javac.comp.Resolve$MethodCheckContext

#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
					class DeferredAttr$DeferredAttrContext;
					class Resolve$MostSpecificCheck;
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
					class JCTree;
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
					class Warner;
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

class $import Resolve$MostSpecificCheck$MostSpecificCheckContext : public ::com::sun::tools::javac::comp::Resolve$MethodCheckContext {
	$class(Resolve$MostSpecificCheck$MostSpecificCheckContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodCheckContext)
public:
	Resolve$MostSpecificCheck$MostSpecificCheckContext();
	void init$(::com::sun::tools::javac::comp::Resolve$MostSpecificCheck* this$1, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* rsWarner, ::com::sun::tools::javac::code::Type* actual);
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	bool compatibleBySubtyping(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req);
	bool functionalInterfaceMostSpecific(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::tree::JCTree* tree);
	bool unrelatedFunctionalInterfaces(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	bool unrelatedInterfaces(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	::com::sun::tools::javac::comp::Resolve$MostSpecificCheck* this$1 = nullptr;
	::com::sun::tools::javac::code::Type* actual = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MostSpecificCheck$MostSpecificCheckContext_h_