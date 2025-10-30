#include <com/sun/tools/javac/file/BaseFileManager$1.h>

#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $BaseFileManager = ::com::sun::tools::javac::file::BaseFileManager;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _BaseFileManager$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/file/BaseFileManager;", nullptr, $FINAL | $SYNTHETIC, $field(BaseFileManager$1, this$0)},
	{}
};

$MethodInfo _BaseFileManager$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BaseFileManager$1::*)($BaseFileManager*,$String*)>(&BaseFileManager$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BaseFileManager$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.file.BaseFileManager",
	"deferredClose",
	"()V"
};

$InnerClassInfo _BaseFileManager$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.BaseFileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BaseFileManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.file.BaseFileManager$1",
	"java.lang.Thread",
	nullptr,
	_BaseFileManager$1_FieldInfo_,
	_BaseFileManager$1_MethodInfo_,
	nullptr,
	&_BaseFileManager$1_EnclosingMethodInfo_,
	_BaseFileManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.BaseFileManager"
};

$Object* allocate$BaseFileManager$1($Class* clazz) {
	return $of($alloc(BaseFileManager$1));
}

void BaseFileManager$1::init$($BaseFileManager* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$Thread::init$(arg0);
}

void BaseFileManager$1::run() {
	try {
		$synchronized(this->this$0) {
			int64_t now = $System::currentTimeMillis();
			while (now < this->this$0->lastUsedTime + this->this$0->deferredCloseTimeout) {
				$of(this->this$0)->wait(this->this$0->lastUsedTime + this->this$0->deferredCloseTimeout - now);
				now = $System::currentTimeMillis();
			}
			this->this$0->deferredCloseTimeout = 0;
			this->this$0->close();
		}
	} catch ($InterruptedException& e) {
	} catch ($IOException& e) {
	}
}

BaseFileManager$1::BaseFileManager$1() {
}

$Class* BaseFileManager$1::load$($String* name, bool initialize) {
	$loadClass(BaseFileManager$1, name, initialize, &_BaseFileManager$1_ClassInfo_, allocate$BaseFileManager$1);
	return class$;
}

$Class* BaseFileManager$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com