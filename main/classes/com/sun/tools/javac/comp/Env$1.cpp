#include <com/sun/tools/javac/comp/Env$1.h>

#include <com/sun/tools/javac/comp/Env.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
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
				namespace comp {

$FieldInfo _Env$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(Env$1, this$0)},
	{"next", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<TA;>;", 0, $field(Env$1, next$)},
	{}
};

$MethodInfo _Env$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(static_cast<void(Env$1::*)($Env*)>(&Env$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Env$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Env",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Env$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Env$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Env$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Env$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Env$1_FieldInfo_,
	_Env$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/tools/javac/comp/Env<TA;>;>;",
	&_Env$1_EnclosingMethodInfo_,
	_Env$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Env"
};

$Object* allocate$Env$1($Class* clazz) {
	return $of($alloc(Env$1));
}

void Env$1::init$($Env* this$0) {
	$set(this, this$0, this$0);
	$set(this, next$, this->this$0);
}

bool Env$1::hasNext() {
	return $nc(this->next$)->outer != nullptr;
}

$Object* Env$1::next() {
	if (hasNext()) {
		$var($Env, current, this->next$);
		$set(this, next$, $nc(current)->outer);
		return $of(current);
	}
	$throwNew($NoSuchElementException);
}

void Env$1::remove() {
	$throwNew($UnsupportedOperationException);
}

Env$1::Env$1() {
}

$Class* Env$1::load$($String* name, bool initialize) {
	$loadClass(Env$1, name, initialize, &_Env$1_ClassInfo_, allocate$Env$1);
	return class$;
}

$Class* Env$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com