#include <com/sun/source/doctree/ReturnTree.h>

#include <com/sun/source/doctree/BlockTagTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _ReturnTree_MethodInfo_[] = {
	{"*accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"*getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isInline", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReturnTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.ReturnTree",
	nullptr,
	"com.sun.source.doctree.BlockTagTree,com.sun.source.doctree.InlineTagTree",
	nullptr,
	_ReturnTree_MethodInfo_
};

$Object* allocate$ReturnTree($Class* clazz) {
	return $of($alloc(ReturnTree));
}

int32_t ReturnTree::hashCode() {
	 return this->$BlockTagTree::hashCode();
}

bool ReturnTree::equals(Object$* arg0) {
	 return this->$BlockTagTree::equals(arg0);
}

$Object* ReturnTree::clone() {
	 return this->$BlockTagTree::clone();
}

$String* ReturnTree::toString() {
	 return this->$BlockTagTree::toString();
}

void ReturnTree::finalize() {
	this->$BlockTagTree::finalize();
}

bool ReturnTree::isInline() {
	return false;
}

$Class* ReturnTree::load$($String* name, bool initialize) {
	$loadClass(ReturnTree, name, initialize, &_ReturnTree_ClassInfo_, allocate$ReturnTree);
	return class$;
}

$Class* ReturnTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com