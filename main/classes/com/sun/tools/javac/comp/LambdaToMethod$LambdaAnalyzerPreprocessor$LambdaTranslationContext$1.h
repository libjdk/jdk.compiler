#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1
//$ extends com.sun.tools.javac.code.Symbol$MethodSymbol

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>

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
					class LambdaToMethod$LambdaAnalyzerPreprocessor;
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

class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1 : public ::com::sun::tools::javac::code::Symbol$MethodSymbol {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$MethodSymbol)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1();
	using ::com::sun::tools::javac::code::Symbol$MethodSymbol::clone;
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2, int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* val$this$1, ::com::sun::tools::javac::code::Symbol$MethodSymbol* val$originalOwner);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* originalEnclosingMethod() override;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* this$2 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* val$originalOwner = nullptr;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* val$this$1 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1_h_