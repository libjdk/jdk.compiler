#include <com/sun/source/util/TreePath$1.h>

#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreePath.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TreePath = ::com::sun::source::util::TreePath;
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

$FieldInfo _TreePath$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/source/util/TreePath;", nullptr, $FINAL | $SYNTHETIC, $field(TreePath$1, this$0)},
	{"next", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $field(TreePath$1, next$)},
	{}
};

$MethodInfo _TreePath$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/source/util/TreePath;)V", nullptr, 0, $method(static_cast<void(TreePath$1::*)($TreePath*)>(&TreePath$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TreePath$1_EnclosingMethodInfo_ = {
	"com.sun.source.util.TreePath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _TreePath$1_InnerClassesInfo_[] = {
	{"com.sun.source.util.TreePath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TreePath$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.source.util.TreePath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_TreePath$1_FieldInfo_,
	_TreePath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/source/tree/Tree;>;",
	&_TreePath$1_EnclosingMethodInfo_,
	_TreePath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.util.TreePath"
};

$Object* allocate$TreePath$1($Class* clazz) {
	return $of($alloc(TreePath$1));
}

void TreePath$1::init$($TreePath* this$0) {
	$set(this, this$0, this$0);
	$set(this, next$, this->this$0);
}

bool TreePath$1::hasNext() {
	return this->next$ != nullptr;
}

$Object* TreePath$1::next() {
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Tree, t, $nc(this->next$)->leaf);
	$set(this, next$, $nc(this->next$)->parent);
	return $of(t);
}

void TreePath$1::remove() {
	$throwNew($UnsupportedOperationException);
}

TreePath$1::TreePath$1() {
}

$Class* TreePath$1::load$($String* name, bool initialize) {
	$loadClass(TreePath$1, name, initialize, &_TreePath$1_ClassInfo_, allocate$TreePath$1);
	return class$;
}

$Class* TreePath$1::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com