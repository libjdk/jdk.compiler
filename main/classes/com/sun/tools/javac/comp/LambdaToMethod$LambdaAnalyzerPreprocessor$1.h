#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$1_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$1_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$1
//$ extends com.sun.tools.javac.comp.Lower$BasicFreeVarCollector

#include <com/sun/tools/javac/comp/Lower$BasicFreeVarCollector.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
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
					class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
					class Lower;
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

class LambdaToMethod$LambdaAnalyzerPreprocessor$1 : public ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$1();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, ::com::sun::tools::javac::comp::Lower* x0, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* val$lambdaContext);
	virtual void addFreeVars(::com::sun::tools::javac::code::Symbol$ClassSymbol* c) override;
	virtual void visitSymbol(::com::sun::tools::javac::code::Symbol* sym) override;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1 = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* val$lambdaContext = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$1_h_