#ifndef _com_sun_tools_javac_tree_JCTree$JCSwitchExpression_h_
#define _com_sun_tools_javac_tree_JCTree$JCSwitchExpression_h_
//$ class com.sun.tools.javac.tree.JCTree$JCSwitchExpression
//$ extends com.sun.tools.javac.tree.JCTree$JCPolyExpression
//$ implements com.sun.source.tree.SwitchExpressionTree

#include <com/sun/source/tree/SwitchExpressionTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCExpression;
					class JCTree$Tag;
					class JCTree$Visitor;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCSwitchExpression : public ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, public ::com::sun::source::tree::SwitchExpressionTree {
	$class(JCTree$JCSwitchExpression, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, ::com::sun::source::tree::SwitchExpressionTree)
public:
	JCTree$JCSwitchExpression();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* selector, ::com::sun::tools::javac::util::List* cases);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getCases() override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* selector = nullptr;
	::com::sun::tools::javac::util::List* cases = nullptr;
	int32_t endpos = 0;
	bool hasTotalPattern = false;
	bool patternSwitch = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCSwitchExpression_h_