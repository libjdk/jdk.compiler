#include <com/sun/tools/javac/util/ListBuffer$1.h>

#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ListBuffer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ListBuffer$1, this$0)},
	{"elems", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<TA;>;", 0, $field(ListBuffer$1, elems)},
	{}
};

$MethodInfo _ListBuffer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(static_cast<void(ListBuffer$1::*)($ListBuffer*)>(&ListBuffer$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ListBuffer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.ListBuffer",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ListBuffer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.ListBuffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ListBuffer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.ListBuffer$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ListBuffer$1_FieldInfo_,
	_ListBuffer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TA;>;",
	&_ListBuffer$1_EnclosingMethodInfo_,
	_ListBuffer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.ListBuffer"
};

$Object* allocate$ListBuffer$1($Class* clazz) {
	return $of($alloc(ListBuffer$1));
}

void ListBuffer$1::init$($ListBuffer* this$0) {
	$set(this, this$0, this$0);
	$set(this, elems, this->this$0->elems);
}

bool ListBuffer$1::hasNext() {
	return !$nc(this->elems)->isEmpty();
}

$Object* ListBuffer$1::next() {
	if ($nc(this->elems)->isEmpty()) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, elem, $nc(this->elems)->head);
	$set(this, elems, $nc(this->elems)->tail);
	return $of(elem);
}

void ListBuffer$1::remove() {
	$throwNew($UnsupportedOperationException);
}

ListBuffer$1::ListBuffer$1() {
}

$Class* ListBuffer$1::load$($String* name, bool initialize) {
	$loadClass(ListBuffer$1, name, initialize, &_ListBuffer$1_ClassInfo_, allocate$ListBuffer$1);
	return class$;
}

$Class* ListBuffer$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com