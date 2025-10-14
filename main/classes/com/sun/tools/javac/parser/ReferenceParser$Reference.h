#ifndef _com_sun_tools_javac_parser_ReferenceParser$Reference_h_
#define _com_sun_tools_javac_parser_ReferenceParser$Reference_h_
//$ class com.sun.tools.javac.parser.ReferenceParser$Reference
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export ReferenceParser$Reference : public ::java::lang::Object {
	$class(ReferenceParser$Reference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReferenceParser$Reference();
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName, ::com::sun::tools::javac::tree::JCTree* qualExpr, ::com::sun::tools::javac::util::Name* member, ::com::sun::tools::javac::util::List* paramTypes);
	::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName = nullptr;
	::com::sun::tools::javac::tree::JCTree* qualExpr = nullptr;
	::com::sun::tools::javac::util::Name* member = nullptr;
	::com::sun::tools::javac::util::List* paramTypes = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_ReferenceParser$Reference_h_