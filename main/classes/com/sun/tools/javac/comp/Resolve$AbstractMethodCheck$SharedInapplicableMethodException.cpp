#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException.h>

#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Resolve$AbstractMethodCheck = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$AbstractMethodCheck$SharedInapplicableMethodException_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, this$1)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, serialVersionUID)},
	{}
};

$MethodInfo _Resolve$AbstractMethodCheck$SharedInapplicableMethodException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck;)V", nullptr, 0, $method(static_cast<void(Resolve$AbstractMethodCheck$SharedInapplicableMethodException::*)($Resolve$AbstractMethodCheck*)>(&Resolve$AbstractMethodCheck$SharedInapplicableMethodException::init$))},
	{"setMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException;", nullptr, 0},
	{}
};

$InnerClassInfo _Resolve$AbstractMethodCheck$SharedInapplicableMethodException_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException", "com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "SharedInapplicableMethodException", 0},
	{"com.sun.tools.javac.comp.Resolve$InapplicableMethodException", "com.sun.tools.javac.comp.Resolve", "InapplicableMethodException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Resolve$AbstractMethodCheck$SharedInapplicableMethodException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException",
	"com.sun.tools.javac.comp.Resolve$InapplicableMethodException",
	nullptr,
	_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_FieldInfo_,
	_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$AbstractMethodCheck$SharedInapplicableMethodException($Class* clazz) {
	return $of($alloc(Resolve$AbstractMethodCheck$SharedInapplicableMethodException));
}

void Resolve$AbstractMethodCheck$SharedInapplicableMethodException::init$($Resolve$AbstractMethodCheck* this$1) {
	$set(this, this$1, this$1);
	$Resolve$InapplicableMethodException::init$(nullptr);
}

Resolve$AbstractMethodCheck$SharedInapplicableMethodException* Resolve$AbstractMethodCheck$SharedInapplicableMethodException::setMessage($JCDiagnostic* details) {
	$set(this, diagnostic, details);
	return this;
}

Resolve$AbstractMethodCheck$SharedInapplicableMethodException::Resolve$AbstractMethodCheck$SharedInapplicableMethodException() {
}

Resolve$AbstractMethodCheck$SharedInapplicableMethodException::Resolve$AbstractMethodCheck$SharedInapplicableMethodException(const Resolve$AbstractMethodCheck$SharedInapplicableMethodException& e) : $Resolve$InapplicableMethodException(e) {
}

void Resolve$AbstractMethodCheck$SharedInapplicableMethodException::throw$() {
	throw *this;
}

$Class* Resolve$AbstractMethodCheck$SharedInapplicableMethodException::load$($String* name, bool initialize) {
	$loadClass(Resolve$AbstractMethodCheck$SharedInapplicableMethodException, name, initialize, &_Resolve$AbstractMethodCheck$SharedInapplicableMethodException_ClassInfo_, allocate$Resolve$AbstractMethodCheck$SharedInapplicableMethodException);
	return class$;
}

$Class* Resolve$AbstractMethodCheck$SharedInapplicableMethodException::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com