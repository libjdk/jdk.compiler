#ifndef _com_sun_tools_javac_parser_JavacParser$SimpleEndPosTable_h_
#define _com_sun_tools_javac_parser_JavacParser$SimpleEndPosTable_h_
//$ class com.sun.tools.javac.parser.JavacParser$SimpleEndPosTable
//$ extends com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable

#include <com/sun/tools/javac/parser/JavacParser$AbstractEndPosTable.h>

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
				namespace util {
					class IntHashTable;
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

class $export JavacParser$SimpleEndPosTable : public ::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable {
	$class(JavacParser$SimpleEndPosTable, $NO_CLASS_INIT, ::com::sun::tools::javac::parser::JavacParser$AbstractEndPosTable)
public:
	JavacParser$SimpleEndPosTable();
	void init$(::com::sun::tools::javac::parser::JavacParser* parser);
	virtual int32_t getEndPos(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual int32_t replaceTree(::com::sun::tools::javac::tree::JCTree* oldTree, ::com::sun::tools::javac::tree::JCTree* newTree) override;
	virtual void storeEnd(::com::sun::tools::javac::tree::JCTree* tree, int32_t endpos) override;
	virtual ::com::sun::tools::javac::tree::JCTree* to(::com::sun::tools::javac::tree::JCTree* t) override;
	virtual ::com::sun::tools::javac::tree::JCTree* toP(::com::sun::tools::javac::tree::JCTree* t) override;
	::com::sun::tools::javac::util::IntHashTable* endPosMap = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavacParser$SimpleEndPosTable_h_