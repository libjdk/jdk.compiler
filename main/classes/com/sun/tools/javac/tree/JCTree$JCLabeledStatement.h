#ifndef _com_sun_tools_javac_tree_JCTree$JCLabeledStatement_h_
#define _com_sun_tools_javac_tree_JCTree$JCLabeledStatement_h_
//$ class com.sun.tools.javac.tree.JCTree$JCLabeledStatement
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.LabeledStatementTree

#include <com/sun/source/tree/LabeledStatementTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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
					class Name;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCLabeledStatement : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::LabeledStatementTree {
	$class(JCTree$JCLabeledStatement, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::LabeledStatementTree)
public:
	JCTree$JCLabeledStatement();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* label, ::com::sun::tools::javac::tree::JCTree$JCStatement* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::javax::lang::model::element::Name* getLabel() override;
	virtual ::com::sun::source::tree::StatementTree* getStatement() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::Name* label = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCStatement* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCLabeledStatement_h_