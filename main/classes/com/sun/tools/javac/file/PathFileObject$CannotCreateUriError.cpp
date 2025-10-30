#include <com/sun/tools/javac/file/PathFileObject$CannotCreateUriError.h>

#include <com/sun/tools/javac/file/PathFileObject.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _PathFileObject$CannotCreateUriError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PathFileObject$CannotCreateUriError, serialVersionUID)},
	{}
};

$MethodInfo _PathFileObject$CannotCreateUriError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(PathFileObject$CannotCreateUriError::*)($String*,$Throwable*)>(&PathFileObject$CannotCreateUriError::init$))},
	{}
};

$InnerClassInfo _PathFileObject$CannotCreateUriError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.PathFileObject$CannotCreateUriError", "com.sun.tools.javac.file.PathFileObject", "CannotCreateUriError", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PathFileObject$CannotCreateUriError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.PathFileObject$CannotCreateUriError",
	"java.lang.Error",
	nullptr,
	_PathFileObject$CannotCreateUriError_FieldInfo_,
	_PathFileObject$CannotCreateUriError_MethodInfo_,
	nullptr,
	nullptr,
	_PathFileObject$CannotCreateUriError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.PathFileObject"
};

$Object* allocate$PathFileObject$CannotCreateUriError($Class* clazz) {
	return $of($alloc(PathFileObject$CannotCreateUriError));
}

void PathFileObject$CannotCreateUriError::init$($String* value, $Throwable* cause) {
	$Error::init$(value, cause);
}

PathFileObject$CannotCreateUriError::PathFileObject$CannotCreateUriError() {
}

PathFileObject$CannotCreateUriError::PathFileObject$CannotCreateUriError(const PathFileObject$CannotCreateUriError& e) : $Error(e) {
}

void PathFileObject$CannotCreateUriError::throw$() {
	throw *this;
}

$Class* PathFileObject$CannotCreateUriError::load$($String* name, bool initialize) {
	$loadClass(PathFileObject$CannotCreateUriError, name, initialize, &_PathFileObject$CannotCreateUriError_ClassInfo_, allocate$PathFileObject$CannotCreateUriError);
	return class$;
}

$Class* PathFileObject$CannotCreateUriError::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com