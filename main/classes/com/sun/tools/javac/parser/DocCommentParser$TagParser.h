#ifndef _com_sun_tools_javac_parser_DocCommentParser$TagParser_h_
#define _com_sun_tools_javac_parser_DocCommentParser$TagParser_h_
//$ class com.sun.tools.javac.parser.DocCommentParser$TagParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class DocCommentParser$TagParser : public ::java::lang::Object {
	$class(DocCommentParser$TagParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DocCommentParser$TagParser();
	void init$(::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* k, ::com::sun::source::doctree::DocTree$Kind* tk);
	void init$(::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* k, ::com::sun::source::doctree::DocTree$Kind* tk, bool retainWhiteSpace);
	virtual bool allowsBlock();
	virtual bool allowsInline();
	virtual ::com::sun::source::doctree::DocTree$Kind* getTreeKind();
	virtual ::com::sun::tools::javac::tree::DCTree* parse(int32_t pos, ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* kind);
	virtual ::com::sun::tools::javac::tree::DCTree* parse(int32_t pos);
	::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind* kind = nullptr;
	::com::sun::source::doctree::DocTree$Kind* treeKind = nullptr;
	bool retainWhiteSpace = false;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_DocCommentParser$TagParser_h_