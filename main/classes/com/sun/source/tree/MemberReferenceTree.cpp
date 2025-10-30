#include <com/sun/source/tree/MemberReferenceTree.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _MemberReferenceTree_MethodInfo_[] = {
	{"getMode", "()Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQualifierExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _MemberReferenceTree_InnerClassesInfo_[] = {
	{"com.sun.source.tree.MemberReferenceTree$ReferenceMode", "com.sun.source.tree.MemberReferenceTree", "ReferenceMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MemberReferenceTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.MemberReferenceTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_MemberReferenceTree_MethodInfo_,
	nullptr,
	nullptr,
	_MemberReferenceTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.tree.MemberReferenceTree$ReferenceMode"
};

$Object* allocate$MemberReferenceTree($Class* clazz) {
	return $of($alloc(MemberReferenceTree));
}

$Class* MemberReferenceTree::load$($String* name, bool initialize) {
	$loadClass(MemberReferenceTree, name, initialize, &_MemberReferenceTree_ClassInfo_, allocate$MemberReferenceTree);
	return class$;
}

$Class* MemberReferenceTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com