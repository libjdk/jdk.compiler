#ifndef _com_sun_tools_javac_tree_JCTree$JCUnary_h_
#define _com_sun_tools_javac_tree_JCTree$JCUnary_h_
//$ class com.sun.tools.javac.tree.JCTree$JCUnary
//$ extends com.sun.tools.javac.tree.JCTree$JCOperatorExpression
//$ implements com.sun.source.tree.UnaryTree

#include <com/sun/source/tree/UnaryTree.h>
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

class $import JCTree$JCUnary : public ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression, public ::com::sun::source::tree::UnaryTree {
	$class(JCTree$JCUnary, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCOperatorExpression, ::com::sun::source::tree::UnaryTree)
public:
	JCTree$JCUnary();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$Tag* opcode, ::com::sun::tools::javac::tree::JCTree$JCExpression* arg);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* getOperand(::com::sun::tools::javac::tree::JCTree$JCOperatorExpression$OperandPos* pos) override;
	virtual void setTag(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* arg = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCUnary_h_