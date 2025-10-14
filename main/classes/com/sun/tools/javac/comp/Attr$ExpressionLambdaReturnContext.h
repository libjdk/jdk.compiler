#ifndef _com_sun_tools_javac_comp_Attr$ExpressionLambdaReturnContext_h_
#define _com_sun_tools_javac_comp_Attr$ExpressionLambdaReturnContext_h_
//$ class com.sun.tools.javac.comp.Attr$ExpressionLambdaReturnContext
//$ extends com.sun.tools.javac.comp.Attr$FunctionalReturnContext

#include <com/sun/tools/javac/comp/Attr$FunctionalReturnContext.h>

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
					class Attr;
					class Check$CheckContext;
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
					class JCTree$JCExpression;
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
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticPosition;
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

class $export Attr$ExpressionLambdaReturnContext : public ::com::sun::tools::javac::comp::Attr$FunctionalReturnContext {
	$class(Attr$ExpressionLambdaReturnContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Attr$FunctionalReturnContext)
public:
	Attr$ExpressionLambdaReturnContext();
	void init$(::com::sun::tools::javac::comp::Attr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::comp::Check$CheckContext* enclosingContext);
	virtual bool compatible(::com::sun::tools::javac::code::Type* found, ::com::sun::tools::javac::code::Type* req, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual void report(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic* details) override;
	::com::sun::tools::javac::comp::Attr* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
	bool expStmtExpected = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Attr$ExpressionLambdaReturnContext_h_