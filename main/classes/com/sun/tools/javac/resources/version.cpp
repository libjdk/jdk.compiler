#include <com/sun/tools/javac/resources/version.h>

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

$MethodInfo _version_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(version::*)()>(&version::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _version_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.version",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_version_MethodInfo_
};

$Object* allocate$version($Class* clazz) {
	return $of($alloc(version));
}

void version::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* version::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("full"_s),
			$of("17+35-2724"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk"_s),
			$of("17"_s)
		}),
		$$new($ObjectArray, {
			$of("release"_s),
			$of("17"_s)
		})
	});
}

version::version() {
}

$Class* version::load$($String* name, bool initialize) {
	$loadClass(version, name, initialize, &_version_ClassInfo_, allocate$version);
	return class$;
}

$Class* version::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com