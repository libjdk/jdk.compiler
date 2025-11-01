#ifndef _com_sun_tools_javac_tree_JCTree$JCInstanceOf_h_
#define _com_sun_tools_javac_tree_JCTree$JCInstanceOf_h_
//$ class com.sun.tools.javac.tree.JCTree$JCInstanceOf
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.InstanceOfTree

#include <com/sun/source/tree/InstanceOfTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class PatternTree;
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
					class JCTree;
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

class $import JCTree$JCInstanceOf : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::InstanceOfTree {
	$class(JCTree$JCInstanceOf, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::InstanceOfTree)
public:
	JCTree$JCInstanceOf();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::tree::JCTree* pattern);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::PatternTree* getPattern() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getType() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
	::com::sun::tools::javac::tree::JCTree* pattern = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCInstanceOf_h_