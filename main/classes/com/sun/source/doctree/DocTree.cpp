#include <com/sun/source/doctree/DocTree.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _DocTree_MethodInfo_[] = {
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC | $ABSTRACT},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DocTree_InnerClassesInfo_[] = {
	{"com.sun.source.doctree.DocTree$Kind", "com.sun.source.doctree.DocTree", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DocTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.DocTree",
	nullptr,
	nullptr,
	nullptr,
	_DocTree_MethodInfo_,
	nullptr,
	nullptr,
	_DocTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.source.doctree.DocTree$Kind"
};

$Object* allocate$DocTree($Class* clazz) {
	return $of($alloc(DocTree));
}

$Class* DocTree::load$($String* name, bool initialize) {
	$loadClass(DocTree, name, initialize, &_DocTree_ClassInfo_, allocate$DocTree);
	return class$;
}

$Class* DocTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com