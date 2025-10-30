#include <com/sun/tools/sjavac/server/IdleResetSjavac.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/server/IdleResetSjavac$1.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <com/sun/tools/sjavac/server/Terminable.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Timer.h>
#include <java/util/TimerTask.h>
#include <jcpp.h>

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $IdleResetSjavac$1 = ::com::sun::tools::sjavac::server::IdleResetSjavac$1;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $Terminable = ::com::sun::tools::sjavac::server::Terminable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::java::util::Timer;
using $TimerTask = ::java::util::TimerTask;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _IdleResetSjavac_FieldInfo_[] = {
	{"delegate", "Lcom/sun/tools/sjavac/server/Sjavac;", nullptr, $PRIVATE | $FINAL, $field(IdleResetSjavac, delegate)},
	{"toShutdown", "Lcom/sun/tools/sjavac/server/Terminable;", nullptr, $PRIVATE | $FINAL, $field(IdleResetSjavac, toShutdown)},
	{"idlenessTimer", "Ljava/util/Timer;", nullptr, $PRIVATE | $FINAL, $field(IdleResetSjavac, idlenessTimer)},
	{"idleTimeout", "J", nullptr, $PRIVATE | $FINAL, $field(IdleResetSjavac, idleTimeout)},
	{"outstandingCalls", "I", nullptr, $PRIVATE, $field(IdleResetSjavac, outstandingCalls)},
	{"idlenessTimerTask", "Ljava/util/TimerTask;", nullptr, $PRIVATE, $field(IdleResetSjavac, idlenessTimerTask)},
	{}
};

$MethodInfo _IdleResetSjavac_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/Sjavac;Lcom/sun/tools/sjavac/server/Terminable;J)V", nullptr, $PUBLIC, $method(static_cast<void(IdleResetSjavac::*)($Sjavac*,$Terminable*,int64_t)>(&IdleResetSjavac::init$))},
	{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"endCall", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(IdleResetSjavac::*)()>(&IdleResetSjavac::endCall))},
	{"scheduleTimeout", "()V", nullptr, $PRIVATE, $method(static_cast<void(IdleResetSjavac::*)()>(&IdleResetSjavac::scheduleTimeout))},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{"startCall", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(IdleResetSjavac::*)()>(&IdleResetSjavac::startCall))},
	{}
};

$InnerClassInfo _IdleResetSjavac_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.IdleResetSjavac$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IdleResetSjavac_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.IdleResetSjavac",
	"java.lang.Object",
	"com.sun.tools.sjavac.server.Sjavac",
	_IdleResetSjavac_FieldInfo_,
	_IdleResetSjavac_MethodInfo_,
	nullptr,
	nullptr,
	_IdleResetSjavac_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.IdleResetSjavac$1"
};

$Object* allocate$IdleResetSjavac($Class* clazz) {
	return $of($alloc(IdleResetSjavac));
}

void IdleResetSjavac::init$($Sjavac* delegate, $Terminable* toShutdown, int64_t idleTimeout) {
	$set(this, idlenessTimer, $new($Timer));
	this->outstandingCalls = 0;
	$set(this, delegate, delegate);
	$set(this, toShutdown, toShutdown);
	this->idleTimeout = idleTimeout;
	scheduleTimeout();
}

$Main$Result* IdleResetSjavac::compile($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	startCall();
	{
		$var($Throwable, var$0, nullptr);
		$var($Main$Result, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->delegate)->compile(args));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endCall();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void IdleResetSjavac::startCall() {
	$synchronized(this) {
		if (++this->outstandingCalls == 1) {
			if (this->idlenessTimerTask == nullptr) {
				$throwNew($IllegalStateException, "Idle timeout already cancelled"_s);
			}
			$nc(this->idlenessTimerTask)->cancel();
			$set(this, idlenessTimerTask, nullptr);
		}
	}
}

void IdleResetSjavac::endCall() {
	$synchronized(this) {
		if (--this->outstandingCalls == 0) {
			scheduleTimeout();
		}
	}
}

void IdleResetSjavac::scheduleTimeout() {
	if (this->idlenessTimerTask != nullptr) {
		$throwNew($IllegalStateException, "Idle timeout already scheduled"_s);
	}
	$set(this, idlenessTimerTask, $new($IdleResetSjavac$1, this));
	$nc(this->idlenessTimer)->schedule(this->idlenessTimerTask, this->idleTimeout);
}

void IdleResetSjavac::shutdown() {
	$nc(this->idlenessTimer)->cancel();
	$nc(this->delegate)->shutdown();
}

IdleResetSjavac::IdleResetSjavac() {
}

$Class* IdleResetSjavac::load$($String* name, bool initialize) {
	$loadClass(IdleResetSjavac, name, initialize, &_IdleResetSjavac_ClassInfo_, allocate$IdleResetSjavac);
	return class$;
}

$Class* IdleResetSjavac::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com