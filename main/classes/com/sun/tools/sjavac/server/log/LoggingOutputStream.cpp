#include <com/sun/tools/sjavac/server/log/LoggingOutputStream.h>

#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/log/LoggingOutputStream$EolTrackingByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

#undef LINE_SEP

using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $LoggingOutputStream$EolTrackingByteArrayOutputStream = ::com::sun::tools::sjavac::server::log::LoggingOutputStream$EolTrackingByteArrayOutputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {
					namespace log {

$FieldInfo _LoggingOutputStream_FieldInfo_[] = {
	{"LINE_SEP", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoggingOutputStream, LINE_SEP)},
	{"level", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PRIVATE | $FINAL, $field(LoggingOutputStream, level)},
	{"linePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LoggingOutputStream, linePrefix)},
	{"buf", "Lcom/sun/tools/sjavac/server/log/LoggingOutputStream$EolTrackingByteArrayOutputStream;", nullptr, $PRIVATE, $field(LoggingOutputStream, buf)},
	{}
};

$MethodInfo _LoggingOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LoggingOutputStream::*)($OutputStream*,$Log$Level*,$String*)>(&LoggingOutputStream::init$))},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _LoggingOutputStream_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream", "com.sun.tools.sjavac.server.log.LoggingOutputStream", "EolTrackingByteArrayOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LoggingOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.log.LoggingOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_LoggingOutputStream_FieldInfo_,
	_LoggingOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_LoggingOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream"
};

$Object* allocate$LoggingOutputStream($Class* clazz) {
	return $of($alloc(LoggingOutputStream));
}

$bytes* LoggingOutputStream::LINE_SEP = nullptr;

void LoggingOutputStream::init$($OutputStream* out, $Log$Level* level, $String* linePrefix) {
	$FilterOutputStream::init$(out);
	$set(this, buf, $new($LoggingOutputStream$EolTrackingByteArrayOutputStream));
	$set(this, level, level);
	$set(this, linePrefix, linePrefix);
}

void LoggingOutputStream::write(int32_t b) {
	$useLocalCurrentObjectStackCache();
	$FilterOutputStream::write(b);
	$nc(this->buf)->write(b);
	if ($nc(this->buf)->isLineComplete()) {
		$var($bytes, var$0, $nc(this->buf)->toByteArray());
		$var($String, line, $new($String, var$0, 0, $nc(this->buf)->size() - $nc(LoggingOutputStream::LINE_SEP)->length));
		$Log::log(this->level, $$str({this->linePrefix, line}));
		$set(this, buf, $new($LoggingOutputStream$EolTrackingByteArrayOutputStream));
	}
}

void clinit$LoggingOutputStream($Class* class$) {
	$assignStatic(LoggingOutputStream::LINE_SEP, $nc($($System::lineSeparator()))->getBytes());
}

LoggingOutputStream::LoggingOutputStream() {
}

$Class* LoggingOutputStream::load$($String* name, bool initialize) {
	$loadClass(LoggingOutputStream, name, initialize, &_LoggingOutputStream_ClassInfo_, clinit$LoggingOutputStream, allocate$LoggingOutputStream);
	return class$;
}

$Class* LoggingOutputStream::class$ = nullptr;

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com