#include <com/sun/tools/sjavac/server/IdleResetSjavac$1.h>

#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/IdleResetSjavac.h>
#include <com/sun/tools/sjavac/server/ServerMain.h>
#include <com/sun/tools/sjavac/server/Terminable.h>
#include <com/sun/tools/sjavac/server/log/LazyInitFileLog.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

using $Log = ::com::sun::tools::sjavac::Log;
using $IdleResetSjavac = ::com::sun::tools::sjavac::server::IdleResetSjavac;
using $ServerMain = ::com::sun::tools::sjavac::server::ServerMain;
using $Terminable = ::com::sun::tools::sjavac::server::Terminable;
using $LazyInitFileLog = ::com::sun::tools::sjavac::server::log::LazyInitFileLog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _IdleResetSjavac$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/sjavac/server/IdleResetSjavac;", nullptr, $FINAL | $SYNTHETIC, $field(IdleResetSjavac$1, this$0)},
	{}
};

$MethodInfo _IdleResetSjavac$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/IdleResetSjavac;)V", nullptr, 0, $method(static_cast<void(IdleResetSjavac$1::*)($IdleResetSjavac*)>(&IdleResetSjavac$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IdleResetSjavac$1_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.server.IdleResetSjavac",
	"scheduleTimeout",
	"()V"
};

$InnerClassInfo _IdleResetSjavac$1_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.IdleResetSjavac$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IdleResetSjavac$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.server.IdleResetSjavac$1",
	"java.util.TimerTask",
	nullptr,
	_IdleResetSjavac$1_FieldInfo_,
	_IdleResetSjavac$1_MethodInfo_,
	nullptr,
	&_IdleResetSjavac$1_EnclosingMethodInfo_,
	_IdleResetSjavac$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.IdleResetSjavac"
};

$Object* allocate$IdleResetSjavac$1($Class* clazz) {
	return $of($alloc(IdleResetSjavac$1));
}

void IdleResetSjavac$1::init$($IdleResetSjavac* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void IdleResetSjavac$1::run() {
	$useLocalCurrentObjectStackCache();
	$Log::setLogForCurrentThread($($ServerMain::getErrorLog()));
	$nc(this->this$0->toShutdown)->shutdown($$str({"Server has been idle for "_s, $$str((this->this$0->idleTimeout / 1000)), " seconds."_s}));
}

IdleResetSjavac$1::IdleResetSjavac$1() {
}

$Class* IdleResetSjavac$1::load$($String* name, bool initialize) {
	$loadClass(IdleResetSjavac$1, name, initialize, &_IdleResetSjavac$1_ClassInfo_, allocate$IdleResetSjavac$1);
	return class$;
}

$Class* IdleResetSjavac$1::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com