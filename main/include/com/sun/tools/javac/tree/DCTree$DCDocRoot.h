#ifndef _com_sun_tools_javac_tree_DCTree$DCDocRoot_h_
#define _com_sun_tools_javac_tree_DCTree$DCDocRoot_h_
//$ class com.sun.tools.javac.tree.DCTree$DCDocRoot
//$ extends com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ implements com.sun.source.doctree.DocRootTree

#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>

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

class $import DCTree$DCDocRoot : public ::com::sun::tools::javac::tree::DCTree$DCInlineTag, public ::com::sun::source::doctree::DocRootTree {
	$class(DCTree$DCDocRoot, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCInlineTag, ::com::sun::source::doctree::DocRootTree)
public:
	DCTree$DCDocRoot();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCDocRoot_h_