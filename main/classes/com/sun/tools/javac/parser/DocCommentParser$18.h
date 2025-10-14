#ifndef _com_sun_tools_javac_parser_DocCommentParser$18_h_
#define _com_sun_tools_javac_parser_DocCommentParser$18_h_
//$ class com.sun.tools.javac.parser.DocCommentParser$18
//$ extends com.sun.tools.javac.parser.DocCommentParser$TagParser

#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class DocCommentParser;
					class DocCommentParser$TagParser$Kind;
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
					class DCTree;
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

class DocCommentParser$18 : public ::com::sun::tools::javac::parser::DocCommentParser$TagParser {
	$class(DocCommentParser$18, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::DocCommentParser$TagParser)
public:
	DocCommentParser$18();
	void init$(::com::sun::tools::javac::parser::DocCommentParser* this$0, ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* k, ::com::sun::source::doctree::DocTree$Kind* tk);
	using ::com::sun::tools::javac::parser::DocCommentParser$TagParser::parse;
	virtual ::com::sun::tools::javac::tree::DCTree* parse(int32_t pos) override;
	::com::sun::tools::javac::parser::DocCommentParser* this$0 = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_DocCommentParser$18_h_