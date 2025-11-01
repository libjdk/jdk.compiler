#ifndef _com_sun_tools_javac_tree_JCTree$JCExpression_h_
#define _com_sun_tools_javac_tree_JCTree$JCExpression_h_
//$ class com.sun.tools.javac.tree.JCTree$JCExpression
//$ extends com.sun.tools.javac.tree.JCTree$JCCaseLabel
//$ implements com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $import JCTree$JCExpression : public ::com::sun::tools::javac::tree::JCTree$JCCaseLabel, public ::com::sun::source::tree::ExpressionTree {
	$class(JCTree$JCExpression, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCCaseLabel, ::com::sun::source::tree::ExpressionTree)
public:
	JCTree$JCExpression();
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
	virtual bool isPoly();
	virtual bool isStandalone();
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* setPos(int32_t pos) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* setType(::com::sun::tools::javac::code::Type* type) override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCExpression_h_