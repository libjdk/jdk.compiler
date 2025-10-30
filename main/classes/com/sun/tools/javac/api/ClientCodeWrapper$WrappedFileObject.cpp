#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedFileObject.h>

#include <com/sun/tools/javac/api/ClientCodeWrapper.h>
#include <com/sun/tools/javac/util/ClientCodeException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/net/URI.h>
#include <java/util/Objects.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $ClientCodeException = ::com::sun::tools::javac::util::ClientCodeException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $Objects = ::java::util::Objects;
using $FileObject = ::javax::tools::FileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper$WrappedFileObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$WrappedFileObject, this$0)},
	{"clientFileObject", "Ljavax/tools/FileObject;", nullptr, $PROTECTED, $field(ClientCodeWrapper$WrappedFileObject, clientFileObject)},
	{}
};

$MethodInfo _ClientCodeWrapper$WrappedFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Ljavax/tools/FileObject;)V", nullptr, 0, $method(static_cast<void(ClientCodeWrapper$WrappedFileObject::*)($ClientCodeWrapper*,$FileObject*)>(&ClientCodeWrapper$WrappedFileObject::init$))},
	{"delete", "()Z", nullptr, $PUBLIC},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLastModified", "()J", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$WrappedFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedFileObject", $PROTECTED},
	{}
};

$ClassInfo _ClientCodeWrapper$WrappedFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject",
	"java.lang.Object",
	"javax.tools.FileObject",
	_ClientCodeWrapper$WrappedFileObject_FieldInfo_,
	_ClientCodeWrapper$WrappedFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCodeWrapper$WrappedFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$WrappedFileObject($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$WrappedFileObject));
}

void ClientCodeWrapper$WrappedFileObject::init$($ClientCodeWrapper* this$0, $FileObject* clientFileObject) {
	$set(this, this$0, this$0);
	$set(this, clientFileObject, $cast($FileObject, $Objects::requireNonNull(clientFileObject)));
}

$URI* ClientCodeWrapper$WrappedFileObject::toUri() {
	try {
		return $nc(this->clientFileObject)->toUri();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$String* ClientCodeWrapper$WrappedFileObject::getName() {
	try {
		return $nc(this->clientFileObject)->getName();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$InputStream* ClientCodeWrapper$WrappedFileObject::openInputStream() {
	try {
		return $nc(this->clientFileObject)->openInputStream();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$OutputStream* ClientCodeWrapper$WrappedFileObject::openOutputStream() {
	try {
		return $nc(this->clientFileObject)->openOutputStream();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Reader* ClientCodeWrapper$WrappedFileObject::openReader(bool ignoreEncodingErrors) {
	try {
		return $nc(this->clientFileObject)->openReader(ignoreEncodingErrors);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$CharSequence* ClientCodeWrapper$WrappedFileObject::getCharContent(bool ignoreEncodingErrors) {
	try {
		return $nc(this->clientFileObject)->getCharContent(ignoreEncodingErrors);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Writer* ClientCodeWrapper$WrappedFileObject::openWriter() {
	try {
		return $nc(this->clientFileObject)->openWriter();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

int64_t ClientCodeWrapper$WrappedFileObject::getLastModified() {
	try {
		return $nc(this->clientFileObject)->getLastModified();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

bool ClientCodeWrapper$WrappedFileObject::delete$() {
	try {
		return $nc(this->clientFileObject)->delete$();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$String* ClientCodeWrapper$WrappedFileObject::toString() {
	return this->this$0->wrappedToString($of(this)->getClass(), this->clientFileObject);
}

ClientCodeWrapper$WrappedFileObject::ClientCodeWrapper$WrappedFileObject() {
}

$Class* ClientCodeWrapper$WrappedFileObject::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$WrappedFileObject, name, initialize, &_ClientCodeWrapper$WrappedFileObject_ClassInfo_, allocate$ClientCodeWrapper$WrappedFileObject);
	return class$;
}

$Class* ClientCodeWrapper$WrappedFileObject::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com