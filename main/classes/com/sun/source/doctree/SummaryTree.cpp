#include <com/sun/source/doctree/SummaryTree.h>

#include <java/util/List.h>
#include <jcpp.h>

using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _SummaryTree_MethodInfo_[] = {
	{"getSummary", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SummaryTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.SummaryTree",
	nullptr,
	"com.sun.source.doctree.InlineTagTree",
	nullptr,
	_SummaryTree_MethodInfo_
};

$Object* allocate$SummaryTree($Class* clazz) {
	return $of($alloc(SummaryTree));
}

$Class* SummaryTree::load$($String* name, bool initialize) {
	$loadClass(SummaryTree, name, initialize, &_SummaryTree_ClassInfo_, allocate$SummaryTree);
	return class$;
}

$Class* SummaryTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com