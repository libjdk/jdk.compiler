#ifndef _com_sun_tools_javac_tree_JCTree$JCConditional_h_
#define _com_sun_tools_javac_tree_JCTree$JCConditional_h_
//$ class com.sun.tools.javac.tree.JCTree$JCConditional
//$ extends com.sun.tools.javac.tree.JCTree$JCPolyExpression
//$ implements com.sun.source.tree.ConditionalExpressionTree

#include <com/sun/source/tree/ConditionalExpressionTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>

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

class $export JCTree$JCConditional : public ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, public ::com::sun::source::tree::ConditionalExpressionTree {
	$class(JCTree$JCConditional, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, ::com::sun::source::tree::ConditionalExpressionTree)
public:
	JCTree$JCConditional();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCExpression* truepart, ::com::sun::tools::javac::tree::JCTree$JCExpression* falsepart);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() override;
	virtual ::com::sun::source::tree::ExpressionTree* getFalseExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::ExpressionTree* getTrueExpression() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* cond = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* truepart = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* falsepart = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCConditional_h_