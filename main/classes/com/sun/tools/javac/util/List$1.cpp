#include <com/sun/tools/javac/util/List$1.h>

#include <com/sun/tools/javac/util/List.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _List$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Lcom/sun/tools/javac/util/List;)V", nullptr, 0, $method(static_cast<void(List$1::*)(Object$*,$List*)>(&List$1::init$))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setTail", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Ljava/lang/Object;>;)Lcom/sun/tools/javac/util/List<Ljava/lang/Object;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _List$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.util.List",
	nullptr,
	nullptr
};

$InnerClassInfo _List$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.List$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _List$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.util.List$1",
	"com.sun.tools.javac.util.List",
	nullptr,
	nullptr,
	_List$1_MethodInfo_,
	"Lcom/sun/tools/javac/util/List<Ljava/lang/Object;>;",
	&_List$1_EnclosingMethodInfo_,
	_List$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.List"
};

$Object* allocate$List$1($Class* clazz) {
	return $of($alloc(List$1));
}

void List$1::init$(Object$* head, $List* tail) {
	$List::init$(head, tail);
}

$List* List$1::setTail($List* tail) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool List$1::isEmpty() {
	return true;
}

List$1::List$1() {
}

$Class* List$1::load$($String* name, bool initialize) {
	$loadClass(List$1, name, initialize, &_List$1_ClassInfo_, allocate$List$1);
	return class$;
}

$Class* List$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com