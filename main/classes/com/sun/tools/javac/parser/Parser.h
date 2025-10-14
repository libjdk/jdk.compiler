#ifndef _com_sun_tools_javac_parser_Parser_h_
#define _com_sun_tools_javac_parser_Parser_h_
//$ interface com.sun.tools.javac.parser.Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCCompilationUnit;
					class JCTree$JCExpression;
					class JCTree$JCStatement;
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

class $export Parser : public ::java::lang::Object {
	$interface(Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* parseCompilationUnit() {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parseExpression() {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* parseStatement() {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* parseType() {return nullptr;}
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_Parser_h_