#ifndef _com_sun_tools_javac_tree_DCTree$DCInlineTag_h_
#define _com_sun_tools_javac_tree_DCTree$DCInlineTag_h_
//$ class com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ extends com.sun.tools.javac.tree.DCTree$DCEndPosTree
//$ implements com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/InlineTagTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DCTree$DCInlineTag : public ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, public ::com::sun::source::doctree::InlineTagTree {
	$class(DCTree$DCInlineTag, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, ::com::sun::source::doctree::InlineTagTree)
public:
	DCTree$DCInlineTag();
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* visitor, Object$* data) override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* getTagName() override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCInlineTag_h_