#include <com/sun/tools/sjavac/server/PortFile.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/client/PortFileInaccessibleException.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/NumberFormatException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/channels/FileLockInterruptionException.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

#undef MS_BETWEEN_ATTEMPTS

using $Assert = ::com::sun::tools::javac::util::Assert;
using $Log = ::com::sun::tools::sjavac::Log;
using $PortFileInaccessibleException = ::com::sun::tools::sjavac::client::PortFileInaccessibleException;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileLock = ::java::nio::channels::FileLock;
using $FileLockInterruptionException = ::java::nio::channels::FileLockInterruptionException;
using $Semaphore = ::java::util::concurrent::Semaphore;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _PortFile_FieldInfo_[] = {
	{"magicNr", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortFile, magicNr)},
	{"filename", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PortFile, filename)},
	{"file", "Ljava/io/File;", nullptr, $PRIVATE, $field(PortFile, file)},
	{"stopFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(PortFile, stopFile)},
	{"rwfile", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE, $field(PortFile, rwfile)},
	{"channel", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE, $field(PortFile, channel)},
	{"lock", "Ljava/nio/channels/FileLock;", nullptr, $PRIVATE, $field(PortFile, lock$)},
	{"lockSem", "Ljava/util/concurrent/Semaphore;", nullptr, $PRIVATE, $field(PortFile, lockSem)},
	{"containsPortInfo", "Z", nullptr, $PRIVATE, $field(PortFile, containsPortInfo$)},
	{"serverPort", "I", nullptr, $PRIVATE, $field(PortFile, serverPort)},
	{"serverCookie", "J", nullptr, $PRIVATE, $field(PortFile, serverCookie)},
	{"myServerPort", "I", nullptr, $PRIVATE, $field(PortFile, myServerPort)},
	{"myServerCookie", "J", nullptr, $PRIVATE, $field(PortFile, myServerCookie)},
	{}
};

