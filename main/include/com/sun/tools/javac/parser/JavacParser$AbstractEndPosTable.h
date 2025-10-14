#ifndef _com_sun_tools_javac_parser_JavacParser$AbstractEndPosTable_h_
#define _com_sun_tools_javac_parser_JavacParser$AbstractEndPosTable_h_
//$ class com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable
//$ extends com.sun.tools.javac.tree.EndPosTable

#include <com/sun/tools/javac/tree/EndPosTable.h>

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

class $import JavacParser$AbstractEndPosTable : public ::com::sun::tools::javac::tree::EndPosTable {
	$class(JavacParser$AbstractEndPosTable, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::EndPosTable)
public:
	JavacParser$AbstractEndPosTable();
	void init$(::com::sun::tools::javac::parser::JavacParser* parser);
	virtual void setErrorEndPos(int32_t errPos);
	virtual void setParser(::com::sun::tools::javac::parser::JavacParser* parser);
	virtual ::com::sun::tools::javac::tree::JCTree* to(::com::sun::tools::javac::tree::JCTree* t) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree* toP(::com::sun::tools::javac::tree::JCTree* t) {return nullptr;}
	::com::sun::tools::javac::parser::JavacParser* parser = nullptr;
	int32_t errorEndPos = 0;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_JavacParser$AbstractEndPosTable_h_