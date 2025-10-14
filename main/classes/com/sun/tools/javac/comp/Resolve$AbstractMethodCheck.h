#ifndef _com_sun_tools_javac_comp_Resolve$AbstractMethodCheck_h_
#define _com_sun_tools_javac_comp_Resolve$AbstractMethodCheck_h_
//$ class com.sun.tools.javac.comp.Resolve$AbstractMethodCheck
//$ extends com.sun.tools.javac.comp.Resolve$MethodCheck

#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <java/lang/Array.h>

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
					class Env;
					class InferenceContext;
					class Resolve;
					class Resolve$AbstractMethodCheck$SharedInapplicableMethodException;
					class Resolve$MethodCheckDiag;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
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

class $export Resolve$AbstractMethodCheck : public ::com::sun::tools::javac::comp::Resolve$MethodCheck {
	$class(Resolve$AbstractMethodCheck, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodCheck)
public:
	Resolve$AbstractMethodCheck();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0);
	virtual void argumentsAcceptable(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::util::List* formals, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual void checkArg(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, bool varargs, ::com::sun::tools::javac::code::Type* actual, ::com::sun::tools::javac::code::Type* formal, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext, ::com::sun::tools::javac::util::Warner* warn) {}
	virtual ::com::sun::tools::javac::comp::Resolve$MethodCheck* mostSpecificCheck(::com::sun::tools::javac::util::List* actuals) override;
	virtual void reportMC(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag* diag, ::com::sun::tools::javac::comp::InferenceContext* inferenceContext, $ObjectArray* args);
	::com::sun::tools::javac::tree::JCTree* treeForDiagnostics(::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck$SharedInapplicableMethodException* methodCheckFailure = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$AbstractMethodCheck_h_