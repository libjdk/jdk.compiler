#ifndef _com_sun_tools_javac_tree_JCTree$JCBinary_h_
#define _com_sun_tools_javac_tree_JCTree$JCBinary_h_
//$ class com.sun.tools.javac.tree.JCTree$JCBinary
//$ extends com.sun.tools.javac.tree.JCTree$JCOperatorExpression
//$ implements com.sun.source.tree.BinaryTree

#include <com/sun/source/tree/BinaryTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCOperatorExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
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
					class JCTree$JCExpression;
					class JCTree$JCOperatorExpression$OperandPos;
					class JCTree$Tag;
					class JCTree$Visitor;
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

class $export JCTree$JCBinary : public ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression, public ::com::sun::source::tree::BinaryTree {
	$class(JCTree$JCBinary, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression, ::com::sun::source::tree::BinaryTree)
public:
	JCTree$JCBinary();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs, ::com::sun::tools::javac::code::Symbol$OperatorSymbol* operator$);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getLeftOperand() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* getOperand(::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos* pos) override;
	virtual ::com::sun::source::tree::ExpressionTree* getRightOperand() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* lhs = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* rhs = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCBinary_h_