#include <com/sun/tools/sjavac/client/ClientMain.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/AutoFlushWriter.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/client/SjavacClient.h>
#include <com/sun/tools/sjavac/comp/SjavacImpl.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/FilterWriter.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef CMDERR

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $AutoFlushWriter = ::com::sun::tools::sjavac::AutoFlushWriter;
using $Log = ::com::sun::tools::sjavac::Log;
using $SjavacClient = ::com::sun::tools::sjavac::client::SjavacClient;
using $SjavacImpl = ::com::sun::tools::sjavac::comp::SjavacImpl;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $FilterWriter = ::java::io::FilterWriter;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

$MethodInfo _ClientMain_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClientMain::*)()>(&ClientMain::init$))},
	{"run", "([Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($StringArray*)>(&ClientMain::run))},
	{"run", "([Ljava/lang/String;Ljava/io/Writer;Ljava/io/Writer;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($StringArray*,$Writer*,$Writer*)>(&ClientMain::run))},
	{}
};

$ClassInfo _ClientMain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.client.ClientMain",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClientMain_MethodInfo_
};

$Object* allocate$ClientMain($Class* clazz) {
	return $of($alloc(ClientMain));
}

void ClientMain::init$() {
}

int32_t ClientMain::run($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, var$0, args);
	$var($Writer, var$1, static_cast<$Writer*>($new($AutoFlushWriter, $$new($OutputStreamWriter, $System::out))));
	return run(var$0, var$1, $$new($AutoFlushWriter, $$new($OutputStreamWriter, $System::err)));
}

int32_t ClientMain::run($StringArray* args, $Writer* out, $Writer* err) {
	$useLocalCurrentObjectStackCache();
	$Log::setLogForCurrentThread($$new($Log, out, err));
	$var($Options, options, nullptr);
	try {
		$assign(options, $Options::parseArgs(args));
	} catch ($IllegalArgumentException& e) {
		$Log::error($(e->getMessage()));
		$init($Main$Result);
		return $Main$Result::CMDERR->exitCode;
	}
	$Log::setLogLevel($($nc(options)->getLogLevel()));
	$Log::debug("=========================================================="_s);
	$Log::debug("Launching sjavac client with the following parameters:"_s);
	$Log::debug($$str({"    "_s, $($nc(options)->getStateArgsString())}));
	$Log::debug("=========================================================="_s);
	bool useServer = $nc(options)->getServerConf() != nullptr;
	$var($Sjavac, sjavac, useServer ? static_cast<$Sjavac*>($new($SjavacClient, options)) : static_cast<$Sjavac*>($new($SjavacImpl)));
	$Main$Result* result = $nc(sjavac)->compile(args);
	if (!useServer) {
		sjavac->shutdown();
	}
	return $nc(result)->exitCode;
}

ClientMain::ClientMain() {
}

$Class* ClientMain::load$($String* name, bool initialize) {
	$loadClass(ClientMain, name, initialize, &_ClientMain_ClassInfo_, allocate$ClientMain);
	return class$;
}

$Class* ClientMain::class$ = nullptr;

				} // client
			} // sjavac
		} // tools
	} // sun
} // com