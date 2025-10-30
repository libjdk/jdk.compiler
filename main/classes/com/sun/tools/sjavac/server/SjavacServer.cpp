#include <com/sun/tools/sjavac/server/SjavacServer.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/PooledSjavac.h>
#include <com/sun/tools/sjavac/comp/SjavacImpl.h>
#include <com/sun/tools/sjavac/server/IdleResetSjavac.h>
#include <com/sun/tools/sjavac/server/PortFile.h>
#include <com/sun/tools/sjavac/server/PortFileMonitor.h>
#include <com/sun/tools/sjavac/server/RequestHandler.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <com/sun/tools/sjavac/server/Terminable.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runtime.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

#undef ERROR
#undef LINE_TYPE_RC
#undef OK

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Util = ::com::sun::tools::sjavac::Util;
using $PooledSjavac = ::com::sun::tools::sjavac::comp::PooledSjavac;
using $SjavacImpl = ::com::sun::tools::sjavac::comp::SjavacImpl;
using $IdleResetSjavac = ::com::sun::tools::sjavac::server::IdleResetSjavac;
using $PortFile = ::com::sun::tools::sjavac::server::PortFile;
using $PortFileMonitor = ::com::sun::tools::sjavac::server::PortFileMonitor;
using $RequestHandler = ::com::sun::tools::sjavac::server::RequestHandler;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $Terminable = ::com::sun::tools::sjavac::server::Terminable;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $AbstractMap = ::java::util::AbstractMap;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _SjavacServer_FieldInfo_[] = {
	{"LINE_TYPE_RC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SjavacServer, LINE_TYPE_RC)},
	{"portfilename", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SjavacServer, portfilename)},
	{"poolsize", "I", nullptr, $PRIVATE | $FINAL, $field(SjavacServer, poolsize)},
	{"keepalive", "I", nullptr, $PRIVATE | $FINAL, $field(SjavacServer, keepalive)},
	{"myCookie", "J", nullptr, $PRIVATE | $FINAL, $field(SjavacServer, myCookie)},
	{"totalBuildTime", "J", nullptr, $PRIVATE, $field(SjavacServer, totalBuildTime)},
	{"sjavac", "Lcom/sun/tools/sjavac/server/Sjavac;", nullptr, 0, $field(SjavacServer, sjavac)},
	{"serverSocket", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(SjavacServer, serverSocket)},
	{"portFile", "Lcom/sun/tools/sjavac/server/PortFile;", nullptr, $PRIVATE, $field(SjavacServer, portFile)},
	{"portFileMonitor", "Lcom/sun/tools/sjavac/server/PortFileMonitor;", nullptr, $PRIVATE, $field(SjavacServer, portFileMonitor)},
	{"keepAcceptingRequests", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(SjavacServer, keepAcceptingRequests)},
	{"allPortFiles", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/server/PortFile;>;", $PRIVATE | $STATIC, $staticField(SjavacServer, allPortFiles)},
	{}
};

$MethodInfo _SjavacServer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SjavacServer::*)($String*)>(&SjavacServer::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(SjavacServer::*)($String*,int32_t,int32_t)>(&SjavacServer::init$)), "java.io.FileNotFoundException"},
	{"addBuildTime", "(J)V", nullptr, $PUBLIC},
	{"getCookie", "()J", nullptr, 0},
	{"getPort", "()I", nullptr, 0},
	{"getPortFile", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/server/PortFile;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$PortFile*(*)($String*)>(&SjavacServer::getPortFile))},
	{"shutdown", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"startServer", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{}
};

$ClassInfo _SjavacServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.SjavacServer",
	"java.lang.Object",
	"com.sun.tools.sjavac.server.Terminable",
	_SjavacServer_FieldInfo_,
	_SjavacServer_MethodInfo_
};

$Object* allocate$SjavacServer($Class* clazz) {
	return $of($alloc(SjavacServer));
}

$String* SjavacServer::LINE_TYPE_RC = nullptr;
$Map* SjavacServer::allPortFiles = nullptr;

void SjavacServer::init$($String* settings) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $Util::extractStringOption("portfile"_s, settings));
	int32_t var$1 = $Util::extractIntOption("poolsize"_s, settings, $nc($($Runtime::getRuntime()))->availableProcessors());
	SjavacServer::init$(var$0, var$1, $Util::extractIntOption("keepalive"_s, settings, 120));
}

void SjavacServer::init$($String* portfilename, int32_t poolsize, int32_t keepalive) {
	$set(this, keepAcceptingRequests, $new($AtomicBoolean));
	$set(this, portfilename, portfilename);
	this->poolsize = poolsize;
	this->keepalive = keepalive;
	this->myCookie = $$new($Random)->nextLong();
}

