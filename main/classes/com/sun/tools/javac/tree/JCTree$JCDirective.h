#ifndef _com_sun_tools_javac_tree_JCTree$JCDirective_h_
#define _com_sun_tools_javac_tree_JCTree$JCDirective_h_
//$ class com.sun.tools.javac.tree.JCTree$JCDirective
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.DirectiveTree

#include <com/sun/source/tree/DirectiveTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCDirective : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::DirectiveTree {
	$class(JCTree$JCDirective, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::DirectiveTree)
public:
	JCTree$JCDirective();
	using ::com::sun::tools::javac::tree::JCTree::accept;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCDirective_h_