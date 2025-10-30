#include <com/sun/tools/sjavac/server/log/LazyInitFileLog.h>

#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/io/IOException.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $IOException = ::java::io::IOException;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {

$FieldInfo _LazyInitFileLog_FieldInfo_[] = {
	{"baseFilename", "Ljava/lang/String;", nullptr, 0, $field(LazyInitFileLog, baseFilename)},
	{"destination", "Ljava/nio/file/Path;", nullptr, 0, $field(LazyInitFileLog, destination)},
	{}
};

$MethodInfo _LazyInitFileLog_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LazyInitFileLog::*)($String*)>(&LazyInitFileLog::init$))},
	{"getAvailableDestination", "()Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(LazyInitFileLog::*)()>(&LazyInitFileLog::getAvailableDestination))},
	{"getLogDestination", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"printLogMsg", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _LazyInitFileLog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.log.LazyInitFileLog",
	"com.sun.tools.sjavac.Log",
	nullptr,
	_LazyInitFileLog_FieldInfo_,
	_LazyInitFileLog_MethodInfo_
};

$Object* allocate$LazyInitFileLog($Class* clazz) {
	return $of($alloc(LazyInitFileLog));
}

void LazyInitFileLog::init$($String* baseFilename) {
	$Log::init$(nullptr, nullptr);
	$set(this, destination, nullptr);
	$set(this, baseFilename, baseFilename);
}

void LazyInitFileLog::printLogMsg($Log$Level* msgLevel, $String* msg) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->out == nullptr && isLevelLogged(msgLevel)) {
			$set(this, destination, getAvailableDestination());
			$set(this, out, ($set(this, err, $new($PrintWriter, static_cast<$Writer*>($$new($FileWriter, $($nc(this->destination)->toFile()))), true))));
		}
		$Log::printLogMsg(msgLevel, msg);
	} catch ($IOException& e) {
		$nc($System::out)->println($$str({"IO error occurred: "_s, $(e->getMessage())}));
		$nc($System::out)->println($$str({"Original message: ["_s, msgLevel, "] "_s, msg}));
	}
}

$Path* LazyInitFileLog::getAvailableDestination() {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $Paths::get(this->baseFilename, $$new($StringArray, 0)));
	int32_t i = 1;
	while ($Files::exists(p, $$new($LinkOptionArray, 0))) {
		$assign(p, $Paths::get($$str({this->baseFilename, "."_s, $$str(i++)}), $$new($StringArray, 0)));
	}
	return p;
}

$Path* LazyInitFileLog::getLogDestination() {
	return this->destination;
}

LazyInitFileLog::LazyInitFileLog() {
}

$Class* LazyInitFileLog::load$($String* name, bool initialize) {
	$loadClass(LazyInitFileLog, name, initialize, &_LazyInitFileLog_ClassInfo_, allocate$LazyInitFileLog);
	return class$;
}

$Class* LazyInitFileLog::class$ = nullptr;

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com