#include <com/sun/source/tree/BreakTree.h>

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

$MethodInfo _BreakTree_MethodInfo_[] = {
	{"getLabel", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BreakTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.BreakTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_BreakTree_MethodInfo_
};

$Object* allocate$BreakTree($Class* clazz) {
	return $of($alloc(BreakTree));
}

$Class* BreakTree::load$($String* name, bool initialize) {
	$loadClass(BreakTree, name, initialize, &_BreakTree_ClassInfo_, allocate$BreakTree);
	return class$;
}

$Class* BreakTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com