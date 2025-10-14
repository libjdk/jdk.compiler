#ifndef _com_sun_tools_javac_parser_JavacParser$LambdaClassifier_h_
#define _com_sun_tools_javac_parser_JavacParser$LambdaClassifier_h_
//$ class com.sun.tools.javac.parser.JavacParser$LambdaClassifier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class JavacParser;
					class JavacParser$LambdaParameterKind;
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
					class JCTree$JCVariableDecl;
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
					class JCDiagnostic$Fragment;
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
				namespace parser {

class $import JavacParser$LambdaClassifier : public ::java::lang::Object {
	$class(JavacParser$LambdaClassifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavacParser$LambdaClassifier();
	void init$(::com::sun::tools::javac::parser::JavacParser* this$0);
	virtual void addParameter(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* param);
	void reduce(::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* newKind);
	virtual ::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* result();
	::com::sun::tools::javac::parser::JavacParser* this$0 = nullptr;
	::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind* kind = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Fragment* diagFragment = nullptr;
	::com::sun::tools::javac::util::List* params = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavacParser$LambdaClassifier_h_