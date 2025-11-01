#ifndef _com_sun_tools_javac_tree_JCTree$JCAssert_h_
#define _com_sun_tools_javac_tree_JCTree$JCAssert_h_
//$ class com.sun.tools.javac.tree.JCTree$JCAssert
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.AssertTree

#include <com/sun/source/tree/AssertTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

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

class $import JCTree$JCAssert : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::AssertTree {
	$class(JCTree$JCAssert, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::AssertTree)
public:
	JCTree$JCAssert();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::tree::JCTree$JCExpression* detail);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() override;
	virtual ::com::sun::source::tree::ExpressionTree* getDetail() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* cond = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* detail = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCAssert_h_