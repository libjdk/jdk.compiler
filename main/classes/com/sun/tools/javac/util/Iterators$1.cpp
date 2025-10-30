#include <com/sun/tools/javac/util/Iterators$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _Iterators$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Iterators$1::*)()>(&Iterators$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Iterators$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.Iterators",
	nullptr,
	nullptr
};

$InnerClassInfo _Iterators$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Iterators$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Iterators$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.Iterators$1",
	"java.lang.Object",
	"java.util.Iterator",
	nullptr,
	_Iterators$1_MethodInfo_,
	nullptr,
	&_Iterators$1_EnclosingMethodInfo_,
	_Iterators$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Iterators"
};

$Object* allocate$Iterators$1($Class* clazz) {
	return $of($alloc(Iterators$1));
}

void Iterators$1::init$() {
}

bool Iterators$1::hasNext() {
	return false;
}

$Object* Iterators$1::next() {
	return $of(nullptr);
}

Iterators$1::Iterators$1() {
}

$Class* Iterators$1::load$($String* name, bool initialize) {
	$loadClass(Iterators$1, name, initialize, &_Iterators$1_ClassInfo_, allocate$Iterators$1);
	return class$;
}

$Class* Iterators$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com