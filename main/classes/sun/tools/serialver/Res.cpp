#include <sun/tools/serialver/Res.h>

#include <java/lang/Error.h>
#include <java/text/MessageFormat.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace tools {
		namespace serialver {

$FieldInfo _Res_FieldInfo_[] = {
	{"messageRB", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(Res, messageRB)},
	{}
};

$MethodInfo _Res_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Res::*)()>(&Res::init$))},
	{"getText", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&Res::getText))},
	{"getText", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&Res::getText))},
	{"getText", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&Res::getText))},
	{"getText", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*,$String*,$String*)>(&Res::getText))},
	{"initResource", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Res::initResource))},
	{}
};

$ClassInfo _Res_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.serialver.Res",
	"java.lang.Object",
	nullptr,
	_Res_FieldInfo_,
	_Res_MethodInfo_
};

$Object* allocate$Res($Class* clazz) {
	return $of($alloc(Res));
}

$ResourceBundle* Res::messageRB = nullptr;

void Res::init$() {
}

void Res::initResource() {
	$load(Res);
	$beforeCallerSensitive();
	try {
		$init(Res);
		$assignStatic(Res::messageRB, $ResourceBundle::getBundle("sun.tools.serialver.resources.serialver"_s));
	} catch ($MissingResourceException& e) {
		$throwNew($Error, "Fatal: Resource for serialver is missing"_s);
	}
}

$String* Res::getText($String* key) {
	return getText(key, ($String*)nullptr);
}

$String* Res::getText($String* key, $String* a1) {
	return getText(key, a1, nullptr);
}

$String* Res::getText($String* key, $String* a1, $String* a2) {
	return getText(key, a1, a2, nullptr);
}

$String* Res::getText($String* key, $String* a1, $String* a2, $String* a3) {
	$useLocalCurrentObjectStackCache();
	$init(Res);
	if (Res::messageRB == nullptr) {
		initResource();
	}
	try {
		$var($String, message, $nc(Res::messageRB)->getString(key));
		return $MessageFormat::format(message, $$new($ObjectArray, {
			$of(a1),
			$of(a2),
			$of(a3)
		}));
	} catch ($MissingResourceException& e) {
		$throwNew($Error, $$str({"Fatal: Resource for serialver is broken. There is no "_s, key, " key in resource."_s}));
	}
	$shouldNotReachHere();
}

Res::Res() {
}

$Class* Res::load$($String* name, bool initialize) {
	$loadClass(Res, name, initialize, &_Res_ClassInfo_, allocate$Res);
	return class$;
}

$Class* Res::class$ = nullptr;

		} // serialver
	} // tools
} // sun