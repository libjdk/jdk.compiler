#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext
//$ extends com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext

#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>

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
					class LambdaToMethod$LambdaAnalyzerPreprocessor;
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

class $export LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext : public ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext, 0, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, ::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree);
	::com::sun::tools::javac::code::Type* bridgedRefSig();
	::com::sun::tools::javac::code::Type* generatedRefSig();
	bool interfaceParameterIsIntersectionOrUnionType();
	bool isArrayOp();
	bool isIntersectionOrUnionType(::com::sun::tools::javac::code::Type* t);
	bool isPrivateInOtherClass();
	bool needsConversionToLambda();
	bool needsVarArgsConversion();
	bool receiverAccessible();
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1 = nullptr;
	static bool $assertionsDisabled;
	bool isSuper = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$ReferenceTranslationContext_h_