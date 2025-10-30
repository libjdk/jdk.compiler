#include <com/sun/tools/javac/util/List$3.h>

#include <com/sun/tools/javac/util/List.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _List$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(List$3, this$0)},
	{"elems", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<TA;>;", 0, $field(List$3, elems)},
	{}
};

$MethodInfo _List$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(static_cast<void(List$3::*)($List*)>(&List$3::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TA;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _List$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.List",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _List$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.List$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _List$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.List$3",
	"java.lang.Object",
	"java.util.Iterator",
	_List$3_FieldInfo_,
	_List$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TA;>;",
	&_List$3_EnclosingMethodInfo_,
	_List$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.List"
};

$Object* allocate$List$3($Class* clazz) {
	return $of($alloc(List$3));
}

void List$3::init$($List* this$0) {
	$set(this, this$0, this$0);
	$set(this, elems, this->this$0);
}

bool List$3::hasNext() {
	return $nc(this->elems)->tail != nullptr;
}

$Object* List$3::next() {
	if ($nc(this->elems)->tail == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, result, $nc(this->elems)->head);
	$set(this, elems, $nc(this->elems)->tail);
	return $of(result);
}

void List$3::remove() {
	$throwNew($UnsupportedOperationException);
}

List$3::List$3() {
}

$Class* List$3::load$($String* name, bool initialize) {
	$loadClass(List$3, name, initialize, &_List$3_ClassInfo_, allocate$List$3);
	return class$;
}

$Class* List$3::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com