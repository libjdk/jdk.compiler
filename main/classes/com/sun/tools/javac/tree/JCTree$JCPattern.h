#ifndef _com_sun_tools_javac_tree_JCTree$JCPattern_h_
#define _com_sun_tools_javac_tree_JCTree$JCPattern_h_
//$ class com.sun.tools.javac.tree.JCTree$JCPattern
//$ extends com.sun.tools.javac.tree.JCTree$JCCaseLabel
//$ implements com.sun.source.tree.PatternTree

#include <com/sun/source/tree/PatternTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCPattern : public ::com::sun::tools::javac::tree::JCTree$JCCaseLabel, public ::com::sun::source::tree::PatternTree {
	$class(JCTree$JCPattern, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCCaseLabel, ::com::sun::source::tree::PatternTree)
public:
	JCTree$JCPattern();
	using ::com::sun::tools::javac::tree::JCTree$JCCaseLabel::accept;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	virtual bool isExpression() override;
	virtual bool isPattern() override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCPattern_h_