#ifndef _com_sun_tools_javac_parser_LazyDocCommentTable$Entry_h_
#define _com_sun_tools_javac_parser_LazyDocCommentTable$Entry_h_
//$ class com.sun.tools.javac.parser.LazyDocCommentTable$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class Tokens$Comment;
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
					class DCTree$DCDocComment;
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

class LazyDocCommentTable$Entry : public ::java::lang::Object {
	$class(LazyDocCommentTable$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LazyDocCommentTable$Entry();
	void init$(::com::sun::tools::javac::parser::Tokens$Comment* c);
	::com::sun::tools::javac::parser::Tokens$Comment* comment = nullptr;
	::com::sun::tools::javac::tree::DCTree$DCDocComment* tree = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_LazyDocCommentTable$Entry_h_