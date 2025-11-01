#ifndef _com_sun_tools_javac_tree_DCTree$DCComment_h_
#define _com_sun_tools_javac_tree_DCTree$DCComment_h_
//$ class com.sun.tools.javac.tree.DCTree$DCComment
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.CommentTree

#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DCTree$DCComment : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::CommentTree {
	$class(DCTree$DCComment, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::CommentTree)
public:
	DCTree$DCComment();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* body);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual $String* getBody() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* toString() override;
	$String* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCComment_h_