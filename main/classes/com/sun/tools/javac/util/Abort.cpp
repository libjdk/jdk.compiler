#include <com/sun/tools/javac/util/Abort.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Abort_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Abort, serialVersionUID)},
	{}
};

$MethodInfo _Abort_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Abort::*)($Throwable*)>(&Abort::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Abort::*)()>(&Abort::init$))},
	{}
};

$ClassInfo _Abort_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Abort",
	"java.lang.Error",
	nullptr,
	_Abort_FieldInfo_,
	_Abort_MethodInfo_
};

$Object* allocate$Abort($Class* clazz) {
	return $of($alloc(Abort));
}

void Abort::init$($Throwable* cause) {
	$Error::init$(cause);
}

void Abort::init$() {
	$Error::init$();
}

Abort::Abort() {
}

Abort::Abort(const Abort& e) {
}

Abort Abort::wrapper$() {
	$pendingException(this);
	return *this;
}

void Abort::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Abort::load$($String* name, bool initialize) {
	$loadClass(Abort, name, initialize, &_Abort_ClassInfo_, allocate$Abort);
	return class$;
}

$Class* Abort::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com