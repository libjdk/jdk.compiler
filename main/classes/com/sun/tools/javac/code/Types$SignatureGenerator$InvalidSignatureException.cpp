#include <com/sun/tools/javac/code/Types$SignatureGenerator$InvalidSignatureException.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$SignatureGenerator$InvalidSignatureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Types$SignatureGenerator$InvalidSignatureException, serialVersionUID)},
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(Types$SignatureGenerator$InvalidSignatureException, type$)},
	{}
};

$MethodInfo _Types$SignatureGenerator$InvalidSignatureException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Types$SignatureGenerator$InvalidSignatureException::*)($Type*)>(&Types$SignatureGenerator$InvalidSignatureException::init$))},
	{"type", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Types$SignatureGenerator$InvalidSignatureException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException", "com.sun.tools.javac.code.Types$SignatureGenerator", "InvalidSignatureException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$SignatureGenerator$InvalidSignatureException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException",
	"java.lang.RuntimeException",
	nullptr,
	_Types$SignatureGenerator$InvalidSignatureException_FieldInfo_,
	_Types$SignatureGenerator$InvalidSignatureException_MethodInfo_,
	nullptr,
	nullptr,
	_Types$SignatureGenerator$InvalidSignatureException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$SignatureGenerator$InvalidSignatureException($Class* clazz) {
	return $of($alloc(Types$SignatureGenerator$InvalidSignatureException));
}

void Types$SignatureGenerator$InvalidSignatureException::init$($Type* type) {
	$RuntimeException::init$();
	$set(this, type$, type);
}

$Type* Types$SignatureGenerator$InvalidSignatureException::type() {
	return this->type$;
}

Types$SignatureGenerator$InvalidSignatureException::Types$SignatureGenerator$InvalidSignatureException() {
}

Types$SignatureGenerator$InvalidSignatureException::Types$SignatureGenerator$InvalidSignatureException(const Types$SignatureGenerator$InvalidSignatureException& e) : $RuntimeException(e) {
}

void Types$SignatureGenerator$InvalidSignatureException::throw$() {
	throw *this;
}

$Class* Types$SignatureGenerator$InvalidSignatureException::load$($String* name, bool initialize) {
	$loadClass(Types$SignatureGenerator$InvalidSignatureException, name, initialize, &_Types$SignatureGenerator$InvalidSignatureException_ClassInfo_, allocate$Types$SignatureGenerator$InvalidSignatureException);
	return class$;
}

$Class* Types$SignatureGenerator$InvalidSignatureException::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com