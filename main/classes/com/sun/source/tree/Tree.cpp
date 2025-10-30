#include <com/sun/source/tree/Tree.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <jcpp.h>

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreeVisitor = ::com::sun::source::tree::TreeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _Tree_MethodInfo_[] = {
	{"accept", "(Lcom/sun/source/tree/TreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/tree/TreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC | $ABSTRACT},
	{"getKind", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Tree_InnerClassesInfo_[] = {
	{"com.sun.source.tree.Tree$Kind", "com.sun.source.tree.Tree", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Tree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.Tree",
	nullptr,
	nullptr,
	nullptr,
	_Tree_MethodInfo_,
	nullptr,
	nullptr,
	_Tree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.tree.Tree$Kind"
};

$Object* allocate$Tree($Class* clazz) {
	return $of($alloc(Tree));
}

$Class* Tree::load$($String* name, bool initialize) {
	$loadClass(Tree, name, initialize, &_Tree_ClassInfo_, allocate$Tree);
	return class$;
}

$Class* Tree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com