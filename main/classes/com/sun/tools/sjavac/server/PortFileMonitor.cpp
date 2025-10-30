#include <com/sun/tools/sjavac/server/PortFileMonitor.h>

#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/PortFile.h>
#include <com/sun/tools/sjavac/server/PortFileMonitor$1.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <java/util/Timer.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

#undef CHECK_PORTFILE_INTERVAL

using $Log = ::com::sun::tools::sjavac::Log;
using $PortFile = ::com::sun::tools::sjavac::server::PortFile;
using $PortFileMonitor$1 = ::com::sun::tools::sjavac::server::PortFileMonitor$1;
using $SjavacServer = ::com::sun::tools::sjavac::server::SjavacServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::java::util::Timer;
using $TimerTask = ::java::util::TimerTask;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _PortFileMonitor_FieldInfo_[] = {
	{"CHECK_PORTFILE_INTERVAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortFileMonitor, CHECK_PORTFILE_INTERVAL)},
	{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE | $FINAL, $field(PortFileMonitor, timer)},
	{"portFile", "Lcom/sun/tools/sjavac/server/PortFile;", nullptr, $PRIVATE | $FINAL, $field(PortFileMonitor, portFile)},
	{"server", "Lcom/sun/tools/sjavac/server/SjavacServer;", nullptr, $PRIVATE | $FINAL, $field(PortFileMonitor, server)},
	{}
};

$MethodInfo _PortFileMonitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/PortFile;Lcom/sun/tools/sjavac/server/SjavacServer;)V", nullptr, $PUBLIC, $method(static_cast<void(PortFileMonitor::*)($PortFile*,$SjavacServer*)>(&PortFileMonitor::init$))},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PortFileMonitor_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.PortFileMonitor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PortFileMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.PortFileMonitor",
	"java.lang.Object",
	nullptr,
	_PortFileMonitor_FieldInfo_,
	_PortFileMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_PortFileMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.PortFileMonitor$1"
};

$Object* allocate$PortFileMonitor($Class* clazz) {
	return $of($alloc(PortFileMonitor));
}

void PortFileMonitor::init$($PortFile* portFile, $SjavacServer* server) {
	$set(this, timer, $new($Timer));
	$set(this, portFile, portFile);
	$set(this, server, server);
}

void PortFileMonitor::start() {
	$useLocalCurrentObjectStackCache();
	$var($Log, log, $Log::get());
	$var($TimerTask, shutdownCheck, $new($PortFileMonitor$1, this, log));
	$nc(this->timer)->schedule(shutdownCheck, (int64_t)0, (int64_t)PortFileMonitor::CHECK_PORTFILE_INTERVAL);
}

void PortFileMonitor::shutdown() {
	$nc(this->timer)->cancel();
}

PortFileMonitor::PortFileMonitor() {
}

$Class* PortFileMonitor::load$($String* name, bool initialize) {
	$loadClass(PortFileMonitor, name, initialize, &_PortFileMonitor_ClassInfo_, allocate$PortFileMonitor);
	return class$;
}

$Class* PortFileMonitor::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com