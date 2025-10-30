#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputJavaFileObject.h>

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputFileObject.h>
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

using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $JavacFiler$FilerOutputFileObject = ::com::sun::tools::javac::processing::JavacFiler$FilerOutputFileObject;
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

$FieldInfo _JavacFiler$FilerOutputJavaFileObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerOutputJavaFileObject, this$0)},
	{"javaFileObject", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE | $FINAL, $field(JavacFiler$FilerOutputJavaFileObject, javaFileObject)},
	{}
};

$MethodInfo _JavacFiler$FilerOutputJavaFileObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*delete$", "()Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"*getLastModified", "()J", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljavax/tools/JavaFileObject;)V", nullptr, 0, $method(static_cast<void(JavacFiler$FilerOutputJavaFileObject::*)($JavacFiler*,$Symbol$ModuleSymbol*,$String*,$JavaFileObject*)>(&JavacFiler$FilerOutputJavaFileObject::init$))},
	{"getAccessLevel", "()Ljavax/lang/model/element/Modifier;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC},
	{"isNameCompatible", "(Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;)Z", nullptr, $PUBLIC},
	{"*openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"*openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC},
	{"*toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavacFiler$FilerOutputJavaFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$FilerOutputJavaFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputJavaFileObject", $PRIVATE},
	{"com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputFileObject", $PRIVATE},
	{}
};

$ClassInfo _JavacFiler$FilerOutputJavaFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler$FilerOutputJavaFileObject",
	"com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject",
	"javax.tools.JavaFileObject",
	_JavacFiler$FilerOutputJavaFileObject_FieldInfo_,
	_JavacFiler$FilerOutputJavaFileObject_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFiler$FilerOutputJavaFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$FilerOutputJavaFileObject($Class* clazz) {
	return $of($alloc(JavacFiler$FilerOutputJavaFileObject));
}

$OutputStream* JavacFiler$FilerOutputJavaFileObject::openOutputStream() {
	 return this->$JavacFiler$FilerOutputFileObject::openOutputStream();
}

$Writer* JavacFiler$FilerOutputJavaFileObject::openWriter() {
	 return this->$JavacFiler$FilerOutputFileObject::openWriter();
}

$InputStream* JavacFiler$FilerOutputJavaFileObject::openInputStream() {
	 return this->$JavacFiler$FilerOutputFileObject::openInputStream();
}

$Reader* JavacFiler$FilerOutputJavaFileObject::openReader(bool ignoreEncodingErrors) {
	 return this->$JavacFiler$FilerOutputFileObject::openReader(ignoreEncodingErrors);
}

$CharSequence* JavacFiler$FilerOutputJavaFileObject::getCharContent(bool ignoreEncodingErrors) {
	 return this->$JavacFiler$FilerOutputFileObject::getCharContent(ignoreEncodingErrors);
}

bool JavacFiler$FilerOutputJavaFileObject::delete$() {
	 return this->$JavacFiler$FilerOutputFileObject::delete$();
}

$URI* JavacFiler$FilerOutputJavaFileObject::toUri() {
	 return this->$JavacFiler$FilerOutputFileObject::toUri();
}

$String* JavacFiler$FilerOutputJavaFileObject::getName() {
	 return this->$JavacFiler$FilerOutputFileObject::getName();
}

int64_t JavacFiler$FilerOutputJavaFileObject::getLastModified() {
	 return this->$JavacFiler$FilerOutputFileObject::getLastModified();
}

int32_t JavacFiler$FilerOutputJavaFileObject::hashCode() {
	 return this->$JavacFiler$FilerOutputFileObject::hashCode();
}

bool JavacFiler$FilerOutputJavaFileObject::equals(Object$* arg0) {
	 return this->$JavacFiler$FilerOutputFileObject::equals(arg0);
}

$Object* JavacFiler$FilerOutputJavaFileObject::clone() {
	 return this->$JavacFiler$FilerOutputFileObject::clone();
}

$String* JavacFiler$FilerOutputJavaFileObject::toString() {
	 return this->$JavacFiler$FilerOutputFileObject::toString();
}

void JavacFiler$FilerOutputJavaFileObject::finalize() {
	this->$JavacFiler$FilerOutputFileObject::finalize();
}

void JavacFiler$FilerOutputJavaFileObject::init$($JavacFiler* this$0, $Symbol$ModuleSymbol* mod, $String* name, $JavaFileObject* javaFileObject) {
	$set(this, this$0, this$0);
	$JavacFiler$FilerOutputFileObject::init$(this$0, mod, name, javaFileObject);
	$set(this, javaFileObject, javaFileObject);
}

$JavaFileObject$Kind* JavacFiler$FilerOutputJavaFileObject::getKind() {
	return $nc(this->javaFileObject)->getKind();
}

bool JavacFiler$FilerOutputJavaFileObject::isNameCompatible($String* simpleName, $JavaFileObject$Kind* kind) {
	return $nc(this->javaFileObject)->isNameCompatible(simpleName, kind);
}

$NestingKind* JavacFiler$FilerOutputJavaFileObject::getNestingKind() {
	return $nc(this->javaFileObject)->getNestingKind();
}

$Modifier* JavacFiler$FilerOutputJavaFileObject::getAccessLevel() {
	return $nc(this->javaFileObject)->getAccessLevel();
}

JavacFiler$FilerOutputJavaFileObject::JavacFiler$FilerOutputJavaFileObject() {
}

$Class* JavacFiler$FilerOutputJavaFileObject::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$FilerOutputJavaFileObject, name, initialize, &_JavacFiler$FilerOutputJavaFileObject_ClassInfo_, allocate$JavacFiler$FilerOutputJavaFileObject);
	return class$;
}

$Class* JavacFiler$FilerOutputJavaFileObject::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com