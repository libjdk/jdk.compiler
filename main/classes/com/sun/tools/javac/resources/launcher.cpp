#include <com/sun/tools/javac/resources/launcher.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$MethodInfo _launcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher::*)()>(&launcher::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.launcher",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_MethodInfo_
};

$Object* allocate$launcher($Class* clazz) {
	return $of($alloc(launcher));
}

void launcher::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("launcher.err.cant.access.main.method"_s),
			$of("can\'\'t access main method in class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.class"_s),
			$of("can\'\'t find class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.main.method"_s),
			$of("can\'\'t find main(String[]) method in class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.read.file"_s),
			$of("error reading source file {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.compilation.failed"_s),
			$of("compilation failed"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.enable.preview.requires.source"_s),
			$of("--enable-preview must be used with --source"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.file.not.found"_s),
			$of("source file not found: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.filename"_s),
			$of("invalid path for source file: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.value.for.source"_s),
			$of("invalid value for --source option: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.public.static"_s),
			$of("\'\'main\'\' method is not declared \'\'public static\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.void"_s),
			$of("\'\'main\'\' method is not declared with a return type of \'\'void\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.args"_s),
			$of("no path for source file"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.class"_s),
			$of("no class declared in source file"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.value.for.option"_s),
			$of("no value given for option: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.error"_s),
			$of("error: "_s)
		})
	});
}

launcher::launcher() {
}

$Class* launcher::load$($String* name, bool initialize) {
	$loadClass(launcher, name, initialize, &_launcher_ClassInfo_, allocate$launcher);
	return class$;
}

$Class* launcher::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com