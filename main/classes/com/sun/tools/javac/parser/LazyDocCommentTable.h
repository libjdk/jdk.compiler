#ifndef _com_sun_tools_javac_parser_LazyDocCommentTable_h_
#define _com_sun_tools_javac_parser_LazyDocCommentTable_h_
//$ class com.sun.tools.javac.parser.LazyDocCommentTable
//$ extends com.sun.tools.javac.tree.DocCommentTable

#include <com/sun/tools/javac/tree/DocCommentTable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ParserFactory;
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
					class DiagnosticSource;
				}
			}
		}
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
				namespace parser {

class $export LazyDocCommentTable : public ::com::sun::tools::javac::tree::DocCommentTable {
	$class(LazyDocCommentTable, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DocCommentTable)
public:
	LazyDocCommentTable();
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac);
	virtual ::com::sun::tools::javac::parser::Tokens$Comment* getComment(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual $String* getCommentText(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual ::com::sun::tools::javac::tree::DCTree$DCDocComment* getCommentTree(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual bool hasComment(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void putComment(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::parser::Tokens$Comment* c) override;
	::com::sun::tools::javac::parser::ParserFactory* fac = nullptr;
	::com::sun::tools::javac::util::DiagnosticSource* diagSource = nullptr;
	::java::util::Map* table = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_LazyDocCommentTable_h_