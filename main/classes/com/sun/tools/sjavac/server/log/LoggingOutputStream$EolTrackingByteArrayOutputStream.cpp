#include <com/sun/tools/sjavac/server/log/LoggingOutputStream$EolTrackingByteArrayOutputStream.h>

#include <com/sun/tools/sjavac/server/log/LoggingOutputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

#undef EOL

using $LoggingOutputStream = ::com::sun::tools::sjavac::server::log::LoggingOutputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
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

$FieldInfo _LoggingOutputStream$EolTrackingByteArrayOutputStream_FieldInfo_[] = {
	{"EOL", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoggingOutputStream$EolTrackingByteArrayOutputStream, EOL)},
	{}
};

$MethodInfo _LoggingOutputStream$EolTrackingByteArrayOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LoggingOutputStream$EolTrackingByteArrayOutputStream::*)()>(&LoggingOutputStream$EolTrackingByteArrayOutputStream::init$))},
	{"isLineComplete", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LoggingOutputStream$EolTrackingByteArrayOutputStream::*)()>(&LoggingOutputStream$EolTrackingByteArrayOutputStream::isLineComplete))},
	{}
};

$InnerClassInfo _LoggingOutputStream$EolTrackingByteArrayOutputStream_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream", "com.sun.tools.sjavac.server.log.LoggingOutputStream", "EolTrackingByteArrayOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LoggingOutputStream$EolTrackingByteArrayOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.server.log.LoggingOutputStream$EolTrackingByteArrayOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_LoggingOutputStream$EolTrackingByteArrayOutputStream_FieldInfo_,
	_LoggingOutputStream$EolTrackingByteArrayOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_LoggingOutputStream$EolTrackingByteArrayOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.log.LoggingOutputStream"
};

$Object* allocate$LoggingOutputStream$EolTrackingByteArrayOutputStream($Class* clazz) {
	return $of($alloc(LoggingOutputStream$EolTrackingByteArrayOutputStream));
}

$bytes* LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL = nullptr;

void LoggingOutputStream$EolTrackingByteArrayOutputStream::init$() {
	$ByteArrayOutputStream::init$();
}

bool LoggingOutputStream$EolTrackingByteArrayOutputStream::isLineComplete() {
	if (this->count < $nc(LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL)->length; ++i) {
		if ($nc(this->buf)->get(this->count - $nc(LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL)->length + i) != $nc(LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL)->get(i)) {
			return false;
		}
	}
	return true;
}

void clinit$LoggingOutputStream$EolTrackingByteArrayOutputStream($Class* class$) {
	$assignStatic(LoggingOutputStream$EolTrackingByteArrayOutputStream::EOL, $nc($($System::lineSeparator()))->getBytes());
}

LoggingOutputStream$EolTrackingByteArrayOutputStream::LoggingOutputStream$EolTrackingByteArrayOutputStream() {
}

$Class* LoggingOutputStream$EolTrackingByteArrayOutputStream::load$($String* name, bool initialize) {
	$loadClass(LoggingOutputStream$EolTrackingByteArrayOutputStream, name, initialize, &_LoggingOutputStream$EolTrackingByteArrayOutputStream_ClassInfo_, clinit$LoggingOutputStream$EolTrackingByteArrayOutputStream, allocate$LoggingOutputStream$EolTrackingByteArrayOutputStream);
	return class$;
}

$Class* LoggingOutputStream$EolTrackingByteArrayOutputStream::class$ = nullptr;

					} // log
				} // server
			} // sjavac
		} // tools
	} // sun
} // com