$MethodInfo _PortFile_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PortFile::*)($String*)>(&PortFile::init$))},
	{"containsPortInfo", "()Z", nullptr, $PUBLIC},
	{"delete", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{"exists", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCookie", "()J", nullptr, $PUBLIC},
	{"getFilename", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"getServerStartupTimeoutSeconds", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(PortFile::*)()>(&PortFile::getServerStartupTimeoutSeconds))},
	{"getValues", "()V", nullptr, $PUBLIC},
	{"initializeChannel", "()V", nullptr, $PRIVATE, $method(static_cast<void(PortFile::*)()>(&PortFile::initializeChannel)), "com.sun.tools.sjavac.client.PortFileInaccessibleException"},
	{"lock", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{"markedForStop", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setValues", "(IJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"stillMyValues", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.io.FileNotFoundException,java.lang.InterruptedException"},
	{"unlock", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"waitForValidValues", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{}
};

$ClassInfo _PortFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.PortFile",
	"java.lang.Object",
	nullptr,
	_PortFile_FieldInfo_,
	_PortFile_MethodInfo_
};

$Object* allocate$PortFile($Class* clazz) {
	return $of($alloc(PortFile));
}

void PortFile::init$($String* fn) {
	$set(this, lockSem, $new($Semaphore, 1));
	$set(this, filename, fn);
	$set(this, file, $new($File, this->filename));
	$set(this, stopFile, $new($File, $$str({this->filename, ".stop"_s})));
	this->containsPortInfo$ = false;
	$set(this, lock$, nullptr);
}

void PortFile::initializeChannel() {
	try {
		$set(this, rwfile, $new($RandomAccessFile, this->file, "rw"_s));
	} catch ($FileNotFoundException& e) {
		$throwNew($PortFileInaccessibleException, e);
	}
	$set(this, channel, $nc(this->rwfile)->getChannel());
}

void PortFile::lock() {
	if (this->channel == nullptr) {
		initializeChannel();
	}
	$nc(this->lockSem)->acquire();
	$set(this, lock$, $nc(this->channel)->lock());
}

void PortFile::getValues() {
	this->containsPortInfo$ = false;
	if (this->lock$ == nullptr) {
		return;
	}
	try {
		if ($nc(this->rwfile)->length() > 0) {
			$nc(this->rwfile)->seek(0);
			int32_t nr = $nc(this->rwfile)->readInt();
			this->serverPort = $nc(this->rwfile)->readInt();
			this->serverCookie = $nc(this->rwfile)->readLong();
			if (nr == PortFile::magicNr) {
				this->containsPortInfo$ = true;
			} else {
				this->containsPortInfo$ = false;
			}
		}
	} catch ($IOException& e) {
		this->containsPortInfo$ = false;
	}
}

bool PortFile::containsPortInfo() {
	return this->containsPortInfo$;
}

int32_t PortFile::getPort() {
	$Assert::check(this->containsPortInfo$);
	return this->serverPort;
}

int64_t PortFile::getCookie() {
	$Assert::check(this->containsPortInfo$);
	return this->serverCookie;
}

void PortFile::setValues(int32_t port, int64_t cookie) {
	$Assert::check(this->lock$ != nullptr);
	$nc(this->rwfile)->seek(0);
	$nc(this->rwfile)->writeInt(PortFile::magicNr);
	$nc(this->rwfile)->writeInt(port);
	$nc(this->rwfile)->writeLong(cookie);
	this->myServerPort = port;
	this->myServerCookie = cookie;
}

void PortFile::delete$() {
	$nc(this->rwfile)->close();
	$nc(this->file)->delete$();
	for (int32_t i = 0; i < 10 && $nc(this->file)->exists(); ++i) {
		$Thread::sleep(1000);
	}
	if ($nc(this->file)->exists()) {
		$throwNew($IOException, "Failed to delete file."_s);
	}
}

bool PortFile::exists() {
	return $nc(this->file)->exists();
}

bool PortFile::markedForStop() {
	if ($nc(this->stopFile)->exists()) {
		try {
			$nc(this->stopFile)->delete$();
		} catch ($Exception& e) {
		}
		return true;
	}
	return false;
}

void PortFile::unlock() {
	if (this->lock$ == nullptr) {
		return;
	}
	$nc(this->lock$)->release();
	$set(this, lock$, nullptr);
	$nc(this->lockSem)->release();
}

void PortFile::waitForValidValues() {
	$useLocalCurrentObjectStackCache();
	int32_t MS_BETWEEN_ATTEMPTS = 500;
	int64_t startTime = $System::currentTimeMillis();
	int64_t timeout = startTime + getServerStartupTimeoutSeconds() * 1000;
	while (true) {
		$Log::debug("Looking for valid port file values..."_s);
		if (exists()) {
			lock();
			getValues();
			unlock();
		}
		if (this->containsPortInfo$) {
			$Log::debug($$str({"Valid port file values found after "_s, $$str(($System::currentTimeMillis() - startTime)), " ms"_s}));
			return;
		}
		if ($System::currentTimeMillis() > timeout) {
			break;
		}
		$Thread::sleep(MS_BETWEEN_ATTEMPTS);
	}
	$throwNew($IOException, $$str({"No port file values materialized. Giving up after "_s, $$str(($System::currentTimeMillis() - startTime)), " ms"_s}));
}

bool PortFile::stillMyValues() {
	for (;;) {
		try {
			lock();
			getValues();
			unlock();
			if (this->containsPortInfo$) {
				if (this->serverPort == this->myServerPort && this->serverCookie == this->myServerCookie) {
					return true;
				}
				return false;
			}
			return false;
		} catch ($FileLockInterruptionException& e) {
			continue;
		} catch ($ClosedChannelException& e) {
			return false;
		}
	}
	$shouldNotReachHere();
}

$String* PortFile::getFilename() {
	return this->filename;
}

int64_t PortFile::getServerStartupTimeoutSeconds() {
	$var($String, str, $System::getProperty("serverStartupTimeout"_s));
	if (str != nullptr) {
		try {
			return $Integer::parseInt(str);
		} catch ($NumberFormatException& e) {
		}
	}
	return 60;
}

PortFile::PortFile() {
}

$Class* PortFile::load$($String* name, bool initialize) {
	$loadClass(PortFile, name, initialize, &_PortFile_ClassInfo_, allocate$PortFile);
	return class$;
}

$Class* PortFile::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com