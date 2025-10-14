#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>

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
				namespace processing {

$FieldInfo _AnnotationProcessingError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AnnotationProcessingError, serialVersionUID)},
	{}
};

$MethodInfo _AnnotationProcessingError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(AnnotationProcessingError::*)($Throwable*)>(&AnnotationProcessingError::init$))},
	{}
};

$ClassInfo _AnnotationProcessingError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.processing.AnnotationProcessingError",
	"java.lang.Error",
	nullptr,
	_AnnotationProcessingError_FieldInfo_,
	_AnnotationProcessingError_MethodInfo_
};

$Object* allocate$AnnotationProcessingError($Class* clazz) {
	return $of($alloc(AnnotationProcessingError));
}

void AnnotationProcessingError::init$($Throwable* cause) {
	$Error::init$(cause);
}

AnnotationProcessingError::AnnotationProcessingError() {
}

AnnotationProcessingError::AnnotationProcessingError(const AnnotationProcessingError& e) {
}

AnnotationProcessingError AnnotationProcessingError::wrapper$() {
	$pendingException(this);
	return *this;
}

void AnnotationProcessingError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AnnotationProcessingError::load$($String* name, bool initialize) {
	$loadClass(AnnotationProcessingError, name, initialize, &_AnnotationProcessingError_ClassInfo_, allocate$AnnotationProcessingError);
	return class$;
}

$Class* AnnotationProcessingError::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com