#include <com/sun/tools/sjavac/client/PortFileInaccessibleException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

$FieldInfo _PortFileInaccessibleException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortFileInaccessibleException, serialVersionUID)},
	{}
};

$MethodInfo _PortFileInaccessibleException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(PortFileInaccessibleException::*)($Throwable*)>(&PortFileInaccessibleException::init$))},
	{}
};

$ClassInfo _PortFileInaccessibleException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.client.PortFileInaccessibleException",
	"java.io.IOException",
	nullptr,
	_PortFileInaccessibleException_FieldInfo_,
	_PortFileInaccessibleException_MethodInfo_
};

$Object* allocate$PortFileInaccessibleException($Class* clazz) {
	return $of($alloc(PortFileInaccessibleException));
}

void PortFileInaccessibleException::init$($Throwable* cause) {
	$IOException::init$(cause);
}

PortFileInaccessibleException::PortFileInaccessibleException() {
}

PortFileInaccessibleException::PortFileInaccessibleException(const PortFileInaccessibleException& e) {
}

PortFileInaccessibleException PortFileInaccessibleException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PortFileInaccessibleException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PortFileInaccessibleException::load$($String* name, bool initialize) {
	$loadClass(PortFileInaccessibleException, name, initialize, &_PortFileInaccessibleException_ClassInfo_, allocate$PortFileInaccessibleException);
	return class$;
}

$Class* PortFileInaccessibleException::class$ = nullptr;

				} // client
			} // sjavac
		} // tools
	} // sun
} // com