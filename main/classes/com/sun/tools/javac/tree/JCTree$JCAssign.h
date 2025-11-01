#ifndef _com_sun_tools_javac_tree_JCTree$JCAssign_h_
#define _com_sun_tools_javac_tree_JCTree$JCAssign_h_
//$ class com.sun.tools.javac.tree.JCTree$JCAssign
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.AssignmentTree

#include <com/sun/source/tree/AssignmentTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

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

class $export JCTree$JCAssign : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::AssignmentTree {
	$class(JCTree$JCAssign, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::AssignmentTree)
public:
	JCTree$JCAssign();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::ExpressionTree* getVariable() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* lhs = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* rhs = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCAssign_h_