#ifndef _com_sun_tools_javac_tree_JCTree$LetExpr_h_
#define _com_sun_tools_javac_tree_JCTree$LetExpr_h_
//$ class com.sun.tools.javac.tree.JCTree$LetExpr
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression

#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$LetExpr : public ::com::sun::tools::javac::tree::JCTree$JCExpression {
	$class(JCTree$LetExpr, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression)
public:
	JCTree$LetExpr();
	void init$(::com::sun::tools::javac::util::List* defs, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	::com::sun::tools::javac::util::List* defs = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
	bool needsCond = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$LetExpr_h_