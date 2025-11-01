#ifndef _com_sun_tools_javac_tree_JCTree$JCCase_h_
#define _com_sun_tools_javac_tree_JCTree$JCCase_h_
//$ class com.sun.tools.javac.tree.JCTree$JCCase
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.CaseTree

#include <com/sun/source/tree/CaseTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

#pragma push_macro("RULE")
#undef RULE
#pragma push_macro("STATEMENT")
#undef STATEMENT

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CaseTree$CaseKind;
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
					class JCTree;
					class JCTree$JCCaseLabel;
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

class $export JCTree$JCCase : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::CaseTree {
	$class(JCTree$JCCase, 0, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::CaseTree)
public:
	JCTree$JCCase();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::source::tree::CaseTree$CaseKind* caseKind, ::com::sun::tools::javac::util::List* labels, ::com::sun::tools::javac::util::List* stats, ::com::sun::tools::javac::tree::JCTree* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::tools::javac::tree::JCTree* getBody() override;
	virtual ::com::sun::source::tree::CaseTree$CaseKind* getCaseKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::java::util::List* getExpressions() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::java::util::List* getLabels() override;
	virtual ::java::util::List* getStatements() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	static bool lambda$getExpressions$0(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* p);
	static ::com::sun::tools::javac::tree::JCTree$JCExpression* lambda$getExpressions$1(::com::sun::tools::javac::tree::JCTree$JCCaseLabel* p);
	virtual $String* toString() override;
	static ::com::sun::source::tree::CaseTree$CaseKind* STATEMENT;
	static ::com::sun::source::tree::CaseTree$CaseKind* RULE;
	::com::sun::source::tree::CaseTree$CaseKind* caseKind = nullptr;
	::com::sun::tools::javac::util::List* labels = nullptr;
	::com::sun::tools::javac::util::List* stats = nullptr;
	::com::sun::tools::javac::tree::JCTree* body = nullptr;
	bool completesNormally = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("RULE")
#pragma pop_macro("STATEMENT")

#endif // _com_sun_tools_javac_tree_JCTree$JCCase_h_