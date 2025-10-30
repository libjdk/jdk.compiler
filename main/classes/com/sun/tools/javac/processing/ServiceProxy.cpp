#include <com/sun/tools/javac/processing/ServiceProxy.h>

#include <com/sun/tools/javac/processing/ServiceProxy$ServiceConfigurationError.h>
#include <java/io/BufferedReader.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ServiceProxy$ServiceConfigurationError = ::com::sun::tools::javac::processing::ServiceProxy$ServiceConfigurationError;
using $BufferedReader = ::java::io::BufferedReader;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$FieldInfo _ServiceProxy_FieldInfo_[] = {
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceProxy, prefix)},
	{}
};

$MethodInfo _ServiceProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ServiceProxy::*)()>(&ServiceProxy::init$))},
	{"fail", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*,$String*)>(&ServiceProxy::fail)), "com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError"},
	{"fail", "(Ljava/lang/Class;Ljava/net/URL;ILjava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/net/URL;ILjava/lang/String;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*,$URL*,int32_t,$String*)>(&ServiceProxy::fail)), "com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError"},
	{"hasService", "(Ljava/lang/Class;[Ljava/net/URL;)Z", "(Ljava/lang/Class<*>;[Ljava/net/URL;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*,$URLArray*)>(&ServiceProxy::hasService)), "com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError"},
	{"parse", "(Ljava/lang/Class;Ljava/net/URL;)Z", "(Ljava/lang/Class<*>;Ljava/net/URL;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,$URL*)>(&ServiceProxy::parse)), "com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError"},
	{}
};

$InnerClassInfo _ServiceProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError", "com.sun.tools.javac.processing.ServiceProxy", "ServiceConfigurationError", $STATIC},
	{}
};

$ClassInfo _ServiceProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.processing.ServiceProxy",
	"java.lang.Object",
	nullptr,
	_ServiceProxy_FieldInfo_,
	_ServiceProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError"
};

$Object* allocate$ServiceProxy($Class* clazz) {
	return $of($alloc(ServiceProxy));
}

$String* ServiceProxy::prefix = nullptr;

void ServiceProxy::init$() {
}

void ServiceProxy::fail($Class* service, $String* msg) {
	$init(ServiceProxy);
	$useLocalCurrentObjectStackCache();
	$throwNew($ServiceProxy$ServiceConfigurationError, $$str({$($nc(service)->getName()), ": "_s, msg}));
}

void ServiceProxy::fail($Class* service, $URL* u, int32_t line, $String* msg) {
	$init(ServiceProxy);
	$useLocalCurrentObjectStackCache();
	fail(service, $$str({u, ":"_s, $$str(line), ": "_s, msg}));
}

bool ServiceProxy::parse($Class* service, $URL* u) {
	$init(ServiceProxy);
	$useLocalCurrentObjectStackCache();
	$var($InputStream, in, nullptr);
	$var($BufferedReader, r, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				$assign(in, $nc(u)->openStream());
				$assign(r, $new($BufferedReader, $$new($InputStreamReader, in, "utf-8"_s)));
				int32_t lc = 1;
				$var($String, ln, nullptr);
				while (($assign(ln, r->readLine())) != nullptr) {
					int32_t ci = $nc(ln)->indexOf((int32_t)u'#');
					if (ci >= 0) {
						$assign(ln, ln->substring(0, ci));
					}
					$assign(ln, ln->trim());
					int32_t n = ln->length();
					if (n != 0) {
						bool var$3 = (ln->indexOf((int32_t)u' ') >= 0);
						if (var$3 || (ln->indexOf((int32_t)u'\t') >= 0)) {
							fail(service, u, lc, "Illegal configuration-file syntax"_s);
						}
						int32_t cp = ln->codePointAt(0);
						if (!$Character::isJavaIdentifierStart(cp)) {
							fail(service, u, lc, $$str({"Illegal provider-class name: "_s, ln}));
						}
						for (int32_t i = $Character::charCount(cp); i < n; i += $Character::charCount(cp)) {
							cp = ln->codePointAt(i);
							if (!$Character::isJavaIdentifierPart(cp) && (cp != u'.')) {
								fail(service, u, lc, $$str({"Illegal provider-class name: "_s, ln}));
							}
						}
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($FileNotFoundException& x) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($IOException& x) {
				fail(service, $$str({": "_s, x}));
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			try {
				if (r != nullptr) {
					r->close();
				}
			} catch ($IOException& y) {
				fail(service, $$str({": "_s, y}));
			}
			try {
				if (in != nullptr) {
					in->close();
				}
			} catch ($IOException& y) {
				fail(service, $$str({": "_s, y}));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return false;
}

bool ServiceProxy::hasService($Class* service, $URLArray* urls) {
	$init(ServiceProxy);
	$useLocalCurrentObjectStackCache();
	{
		$var($URLArray, arr$, urls);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($URL, url, arr$->get(i$));
			{
				try {
					$var($String, fullName, $str({ServiceProxy::prefix, $($nc(service)->getName())}));
					$var($URL, u, $new($URL, url, fullName));
					bool found = parse(service, u);
					if (found) {
						return true;
					}
				} catch ($MalformedURLException& e) {
				}
			}
		}
	}
	return false;
}

ServiceProxy::ServiceProxy() {
}

void clinit$ServiceProxy($Class* class$) {
	$assignStatic(ServiceProxy::prefix, "META-INF/services/"_s);
}

$Class* ServiceProxy::load$($String* name, bool initialize) {
	$loadClass(ServiceProxy, name, initialize, &_ServiceProxy_ClassInfo_, clinit$ServiceProxy, allocate$ServiceProxy);
	return class$;
}

$Class* ServiceProxy::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com