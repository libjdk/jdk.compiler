#ifndef _com_sun_tools_javac_tree_DCTree$DCDocType_h_
#define _com_sun_tools_javac_tree_DCTree$DCDocType_h_
//$ class com.sun.tools.javac.tree.DCTree$DCDocType
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.DocTypeTree

#include <com/sun/source/doctree/DocTypeTree.h>
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

class $import DCTree$DCDocType : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::DocTypeTree {
	$class(DCTree$DCDocType, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::DocTypeTree)
public:
	DCTree$DCDocType();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* text);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* getText() override;
	virtual $String* toString() override;
	$String* text = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCDocType_h_