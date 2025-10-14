#ifndef _com_sun_tools_javac_comp_LambdaToMethod$MemberReferenceToLambda_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$MemberReferenceToLambda_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$MemberReferenceToLambda
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$VarSymbol;
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
					class LambdaToMethod;
					class LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext;
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
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
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
					class ListBuffer;
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

class LambdaToMethod$MemberReferenceToLambda : public ::java::lang::Object {
	$class(LambdaToMethod$MemberReferenceToLambda, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaToMethod$MemberReferenceToLambda();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod* this$0, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext* localContext, ::com::sun::tools::javac::code::Symbol* owner);
	::com::sun::tools::javac::code::Symbol$VarSymbol* addParameter($String* name, ::com::sun::tools::javac::code::Type* p, bool genArg);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* addParametersReturnReceiver();
	::com::sun::tools::javac::tree::JCTree$JCExpression* expressionInvoke(::com::sun::tools::javac::code::Symbol$VarSymbol* rcvr);
	::com::sun::tools::javac::tree::JCTree$JCExpression* expressionNew();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* getReceiverExpression();
	virtual ::com::sun::tools::javac::tree::JCTree$JCLambda* lambda();
	::com::sun::tools::javac::tree::JCTree$JCExpression* makeReceiver(::com::sun::tools::javac::code::Symbol$VarSymbol* rcvr);
	::com::sun::tools::javac::comp::LambdaToMethod* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext* localContext = nullptr;
	::com::sun::tools::javac::code::Symbol* owner = nullptr;
	::com::sun::tools::javac::util::ListBuffer* args = nullptr;
	::com::sun::tools::javac::util::ListBuffer* params = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* receiverExpression = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$MemberReferenceToLambda_h_