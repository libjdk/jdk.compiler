#include <com/sun/tools/javac/processing/ServiceProxy$ServiceConfigurationError.h>

#include <com/sun/tools/javac/processing/ServiceProxy.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ServiceProxy = ::com::sun::tools::javac::processing::ServiceProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _ServiceProxy$ServiceConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ServiceProxy$ServiceConfigurationError, serialVersionUID)},
	{}
};

$MethodInfo _ServiceProxy$ServiceConfigurationError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ServiceProxy$ServiceConfigurationError::*)($String*)>(&ServiceProxy$ServiceConfigurationError::init$))},
	{}
};

$InnerClassInfo _ServiceProxy$ServiceConfigurationError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError", "com.sun.tools.javac.processing.ServiceProxy", "ServiceConfigurationError", $STATIC},
	{}
};

$ClassInfo _ServiceProxy$ServiceConfigurationError_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError",
	"java.lang.Error",
	nullptr,
	_ServiceProxy$ServiceConfigurationError_FieldInfo_,
	_ServiceProxy$ServiceConfigurationError_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceProxy$ServiceConfigurationError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.ServiceProxy"
};

$Object* allocate$ServiceProxy$ServiceConfigurationError($Class* clazz) {
	return $of($alloc(ServiceProxy$ServiceConfigurationError));
}

void ServiceProxy$ServiceConfigurationError::init$($String* msg) {
	$Error::init$(msg);
}

ServiceProxy$ServiceConfigurationError::ServiceProxy$ServiceConfigurationError() {
}

ServiceProxy$ServiceConfigurationError::ServiceProxy$ServiceConfigurationError(const ServiceProxy$ServiceConfigurationError& e) : $Error(e) {
}

void ServiceProxy$ServiceConfigurationError::throw$() {
	throw *this;
}

$Class* ServiceProxy$ServiceConfigurationError::load$($String* name, bool initialize) {
	$loadClass(ServiceProxy$ServiceConfigurationError, name, initialize, &_ServiceProxy$ServiceConfigurationError_ClassInfo_, allocate$ServiceProxy$ServiceConfigurationError);
	return class$;
}

$Class* ServiceProxy$ServiceConfigurationError::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com