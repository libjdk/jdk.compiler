#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class JCTree$JCFunctionalExpression;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext : public ::java::lang::Object {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression* tree);
	virtual $String* enclosingMethodName();
	virtual bool isSerializable();
	virtual bool needsAltMetafactory();
	virtual $String* syntheticMethodNameComponent(::com::sun::tools::javac::util::Name* name);
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression* tree = nullptr;
	::com::sun::tools::javac::code::Symbol* owner = nullptr;
	int32_t depth = 0;
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext* prev = nullptr;
	::com::sun::tools::javac::util::List* bridges = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext_h_