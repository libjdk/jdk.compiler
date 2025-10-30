#include <com/sun/source/util/DocTreePath$1.h>

#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreePath.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _DocTreePath$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/source/util/DocTreePath;", nullptr, $FINAL | $SYNTHETIC, $field(DocTreePath$1, this$0)},
	{"next", "Lcom/sun/source/util/DocTreePath;", nullptr, $PRIVATE, $field(DocTreePath$1, next$)},
	{}
};

$MethodInfo _DocTreePath$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/DocTreePath;)V", nullptr, 0, $method(static_cast<void(DocTreePath$1::*)($DocTreePath*)>(&DocTreePath$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/source/doctree/DocTree;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DocTreePath$1_EnclosingMethodInfo_ = {
	"com.sun.source.util.DocTreePath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _DocTreePath$1_InnerClassesInfo_[] = {
	{"com.sun.source.util.DocTreePath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DocTreePath$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.source.util.DocTreePath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_DocTreePath$1_FieldInfo_,
	_DocTreePath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/source/doctree/DocTree;>;",
	&_DocTreePath$1_EnclosingMethodInfo_,
	_DocTreePath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.DocTreePath"
};

$Object* allocate$DocTreePath$1($Class* clazz) {
	return $of($alloc(DocTreePath$1));
}

void DocTreePath$1::init$($DocTreePath* this$0) {
	$set(this, this$0, this$0);
	$set(this, next$, this->this$0);
}

bool DocTreePath$1::hasNext() {
	return this->next$ != nullptr;
}

$Object* DocTreePath$1::next() {
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($DocTree, t, $nc(this->next$)->leaf);
	$set(this, next$, $nc(this->next$)->parent);
	return $of(t);
}

void DocTreePath$1::remove() {
	$throwNew($UnsupportedOperationException);
}

DocTreePath$1::DocTreePath$1() {
}

$Class* DocTreePath$1::load$($String* name, bool initialize) {
	$loadClass(DocTreePath$1, name, initialize, &_DocTreePath$1_ClassInfo_, allocate$DocTreePath$1);
	return class$;
}

$Class* DocTreePath$1::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com