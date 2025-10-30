#include <com/sun/tools/sjavac/comp/PooledSjavac.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef SECONDS

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PooledSjavac$$Lambda$lambda$compile$0 : public $Callable {
	$class(PooledSjavac$$Lambda$lambda$compile$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(PooledSjavac* inst, $Log* log, $StringArray* args) {
		$set(this, inst$, inst);
		$set(this, log, log);
		$set(this, args, args);
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->lambda$compile$0(log, args));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PooledSjavac$$Lambda$lambda$compile$0>());
	}
	PooledSjavac* inst$ = nullptr;
	$Log* log = nullptr;
	$StringArray* args = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PooledSjavac$$Lambda$lambda$compile$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PooledSjavac$$Lambda$lambda$compile$0, inst$)},
	{"log", "Lcom/sun/tools/sjavac/Log;", nullptr, $PUBLIC, $field(PooledSjavac$$Lambda$lambda$compile$0, log)},
	{"args", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(PooledSjavac$$Lambda$lambda$compile$0, args)},
	{}
};
$MethodInfo PooledSjavac$$Lambda$lambda$compile$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/comp/PooledSjavac;Lcom/sun/tools/sjavac/Log;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PooledSjavac$$Lambda$lambda$compile$0::*)(PooledSjavac*,$Log*,$StringArray*)>(&PooledSjavac$$Lambda$lambda$compile$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PooledSjavac$$Lambda$lambda$compile$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.PooledSjavac$$Lambda$lambda$compile$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* PooledSjavac$$Lambda$lambda$compile$0::load$($String* name, bool initialize) {
	$loadClass(PooledSjavac$$Lambda$lambda$compile$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PooledSjavac$$Lambda$lambda$compile$0::class$ = nullptr;

$FieldInfo _PooledSjavac_FieldInfo_[] = {
	{"delegate", "Lcom/sun/tools/sjavac/server/Sjavac;", nullptr, $FINAL, $field(PooledSjavac, delegate)},
	{"pool", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL, $field(PooledSjavac, pool)},
	{}
};

$MethodInfo _PooledSjavac_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/Sjavac;I)V", nullptr, $PUBLIC, $method(static_cast<void(PooledSjavac::*)($Sjavac*,int32_t)>(&PooledSjavac::init$))},
	{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"lambda$compile$0", "(Lcom/sun/tools/sjavac/Log;[Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Main$Result*(PooledSjavac::*)($Log*,$StringArray*)>(&PooledSjavac::lambda$compile$0)), "java.lang.Exception"},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PooledSjavac_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.PooledSjavac",
	"java.lang.Object",
	"com.sun.tools.sjavac.server.Sjavac",
	_PooledSjavac_FieldInfo_,
	_PooledSjavac_MethodInfo_
};

$Object* allocate$PooledSjavac($Class* clazz) {
	return $of($alloc(PooledSjavac));
}

void PooledSjavac::init$($Sjavac* delegate, int32_t poolsize) {
	$Objects::requireNonNull(delegate);
	$set(this, delegate, delegate);
	$set(this, pool, $Executors::newFixedThreadPool(poolsize));
}

$Main$Result* PooledSjavac::compile($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Log, log, $Log::get());
	try {
		return $cast($Main$Result, $nc($($nc(this->pool)->submit(static_cast<$Callable*>($$new(PooledSjavac$$Lambda$lambda$compile$0, this, log, args)))))->get());
	} catch ($Exception& e) {
		e->printStackTrace();
		$throwNew($RuntimeException, "Error during compile"_s, e);
	}
	$shouldNotReachHere();
}

void PooledSjavac::shutdown() {
	$Log::debug("Shutting down PooledSjavac"_s);
	$nc(this->pool)->shutdown();
	try {
		$init($TimeUnit);
		if (!$nc(this->pool)->awaitTermination(60, $TimeUnit::SECONDS)) {
			$nc(this->pool)->shutdownNow();
			if (!$nc(this->pool)->awaitTermination(60, $TimeUnit::SECONDS)) {
				$Log::error("ThreadPool did not terminate"_s);
			}
		}
	} catch ($InterruptedException& ie) {
		$nc(this->pool)->shutdownNow();
		$($Thread::currentThread())->interrupt();
	}
	$nc(this->delegate)->shutdown();
}

$Main$Result* PooledSjavac::lambda$compile$0($Log* log, $StringArray* args) {
	$Log::setLogForCurrentThread(log);
	return $nc(this->delegate)->compile(args);
}

PooledSjavac::PooledSjavac() {
}

$Class* PooledSjavac::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PooledSjavac$$Lambda$lambda$compile$0::classInfo$.name)) {
			return PooledSjavac$$Lambda$lambda$compile$0::load$(name, initialize);
		}
	}
	$loadClass(PooledSjavac, name, initialize, &_PooledSjavac_ClassInfo_, allocate$PooledSjavac);
	return class$;
}

$Class* PooledSjavac::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com