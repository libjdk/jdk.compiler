#include <com/sun/source/tree/ContinueTree.h>

#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ContinueTree_MethodInfo_[] = {
	{"getLabel", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContinueTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ContinueTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ContinueTree_MethodInfo_
};

$Object* allocate$ContinueTree($Class* clazz) {
	return $of($alloc(ContinueTree));
}

$Class* ContinueTree::load$($String* name, bool initialize) {
	$loadClass(ContinueTree, name, initialize, &_ContinueTree_ClassInfo_, allocate$ContinueTree);
	return class$;
}

$Class* ContinueTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com