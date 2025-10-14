#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext
//$ extends com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext

#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$MethodSymbol;
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
					class LambdaToMethod$LambdaSymbolKind;
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
					class JCTree$JCExpression;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCLambda;
					class JCTree$JCNewClass;
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
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext : public ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, ::com::sun::tools::javac::tree::JCTree$JCLambda* tree);
	virtual void addSymbol(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* skind);
	virtual void complete();
	virtual ::com::sun::tools::javac::code::Type* generatedLambdaSig();
	virtual ::java::util::Map* getSymbolMap(::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* skind);
	bool lambda$translate$0(::com::sun::tools::javac::tree::JCTree$JCIdent* lambdaIdent, ::com::sun::tools::javac::code::Symbol* out);
	static ::com::sun::tools::javac::code::Symbol* lambda$translate$1(::com::sun::tools::javac::code::Symbol* a, ::com::sun::tools::javac::code::Symbol* b);
	::com::sun::tools::javac::util::Name* lambdaName();
	$String* serializedLambdaDisambiguation();
	::com::sun::tools::javac::util::Name* serializedLambdaName();
	virtual ::com::sun::tools::javac::code::Symbol* translate(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind* skind);
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree$JCIdent* lambdaIdent);
	virtual ::com::sun::tools::javac::tree::JCTree* translate(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* fieldAccess);
	virtual ::com::sun::tools::javac::tree::JCTree$JCNewClass* translate(::com::sun::tools::javac::tree::JCTree$JCNewClass* newClass);
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1 = nullptr;
	::com::sun::tools::javac::code::Symbol* self = nullptr;
	::com::sun::tools::javac::code::Symbol* assignedTo = nullptr;
	::java::util::Map* translatedSymbols = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* translatedSym = nullptr;
	::com::sun::tools::javac::util::List* syntheticParams = nullptr;
	::java::util::Set* freeVarProcessedLocalClasses = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* methodReferenceReceiver = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext_h_