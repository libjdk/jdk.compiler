#include <com/sun/source/tree/CaseTree.h>

#include <com/sun/source/tree/CaseTree$CaseKind.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef STATEMENT

using $CaseTree$CaseKind = ::com::sun::source::tree::CaseTree$CaseKind;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$CompoundAttribute _CaseTree_MethodAnnotations_getExpression2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CaseTree_MethodAnnotations_getLabels4[] = {
	{}
};

$MethodInfo _CaseTree_MethodInfo_[] = {
	{"getBody", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC},
	{"getCaseKind", "()Lcom/sun/source/tree/CaseTree$CaseKind;", nullptr, $PUBLIC},
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _CaseTree_MethodAnnotations_getExpression2},
	{"getExpressions", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{"getLabels", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CaseLabelTree;>;", $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _CaseTree_MethodAnnotations_getLabels4},
	{"getStatements", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/StatementTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CaseTree_InnerClassesInfo_[] = {
	{"com.sun.source.tree.CaseTree$CaseKind", "com.sun.source.tree.CaseTree", "CaseKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CaseTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.CaseTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_CaseTree_MethodInfo_,
	nullptr,
	nullptr,
	_CaseTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.tree.CaseTree$CaseKind"
};

$Object* allocate$CaseTree($Class* clazz) {
	return $of($alloc(CaseTree));
}

$Tree* CaseTree::getBody() {
	return nullptr;
}

$CaseTree$CaseKind* CaseTree::getCaseKind() {
	$init($CaseTree$CaseKind);
	return $CaseTree$CaseKind::STATEMENT;
}

$Class* CaseTree::load$($String* name, bool initialize) {
	$loadClass(CaseTree, name, initialize, &_CaseTree_ClassInfo_, allocate$CaseTree);
	return class$;
}

$Class* CaseTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com