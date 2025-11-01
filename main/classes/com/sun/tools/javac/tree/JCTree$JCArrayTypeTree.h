#ifndef _com_sun_tools_javac_tree_JCTree$JCArrayTypeTree_h_
#define _com_sun_tools_javac_tree_JCTree$JCArrayTypeTree_h_
//$ class com.sun.tools.javac.tree.JCTree$JCArrayTypeTree
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.ArrayTypeTree

#include <com/sun/source/tree/ArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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

class $export JCTree$JCArrayTypeTree : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::ArrayTypeTree {
	$class(JCTree$JCArrayTypeTree, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::ArrayTypeTree)
public:
	JCTree$JCArrayTypeTree();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getType() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* elemtype = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCArrayTypeTree_h_