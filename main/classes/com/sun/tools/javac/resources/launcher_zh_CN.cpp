#include <com/sun/tools/javac/resources/launcher_zh_CN.h>

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

$MethodInfo _launcher_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_zh_CN::*)()>(&launcher_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.launcher_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_zh_CN_MethodInfo_
};

$Object* allocate$launcher_zh_CN($Class* clazz) {
	return $of($alloc(launcher_zh_CN));
}

void launcher_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("launcher.err.cant.access.main.method"_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee\u7c7b {0} \u4e2d\u7684 main \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.class"_s),
			$of(u"\u627e\u4e0d\u5230\u7c7b\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.main.method"_s),
			$of(u"\u5728\u7c7b {0} \u4e2d\u627e\u4e0d\u5230 main(String[]) \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.read.file"_s),
			$of(u"\u8bfb\u53d6\u6e90\u6587\u4ef6 {0} \u65f6\u51fa\u9519\uff1a{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.compilation.failed"_s),
			$of(u"\u7f16\u8bd1\u5931\u8d25"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.enable.preview.requires.source"_s),
			$of(u"--enable-preview \u5fc5\u987b\u4e0e --source \u4e00\u8d77\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.file.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6e90\u6587\u4ef6\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.filename"_s),
			$of(u"\u6e90\u6587\u4ef6\u7684\u8def\u5f84\u65e0\u6548\uff1a{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.value.for.source"_s),
			$of(u"--source \u9009\u9879\u7684\u503c\u65e0\u6548\uff1a{0}\n"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.public.static"_s),
			$of(u"\'\'main\'\' \u65b9\u6cd5\u672a\u58f0\u660e \'\'public static\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.void"_s),
			$of(u"\u672a\u4f7f\u7528\u8fd4\u56de\u7c7b\u578b \'\'void\'\' \u58f0\u660e \'\'main\'\' \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.args"_s),
			$of(u"\u65e0\u6e90\u6587\u4ef6\u7684\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.class"_s),
			$of(u"\u5728\u6e90\u6587\u4ef6\u4e2d\u672a\u58f0\u660e\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.value.for.option"_s),
			$of(u"\u6ca1\u6709\u4e3a\u9009\u9879 {0} \u6307\u5b9a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.error"_s),
			$of(u"\u9519\u8bef: "_s)
		})
	});
}

launcher_zh_CN::launcher_zh_CN() {
}

$Class* launcher_zh_CN::load$($String* name, bool initialize) {
	$loadClass(launcher_zh_CN, name, initialize, &_launcher_zh_CN_ClassInfo_, allocate$launcher_zh_CN);
	return class$;
}

$Class* launcher_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com