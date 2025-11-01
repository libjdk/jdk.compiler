#ifndef _com_sun_tools_javac_tree_JCTree$JCArrayAccess_h_
#define _com_sun_tools_javac_tree_JCTree$JCArrayAccess_h_
//$ class com.sun.tools.javac.tree.JCTree$JCArrayAccess
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.ArrayAccessTree

#include <com/sun/source/tree/ArrayAccessTree.h>
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

class $export JCTree$JCArrayAccess : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::ArrayAccessTree {
	$class(JCTree$JCArrayAccess, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::ArrayAccessTree)
public:
	JCTree$JCArrayAccess();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* indexed, ::com::sun::tools::javac::tree::JCTree$JCExpression* index);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::ExpressionTree* getIndex() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* indexed = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* index = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCArrayAccess_h_