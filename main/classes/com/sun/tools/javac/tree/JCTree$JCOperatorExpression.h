#ifndef _com_sun_tools_javac_tree_JCTree$JCOperatorExpression_h_
#define _com_sun_tools_javac_tree_JCTree$JCOperatorExpression_h_
//$ class com.sun.tools.javac.tree.JCTree$JCOperatorExpression
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression

#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$OperatorSymbol;
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
					class JCTree$JCOperatorExpression$OperandPos;
					class JCTree$Tag;
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

class $export JCTree$JCOperatorExpression : public ::com::sun::tools::javac::tree::JCTree$JCExpression {
	$class(JCTree$JCOperatorExpression, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression)
public:
	JCTree$JCOperatorExpression();
	void init$();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* getOperand(::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos* pos) {return nullptr;}
	virtual ::com::sun::tools::javac::code::Symbol$OperatorSymbol* getOperator();
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	::com::sun::tools::javac::tree::JCTree$Tag* opcode = nullptr;
	::com::sun::tools::javac::code::Symbol$OperatorSymbol* operator$ = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCOperatorExpression_h_