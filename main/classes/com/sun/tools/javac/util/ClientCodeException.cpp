#include <com/sun/tools/javac/util/ClientCodeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _ClientCodeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClientCodeException, serialVersionUID)},
	{}
};

$MethodInfo _ClientCodeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ClientCodeException::*)($Throwable*)>(&ClientCodeException::init$))},
	{}
};

$ClassInfo _ClientCodeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ClientCodeException",
	"java.lang.RuntimeException",
	nullptr,
	_ClientCodeException_FieldInfo_,
	_ClientCodeException_MethodInfo_
};

$Object* allocate$ClientCodeException($Class* clazz) {
	return $of($alloc(ClientCodeException));
}

void ClientCodeException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

ClientCodeException::ClientCodeException() {
}

ClientCodeException::ClientCodeException(const ClientCodeException& e) {
}

ClientCodeException ClientCodeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ClientCodeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ClientCodeException::load$($String* name, bool initialize) {
	$loadClass(ClientCodeException, name, initialize, &_ClientCodeException_ClassInfo_, allocate$ClientCodeException);
	return class$;
}

$Class* ClientCodeException::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com