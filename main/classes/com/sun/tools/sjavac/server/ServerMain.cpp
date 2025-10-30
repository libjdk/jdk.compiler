#include <com/sun/tools/sjavac/server/ServerMain.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <com/sun/tools/sjavac/server/log/LazyInitFileLog.h>
#include <com/sun/tools/sjavac/server/log/LoggingOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef CMDERR
#undef ERROR
#undef INFO

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $SjavacServer = ::com::sun::tools::sjavac::server::SjavacServer;
using $LazyInitFileLog = ::com::sun::tools::sjavac::server::log::LazyInitFileLog;
using $LoggingOutputStream = ::com::sun::tools::sjavac::server::log::LoggingOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class ServerMain$$Lambda$lambda$run$0 : public $Thread$UncaughtExceptionHandler {
	$class(ServerMain$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Thread$UncaughtExceptionHandler)
public:
	void init$() {
	}
	virtual void uncaughtException($Thread* t, $Throwable* e) override {
		ServerMain::lambda$run$0(t, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ServerMain$$Lambda$lambda$run$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ServerMain$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServerMain$$Lambda$lambda$run$0::*)()>(&ServerMain$$Lambda$lambda$run$0::init$))},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ServerMain$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.server.ServerMain$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.lang.Thread$UncaughtExceptionHandler",
	nullptr,
	methodInfos
};
$Class* ServerMain$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(ServerMain$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ServerMain$$Lambda$lambda$run$0::class$ = nullptr;

$FieldInfo _ServerMain_FieldInfo_[] = {
	{"errorLog", "Lcom/sun/tools/sjavac/server/log/LazyInitFileLog;", nullptr, $PRIVATE | $STATIC, $staticField(ServerMain, errorLog)},
	{}
};

$MethodInfo _ServerMain_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServerMain::*)()>(&ServerMain::init$))},
	{"getErrorLog", "()Lcom/sun/tools/sjavac/server/log/LazyInitFileLog;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LazyInitFileLog*(*)()>(&ServerMain::getErrorLog))},
	{"lambda$run$0", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Thread*,$Throwable*)>(&ServerMain::lambda$run$0))},
	{"run", "([Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($StringArray*)>(&ServerMain::run))},
	{}
};

$ClassInfo _ServerMain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.ServerMain",
	"java.lang.Object",
	nullptr,
	_ServerMain_FieldInfo_,
	_ServerMain_MethodInfo_
};

$Object* allocate$ServerMain($Class* clazz) {
	return $of($alloc(ServerMain));
}

$LazyInitFileLog* ServerMain::errorLog = nullptr;

void ServerMain::init$() {
}

int32_t ServerMain::run($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(ServerMain);
	$Log::setLogForCurrentThread(($assignStatic(ServerMain::errorLog, $new($LazyInitFileLog, "server.log"_s))));
	$init($Log$Level);
	$Log::setLogLevel($Log$Level::ERROR);
	$Thread::setDefaultUncaughtExceptionHandler(static_cast<$Thread$UncaughtExceptionHandler*>($$new(ServerMain$$Lambda$lambda$run$0)));
	$System::setOut($$new($PrintStream, static_cast<$OutputStream*>($$new($LoggingOutputStream, $System::out, $Log$Level::INFO, "[stdout] "_s))));
	$System::setErr($$new($PrintStream, static_cast<$OutputStream*>($$new($LoggingOutputStream, $System::err, $Log$Level::ERROR, "[stderr] "_s))));
	if ($nc(args)->length > 1) {
		$Log::error("When spawning a background server, only a single --startserver argument is allowed."_s);
		$init($Main$Result);
		return $Main$Result::CMDERR->exitCode;
	}
	int32_t exitCode = 0;
	try {
		$var($SjavacServer, server, $new($SjavacServer, $nc(args)->get(0)));
		exitCode = server->startServer();
	} catch ($IOException& ex) {
		ex->printStackTrace();
		$init($Main$Result);
		exitCode = $Main$Result::ERROR->exitCode;
	} catch ($InterruptedException& ex) {
		ex->printStackTrace();
		$init($Main$Result);
		exitCode = $Main$Result::ERROR->exitCode;
	}
	return exitCode;
}

$LazyInitFileLog* ServerMain::getErrorLog() {
	$init(ServerMain);
	return ServerMain::errorLog;
}

void ServerMain::lambda$run$0($Thread* t, $Throwable* e) {
	$init(ServerMain);
	$Log::setLogForCurrentThread(ServerMain::errorLog);
	$Log::error(e);
}

ServerMain::ServerMain() {
}

$Class* ServerMain::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ServerMain$$Lambda$lambda$run$0::classInfo$.name)) {
			return ServerMain$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$loadClass(ServerMain, name, initialize, &_ServerMain_ClassInfo_, allocate$ServerMain);
	return class$;
}

$Class* ServerMain::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com