#include <com/sun/tools/javac/processing/JavacFiler$FilerInputJavaFileObject.h>

#include <com/sun/tools/javac/processing/JavacFiler$FilerInputFileObject.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $JavacFiler$FilerInputFileObject = ::com::sun::tools::javac::processing::JavacFiler$FilerInputFileObject;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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
				namespace processing {

$FieldInfo _JavacFiler$FilerInputJavaFileObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerInputJavaFileObject, this$0)},
	{"javaFileObject", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE | $FINAL, $field(JavacFiler$FilerInputJavaFileObject, javaFileObject)},
	{}
};

$MethodInfo _JavacFiler$FilerInputJavaFileObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delete$", "()Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"*getLastModified", "()J", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Ljavax/tools/JavaFileObject;)V", nullptr, 0, $method(static_cast<void(JavacFiler$FilerInputJavaFileObject::*)($JavacFiler*,$JavaFileObject*)>(&JavacFiler$FilerInputJavaFileObject::init$))},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"*openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"*openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"*toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"*openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"*openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFiler$FilerInputJavaFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$FilerInputJavaFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerInputJavaFileObject", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerInputFileObject", $PRIVATE},
	{}
};

$ClassInfo _JavacFiler$FilerInputJavaFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler$FilerInputJavaFileObject",
	"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject",
	"javax.tools.JavaFileObject",
	_JavacFiler$FilerInputJavaFileObject_FieldInfo_,
	_JavacFiler$FilerInputJavaFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFiler$FilerInputJavaFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$FilerInputJavaFileObject($Class* clazz) {
	return $of($alloc(JavacFiler$FilerInputJavaFileObject));
}

$OutputStream* JavacFiler$FilerInputJavaFileObject::openOutputStream() {
	 return this->$JavacFiler$FilerInputFileObject::openOutputStream();
}

$Writer* JavacFiler$FilerInputJavaFileObject::openWriter() {
	 return this->$JavacFiler$FilerInputFileObject::openWriter();
}

bool JavacFiler$FilerInputJavaFileObject::delete$() {
	 return this->$JavacFiler$FilerInputFileObject::delete$();
}

$URI* JavacFiler$FilerInputJavaFileObject::toUri() {
	 return this->$JavacFiler$FilerInputFileObject::toUri();
}

$String* JavacFiler$FilerInputJavaFileObject::getName() {
	 return this->$JavacFiler$FilerInputFileObject::getName();
}

$InputStream* JavacFiler$FilerInputJavaFileObject::openInputStream() {
	 return this->$JavacFiler$FilerInputFileObject::openInputStream();
}

$Reader* JavacFiler$FilerInputJavaFileObject::openReader(bool arg0) {
	 return this->$JavacFiler$FilerInputFileObject::openReader(arg0);
}

$CharSequence* JavacFiler$FilerInputJavaFileObject::getCharContent(bool arg0) {
	 return this->$JavacFiler$FilerInputFileObject::getCharContent(arg0);
}

int64_t JavacFiler$FilerInputJavaFileObject::getLastModified() {
	 return this->$JavacFiler$FilerInputFileObject::getLastModified();
}

int32_t JavacFiler$FilerInputJavaFileObject::hashCode() {
	 return this->$JavacFiler$FilerInputFileObject::hashCode();
}

bool JavacFiler$FilerInputJavaFileObject::equals(Object$* arg0) {
	 return this->$JavacFiler$FilerInputFileObject::equals(arg0);
}

$Object* JavacFiler$FilerInputJavaFileObject::clone() {
	 return this->$JavacFiler$FilerInputFileObject::clone();
}

$String* JavacFiler$FilerInputJavaFileObject::toString() {
	 return this->$JavacFiler$FilerInputFileObject::toString();
}

void JavacFiler$FilerInputJavaFileObject::finalize() {
	this->$JavacFiler$FilerInputFileObject::finalize();
}

void JavacFiler$FilerInputJavaFileObject::init$($JavacFiler* this$0, $JavaFileObject* javaFileObject) {
	$set(this, this$0, this$0);
	$JavacFiler$FilerInputFileObject::init$(this$0, javaFileObject);
	$set(this, javaFileObject, javaFileObject);
}

$JavaFileObject$Kind* JavacFiler$FilerInputJavaFileObject::getKind() {
	return $nc(this->javaFileObject)->getKind();
}

bool JavacFiler$FilerInputJavaFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return $nc(this->javaFileObject)->isNameCompatible(simpleName, kind);
}

$NestingKind* JavacFiler$FilerInputJavaFileObject::getNestingKind() {
	return $nc(this->javaFileObject)->getNestingKind();
}

$Modifier* JavacFiler$FilerInputJavaFileObject::getAccessLevel() {
	return $nc(this->javaFileObject)->getAccessLevel();
}

JavacFiler$FilerInputJavaFileObject::JavacFiler$FilerInputJavaFileObject() {
}

$Class* JavacFiler$FilerInputJavaFileObject::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$FilerInputJavaFileObject, name, initialize, &_JavacFiler$FilerInputJavaFileObject_ClassInfo_, allocate$JavacFiler$FilerInputJavaFileObject);
	return class$;
}

$Class* JavacFiler$FilerInputJavaFileObject::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com