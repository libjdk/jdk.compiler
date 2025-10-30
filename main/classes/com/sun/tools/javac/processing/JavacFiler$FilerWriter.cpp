#include <com/sun/tools/javac/processing/JavacFiler$FilerWriter.h>

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/processing/JavacFiler.h>
#include <java/io/FilterWriter.h>
#include <java/io/Writer.h>
#include <javax/tools/FileObject.h>
#include <jcpp.h>

using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $JavacFiler = ::com::sun::tools::javac::processing::JavacFiler;
using $FilterWriter = ::java::io::FilterWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _JavacFiler$FilerWriter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/processing/JavacFiler;", nullptr, $FINAL | $SYNTHETIC, $field(JavacFiler$FilerWriter, this$0)},
	{"mod", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, 0, $field(JavacFiler$FilerWriter, mod)},
	{"typeName", "Ljava/lang/String;", nullptr, 0, $field(JavacFiler$FilerWriter, typeName)},
	{"fileObject", "Ljavax/tools/FileObject;", nullptr, 0, $field(JavacFiler$FilerWriter, fileObject)},
	{"closed", "Z", nullptr, 0, $field(JavacFiler$FilerWriter, closed)},
	{}
};

$MethodInfo _JavacFiler$FilerWriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/processing/JavacFiler;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Ljava/lang/String;Ljavax/tools/FileObject;)V", nullptr, 0, $method(static_cast<void(JavacFiler$FilerWriter::*)($JavacFiler*,$Symbol$ModuleSymbol*,$String*,$FileObject*)>(&JavacFiler$FilerWriter::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavacFiler$FilerWriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.JavacFiler$FilerWriter", "com.sun.tools.javac.processing.JavacFiler", "FilerWriter", $PRIVATE},
	{}
};

$ClassInfo _JavacFiler$FilerWriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.JavacFiler$FilerWriter",
	"java.io.FilterWriter",
	nullptr,
	_JavacFiler$FilerWriter_FieldInfo_,
	_JavacFiler$FilerWriter_MethodInfo_,
	nullptr,
	nullptr,
	_JavacFiler$FilerWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.JavacFiler"
};

$Object* allocate$JavacFiler$FilerWriter($Class* clazz) {
	return $of($alloc(JavacFiler$FilerWriter));
}

void JavacFiler$FilerWriter::init$($JavacFiler* this$0, $Symbol$ModuleSymbol* mod, $String* typeName, $FileObject* fileObject) {
	$set(this, this$0, this$0);
	$FilterWriter::init$($($nc(fileObject)->openWriter()));
	this->closed = false;
	$set(this, mod, mod);
	$set(this, typeName, typeName);
	$set(this, fileObject, fileObject);
}

void JavacFiler$FilerWriter::close() {
	$synchronized(this) {
		if (!this->closed) {
			this->closed = true;
			this->this$0->closeFileObject(this->mod, this->typeName, this->fileObject);
			$nc(this->out)->close();
		}
	}
}

JavacFiler$FilerWriter::JavacFiler$FilerWriter() {
}

$Class* JavacFiler$FilerWriter::load$($String* name, bool initialize) {
	$loadClass(JavacFiler$FilerWriter, name, initialize, &_JavacFiler$FilerWriter_ClassInfo_, allocate$JavacFiler$FilerWriter);
	return class$;
}

$Class* JavacFiler$FilerWriter::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com