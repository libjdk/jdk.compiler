#ifndef _com_sun_tools_javac_tree_DCTree$DCBlockTag_h_
#define _com_sun_tools_javac_tree_DCTree$DCBlockTag_h_
//$ class com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.BlockTagTree

#include <com/sun/source/doctree/BlockTagTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export DCTree$DCBlockTag : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::BlockTagTree {
	$class(DCTree$DCBlockTag, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::BlockTagTree)
public:
	DCTree$DCBlockTag();
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

#endif // _com_sun_tools_javac_tree_DCTree$DCBlockTag_h_