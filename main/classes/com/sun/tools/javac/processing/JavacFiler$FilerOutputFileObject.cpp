#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputFileObject.h>

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/processing/JavacFiler$FilerOutputStream.h>
#include <com/sun/tools/javac/processing/JavacFiler$FilerWriter.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/FilterWriter.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <jcpp.h>

using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $JavacFiler$FilerOutputStream = ::com::sun::tools::javac::processing::JavacFiler$FilerOutputStream;
using $JavacFiler$FilerWriter = ::com::sun::tools::javac::processing::JavacFiler$FilerWriter;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $FilterWriter = ::java::io::FilterWriter;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingFileObject = ::javax::tools::ForwardingFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacFiler$FilerOutputFileObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerOutputFileObject, this$0)},
	{"opened", "Z", nullptr, $PRIVATE, $field(JavacFiler$FilerOutputFileObject, opened)},
	{"mod", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE, $field(JavacFiler$FilerOutputFileObject, mod)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavacFiler$FilerOutputFileObject, name)},
	{}
};

$MethodInfo _JavacFiler$FilerOutputFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljavax/tools/FileObject;)V", nullptr, 0, $method(static_cast<void(JavacFiler$FilerOutputFileObject::*)($JavacFiler*,$Symbol$ModuleSymbol*,$String*,$FileObject*)>(&JavacFiler$FilerOutputFileObject::init$))},
	{"delete", "()Z", nullptr, $PUBLIC},
	{"getCharContent", "(Z)Ljava/lang/CharSequence;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"openReader", "(Z)Ljava/io/Reader;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavacFiler$FilerOutputFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerOutputFileObject", $PRIVATE},
	{}
};

$ClassInfo _JavacFiler$FilerOutputFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler$FilerOutputFileObject",
	"javax.tools.ForwardingFileObject",
	nullptr,
	_JavacFiler$FilerOutputFileObject_FieldInfo_,
	_JavacFiler$FilerOutputFileObject_MethodInfo_,
	"Ljavax/tools/ForwardingFileObject<Ljavax/tools/FileObject;>;",
	nullptr,
	_JavacFiler$FilerOutputFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$FilerOutputFileObject($Class* clazz) {
	return $of($alloc(JavacFiler$FilerOutputFileObject));
}

void JavacFiler$FilerOutputFileObject::init$($JavacFiler* this$0, $Symbol$ModuleSymbol* mod, $String* name, $FileObject* fileObject) {
	$set(this, this$0, this$0);
	$ForwardingFileObject::init$(fileObject);
	this->opened = false;
	$set(this, mod, mod);
	$set(this, name, name);
}

$OutputStream* JavacFiler$FilerOutputFileObject::openOutputStream() {
	$synchronized(this) {
		if (this->opened) {
			$throwNew($IOException, "Output stream or writer has already been opened."_s);
		}
		this->opened = true;
		return $new($JavacFiler$FilerOutputStream, this->this$0, this->mod, this->name, this->fileObject);
	}
}

$Writer* JavacFiler$FilerOutputFileObject::openWriter() {
	$synchronized(this) {
		if (this->opened) {
			$throwNew($IOException, "Output stream or writer has already been opened."_s);
		}
		this->opened = true;
		return $new($JavacFiler$FilerWriter, this->this$0, this->mod, this->name, this->fileObject);
	}
}

$InputStream* JavacFiler$FilerOutputFileObject::openInputStream() {
	$throwNew($IllegalStateException, "FileObject was not opened for reading."_s);
	$shouldNotReachHere();
}

$Reader* JavacFiler$FilerOutputFileObject::openReader(bool ignoreEncodingErrors) {
	$throwNew($IllegalStateException, "FileObject was not opened for reading."_s);
	$shouldNotReachHere();
}

$CharSequence* JavacFiler$FilerOutputFileObject::getCharContent(bool ignoreEncodingErrors) {
	$throwNew($IllegalStateException, "FileObject was not opened for reading."_s);
	$shouldNotReachHere();
}

bool JavacFiler$FilerOutputFileObject::delete$() {
	return false;
}

JavacFiler$FilerOutputFileObject::JavacFiler$FilerOutputFileObject() {
}

$Class* JavacFiler$FilerOutputFileObject::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$FilerOutputFileObject, name, initialize, &_JavacFiler$FilerOutputFileObject_ClassInfo_, allocate$JavacFiler$FilerOutputFileObject);
	return class$;
}

$Class* JavacFiler$FilerOutputFileObject::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com