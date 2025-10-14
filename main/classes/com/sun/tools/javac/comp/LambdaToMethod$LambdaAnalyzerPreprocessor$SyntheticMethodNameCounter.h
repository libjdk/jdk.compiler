#ifndef _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter : public ::java::lang::Object {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1);
	virtual int32_t getIndex(::java::lang::StringBuilder* buf);
	::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor* this$1 = nullptr;
	::java::util::Map* map = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_h_