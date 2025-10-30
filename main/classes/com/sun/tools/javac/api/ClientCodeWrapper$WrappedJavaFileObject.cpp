#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedJavaFileObject.h>

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
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ClientCodeWrapper = ::com::sun::tools::javac::api::ClientCodeWrapper;
using $ClientCodeWrapper$WrappedFileObject = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedFileObject;
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
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper$WrappedJavaFileObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCodeWrapper$WrappedJavaFileObject, this$0)},
	{}
};

$MethodInfo _ClientCodeWrapper$WrappedJavaFileObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delete$", "()Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"*getLastModified", "()J", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/api/ClientCodeWrapper;Ljavax/tools/JavaFileObject;)V", nullptr, 0, $method(static_cast<void(ClientCodeWrapper$WrappedJavaFileObject::*)($ClientCodeWrapper*,$JavaFileObject*)>(&ClientCodeWrapper$WrappedJavaFileObject::init$))},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"*openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"*openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"*openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC},
	{"*openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCodeWrapper$WrappedJavaFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileObject", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedJavaFileObject", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedFileObject", $PROTECTED},
	{}
};

$ClassInfo _ClientCodeWrapper$WrappedJavaFileObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileObject",
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject",
	"javax.tools.JavaFileObject",
	_ClientCodeWrapper$WrappedJavaFileObject_FieldInfo_,
	_ClientCodeWrapper$WrappedJavaFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCodeWrapper$WrappedJavaFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper"
};

$Object* allocate$ClientCodeWrapper$WrappedJavaFileObject($Class* clazz) {
	return $of($alloc(ClientCodeWrapper$WrappedJavaFileObject));
}

$URI* ClientCodeWrapper$WrappedJavaFileObject::toUri() {
	 return this->$ClientCodeWrapper$WrappedFileObject::toUri();
}

$String* ClientCodeWrapper$WrappedJavaFileObject::getName() {
	 return this->$ClientCodeWrapper$WrappedFileObject::getName();
}

$InputStream* ClientCodeWrapper$WrappedJavaFileObject::openInputStream() {
	 return this->$ClientCodeWrapper$WrappedFileObject::openInputStream();
}

$OutputStream* ClientCodeWrapper$WrappedJavaFileObject::openOutputStream() {
	 return this->$ClientCodeWrapper$WrappedFileObject::openOutputStream();
}

$Reader* ClientCodeWrapper$WrappedJavaFileObject::openReader(bool ignoreEncodingErrors) {
	 return this->$ClientCodeWrapper$WrappedFileObject::openReader(ignoreEncodingErrors);
}

$CharSequence* ClientCodeWrapper$WrappedJavaFileObject::getCharContent(bool ignoreEncodingErrors) {
	 return this->$ClientCodeWrapper$WrappedFileObject::getCharContent(ignoreEncodingErrors);
}

$Writer* ClientCodeWrapper$WrappedJavaFileObject::openWriter() {
	 return this->$ClientCodeWrapper$WrappedFileObject::openWriter();
}

int64_t ClientCodeWrapper$WrappedJavaFileObject::getLastModified() {
	 return this->$ClientCodeWrapper$WrappedFileObject::getLastModified();
}

bool ClientCodeWrapper$WrappedJavaFileObject::delete$() {
	 return this->$ClientCodeWrapper$WrappedFileObject::delete$();
}

int32_t ClientCodeWrapper$WrappedJavaFileObject::hashCode() {
	 return this->$ClientCodeWrapper$WrappedFileObject::hashCode();
}

bool ClientCodeWrapper$WrappedJavaFileObject::equals(Object$* arg0) {
	 return this->$ClientCodeWrapper$WrappedFileObject::equals(arg0);
}

$Object* ClientCodeWrapper$WrappedJavaFileObject::clone() {
	 return this->$ClientCodeWrapper$WrappedFileObject::clone();
}

void ClientCodeWrapper$WrappedJavaFileObject::finalize() {
	this->$ClientCodeWrapper$WrappedFileObject::finalize();
}

void ClientCodeWrapper$WrappedJavaFileObject::init$($ClientCodeWrapper* this$0, $JavaFileObject* clientJavaFileObject) {
	$set(this, this$0, this$0);
	$ClientCodeWrapper$WrappedFileObject::init$(this$0, clientJavaFileObject);
}

$JavaFileObject$Kind* ClientCodeWrapper$WrappedJavaFileObject::getKind() {
	try {
		return $nc(($cast($JavaFileObject, this->clientFileObject)))->getKind();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

bool ClientCodeWrapper$WrappedJavaFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	try {
		return $nc(($cast($JavaFileObject, this->clientFileObject)))->isNameCompatible(simpleName, kind);
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$NestingKind* ClientCodeWrapper$WrappedJavaFileObject::getNestingKind() {
	try {
		return $nc(($cast($JavaFileObject, this->clientFileObject)))->getNestingKind();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$Modifier* ClientCodeWrapper$WrappedJavaFileObject::getAccessLevel() {
	try {
		return $nc(($cast($JavaFileObject, this->clientFileObject)))->getAccessLevel();
	} catch ($ClientCodeException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($ClientCodeException, e);
	} catch ($Error& e) {
		$throwNew($ClientCodeException, e);
	}
	$shouldNotReachHere();
}

$String* ClientCodeWrapper$WrappedJavaFileObject::toString() {
	return this->this$0->wrappedToString($of(this)->getClass(), this->clientFileObject);
}

ClientCodeWrapper$WrappedJavaFileObject::ClientCodeWrapper$WrappedJavaFileObject() {
}

$Class* ClientCodeWrapper$WrappedJavaFileObject::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper$WrappedJavaFileObject, name, initialize, &_ClientCodeWrapper$WrappedJavaFileObject_ClassInfo_, allocate$ClientCodeWrapper$WrappedJavaFileObject);
	return class$;
}

$Class* ClientCodeWrapper$WrappedJavaFileObject::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com