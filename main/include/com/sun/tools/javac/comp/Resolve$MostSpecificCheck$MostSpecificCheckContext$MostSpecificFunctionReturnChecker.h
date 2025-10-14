#ifndef _com_sun_tools_javac_comp_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_h_
#define _com_sun_tools_javac_comp_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_h_
//$ class com.sun.tools.javac.comp.Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker
//$ extends com.sun.tools.javac.comp.DeferredAttr$PolyScanner

#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>

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
					class Resolve$MostSpecificCheck$MostSpecificCheckContext;
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
					class JCTree$JCConditional;
					class JCTree$JCExpression;
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCParens;
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

class $import Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker : public ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner {
	$class(Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner)
public:
	Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker();
	void init$(::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext* this$2, ::com::sun::tools::javac::code::Type* tRet, ::com::sun::tools::javac::code::Type* sRet);
	::com::sun::tools::javac::tree::JCTree$JCExpression* asExpr(::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	::com::sun::tools::javac::util::List* lambdaResults(::com::sun::tools::javac::tree::JCTree$JCLambda* lambda);
	using ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner::scan;
	virtual void skip(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitParens(::com::sun::tools::javac::tree::JCTree$JCParens* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	::com::sun::tools::javac::comp::Resolve$MostSpecificCheck$MostSpecificCheckContext* this$2 = nullptr;
	::com::sun::tools::javac::code::Type* tRet = nullptr;
	::com::sun::tools::javac::code::Type* sRet = nullptr;
	bool result = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MostSpecificCheck$MostSpecificCheckContext$MostSpecificFunctionReturnChecker_h_