#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1$1.h>

#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Main$MemoryFileManager = ::com::sun::tools::javac::launcher::Main$MemoryFileManager;
using $Main$MemoryFileManager$1 = ::com::sun::tools::javac::launcher::Main$MemoryFileManager$1;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MemoryFileManager$1$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/launcher/Main$MemoryFileManager$1;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryFileManager$1$1, this$1)},
	{}
};

$MethodInfo _Main$MemoryFileManager$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryFileManager$1;)V", nullptr, 0, $method(static_cast<void(Main$MemoryFileManager$1$1::*)($Main$MemoryFileManager$1*)>(&Main$MemoryFileManager$1$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Main$MemoryFileManager$1$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.launcher.Main$MemoryFileManager$1",
	"openOutputStream",
	"()Ljava/io/OutputStream;"
};

$InnerClassInfo _Main$MemoryFileManager$1$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$MemoryFileManager$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_Main$MemoryFileManager$1$1_FieldInfo_,
	_Main$MemoryFileManager$1$1_MethodInfo_,
	nullptr,
	&_Main$MemoryFileManager$1$1_EnclosingMethodInfo_,
	_Main$MemoryFileManager$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MemoryFileManager$1$1($Class* clazz) {
	return $of($alloc(Main$MemoryFileManager$1$1));
}

void Main$MemoryFileManager$1$1::init$($Main$MemoryFileManager$1* this$1) {
	$set(this, this$1, this$1);
	$ByteArrayOutputStream::init$();
}

void Main$MemoryFileManager$1$1::close() {
	$ByteArrayOutputStream::close();
	$nc($nc(this->this$1->this$0)->map)->put(this->this$1->val$className, $(toByteArray()));
}

Main$MemoryFileManager$1$1::Main$MemoryFileManager$1$1() {
}

$Class* Main$MemoryFileManager$1$1::load$($String* name, bool initialize) {
	$loadClass(Main$MemoryFileManager$1$1, name, initialize, &_Main$MemoryFileManager$1$1_ClassInfo_, allocate$Main$MemoryFileManager$1$1);
	return class$;
}

$Class* Main$MemoryFileManager$1$1::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com