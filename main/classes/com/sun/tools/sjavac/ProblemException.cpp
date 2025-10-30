#include <com/sun/tools/sjavac/ProblemException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _ProblemException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProblemException, serialVersionUID)},
	{}
};

$MethodInfo _ProblemException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProblemException::*)($String*)>(&ProblemException::init$))},
	{}
};

$ClassInfo _ProblemException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.ProblemException",
	"java.lang.Exception",
	nullptr,
	_ProblemException_FieldInfo_,
	_ProblemException_MethodInfo_
};

$Object* allocate$ProblemException($Class* clazz) {
	return $of($alloc(ProblemException));
}

void ProblemException::init$($String* s) {
	$Exception::init$(s);
}

ProblemException::ProblemException() {
}

ProblemException::ProblemException(const ProblemException& e) : $Exception(e) {
}

void ProblemException::throw$() {
	throw *this;
}

$Class* ProblemException::load$($String* name, bool initialize) {
	$loadClass(ProblemException, name, initialize, &_ProblemException_ClassInfo_, allocate$ProblemException);
	return class$;
}

$Class* ProblemException::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com