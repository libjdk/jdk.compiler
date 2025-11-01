#ifndef _com_sun_tools_javac_tree_JCTree$JCCaseLabel_h_
#define _com_sun_tools_javac_tree_JCTree$JCCaseLabel_h_
//$ class com.sun.tools.javac.tree.JCTree$JCCaseLabel
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.CaseLabelTree

#include <com/sun/source/tree/CaseLabelTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCCaseLabel : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::CaseLabelTree {
	$class(JCTree$JCCaseLabel, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::CaseLabelTree)
public:
	JCTree$JCCaseLabel();
	using ::com::sun::tools::javac::tree::JCTree::accept;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	virtual bool isExpression() {return false;}
	virtual bool isNullPattern();
	virtual bool isPattern() {return false;}
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCCaseLabel_h_