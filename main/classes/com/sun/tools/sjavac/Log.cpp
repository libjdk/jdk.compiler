#include <com/sun/tools/sjavac/Log.h>

#include <com/sun/tools/sjavac/Log$Level.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DEBUG
#undef ERROR
#undef INFO
#undef TRACE
#undef US
#undef WARN

using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _Log_FieldInfo_[] = {
	{"stdOutErr", "Lcom/sun/tools/sjavac/Log;", nullptr, $PRIVATE | $STATIC, $staticField(Log, stdOutErr)},
	{"loggers", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lcom/sun/tools/sjavac/Log;>;", $PRIVATE | $STATIC, $staticField(Log, loggers)},
	{"err", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(Log, err)},
	{"out", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(Log, out)},
	{"level", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PROTECTED, $field(Log, level)},
	{}
};

$MethodInfo _Log_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(Log::*)($Writer*,$Writer*)>(&Log::init$))},
	{"debug", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Log::debug))},
	{"debug", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Throwable*)>(&Log::debug))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Log::error))},
	{"error", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Throwable*)>(&Log::error))},
	{"get", "()Lcom/sun/tools/sjavac/Log;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Log*(*)()>(&Log::get))},
	{"info", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Log::info))},
	{"isDebugging", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Log::isDebugging))},
	{"isLevelLogged", "(Lcom/sun/tools/sjavac/Log$Level;)Z", nullptr, $PROTECTED},
	{"log", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Log$Level*,$String*)>(&Log::log))},
	{"log", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Log$Level*,$Throwable*)>(&Log::log))},
	{"printLogMsg", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setLogForCurrentThread", "(Lcom/sun/tools/sjavac/Log;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Log*)>(&Log::setLogForCurrentThread))},
	{"setLogLevel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Log::setLogLevel))},
	{"setLogLevel", "(Lcom/sun/tools/sjavac/Log$Level;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Log$Level*)>(&Log::setLogLevel))},
	{"trace", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Log::trace))},
	{"warn", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Log::warn))},
	{}
};

$InnerClassInfo _Log_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.Log$Level", "com.sun.tools.sjavac.Log", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Log_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.Log",
	"java.lang.Object",
	nullptr,
	_Log_FieldInfo_,
	_Log_MethodInfo_,
	nullptr,
	nullptr,
	_Log_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.Log$Level"
};

$Object* allocate$Log($Class* clazz) {
	return $of($alloc(Log));
}

Log* Log::stdOutErr = nullptr;
$ThreadLocal* Log::loggers = nullptr;

void Log::init$($Writer* out, $Writer* err) {
	$init($Log$Level);
	$set(this, level, $Log$Level::INFO);
	$set(this, out, out == nullptr ? ($PrintWriter*)nullptr : $new($PrintWriter, out, true));
	$set(this, err, err == nullptr ? ($PrintWriter*)nullptr : $new($PrintWriter, err, true));
}

void Log::setLogForCurrentThread(Log* log) {
	$init(Log);
	$nc(Log::loggers)->set(log);
}

void Log::setLogLevel($String* l) {
	$init(Log);
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	setLogLevel($($Log$Level::valueOf($($nc(l)->toUpperCase($Locale::US)))));
}

void Log::setLogLevel($Log$Level* l) {
	$init(Log);
	$set($nc($(get())), level, l);
}

void Log::trace($String* msg) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::TRACE, msg);
}

void Log::debug($String* msg) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::DEBUG, msg);
}

void Log::info($String* msg) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::INFO, msg);
}

void Log::warn($String* msg) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::WARN, msg);
}

void Log::error($String* msg) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::ERROR, msg);
}

void Log::error($Throwable* t) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::ERROR, t);
}

void Log::log($Log$Level* l, $String* msg) {
	$init(Log);
	$nc($(get()))->printLogMsg(l, msg);
}

void Log::debug($Throwable* t) {
	$init(Log);
	$init($Log$Level);
	log($Log$Level::DEBUG, t);
}

void Log::log($Log$Level* l, $Throwable* t) {
	$init(Log);
	$useLocalCurrentObjectStackCache();
	$var($StringWriter, sw, $new($StringWriter));
	$nc(t)->printStackTrace($$new($PrintWriter, static_cast<$Writer*>(sw), true));
	log(l, $(sw->toString()));
}

bool Log::isDebugging() {
	$init(Log);
	$init($Log$Level);
	return $nc($(get()))->isLevelLogged($Log$Level::DEBUG);
}

bool Log::isLevelLogged($Log$Level* l) {
	int32_t var$0 = $nc(l)->ordinal();
	return var$0 <= $nc(this->level)->ordinal();
}

Log* Log::get() {
	$init(Log);
	$var(Log, log, $cast(Log, $nc(Log::loggers)->get()));
	return log != nullptr ? log : Log::stdOutErr;
}

void Log::printLogMsg($Log$Level* msgLevel, $String* msg) {
	if (isLevelLogged(msgLevel)) {
		int32_t var$0 = $nc(msgLevel)->ordinal();
		$var($PrintWriter, pw, var$0 <= $Log$Level::WARN->ordinal() ? this->err : this->out);
		$nc(pw)->println(msg);
	}
}

void clinit$Log($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($Writer, var$0, static_cast<$Writer*>($new($PrintWriter, static_cast<$OutputStream*>($System::out))));
	$assignStatic(Log::stdOutErr, $new(Log, var$0, $$new($PrintWriter, static_cast<$OutputStream*>($System::err))));
	$assignStatic(Log::loggers, $new($ThreadLocal));
}

Log::Log() {
}

$Class* Log::load$($String* name, bool initialize) {
	$loadClass(Log, name, initialize, &_Log_ClassInfo_, clinit$Log, allocate$Log);
	return class$;
}

$Class* Log::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com