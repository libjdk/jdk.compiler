#include <com/sun/tools/javac/main/Option$InvalidValueException.h>

#include <com/sun/tools/javac/main/Option.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$FieldInfo _Option$InvalidValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Option$InvalidValueException, serialVersionUID)},
	{}
};

$MethodInfo _Option$InvalidValueException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$InvalidValueException::*)($String*)>(&Option$InvalidValueException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$InvalidValueException::*)($String*,$Throwable*)>(&Option$InvalidValueException::init$))},
	{}
};

$InnerClassInfo _Option$InvalidValueException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$InvalidValueException", "com.sun.tools.javac.main.Option", "InvalidValueException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Option$InvalidValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.main.Option$InvalidValueException",
	"java.lang.Exception",
	nullptr,
	_Option$InvalidValueException_FieldInfo_,
	_Option$InvalidValueException_MethodInfo_,
	nullptr,
	nullptr,
	_Option$InvalidValueException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$InvalidValueException($Class* clazz) {
	return $of($alloc(Option$InvalidValueException));
}

void Option$InvalidValueException::init$($String* msg) {
	$Exception::init$(msg);
}

void Option$InvalidValueException::init$($String* msg, $Throwable* cause) {
	$Exception::init$(msg, cause);
}

Option$InvalidValueException::Option$InvalidValueException() {
}

Option$InvalidValueException::Option$InvalidValueException(const Option$InvalidValueException& e) : $Exception(e) {
}

void Option$InvalidValueException::throw$() {
	throw *this;
}

$Class* Option$InvalidValueException::load$($String* name, bool initialize) {
	$loadClass(Option$InvalidValueException, name, initialize, &_Option$InvalidValueException_ClassInfo_, allocate$Option$InvalidValueException);
	return class$;
}

$Class* Option$InvalidValueException::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com