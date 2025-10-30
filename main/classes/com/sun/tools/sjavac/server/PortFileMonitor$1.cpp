#include <com/sun/tools/sjavac/server/PortFileMonitor$1.h>

#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/PortFile.h>
#include <com/sun/tools/sjavac/server/PortFileMonitor.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

using $Log = ::com::sun::tools::sjavac::Log;
using $PortFile = ::com::sun::tools::sjavac::server::PortFile;
using $PortFileMonitor = ::com::sun::tools::sjavac::server::PortFileMonitor;
using $SjavacServer = ::com::sun::tools::sjavac::server::SjavacServer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _PortFileMonitor$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/sjavac/server/PortFileMonitor;", nullptr, $FINAL | $SYNTHETIC, $field(PortFileMonitor$1, this$0)},
	{"val$log", "Lcom/sun/tools/sjavac/Log;", nullptr, $FINAL | $SYNTHETIC, $field(PortFileMonitor$1, val$log)},
	{}
};

$MethodInfo _PortFileMonitor$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/PortFileMonitor;Lcom/sun/tools/sjavac/Log;)V", nullptr, 0, $method(static_cast<void(PortFileMonitor$1::*)($PortFileMonitor*,$Log*)>(&PortFileMonitor$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PortFileMonitor$1_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.server.PortFileMonitor",
	"start",
	"()V"
};

$InnerClassInfo _PortFileMonitor$1_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.PortFileMonitor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PortFileMonitor$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.server.PortFileMonitor$1",
	"java.util.TimerTask",
	nullptr,
	_PortFileMonitor$1_FieldInfo_,
	_PortFileMonitor$1_MethodInfo_,
	nullptr,
	&_PortFileMonitor$1_EnclosingMethodInfo_,
	_PortFileMonitor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.PortFileMonitor"
};

$Object* allocate$PortFileMonitor$1($Class* clazz) {
	return $of($alloc(PortFileMonitor$1));
}

void PortFileMonitor$1::init$($PortFileMonitor* this$0, $Log* val$log) {
	$set(this, this$0, this$0);
	$set(this, val$log, val$log);
	$TimerTask::init$();
}

void PortFileMonitor$1::run() {
	$Log::setLogForCurrentThread(this->val$log);
	$Log::debug("Checking port file status..."_s);
	try {
		if (!$nc(this->this$0->portFile)->exists()) {
			$nc(this->this$0->server)->shutdown("Quitting because portfile was deleted!"_s);
		} else if ($nc(this->this$0->portFile)->markedForStop()) {
			$nc(this->this$0->server)->shutdown("Quitting because a portfile.stop file was found!"_s);
		} else if (!$nc(this->this$0->portFile)->stillMyValues()) {
			$nc(this->this$0->server)->shutdown("Quitting because portfile is now owned by another javac server!"_s);
		}
	} catch ($IOException& e) {
		$Log::error("IOException caught in PortFileMonitor."_s);
		$Log::debug(static_cast<$Throwable*>(e));
	} catch ($InterruptedException& e) {
		$($Thread::currentThread())->interrupt();
		$Log::error(static_cast<$Throwable*>(e));
	}
}

PortFileMonitor$1::PortFileMonitor$1() {
}

$Class* PortFileMonitor$1::load$($String* name, bool initialize) {
	$loadClass(PortFileMonitor$1, name, initialize, &_PortFileMonitor$1_ClassInfo_, allocate$PortFileMonitor$1);
	return class$;
}

$Class* PortFileMonitor$1::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com