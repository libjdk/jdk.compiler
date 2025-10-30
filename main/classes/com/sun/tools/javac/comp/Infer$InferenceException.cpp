#include <com/sun/tools/javac/comp/Infer$InferenceException.h>

#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$InferenceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Infer$InferenceException, serialVersionUID)},
	{"messages", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $TRANSIENT, $field(Infer$InferenceException, messages)},
	{}
};

$MethodInfo _Infer$InferenceException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Infer$InferenceException::*)()>(&Infer$InferenceException::init$))},
	{"getDiagnostic", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Infer$InferenceException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$InferenceException", "com.sun.tools.javac.comp.Infer", "InferenceException", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Infer$InferenceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.Infer$InferenceException",
	"com.sun.tools.javac.comp.Resolve$InapplicableMethodException",
	nullptr,
	_Infer$InferenceException_FieldInfo_,
	_Infer$InferenceException_MethodInfo_,
	nullptr,
	nullptr,
	_Infer$InferenceException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$InferenceException($Class* clazz) {
	return $of($alloc(Infer$InferenceException));
}

void Infer$InferenceException::init$() {
	$Resolve$InapplicableMethodException::init$(nullptr);
	$set(this, messages, $List::nil());
}

$JCDiagnostic* Infer$InferenceException::getDiagnostic() {
	return $cast($JCDiagnostic, $nc(this->messages)->head);
}

Infer$InferenceException::Infer$InferenceException() {
}

Infer$InferenceException::Infer$InferenceException(const Infer$InferenceException& e) : $Resolve$InapplicableMethodException(e) {
}

void Infer$InferenceException::throw$() {
	throw *this;
}

$Class* Infer$InferenceException::load$($String* name, bool initialize) {
	$loadClass(Infer$InferenceException, name, initialize, &_Infer$InferenceException_ClassInfo_, allocate$Infer$InferenceException);
	return class$;
}

$Class* Infer$InferenceException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com