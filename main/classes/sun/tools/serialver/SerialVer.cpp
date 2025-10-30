#include <sun/tools/serialver/SerialVer.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/SecureClassLoader.h>
#include <sun/tools/serialver/Res.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $PrintStream = ::java::io::PrintStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $Res = ::sun::tools::serialver::Res;

namespace sun {
	namespace tools {
		namespace serialver {

$FieldInfo _SerialVer_FieldInfo_[] = {
	{"loader", "Ljava/net/URLClassLoader;", nullptr, $STATIC, $staticField(SerialVer, loader)},
	{}
};

$MethodInfo _SerialVer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerialVer::*)()>(&SerialVer::init$))},
	{"initializeLoader", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&SerialVer::initializeLoader)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SerialVer::main))},
	{"resolveClass", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&SerialVer::resolveClass)), "java.lang.ClassNotFoundException"},
	{"serialSyntax", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&SerialVer::serialSyntax)), "java.lang.ClassNotFoundException"},
	{"usage", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&SerialVer::usage))},
	{}
};

$ClassInfo _SerialVer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.tools.serialver.SerialVer",
	"java.lang.Object",
	nullptr,
	_SerialVer_FieldInfo_,
	_SerialVer_MethodInfo_
};

$Object* allocate$SerialVer($Class* clazz) {
	return $of($alloc(SerialVer));
}

$URLClassLoader* SerialVer::loader = nullptr;

void SerialVer::init$() {
}

void SerialVer::initializeLoader($String* cp) {
	$init(SerialVer);
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringArray, paths, $nc(cp)->split($File::pathSeparator));
	int32_t count = paths->length;
	$var($URLArray, urls, $new($URLArray, count));
	for (int32_t i = 0; i < count; ++i) {
		urls->set(i, $($nc($($nc($($Paths::get(paths->get(i), $$new($StringArray, 0))))->toUri()))->toURL()));
	}
	$assignStatic(SerialVer::loader, $new($URLClassLoader, urls));
}

$String* SerialVer::serialSyntax($String* classname) {
	$init(SerialVer);
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	bool classFound = false;
	if ($nc(classname)->indexOf((int32_t)u'$') != -1) {
		$assign(ret, resolveClass(classname));
	} else {
		try {
			$assign(ret, resolveClass(classname));
			classFound = true;
		} catch ($ClassNotFoundException& e) {
		}
		if (!classFound) {
			$var($StringBuilder, workBuffer, $new($StringBuilder, classname));
			$var($String, workName, workBuffer->toString());
			int32_t i = 0;
			while ((i = $nc(workName)->lastIndexOf((int32_t)u'.')) != -1 && !classFound) {
				workBuffer->setCharAt(i, u'$');
				try {
					$assign(workName, workBuffer->toString());
					$assign(ret, resolveClass(workName));
					classFound = true;
				} catch ($ClassNotFoundException& e) {
				}
			}
		}
		if (!classFound) {
			$throwNew($ClassNotFoundException);
		}
	}
	return ret;
}

$String* SerialVer::resolveClass($String* classname) {
	$init(SerialVer);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* cl = $Class::forName(classname, false, SerialVer::loader);
	$var($ObjectStreamClass, desc, $ObjectStreamClass::lookup(cl));
	if (desc != nullptr) {
		return $str({"    private static final long serialVersionUID = "_s, $$str(desc->getSerialVersionUID()), "L;"_s});
	} else {
		return nullptr;
	}
}

void SerialVer::main($StringArray* args) {
	$init(SerialVer);
	$useLocalCurrentObjectStackCache();
	$var($String, envcp, nullptr);
	int32_t i = 0;
	if ($nc(args)->length == 0) {
		usage();
		$System::exit(1);
	}
	for (i = 0; i < $nc(args)->length; ++i) {
		if ($nc(args->get(i))->equals("-classpath"_s)) {
			if ((i + 1 == args->length) || $nc(args->get(i + 1))->startsWith("-"_s)) {
				$nc($System::err)->println($($Res::getText("error.missing.classpath"_s)));
				usage();
				$System::exit(1);
			}
			$assign(envcp, $new($String, args->get(i + 1)));
			++i;
		} else if ($nc(args->get(i))->startsWith("-"_s)) {
			$nc($System::err)->println($($Res::getText("invalid.flag"_s, args->get(i))));
			usage();
			$System::exit(1);
		} else {
			break;
		}
	}
	if (envcp == nullptr) {
		$assign(envcp, $System::getProperty("env.class.path"_s));
		if (envcp == nullptr) {
			$assign(envcp, "."_s);
		}
	}
	try {
		initializeLoader(envcp);
	} catch ($MalformedURLException& mue) {
		$nc($System::err)->println($($Res::getText("error.parsing.classpath"_s, envcp)));
		$System::exit(2);
	} catch ($IOException& ioe) {
		$nc($System::err)->println($($Res::getText("error.parsing.classpath"_s, envcp)));
		$System::exit(3);
	}
	if (i == $nc(args)->length) {
		usage();
		$System::exit(1);
	}
	bool exitFlag = false;
	for (i = i; i < $nc(args)->length; ++i) {
		try {
			$var($String, syntax, serialSyntax(args->get(i)));
			if (syntax != nullptr) {
				$nc($System::out)->println($$str({args->get(i), ":"_s, syntax}));
			} else {
				$nc($System::err)->println($($Res::getText("NotSerializable"_s, args->get(i))));
				exitFlag = true;
			}
		} catch ($ClassNotFoundException& cnf) {
			$nc($System::err)->println($($Res::getText("ClassNotFound"_s, args->get(i))));
			exitFlag = true;
		}
	}
	if (exitFlag) {
		$System::exit(1);
	}
}

void SerialVer::usage() {
	$init(SerialVer);
	$nc($System::err)->println($($Res::getText("usage"_s)));
}

void clinit$SerialVer($Class* class$) {
	$assignStatic(SerialVer::loader, nullptr);
}

SerialVer::SerialVer() {
}

$Class* SerialVer::load$($String* name, bool initialize) {
	$loadClass(SerialVer, name, initialize, &_SerialVer_ClassInfo_, clinit$SerialVer, allocate$SerialVer);
	return class$;
}

$Class* SerialVer::class$ = nullptr;

		} // serialver
	} // tools
} // sun