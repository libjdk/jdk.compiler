#ifndef _com_sun_tools_javac_tree_JCTree$JCPolyExpression_h_
#define _com_sun_tools_javac_tree_JCTree$JCPolyExpression_h_
//$ class com.sun.tools.javac.tree.JCTree$JCPolyExpression
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression

#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCPolyExpression$PolyKind;
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

class $import JCTree$JCPolyExpression : public ::com::sun::tools::javac::tree::JCTree$JCExpression {
	$class(JCTree$JCPolyExpression, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression)
public:
	JCTree$JCPolyExpression();
	void init$();
	virtual bool isPoly() override;
	virtual bool isStandalone() override;
	::com::sun::tools::javac::tree::JCTree$JCPolyExpression$PolyKind* polyKind = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCPolyExpression_h_