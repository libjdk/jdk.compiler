#include <com/sun/tools/javac/util/FatalError.h>

#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _FatalError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FatalError, serialVersionUID)},
	{}
};

$MethodInfo _FatalError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $method(static_cast<void(FatalError::*)($JCDiagnostic*)>(&FatalError::init$))},
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(FatalError::*)($JCDiagnostic*,$Throwable*)>(&FatalError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FatalError::*)($String*)>(&FatalError::init$))},
	{}
};

$ClassInfo _FatalError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.FatalError",
	"java.lang.Error",
	nullptr,
	_FatalError_FieldInfo_,
	_FatalError_MethodInfo_
};

$Object* allocate$FatalError($Class* clazz) {
	return $of($alloc(FatalError));
}

void FatalError::init$($JCDiagnostic* d) {
	$Error::init$($($nc(d)->toString()));
}

void FatalError::init$($JCDiagnostic* d, $Throwable* t) {
	$Error::init$($($nc(d)->toString()), t);
}

void FatalError::init$($String* s) {
	$Error::init$(s);
}

FatalError::FatalError() {
}

FatalError::FatalError(const FatalError& e) : $Error(e) {
}

void FatalError::throw$() {
	throw *this;
}

$Class* FatalError::load$($String* name, bool initialize) {
	$loadClass(FatalError, name, initialize, &_FatalError_ClassInfo_, allocate$FatalError);
	return class$;
}

$Class* FatalError::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com