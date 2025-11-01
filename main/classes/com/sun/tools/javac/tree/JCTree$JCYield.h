#ifndef _com_sun_tools_javac_tree_JCTree$JCYield_h_
#define _com_sun_tools_javac_tree_JCTree$JCYield_h_
//$ class com.sun.tools.javac.tree.JCTree$JCYield
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.YieldTree

#include <com/sun/source/tree/YieldTree.h>
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
					class JCTree;
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

class $export JCTree$JCYield : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::YieldTree {
	$class(JCTree$JCYield, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::YieldTree)
public:
	JCTree$JCYield();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* value, ::com::sun::tools::javac::tree::JCTree* target);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::ExpressionTree* getValue() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* value = nullptr;
	::com::sun::tools::javac::tree::JCTree* target = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCYield_h_