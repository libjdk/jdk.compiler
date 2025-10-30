#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>

#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Resolve = ::com::sun::tools::javac::comp::Resolve;
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
				namespace comp {

$FieldInfo _Resolve$InapplicableMethodException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Resolve$InapplicableMethodException, serialVersionUID)},
	{"diagnostic", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $TRANSIENT, $field(Resolve$InapplicableMethodException, diagnostic)},
	{}
};

$MethodInfo _Resolve$InapplicableMethodException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(static_cast<void(Resolve$InapplicableMethodException::*)($JCDiagnostic*)>(&Resolve$InapplicableMethodException::init$))},
	{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$InapplicableMethodException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Resolve$InapplicableMethodException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$InapplicableMethodException",
	"java.lang.RuntimeException",
	nullptr,
	_Resolve$InapplicableMethodException_FieldInfo_,
	_Resolve$InapplicableMethodException_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$InapplicableMethodException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InapplicableMethodException($Class* clazz) {
	return $of($alloc(Resolve$InapplicableMethodException));
}

void Resolve$InapplicableMethodException::init$($JCDiagnostic* diag) {
	$RuntimeException::init$();
	$set(this, diagnostic, diag);
}

$JCDiagnostic* Resolve$InapplicableMethodException::getDiagnostic() {
	return this->diagnostic;
}

Resolve$InapplicableMethodException::Resolve$InapplicableMethodException() {
}

Resolve$InapplicableMethodException::Resolve$InapplicableMethodException(const Resolve$InapplicableMethodException& e) : $RuntimeException(e) {
}

void Resolve$InapplicableMethodException::throw$() {
	throw *this;
}

$Class* Resolve$InapplicableMethodException::load$($String* name, bool initialize) {
	$loadClass(Resolve$InapplicableMethodException, name, initialize, &_Resolve$InapplicableMethodException_ClassInfo_, allocate$Resolve$InapplicableMethodException);
	return class$;
}

$Class* Resolve$InapplicableMethodException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com