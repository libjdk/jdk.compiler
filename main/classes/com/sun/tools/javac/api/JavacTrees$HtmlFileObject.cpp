#include <com/sun/tools/javac/api/JavacTrees$HtmlFileObject.h>

#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <jcpp.h>

using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Modifier = ::javax::lang::model::element::Modifier;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$MethodInfo _JavacTrees$HtmlFileObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delete$", "()Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"*getLastModified", "()J", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/tools/FileObject;)V", nullptr, $PUBLIC, $method(static_cast<void(JavacTrees$HtmlFileObject::*)($FileObject*)>(&JavacTrees$HtmlFileObject::init$))},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"*toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"*openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"*openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"*openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC},
	{"*openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacTrees$HtmlFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTrees$HtmlFileObject", "com.sun.tools.javac.api.JavacTrees", "HtmlFileObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavacTrees$HtmlFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.api.JavacTrees$HtmlFileObject",
	"javax.tools.ForwardingFileObject",
	"javax.tools.JavaFileObject",
	nullptr,
	_JavacTrees$HtmlFileObject_MethodInfo_,
	"Ljavax/tools/ForwardingFileObject<Ljavax/tools/FileObject;>;Ljavax/tools/JavaFileObject;",
	nullptr,
	_JavacTrees$HtmlFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTrees"
};

$Object* allocate$JavacTrees$HtmlFileObject($Class* clazz) {
	return $of($alloc(JavacTrees$HtmlFileObject));
}

$URI* JavacTrees$HtmlFileObject::toUri() {
	 return this->$ForwardingFileObject::toUri();
}

$String* JavacTrees$HtmlFileObject::getName() {
	 return this->$ForwardingFileObject::getName();
}

$InputStream* JavacTrees$HtmlFileObject::openInputStream() {
	 return this->$ForwardingFileObject::openInputStream();
}

$OutputStream* JavacTrees$HtmlFileObject::openOutputStream() {
	 return this->$ForwardingFileObject::openOutputStream();
}

$Reader* JavacTrees$HtmlFileObject::openReader(bool arg0) {
	 return this->$ForwardingFileObject::openReader(arg0);
}

$CharSequence* JavacTrees$HtmlFileObject::getCharContent(bool arg0) {
	 return this->$ForwardingFileObject::getCharContent(arg0);
}

$Writer* JavacTrees$HtmlFileObject::openWriter() {
	 return this->$ForwardingFileObject::openWriter();
}

int64_t JavacTrees$HtmlFileObject::getLastModified() {
	 return this->$ForwardingFileObject::getLastModified();
}

bool JavacTrees$HtmlFileObject::delete$() {
	 return this->$ForwardingFileObject::delete$();
}

int32_t JavacTrees$HtmlFileObject::hashCode() {
	 return this->$ForwardingFileObject::hashCode();
}

bool JavacTrees$HtmlFileObject::equals(Object$* arg0) {
	 return this->$ForwardingFileObject::equals(arg0);
}

$Object* JavacTrees$HtmlFileObject::clone() {
	 return this->$ForwardingFileObject::clone();
}

$String* JavacTrees$HtmlFileObject::toString() {
	 return this->$ForwardingFileObject::toString();
}

void JavacTrees$HtmlFileObject::finalize() {
	this->$ForwardingFileObject::finalize();
}

void JavacTrees$HtmlFileObject::init$($FileObject* fileObject) {
	$ForwardingFileObject::init$(fileObject);
}

$JavaFileObject$Kind* JavacTrees$HtmlFileObject::getKind() {
	return $BaseFileManager::getKind($($nc(this->fileObject)->getName()));
}

bool JavacTrees$HtmlFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return false;
}

$NestingKind* JavacTrees$HtmlFileObject::getNestingKind() {
	return nullptr;
}

$Modifier* JavacTrees$HtmlFileObject::getAccessLevel() {
	return nullptr;
}

JavacTrees$HtmlFileObject::JavacTrees$HtmlFileObject() {
}

$Class* JavacTrees$HtmlFileObject::load$($String* name, bool initialize) {
	$loadClass(JavacTrees$HtmlFileObject, name, initialize, &_JavacTrees$HtmlFileObject_ClassInfo_, allocate$JavacTrees$HtmlFileObject);
	return class$;
}

$Class* JavacTrees$HtmlFileObject::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com