#include <com/sun/tools/javac/api/ClientCodeWrapper$DiagnosticSourceUnwrapper.h>

#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/util/Locale.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Diagnostic = ::javax::tools::Diagnostic;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper$DiagnosticSourceUnwrapper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$DiagnosticSourceUnwrapper, this$0)},
	{"d", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $FINAL, $field(ClientCodeWrapper$DiagnosticSourceUnwrapper, d)},
	{}
};

$MethodInfo _ClientCodeWrapper$DiagnosticSourceUnwrapper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(static_cast<void(ClientCodeWrapper$DiagnosticSourceUnwrapper::*)($ClientCodeWrapper*,$JCDiagnostic*)>(&ClientCodeWrapper$DiagnosticSourceUnwrapper::init$))},
	{"getCode", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getColumnNumber", "()J", nullptr, $PUBLIC},
	{"getEndPosition", "()J", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/Diagnostic$Kind;", nullptr, $PUBLIC},
	{"getLineNumber", "()J", nullptr, $PUBLIC},
	{"getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPosition", "()J", nullptr, $PUBLIC},
	{"getSource", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"getStartPosition", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$DiagnosticSourceUnwrapper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$DiagnosticSourceUnwrapper", "com.sun.tools.javac.api.ClientCodeWrapper", "DiagnosticSourceUnwrapper", $PUBLIC},
	{}
};

$ClassInfo _ClientCodeWrapper$DiagnosticSourceUnwrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$DiagnosticSourceUnwrapper",
	"java.lang.Object",
	"javax.tools.Diagnostic",
	_ClientCodeWrapper$DiagnosticSourceUnwrapper_FieldInfo_,
	_ClientCodeWrapper$DiagnosticSourceUnwrapper_MethodInfo_,
	"Ljava/lang/Object;Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;",
	nullptr,
	_ClientCodeWrapper$DiagnosticSourceUnwrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$DiagnosticSourceUnwrapper($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$DiagnosticSourceUnwrapper));
}

void ClientCodeWrapper$DiagnosticSourceUnwrapper::init$($ClientCodeWrapper* this$0, $JCDiagnostic* d) {
	$set(this, this$0, this$0);
	$set(this, d, d);
}

$Diagnostic$Kind* ClientCodeWrapper$DiagnosticSourceUnwrapper::getKind() {
	return $nc(this->d)->getKind();
}

$Object* ClientCodeWrapper$DiagnosticSourceUnwrapper::getSource() {
	return $of(this->this$0->unwrap($($cast($JavaFileObject, $nc(this->d)->getSource()))));
}

int64_t ClientCodeWrapper$DiagnosticSourceUnwrapper::getPosition() {
	return $nc(this->d)->getPosition();
}

int64_t ClientCodeWrapper$DiagnosticSourceUnwrapper::getStartPosition() {
	return $nc(this->d)->getStartPosition();
}

int64_t ClientCodeWrapper$DiagnosticSourceUnwrapper::getEndPosition() {
	return $nc(this->d)->getEndPosition();
}

int64_t ClientCodeWrapper$DiagnosticSourceUnwrapper::getLineNumber() {
	return $nc(this->d)->getLineNumber();
}

int64_t ClientCodeWrapper$DiagnosticSourceUnwrapper::getColumnNumber() {
	return $nc(this->d)->getColumnNumber();
}

$String* ClientCodeWrapper$DiagnosticSourceUnwrapper::getCode() {
	return $nc(this->d)->getCode();
}

$String* ClientCodeWrapper$DiagnosticSourceUnwrapper::getMessage($Locale* locale) {
	return $nc(this->d)->getMessage(locale);
}

$String* ClientCodeWrapper$DiagnosticSourceUnwrapper::toString() {
	return $nc(this->d)->toString();
}

ClientCodeWrapper$DiagnosticSourceUnwrapper::ClientCodeWrapper$DiagnosticSourceUnwrapper() {
}

$Class* ClientCodeWrapper$DiagnosticSourceUnwrapper::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$DiagnosticSourceUnwrapper, name, initialize, &_ClientCodeWrapper$DiagnosticSourceUnwrapper_ClassInfo_, allocate$ClientCodeWrapper$DiagnosticSourceUnwrapper);
	return class$;
}

$Class* ClientCodeWrapper$DiagnosticSourceUnwrapper::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com