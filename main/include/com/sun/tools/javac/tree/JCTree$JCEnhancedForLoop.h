#ifndef _com_sun_tools_javac_tree_JCTree$JCEnhancedForLoop_h_
#define _com_sun_tools_javac_tree_JCTree$JCEnhancedForLoop_h_
//$ class com.sun.tools.javac.tree.JCTree$JCEnhancedForLoop
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.EnhancedForLoopTree

#include <com/sun/source/tree/EnhancedForLoopTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class StatementTree;
				class Tree$Kind;
				class TreeVisitor;
				class VariableTree;
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
					class JCTree$JCVariableDecl;
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

class $import JCTree$JCEnhancedForLoop : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::EnhancedForLoopTree {
	$class(JCTree$JCEnhancedForLoop, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::EnhancedForLoopTree)
public:
	JCTree$JCEnhancedForLoop();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree$JCStatement* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::StatementTree* getStatement() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::VariableTree* getVariable() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCStatement* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCEnhancedForLoop_h_