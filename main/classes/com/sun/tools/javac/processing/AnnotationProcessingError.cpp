#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>

#include <java/lang/Error.h>
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

AnnotationProcessingError::AnnotationProcessingError(const AnnotationProcessingError& e) : $Error(e) {
}

void AnnotationProcessingError::throw$() {
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