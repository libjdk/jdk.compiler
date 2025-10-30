#include <com/sun/tools/javac/util/List$2.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
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

$MethodInfo _List$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(List$2::*)()>(&List$2::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _List$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.List",
	nullptr,
	nullptr
};

$InnerClassInfo _List$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.List$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _List$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.List$2",
	"java.lang.Object",
	"java.util.Iterator",
	nullptr,
	_List$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Object;>;",
	&_List$2_EnclosingMethodInfo_,
	_List$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.List"
};

$Object* allocate$List$2($Class* clazz) {
	return $of($alloc(List$2));
}

void List$2::init$() {
}

bool List$2::hasNext() {
	return false;
}

$Object* List$2::next() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

void List$2::remove() {
	$throwNew($UnsupportedOperationException);
}

List$2::List$2() {
}

$Class* List$2::load$($String* name, bool initialize) {
	$loadClass(List$2, name, initialize, &_List$2_ClassInfo_, allocate$List$2);
	return class$;
}

$Class* List$2::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com