$PortFile* SjavacServer::getPortFile($String* filename) {
	$load(SjavacServer);
	$synchronized(class$) {
		$init(SjavacServer);
		if (SjavacServer::allPortFiles == nullptr) {
			$assignStatic(SjavacServer::allPortFiles, $new($HashMap));
		}
		$var($PortFile, pf, $cast($PortFile, $nc(SjavacServer::allPortFiles)->get(filename)));
		if (pf != nullptr) {
			try {
				if (!pf->exists()) {
					$assign(pf, nullptr);
				}
			} catch ($IOException& ioex) {
				ioex->printStackTrace();
			}
		}
		if (pf == nullptr) {
			$assign(pf, $new($PortFile, filename));
			$nc(SjavacServer::allPortFiles)->put(filename, pf);
		}
		return pf;
	}
}

int64_t SjavacServer::getCookie() {
	return this->myCookie;
}

int32_t SjavacServer::getPort() {
	return $nc(this->serverSocket)->getLocalPort();
}

void SjavacServer::addBuildTime(int64_t inc) {
	this->totalBuildTime += inc;
}

int32_t SjavacServer::startServer() {
	$useLocalCurrentObjectStackCache();
	int64_t serverStart = $System::currentTimeMillis();
	$set(this, portFile, getPortFile(this->portfilename));
	$synchronized(this->portFile) {
		$nc(this->portFile)->lock();
		$nc(this->portFile)->getValues();
		if ($nc(this->portFile)->containsPortInfo()) {
			$Log::debug("Javac server not started because portfile exists!"_s);
			$nc(this->portFile)->unlock();
			$init($Main$Result);
			return $Main$Result::ERROR->exitCode;
		}
		$set(this, sjavac, $new($SjavacImpl));
		$set(this, sjavac, $new($PooledSjavac, this->sjavac, this->poolsize));
		$set(this, sjavac, $new($IdleResetSjavac, this->sjavac, this, this->keepalive * 1000));
		$set(this, serverSocket, $new($ServerSocket));
		$var($InetAddress, localhost, $InetAddress::getByName(nullptr));
		$nc(this->serverSocket)->bind($$new($InetSocketAddress, localhost, 0));
		int32_t var$0 = getPort();
		$nc(this->portFile)->setValues(var$0, getCookie());
		$nc(this->portFile)->unlock();
	}
	$set(this, portFileMonitor, $new($PortFileMonitor, this->portFile, this));
	$nc(this->portFileMonitor)->start();
	$Log::debug("Sjavac server started. Accepting connections..."_s);
	$Log::debug($$str({"    port: "_s, $$str(getPort())}));
	$Log::debug($$str({"    time: "_s, $$new($Date)}));
	$Log::debug($$str({"    poolsize: "_s, $$str(this->poolsize)}));
	$nc(this->keepAcceptingRequests)->set(true);
	do {
		try {
			$var($Socket, socket, $nc(this->serverSocket)->accept());
			$$new($RequestHandler, socket, this->sjavac)->start();
		} catch ($SocketException& se) {
		}
	} while ($nc(this->keepAcceptingRequests)->get());
	$Log::debug("Shutting down."_s);
	int64_t realTime = $System::currentTimeMillis() - serverStart;
	$Log::debug($$str({"Total wall clock time "_s, $$str(realTime), "ms build time "_s, $$str(this->totalBuildTime), "ms"_s}));
	$nc(this->sjavac)->shutdown();
	$init($Main$Result);
	return $Main$Result::OK->exitCode;
}

void SjavacServer::shutdown($String* quitMsg) {
	if (!$nc(this->keepAcceptingRequests)->compareAndSet(true, false)) {
		return;
	}
	$Log::debug($$str({"Quitting: "_s, quitMsg}));
	$nc(this->portFileMonitor)->shutdown();
	try {
		$nc(this->portFile)->delete$();
	} catch ($IOException& e) {
		$Log::error(static_cast<$Throwable*>(e));
	} catch ($InterruptedException& e) {
		$Log::error(static_cast<$Throwable*>(e));
	}
	try {
		$nc(this->serverSocket)->close();
	} catch ($IOException& e) {
		$Log::error(static_cast<$Throwable*>(e));
	}
}

SjavacServer::SjavacServer() {
}

void clinit$SjavacServer($Class* class$) {
	$assignStatic(SjavacServer::LINE_TYPE_RC, "RC"_s);
}

$Class* SjavacServer::load$($String* name, bool initialize) {
	$loadClass(SjavacServer, name, initialize, &_SjavacServer_ClassInfo_, clinit$SjavacServer, allocate$SjavacServer);
	return class$;
}

$Class* SjavacServer::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com