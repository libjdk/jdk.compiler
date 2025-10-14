#ifndef _com_sun_tools_javac_parser_ReferenceParser_h_
#define _com_sun_tools_javac_parser_ReferenceParser_h_
//$ class com.sun.tools.javac.parser.ReferenceParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ParserFactory;
					class ReferenceParser$Reference;
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
					class JCTree$JCExpression;
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
					class List;
					class Name;
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

class $import ReferenceParser : public ::java::lang::Object {
	$class(ReferenceParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReferenceParser();
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac);
	virtual ::com::sun::tools::javac::parser::ReferenceParser$Reference* parse($String* sig);
	::com::sun::tools::javac::util::Name* parseMember($String* s);
	::com::sun::tools::javac::tree::JCTree$JCExpression* parseModule($String* s);
	::com::sun::tools::javac::util::List* parseParams($String* s);
	::com::sun::tools::javac::tree::JCTree* parseType($String* s);
	::com::sun::tools::javac::parser::ParserFactory* fac = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_ReferenceParser_h_