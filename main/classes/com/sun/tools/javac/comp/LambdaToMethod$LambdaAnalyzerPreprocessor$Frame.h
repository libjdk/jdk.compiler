#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$Frame
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

class LambdaToMethod$LambdaAnalyzerPreprocessor$Frame : public ::java::lang::Object {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$Frame();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, ::com::sun::tools::javac::tree::JCTree* tree);
	virtual void addLocal(::com::sun::tools::javac::code::Symbol* sym);
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1 = nullptr;
	::com::sun::tools::javac::tree::JCTree* tree = nullptr;
	::com::sun::tools::javac::util::List* locals = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$Frame_h_