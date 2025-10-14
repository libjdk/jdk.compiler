#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2
//$ extends com.sun.tools.javac.code.Symbol$VarSymbol

#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>

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
					class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;
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

class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2 : public ::com::sun::tools::javac::code::Symbol$VarSymbol {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$VarSymbol)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2();
	using ::com::sun::tools::javac::code::Symbol$VarSymbol::clone;
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol* val$sym);
	virtual ::com::sun::tools::javac::code::Symbol* baseSymbol() override;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$sym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2_h_