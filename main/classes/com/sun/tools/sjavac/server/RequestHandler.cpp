#include <com/sun/tools/sjavac/server/RequestHandler.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/RequestHandler$1.h>
#include <com/sun/tools/sjavac/server/ServerMain.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <com/sun/tools/sjavac/server/log/LazyInitFileLog.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/net/Socket.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $RequestHandler$1 = ::com::sun::tools::sjavac::server::RequestHandler$1;
using $ServerMain = ::com::sun::tools::sjavac::server::ServerMain;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $LazyInitFileLog = ::com::sun::tools::sjavac::server::log::LazyInitFileLog;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Socket = ::java::net::Socket;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _RequestHandler_FieldInfo_[] = {
	{"socket", "Ljava/net/Socket;", nullptr, $PRIVATE | $FINAL, $field(RequestHandler, socket)},
	{"sjavac", "Lcom/sun/tools/sjavac/server/Sjavac;", nullptr, $PRIVATE | $FINAL, $field(RequestHandler, sjavac)},
	{}
};

$MethodInfo _RequestHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Socket;Lcom/sun/tools/sjavac/server/Sjavac;)V", nullptr, $PUBLIC, $method(static_cast<void(RequestHandler::*)($Socket*,$Sjavac*)>(&RequestHandler::init$))},
	{"checkInternalErrorLog", "()V", nullptr, $PRIVATE, $method(static_cast<void(RequestHandler::*)()>(&RequestHandler::checkInternalErrorLog))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RequestHandler_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.RequestHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequestHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.RequestHandler",
	"java.lang.Thread",
	nullptr,
	_RequestHandler_FieldInfo_,
	_RequestHandler_MethodInfo_,
	nullptr,
	nullptr,
	_RequestHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.RequestHandler$1"
};

$Object* allocate$RequestHandler($Class* clazz) {
	return $of($alloc(RequestHandler));
}

void RequestHandler::init$($Socket* socket, $Sjavac* sjavac) {
	$Thread::init$();
	$set(this, socket, socket);
	$set(this, sjavac, sjavac);
}

void RequestHandler::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(this->socket)->getInputStream()))));
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							$var($PrintWriter, out, $new($PrintWriter, $($nc(this->socket)->getOutputStream()), true));
							{
								$var($Throwable, var$2, nullptr);
								try {
									try {
										$Log::setLogForCurrentThread($$new($RequestHandler$1, this, out, out));
										int32_t n = $Integer::parseInt($(in->readLine()));
										$var($StringArray, args, $new($StringArray, n));
										for (int32_t i = 0; i < n; ++i) {
											args->set(i, $(in->readLine()));
										}
										checkInternalErrorLog();
										$Main$Result* rc = $nc(this->sjavac)->compile(args);
										out->println($$str({"RC"_s, ":"_s, $($nc(rc)->name())}));
										checkInternalErrorLog();
									} catch ($Throwable& t$) {
										try {
											out->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
										$throw(t$);
									}
								} catch ($Throwable& var$3) {
									$assign(var$2, var$3);
								} /*finally*/ {
									out->close();
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						} catch ($Throwable& t$) {
							try {
								in->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$4) {
						$assign(var$1, var$4);
					} /*finally*/ {
						in->close();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} catch ($Exception& ex) {
				$Log::error(static_cast<$Throwable*>(ex));
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$Log::setLogForCurrentThread(nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void RequestHandler::checkInternalErrorLog() {
	$useLocalCurrentObjectStackCache();
	$var($Path, errorLog, $nc($($ServerMain::getErrorLog()))->getLogDestination());
	if (errorLog != nullptr) {
		$Log::error($$str({"Server has encountered an internal error. See "_s, $(errorLog->toAbsolutePath()), " for details."_s}));
	}
}

RequestHandler::RequestHandler() {
}

$Class* RequestHandler::load$($String* name, bool initialize) {
	$loadClass(RequestHandler, name, initialize, &_RequestHandler_ClassInfo_, allocate$RequestHandler);
	return class$;
}

$Class* RequestHandler::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com