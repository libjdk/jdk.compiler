#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedTaskListener.h>

#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <java/lang/Error.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskListener = ::com::sun::source::util::TaskListener;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper$WrappedTaskListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$WrappedTaskListener, this$0)},
	{"clientTaskListener", "Lcom/sun/source/util/TaskListener;", nullptr, $PROTECTED, $field(ClientCodeWrapper$WrappedTaskListener, clientTaskListener)},
	{}
};

$MethodInfo _ClientCodeWrapper$WrappedTaskListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Lcom/sun/source/util/TaskListener;)V", nullptr, 0, $method(static_cast<void(ClientCodeWrapper$WrappedTaskListener::*)($ClientCodeWrapper*,$TaskListener*)>(&ClientCodeWrapper$WrappedTaskListener::init$))},
	{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"started", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$WrappedTaskListener_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedTaskListener", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedTaskListener", $PROTECTED},
	{}
};

$ClassInfo _ClientCodeWrapper$WrappedTaskListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedTaskListener",
	"java.lang.Object",
	"com.sun.source.util.TaskListener",
	_ClientCodeWrapper$WrappedTaskListener_FieldInfo_,
	_ClientCodeWrapper$WrappedTaskListener_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCodeWrapper$WrappedTaskListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$WrappedTaskListener($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$WrappedTaskListener));
}

void ClientCodeWrapper$WrappedTaskListener::init$($ClientCodeWrapper* this$0, $TaskListener* clientTaskListener) {
	$set(this, this$0, this$0);
	$set(this, clientTaskListener, $cast($TaskListener, $Objects::requireNonNull(clientTaskListener)));
}

void ClientCodeWrapper$WrappedTaskListener::started($TaskEvent* ev) {
	try {
		$nc(this->clientTaskListener)->started(ev);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

void ClientCodeWrapper$WrappedTaskListener::finished($TaskEvent* ev) {
	try {
		$nc(this->clientTaskListener)->finished(ev);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
}

$String* ClientCodeWrapper$WrappedTaskListener::toString() {
	return this->this$0->wrappedToString($of(this)->getClass(), this->clientTaskListener);
}

ClientCodeWrapper$WrappedTaskListener::ClientCodeWrapper$WrappedTaskListener() {
}

$Class* ClientCodeWrapper$WrappedTaskListener::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$WrappedTaskListener, name, initialize, &_ClientCodeWrapper$WrappedTaskListener_ClassInfo_, allocate$ClientCodeWrapper$WrappedTaskListener);
	return class$;
}

$Class* ClientCodeWrapper$WrappedTaskListener::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com