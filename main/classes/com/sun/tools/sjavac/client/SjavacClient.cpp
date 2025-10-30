#include <com/sun/tools/sjavac/client/SjavacClient.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/client/PortFileInaccessibleException.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/server/PortFile.h>
#include <com/sun/tools/sjavac/server/SjavacServer.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Iterable.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CONNECTION_TIMEOUT
#undef ERROR
#undef KEEPALIVE
#undef LINE_TYPE_RC
#undef MAX_CONNECT_ATTEMPTS
#undef POOLSIZE
#undef UTF_8
#undef WAIT_BETWEEN_CONNECT_ATTEMPTS

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $Util = ::com::sun::tools::sjavac::Util;
using $PortFileInaccessibleException = ::com::sun::tools::sjavac::client::PortFileInaccessibleException;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $PortFile = ::com::sun::tools::sjavac::server::PortFile;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $SjavacServer = ::com::sun::tools::sjavac::server::SjavacServer;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $Runtime = ::java::lang::Runtime;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

class SjavacClient$$Lambda$error : public $Consumer {
	$class(SjavacClient$$Lambda$error, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* msg) override {
		$Log::error($cast($String, msg));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SjavacClient$$Lambda$error>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SjavacClient$$Lambda$error::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SjavacClient$$Lambda$error::*)()>(&SjavacClient$$Lambda$error::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SjavacClient$$Lambda$error::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.client.SjavacClient$$Lambda$error",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* SjavacClient$$Lambda$error::load$($String* name, bool initialize) {
	$loadClass(SjavacClient$$Lambda$error, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SjavacClient$$Lambda$error::class$ = nullptr;

$FieldInfo _SjavacClient_FieldInfo_[] = {
	{"portFile", "Lcom/sun/tools/sjavac/server/PortFile;", nullptr, $PRIVATE, $field(SjavacClient, portFile)},
	{"serverCommand", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SjavacClient, serverCommand)},
	{"KEEPALIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, KEEPALIVE)},
	{"POOLSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SjavacClient, POOLSIZE)},
	{"CONNECTION_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, CONNECTION_TIMEOUT)},
	{"MAX_CONNECT_ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, MAX_CONNECT_ATTEMPTS)},
	{"WAIT_BETWEEN_CONNECT_ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SjavacClient, WAIT_BETWEEN_CONNECT_ATTEMPTS)},
	{}
};

$MethodInfo _SjavacClient_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $method(static_cast<void(SjavacClient::*)($Options*)>(&SjavacClient::init$))},
	{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC},
	{"makeConnectionAttempt", "()Ljava/net/Socket;", nullptr, $PRIVATE, $method(static_cast<$Socket*(SjavacClient::*)()>(&SjavacClient::makeConnectionAttempt)), "java.io.IOException"},
	{"makeSureServerIsRunning", "()V", nullptr, $PRIVATE, $method(static_cast<void(SjavacClient::*)()>(&SjavacClient::makeSureServerIsRunning)), "java.io.IOException,java.lang.InterruptedException"},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{"startNewServer", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{"tryConnect", "()Ljava/net/Socket;", nullptr, $PRIVATE, $method(static_cast<$Socket*(SjavacClient::*)()>(&SjavacClient::tryConnect)), "java.io.IOException,java.lang.InterruptedException"},
	{}
};

$ClassInfo _SjavacClient_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.client.SjavacClient",
	"java.lang.Object",
	"com.sun.tools.sjavac.server.Sjavac",
	_SjavacClient_FieldInfo_,
	_SjavacClient_MethodInfo_
};

$Object* allocate$SjavacClient($Class* clazz) {
	return $of($alloc(SjavacClient));
}

int32_t SjavacClient::POOLSIZE = 0;

void SjavacClient::init$($Options* options) {
	$useLocalCurrentObjectStackCache();
	$var($String, serverConf, $nc(options)->getServerConf());
	$var($String, configFile, $Util::extractStringOption("conf"_s, serverConf, ""_s));
	try {
		$init($StandardCharsets);
		$var($List, configFileLines, $Files::readAllLines($($Path::of(configFile, $$new($StringArray, 0))), $StandardCharsets::UTF_8));
		$var($String, configFileContent, $String::join(static_cast<$CharSequence*>("\n"_s), static_cast<$Iterable*>(configFileLines)));
		$var($String, portfileName, $Util::extractStringOptionLine("portfile"_s, configFileContent, ""_s));
		if ($nc(portfileName)->isEmpty()) {
			$Log::error("Configuration file missing value for \'portfile\'"_s);
			$set(this, portFile, nullptr);
		} else {
			$set(this, portFile, $SjavacServer::getPortFile(portfileName));
		}
		$var($String, serverCommandString, $Util::extractStringOptionLine("servercmd"_s, configFileContent, ""_s));
		if ($nc(serverCommandString)->isEmpty()) {
			$Log::error("Configuration file missing value for \'servercmd\'"_s);
			$set(this, serverCommand, nullptr);
		} else {
			$set(this, serverCommand, serverCommandString);
		}
	} catch ($IOException& e) {
		$Log::error($$str({"Cannot read configuration file "_s, configFile}));
		$Log::debug(static_cast<$Throwable*>(e));
		$set(this, portFile, nullptr);
		$set(this, serverCommand, nullptr);
	}
}

$Main$Result* SjavacClient::compile($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if (this->portFile == nullptr || this->serverCommand == nullptr) {
		$Log::error("Incorrect configuration, portfile and/or servercmd missing"_s);
		$init($Main$Result);
		return $Main$Result::ERROR;
	}
	$Main$Result* result = nullptr;
	try {
		$var($Socket, socket, tryConnect());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($PrintWriter, out, $new($PrintWriter, static_cast<$Writer*>($$new($OutputStreamWriter, $($nc(socket)->getOutputStream())))));
					$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $($nc(socket)->getInputStream()))));
					out->println($nc(args)->length);
					{
						$var($StringArray, arr$, args);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, arg, arr$->get(i$));
							out->println(arg);
						}
					}
					out->flush();
					$var($String, line, nullptr);
					while (nullptr != ($assign(line, in->readLine()))) {
						if (!$nc(line)->contains(":"_s)) {
							$throwNew($AssertionError, $of($$str({"Could not parse protocol line: >>\""_s, line, "\"<<"_s})));
						}
						$var($StringArray, typeAndContent, $nc(line)->split(":"_s, 2));
						$var($String, type, typeAndContent->get(0));
						$var($String, content, typeAndContent->get(1));
						try {
							if ($Log::isDebugging()) {
								$assign(content, $str({"[sjavac-server] "_s, content}));
							}
							$Log::log($($Log$Level::valueOf(type)), content);
							continue;
						} catch ($IllegalArgumentException& e) {
						}
						$init($SjavacServer);
						if ($nc(type)->equals($SjavacServer::LINE_TYPE_RC)) {
							result = $Main$Result::valueOf(content);
						}
					}
				} catch ($Throwable& t$) {
					if (socket != nullptr) {
						try {
							socket->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (socket != nullptr) {
					socket->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($PortFileInaccessibleException& e) {
		$Log::error("Port file inaccessible."_s);
		$init($Main$Result);
		result = $Main$Result::ERROR;
	} catch ($IOException& ioe) {
		$Log::error($$str({"IOException caught during compilation: "_s, $(ioe->getMessage())}));
		$Log::debug(static_cast<$Throwable*>(ioe));
		$init($Main$Result);
		result = $Main$Result::ERROR;
	} catch ($InterruptedException& ie) {
		$($Thread::currentThread())->interrupt();
		$Log::error("Compilation interrupted."_s);
		$Log::debug(static_cast<$Throwable*>(ie));
		$init($Main$Result);
		result = $Main$Result::ERROR;
	}
	if (result == nullptr) {
		$init($Main$Result);
		result = $Main$Result::ERROR;
	}
	return result;
}

$Socket* SjavacClient::tryConnect() {
	$useLocalCurrentObjectStackCache();
	makeSureServerIsRunning();
	int32_t attempt = 0;
	while (true) {
		$Log::debug($$str({"Trying to connect. Attempt "_s, $$str((++attempt)), " of "_s, $$str(SjavacClient::MAX_CONNECT_ATTEMPTS)}));
		try {
			return makeConnectionAttempt();
		} catch ($IOException& ex) {
			$Log::error($$str({"Connection attempt failed: "_s, $(ex->getMessage())}));
			if (attempt >= SjavacClient::MAX_CONNECT_ATTEMPTS) {
				$Log::error("Giving up"_s);
				$throwNew($IOException, "Could not connect to server"_s, ex);
			}
		}
		$Thread::sleep(SjavacClient::WAIT_BETWEEN_CONNECT_ATTEMPTS);
	}
	$shouldNotReachHere();
}

$Socket* SjavacClient::makeConnectionAttempt() {
	$useLocalCurrentObjectStackCache();
	$var($Socket, socket, $new($Socket));
	$var($InetAddress, localhost, $InetAddress::getByName(nullptr));
	$var($InetSocketAddress, address, $new($InetSocketAddress, localhost, $nc(this->portFile)->getPort()));
	socket->connect(address, SjavacClient::CONNECTION_TIMEOUT);
	$Log::debug("Connected"_s);
	return socket;
}

void SjavacClient::makeSureServerIsRunning() {
	if ($nc(this->portFile)->exists()) {
		$nc(this->portFile)->lock();
		$nc(this->portFile)->getValues();
		$nc(this->portFile)->unlock();
		if ($nc(this->portFile)->containsPortInfo()) {
			return;
		}
	}
	startNewServer();
}

void SjavacClient::shutdown() {
}

void SjavacClient::startNewServer() {
	$useLocalCurrentObjectStackCache();
	$var($List, cmd, $new($ArrayList));
	cmd->addAll($($Arrays::asList($($nc(this->serverCommand)->split(" "_s)))));
	cmd->add($$str({"--startserver:portfile="_s, $($nc(this->portFile)->getFilename()), ",poolsize="_s, $$str(SjavacClient::POOLSIZE), ",keepalive="_s, $$str(SjavacClient::KEEPALIVE)}));
	$var($Process, serverProcess, nullptr);
	$Log::debug($$str({"Starting server. Command: "_s, $($String::join(static_cast<$CharSequence*>(" "_s), static_cast<$Iterable*>(cmd)))}));
	try {
		$assign(serverProcess, $nc($($$new($ProcessBuilder, cmd)->redirectErrorStream(true)))->start());
	} catch ($IOException& ex) {
		$Log::error($$str({"Failed to create server process: "_s, $(ex->getMessage())}));
		$Log::debug(static_cast<$Throwable*>(ex));
		$throwNew($IOException, static_cast<$Throwable*>(ex));
	}
	try {
		$nc(this->portFile)->waitForValidValues();
	} catch ($IOException& ex) {
		$Log::error($$str({"Sjavac server failed to initialize: "_s, $(ex->getMessage())}));
		$Log::error("Process output:"_s);
		$var($Reader, serverStdoutStderr, $new($InputStreamReader, $($nc(serverProcess)->getInputStream())));
		{
			$var($BufferedReader, br, $new($BufferedReader, serverStdoutStderr));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc($(br->lines()))->forEach(static_cast<$Consumer*>($$new(SjavacClient$$Lambda$error)));
					} catch ($Throwable& t$) {
						try {
							br->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					br->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		$Log::error("<End of process output>"_s);
		try {
			$Log::error($$str({"Process exit code: "_s, $$str($nc(serverProcess)->exitValue())}));
		} catch ($IllegalThreadStateException& e) {
		}
		$throwNew($IOException, $$str({"Server failed to initialize: "_s, $(ex->getMessage())}), ex);
	}
}

void clinit$SjavacClient($Class* class$) {
	SjavacClient::POOLSIZE = $nc($($Runtime::getRuntime()))->availableProcessors();
}

SjavacClient::SjavacClient() {
}

$Class* SjavacClient::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SjavacClient$$Lambda$error::classInfo$.name)) {
			return SjavacClient$$Lambda$error::load$(name, initialize);
		}
	}
	$loadClass(SjavacClient, name, initialize, &_SjavacClient_ClassInfo_, clinit$SjavacClient, allocate$SjavacClient);
	return class$;
}

$Class* SjavacClient::class$ = nullptr;

				} // client
			} // sjavac
		} // tools
	} // sun
} // com