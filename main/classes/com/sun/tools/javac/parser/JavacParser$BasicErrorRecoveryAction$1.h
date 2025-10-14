#ifndef _com_sun_tools_javac_parser_JavacParser$BasicErrorRecoveryAction$1_h_
#define _com_sun_tools_javac_parser_JavacParser$BasicErrorRecoveryAction$1_h_
//$ class com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1
//$ extends com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction

#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class JavacParser;
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
				namespace parser {

class JavacParser$BasicErrorRecoveryAction$1 : public ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction {
	$class(JavacParser$BasicErrorRecoveryAction$1, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction)
public:
	JavacParser$BasicErrorRecoveryAction$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::com::sun::tools::javac::tree::JCTree* doRecover(::com::sun::tools::javac::parser::JavacParser* parser) override;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavacParser$BasicErrorRecoveryAction$1_h_