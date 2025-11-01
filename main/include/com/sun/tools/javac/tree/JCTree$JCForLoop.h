#ifndef _com_sun_tools_javac_tree_JCTree$JCForLoop_h_
#define _com_sun_tools_javac_tree_JCTree$JCForLoop_h_
//$ class com.sun.tools.javac.tree.JCTree$JCForLoop
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.ForLoopTree

#include <com/sun/source/tree/ForLoopTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class StatementTree;
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

class $import JCTree$JCForLoop : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::ForLoopTree {
	$class(JCTree$JCForLoop, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::ForLoopTree)
public:
	JCTree$JCForLoop();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* init, ::com::sun::tools::javac::tree::JCTree$JCExpression* cond, ::com::sun::tools::javac::util::List* update, ::com::sun::tools::javac::tree::JCTree$JCStatement* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getCondition() override;
	virtual ::java::util::List* getInitializer() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::StatementTree* getStatement() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getUpdate() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* init = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* cond = nullptr;
	::com::sun::tools::javac::util::List* step = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCStatement* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCForLoop_h_