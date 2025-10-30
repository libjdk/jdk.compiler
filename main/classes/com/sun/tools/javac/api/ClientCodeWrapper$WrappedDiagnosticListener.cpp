#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedDiagnosticListener.h>

#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <java/lang/Error.h>
#include <java/util/Objects.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <jcpp.h>

using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper$WrappedDiagnosticListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$WrappedDiagnosticListener, this$0)},
	{"clientDiagnosticListener", "Ljavax/tools/DiagnosticListener;", "Ljavax/tools/DiagnosticListener<TT;>;", $PROTECTED, $field(ClientCodeWrapper$WrappedDiagnosticListener, clientDiagnosticListener)},
	{}
};

$MethodInfo _ClientCodeWrapper$WrappedDiagnosticListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Ljavax/tools/DiagnosticListener;)V", "(Ljavax/tools/DiagnosticListener<TT;>;)V", 0, $method(static_cast<void(ClientCodeWrapper$WrappedDiagnosticListener::*)($ClientCodeWrapper*,$DiagnosticListener*)>(&ClientCodeWrapper$WrappedDiagnosticListener::init$))},
	{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+TT;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$WrappedDiagnosticListener_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedDiagnosticListener", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedDiagnosticListener", $PROTECTED},
	{}
};

$ClassInfo _ClientCodeWrapper$WrappedDiagnosticListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedDiagnosticListener",
	"java.lang.Object",
	"javax.tools.DiagnosticListener",
	_ClientCodeWrapper$WrappedDiagnosticListener_FieldInfo_,
	_ClientCodeWrapper$WrappedDiagnosticListener_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/tools/DiagnosticListener<TT;>;",
	nullptr,
	_ClientCodeWrapper$WrappedDiagnosticListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$WrappedDiagnosticListener($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$WrappedDiagnosticListener));
}

void ClientCodeWrapper$WrappedDiagnosticListener::init$($ClientCodeWrapper* this$0, $DiagnosticListener* clientDiagnosticListener) {
	$set(this, this$0, this$0);
	$set(this, clientDiagnosticListener, $cast($DiagnosticListener, $Objects::requireNonNull(clientDiagnosticListener)));
}

void ClientCodeWrapper$WrappedDiagnosticListener::report($Diagnostic* diagnostic) {
	try {
		$nc(this->clientDiagnosticListener)->report($(this->this$0->unwrap(diagnostic)));
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

$String* ClientCodeWrapper$WrappedDiagnosticListener::toString() {
	return this->this$0->wrappedToString($of(this)->getClass(), this->clientDiagnosticListener);
}

ClientCodeWrapper$WrappedDiagnosticListener::ClientCodeWrapper$WrappedDiagnosticListener() {
}

$Class* ClientCodeWrapper$WrappedDiagnosticListener::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$WrappedDiagnosticListener, name, initialize, &_ClientCodeWrapper$WrappedDiagnosticListener_ClassInfo_, allocate$ClientCodeWrapper$WrappedDiagnosticListener);
	return class$;
}

$Class* ClientCodeWrapper$WrappedDiagnosticListener::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com