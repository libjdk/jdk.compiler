#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature$SignatureException.h>

#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature.h>
#include <jcpp.h>

using $JNIWriter$TypeSignature = ::com::sun::tools::javac::jvm::JNIWriter$TypeSignature;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _JNIWriter$TypeSignature$SignatureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JNIWriter$TypeSignature$SignatureException, serialVersionUID)},
	{}
};

$MethodInfo _JNIWriter$TypeSignature$SignatureException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JNIWriter$TypeSignature$SignatureException::*)($String*)>(&JNIWriter$TypeSignature$SignatureException::init$))},
	{}
};

$InnerClassInfo _JNIWriter$TypeSignature$SignatureException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "com.sun.tools.javac.jvm.JNIWriter", "TypeSignature", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException", "com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "SignatureException", $STATIC},
	{}
};

$ClassInfo _JNIWriter$TypeSignature$SignatureException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException",
	"java.lang.Exception",
	nullptr,
	_JNIWriter$TypeSignature$SignatureException_FieldInfo_,
	_JNIWriter$TypeSignature$SignatureException_MethodInfo_,
	nullptr,
	nullptr,
	_JNIWriter$TypeSignature$SignatureException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.JNIWriter"
};

$Object* allocate$JNIWriter$TypeSignature$SignatureException($Class* clazz) {
	return $of($alloc(JNIWriter$TypeSignature$SignatureException));
}

void JNIWriter$TypeSignature$SignatureException::init$($String* reason) {
	$Exception::init$(reason);
}

JNIWriter$TypeSignature$SignatureException::JNIWriter$TypeSignature$SignatureException() {
}

JNIWriter$TypeSignature$SignatureException::JNIWriter$TypeSignature$SignatureException(const JNIWriter$TypeSignature$SignatureException& e) : $Exception(e) {
}

void JNIWriter$TypeSignature$SignatureException::throw$() {
	throw *this;
}

$Class* JNIWriter$TypeSignature$SignatureException::load$($String* name, bool initialize) {
	$loadClass(JNIWriter$TypeSignature$SignatureException, name, initialize, &_JNIWriter$TypeSignature$SignatureException_ClassInfo_, allocate$JNIWriter$TypeSignature$SignatureException);
	return class$;
}

$Class* JNIWriter$TypeSignature$SignatureException::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com