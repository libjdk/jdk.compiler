#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLConnection.h>

#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $Main$MemoryClassLoader = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$FieldInfo _Main$MemoryClassLoader$MemoryURLConnection_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $PRIVATE, $field(Main$MemoryClassLoader$MemoryURLConnection, bytes)},
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(Main$MemoryClassLoader$MemoryURLConnection, in)},
	{}
};

$MethodInfo _Main$MemoryClassLoader$MemoryURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;[B)V", nullptr, 0, $method(static_cast<void(Main$MemoryClassLoader$MemoryURLConnection::*)($URL*,$bytes*)>(&Main$MemoryClassLoader$MemoryURLConnection::init$))},
	{"connect", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContentLengthLong", "()J", nullptr, $PUBLIC},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Main$MemoryClassLoader$MemoryURLConnection_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLConnection", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Main$MemoryClassLoader$MemoryURLConnection_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection",
	"java.net.URLConnection",
	nullptr,
	_Main$MemoryClassLoader$MemoryURLConnection_FieldInfo_,
	_Main$MemoryClassLoader$MemoryURLConnection_MethodInfo_,
	nullptr,
	nullptr,
	_Main$MemoryClassLoader$MemoryURLConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.launcher.Main"
};

$Object* allocate$Main$MemoryClassLoader$MemoryURLConnection($Class* clazz) {
	return $of($alloc(Main$MemoryClassLoader$MemoryURLConnection));
}

void Main$MemoryClassLoader$MemoryURLConnection::init$($URL* u, $bytes* bytes) {
	$URLConnection::init$(u);
	$set(this, bytes, bytes);
}

void Main$MemoryClassLoader$MemoryURLConnection::connect() {
	$useLocalCurrentObjectStackCache();
	if (!this->connected) {
		if (this->bytes == nullptr) {
			$throwNew($FileNotFoundException, $($nc($(getURL()))->getPath()));
		}
		$set(this, in, $new($ByteArrayInputStream, this->bytes));
		this->connected = true;
	}
}

$InputStream* Main$MemoryClassLoader$MemoryURLConnection::getInputStream() {
	connect();
	return this->in;
}

int64_t Main$MemoryClassLoader$MemoryURLConnection::getContentLengthLong() {
	return $nc(this->bytes)->length;
}

$String* Main$MemoryClassLoader$MemoryURLConnection::getContentType() {
	return "application/octet-stream"_s;
}

Main$MemoryClassLoader$MemoryURLConnection::Main$MemoryClassLoader$MemoryURLConnection() {
}

$Class* Main$MemoryClassLoader$MemoryURLConnection::load$($String* name, bool initialize) {
	$loadClass(Main$MemoryClassLoader$MemoryURLConnection, name, initialize, &_Main$MemoryClassLoader$MemoryURLConnection_ClassInfo_, allocate$Main$MemoryClassLoader$MemoryURLConnection);
	return class$;
}

$Class* Main$MemoryClassLoader$MemoryURLConnection::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com