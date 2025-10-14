#ifndef _com_sun_source_tree_MemberReferenceTree_h_
#define _com_sun_source_tree_MemberReferenceTree_h_
//$ interface com.sun.source.tree.MemberReferenceTree
//$ extends com.sun.source.tree.ExpressionTree

#include <com/sun/source/tree/ExpressionTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class MemberReferenceTree$ReferenceMode;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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
		namespace source {
			namespace tree {

class $export MemberReferenceTree : public ::com::sun::source::tree::ExpressionTree {
	$interface(MemberReferenceTree, $NO_CLASS_INIT, ::com::sun::source::tree::ExpressionTree)
public:
	virtual ::com::sun::source::tree::MemberReferenceTree$ReferenceMode* getMode() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
	virtual ::com::sun::source::tree::ExpressionTree* getQualifierExpression() {return nullptr;}
	virtual ::java::util::List* getTypeArguments() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_MemberReferenceTree_h_