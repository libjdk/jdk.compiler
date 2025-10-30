#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>

#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
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

$FieldInfo _Types$FunctionDescriptorLookupError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Types$FunctionDescriptorLookupError, serialVersionUID)},
	{"diagnostic", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $TRANSIENT, $field(Types$FunctionDescriptorLookupError, diagnostic)},
	{}
};

$MethodInfo _Types$FunctionDescriptorLookupError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Types$FunctionDescriptorLookupError::*)()>(&Types$FunctionDescriptorLookupError::init$))},
	{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{"setMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/code/Types$FunctionDescriptorLookupError;", nullptr, 0},
	{}
};

$InnerClassInfo _Types$FunctionDescriptorLookupError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$FunctionDescriptorLookupError", "com.sun.tools.javac.code.Types", "FunctionDescriptorLookupError", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Types$FunctionDescriptorLookupError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$FunctionDescriptorLookupError",
	"java.lang.RuntimeException",
	nullptr,
	_Types$FunctionDescriptorLookupError_FieldInfo_,
	_Types$FunctionDescriptorLookupError_MethodInfo_,
	nullptr,
	nullptr,
	_Types$FunctionDescriptorLookupError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$FunctionDescriptorLookupError($Class* clazz) {
	return $of($alloc(Types$FunctionDescriptorLookupError));
}

void Types$FunctionDescriptorLookupError::init$() {
	$RuntimeException::init$();
	$set(this, diagnostic, nullptr);
}

Types$FunctionDescriptorLookupError* Types$FunctionDescriptorLookupError::setMessage($JCDiagnostic* diag) {
	$set(this, diagnostic, diag);
	return this;
}

$JCDiagnostic* Types$FunctionDescriptorLookupError::getDiagnostic() {
	return this->diagnostic;
}

Types$FunctionDescriptorLookupError::Types$FunctionDescriptorLookupError() {
}

Types$FunctionDescriptorLookupError::Types$FunctionDescriptorLookupError(const Types$FunctionDescriptorLookupError& e) : $RuntimeException(e) {
}

void Types$FunctionDescriptorLookupError::throw$() {
	throw *this;
}

$Class* Types$FunctionDescriptorLookupError::load$($String* name, bool initialize) {
	$loadClass(Types$FunctionDescriptorLookupError, name, initialize, &_Types$FunctionDescriptorLookupError_ClassInfo_, allocate$Types$FunctionDescriptorLookupError);
	return class$;
}

$Class* Types$FunctionDescriptorLookupError::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com