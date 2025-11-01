#ifndef _com_sun_tools_javac_tree_DCTree$DCText_h_
#define _com_sun_tools_javac_tree_DCTree$DCText_h_
//$ class com.sun.tools.javac.tree.DCTree$DCText
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.TextTree

#include <com/sun/source/doctree/TextTree.h>
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

class $export DCTree$DCText : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::TextTree {
	$class(DCTree$DCText, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::TextTree)
public:
	DCTree$DCText();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* text);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual $String* getBody() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* toString() override;
	$String* text = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCText_h_