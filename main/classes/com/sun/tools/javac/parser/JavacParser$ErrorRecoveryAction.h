#ifndef _com_sun_tools_javac_parser_JavacParser$ErrorRecoveryAction_h_
#define _com_sun_tools_javac_parser_JavacParser$ErrorRecoveryAction_h_
//$ interface com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export JavacParser$ErrorRecoveryAction : public ::java::lang::Object {
	$interface(JavacParser$ErrorRecoveryAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::tree::JCTree* doRecover(::com::sun::tools::javac::parser::JavacParser* parser) {return nullptr;}
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavacParser$ErrorRecoveryAction_h_