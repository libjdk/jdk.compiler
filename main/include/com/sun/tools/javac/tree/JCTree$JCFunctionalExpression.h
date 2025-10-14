#ifndef _com_sun_tools_javac_tree_JCTree$JCFunctionalExpression_h_
#define _com_sun_tools_javac_tree_JCTree$JCFunctionalExpression_h_
//$ class com.sun.tools.javac.tree.JCTree$JCFunctionalExpression
//$ extends com.sun.tools.javac.tree.JCTree$JCPolyExpression

#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Types;
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

class $import JCTree$JCFunctionalExpression : public ::com::sun::tools::javac::tree::JCTree$JCPolyExpression {
	$class(JCTree$JCFunctionalExpression, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPolyExpression)
public:
	JCTree$JCFunctionalExpression();
	void init$();
	virtual ::com::sun::tools::javac::code::Type* getDescriptorType(::com::sun::tools::javac::code::Types* types);
	::com::sun::tools::javac::code::Type* target = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCFunctionalExpression_h_