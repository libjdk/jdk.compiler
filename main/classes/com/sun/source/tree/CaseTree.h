#ifndef _com_sun_source_tree_CaseTree_h_
#define _com_sun_source_tree_CaseTree_h_
//$ interface com.sun.source.tree.CaseTree
//$ extends com.sun.source.tree.Tree

#include <com/sun/source/tree/Tree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CaseTree$CaseKind;
				class ExpressionTree;
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
		namespace source {
			namespace tree {

class $export CaseTree : public ::com::sun::source::tree::Tree {
	$interface(CaseTree, $NO_CLASS_INIT, ::com::sun::source::tree::Tree)
public:
	virtual ::com::sun::source::tree::Tree* getBody();
	virtual ::com::sun::source::tree::CaseTree$CaseKind* getCaseKind();
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() {return nullptr;}
	virtual ::java::util::List* getExpressions() {return nullptr;}
	virtual ::java::util::List* getLabels() {return nullptr;}
	virtual ::java::util::List* getStatements() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_CaseTree_h_