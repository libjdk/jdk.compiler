#include <com/sun/tools/javac/util/PropagatedException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _PropagatedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PropagatedException, serialVersionUID)},
	{}
};

$MethodInfo _PropagatedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/RuntimeException;)V", nullptr, $PUBLIC, $method(static_cast<void(PropagatedException::*)($RuntimeException*)>(&PropagatedException::init$))},
	{"getCause", "()Ljava/lang/RuntimeException;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PropagatedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.PropagatedException",
	"java.lang.RuntimeException",
	nullptr,
	_PropagatedException_FieldInfo_,
	_PropagatedException_MethodInfo_
};

$Object* allocate$PropagatedException($Class* clazz) {
	return $of($alloc(PropagatedException));
}

void PropagatedException::init$($RuntimeException* cause) {
	$RuntimeException::init$(static_cast<$Throwable*>(cause));
}

$RuntimeException* PropagatedException::getCause() {
	return $cast($RuntimeException, $RuntimeException::getCause());
}

PropagatedException::PropagatedException() {
}

PropagatedException::PropagatedException(const PropagatedException& e) : $RuntimeException(e) {
}

void PropagatedException::throw$() {
	throw *this;
}

$Class* PropagatedException::load$($String* name, bool initialize) {
	$loadClass(PropagatedException, name, initialize, &_PropagatedException_ClassInfo_, allocate$PropagatedException);
	return class$;
}

$Class* PropagatedException::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com