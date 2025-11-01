#ifndef _com_sun_tools_javac_tree_JCTree$JCCatch_h_
#define _com_sun_tools_javac_tree_JCTree$JCCatch_h_
//$ class com.sun.tools.javac.tree.JCTree$JCCatch
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.CatchTree

#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
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
					class JCTree$JCBlock;
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

class $export JCTree$JCCatch : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::CatchTree {
	$class(JCTree$JCCatch, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::CatchTree)
public:
	JCTree$JCCatch();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* param, ::com::sun::tools::javac::tree::JCTree$JCBlock* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::BlockTree* getBlock() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::VariableTree* getParameter() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* param = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCBlock* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCCatch_h_