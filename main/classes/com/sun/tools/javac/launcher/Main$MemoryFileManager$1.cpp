#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1.h>

#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/URI.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <jcpp.h>

using $Main$MemoryFileManager = ::com::sun::tools::javac::launcher::Main$MemoryFileManager;
using $Main$MemoryFileManager$1$1 = ::com::sun::tools::javac::launcher::Main$MemoryFileManager$1$1;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MemoryFileManager$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/launcher/Main$MemoryFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryFileManager$1, this$0)},
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryFileManager$1, val$className)},
	{}
};

$MethodInfo _Main$MemoryFileManager$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryFileManager;Ljava/net/URI;Ljavax/tools/JavaFileObject$Kind;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Main$MemoryFileManager$1::*)($Main$MemoryFileManager*,$URI*,$JavaFileObject$Kind*,$String*)>(&Main$MemoryFileManager$1::init$))},
	{"openOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$MemoryFileManager$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.launcher.Main$MemoryFileManager",
	"createInMemoryClassFile",
	"(Ljava/lang/String;)Ljavax/tools/JavaFileObject;"
};

$InnerClassInfo _Main$MemoryFileManager$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$MemoryFileManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MemoryFileManager$1",
	"javax.tools.SimpleJavaFileObject",
	nullptr,
	_Main$MemoryFileManager$1_FieldInfo_,
	_Main$MemoryFileManager$1_MethodInfo_,
	nullptr,
	&_Main$MemoryFileManager$1_EnclosingMethodInfo_,
	_Main$MemoryFileManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MemoryFileManager$1($Class* clazz) {
	return $of($alloc(Main$MemoryFileManager$1));
}

void Main$MemoryFileManager$1::init$($Main$MemoryFileManager* this$0, $URI* arg0, $JavaFileObject$Kind* arg1, $String* val$className) {
	$set(this, this$0, this$0);
	$set(this, val$className, val$className);
	$SimpleJavaFileObject::init$(arg0, arg1);
}

$OutputStream* Main$MemoryFileManager$1::openOutputStream() {
	return $new($Main$MemoryFileManager$1$1, this);
}

Main$MemoryFileManager$1::Main$MemoryFileManager$1() {
}

$Class* Main$MemoryFileManager$1::load$($String* name, bool initialize) {
	$loadClass(Main$MemoryFileManager$1, name, initialize, &_Main$MemoryFileManager$1_ClassInfo_, allocate$Main$MemoryFileManager$1);
	return class$;
}

$Class* Main$MemoryFileManager$1::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com