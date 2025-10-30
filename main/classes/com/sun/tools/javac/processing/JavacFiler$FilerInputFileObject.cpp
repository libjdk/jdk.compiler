#include <com/sun/tools/javac/processing/JavacFiler$FilerInputFileObject.h>

#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <jcpp.h>

using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
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

$FieldInfo _JavacFiler$FilerInputFileObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerInputFileObject, this$0)},
	{}
};

$MethodInfo _JavacFiler$FilerInputFileObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Ljavax/tools/FileObject;)V", nullptr, 0, $method(static_cast<void(JavacFiler$FilerInputFileObject::*)($JavacFiler*,$FileObject*)>(&JavacFiler$FilerInputFileObject::init$))},
	{"delete", "()Z", nullptr, $PUBLIC},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavacFiler$FilerInputFileObject_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject", "com.sun.tools.javac.processing.JavacFiler", "FilerInputFileObject", $PRIVATE},
	{}
};

$ClassInfo _JavacFiler$FilerInputFileObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler$FilerInputFileObject",
	"javax.tools.ForwardingFileObject",
	nullptr,
	_JavacFiler$FilerInputFileObject_FieldInfo_,
	_JavacFiler$FilerInputFileObject_MethodInfo_,
	"Ljavax/tools/ForwardingFileObject<Ljavax/tools/FileObject;>;",
	nullptr,
	_JavacFiler$FilerInputFileObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$FilerInputFileObject($Class* clazz) {
	return $of($alloc(JavacFiler$FilerInputFileObject));
}

void JavacFiler$FilerInputFileObject::init$($JavacFiler* this$0, $FileObject* fileObject) {
	$set(this, this$0, this$0);
	$ForwardingFileObject::init$(fileObject);
}

$OutputStream* JavacFiler$FilerInputFileObject::openOutputStream() {
	$throwNew($IllegalStateException, "FileObject was not opened for writing."_s);
	$shouldNotReachHere();
}

$Writer* JavacFiler$FilerInputFileObject::openWriter() {
	$throwNew($IllegalStateException, "FileObject was not opened for writing."_s);
	$shouldNotReachHere();
}

bool JavacFiler$FilerInputFileObject::delete$() {
	return false;
}

JavacFiler$FilerInputFileObject::JavacFiler$FilerInputFileObject() {
}

$Class* JavacFiler$FilerInputFileObject::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$FilerInputFileObject, name, initialize, &_JavacFiler$FilerInputFileObject_ClassInfo_, allocate$JavacFiler$FilerInputFileObject);
	return class$;
}

$Class* JavacFiler$FilerInputFileObject::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com