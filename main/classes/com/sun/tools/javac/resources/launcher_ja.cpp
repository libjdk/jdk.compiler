#include <com/sun/tools/javac/resources/launcher_ja.h>

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

$MethodInfo _launcher_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_ja::*)()>(&launcher_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.launcher_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_ja_MethodInfo_
};

$Object* allocate$launcher_ja($Class* clazz) {
	return $of($alloc(launcher_ja));
}

void launcher_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("launcher.err.cant.access.main.method"_s),
			$of(u"\u30af\u30e9\u30b9\u306e\u30e1\u30a4\u30f3\u30fb\u30e1\u30bd\u30c3\u30c9\u306b\u30a2\u30af\u30bb\u30b9\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.class"_s),
			$of(u"\u30af\u30e9\u30b9\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.main.method"_s),
			$of(u"\u30af\u30e9\u30b9\u306bmain(String[])\u30e1\u30bd\u30c3\u30c9\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.read.file"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb{0}\u306e\u8aad\u53d6\u308a\u30a8\u30e9\u30fc: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.compilation.failed"_s),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30eb\u304c\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.enable.preview.requires.source"_s),
			$of(u"--enable-preview\u306f--source\u3068\u3068\u3082\u306b\u4f7f\u7528\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.file.not.found"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.filename"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u7121\u52b9\u306a\u30d1\u30b9: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.value.for.source"_s),
			$of(u"--source\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5024\u304c\u7121\u52b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.public.static"_s),
			$of(u"\'\'main\'\u30e1\u30bd\u30c3\u30c9\u304c\'\'public static\'\'\u3068\u3057\u3066\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.void"_s),
			$of(u"\'\'main\'\u30e1\u30bd\u30c3\u30c9\u304c\u623b\u308a\u578b\'\'void\'\'\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.args"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u30d1\u30b9\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.class"_s),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3067\u5ba3\u8a00\u3055\u308c\u305f\u30af\u30e9\u30b9\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.value.for.option"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u5024\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.error"_s),
			$of(u"\u30a8\u30e9\u30fc: "_s)
		})
	});
}

launcher_ja::launcher_ja() {
}

$Class* launcher_ja::load$($String* name, bool initialize) {
	$loadClass(launcher_ja, name, initialize, &_launcher_ja_ClassInfo_, allocate$launcher_ja);
	return class$;
}

$Class* launcher_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com