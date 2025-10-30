#include <com/sun/tools/doclint/DocLint.h>

#include <com/sun/tools/doclint/DocLint$1.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef XCHECK_PACKAGE
#undef XMSGS_CUSTOM_PREFIX
#undef XMSGS_OPTION

using $Plugin = ::com::sun::source::util::Plugin;
using $DocLint$1 = ::com::sun::tools::doclint::DocLint$1;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Optional = ::java::util::Optional;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

class DocLint$$Lambda$lambda$newDocLint$0 : public $Predicate {
	$class(DocLint$$Lambda$lambda$newDocLint$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p_) override {
		 return DocLint::lambda$newDocLint$0($cast($ServiceLoader$Provider, p_));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DocLint$$Lambda$lambda$newDocLint$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DocLint$$Lambda$lambda$newDocLint$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocLint$$Lambda$lambda$newDocLint$0::*)()>(&DocLint$$Lambda$lambda$newDocLint$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DocLint$$Lambda$lambda$newDocLint$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.doclint.DocLint$$Lambda$lambda$newDocLint$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* DocLint$$Lambda$lambda$newDocLint$0::load$($String* name, bool initialize) {
	$loadClass(DocLint$$Lambda$lambda$newDocLint$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DocLint$$Lambda$lambda$newDocLint$0::class$ = nullptr;

$FieldInfo _DocLint_FieldInfo_[] = {
	{"XMSGS_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocLint, XMSGS_OPTION)},
	{"XMSGS_CUSTOM_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocLint, XMSGS_CUSTOM_PREFIX)},
	{"XCHECK_PACKAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocLint, XCHECK_PACKAGE)},
	{"docLintProvider", "Ljava/util/ServiceLoader$Provider;", "Ljava/util/ServiceLoader$Provider<Lcom/sun/tools/doclint/DocLint;>;", $PRIVATE | $STATIC, $staticField(DocLint, docLintProvider)},
	{}
};

$MethodInfo _DocLint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocLint::*)()>(&DocLint::init$))},
	{"isValidOption", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$newDocLint$0", "(Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ServiceLoader$Provider*)>(&DocLint::lambda$newDocLint$0))},
	{"newDocLint", "()Lcom/sun/tools/doclint/DocLint;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<DocLint*(*)()>(&DocLint::newDocLint))},
	{}
};

$InnerClassInfo _DocLint_InnerClassesInfo_[] = {
	{"com.sun.tools.doclint.DocLint$NoDocLint", "com.sun.tools.doclint.DocLint", "NoDocLint", $PRIVATE | $STATIC},
	{"com.sun.tools.doclint.DocLint$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DocLint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.doclint.DocLint",
	"java.lang.Object",
	"com.sun.source.util.Plugin",
	_DocLint_FieldInfo_,
	_DocLint_MethodInfo_,
	nullptr,
	nullptr,
	_DocLint_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.doclint.DocLint$NoDocLint,com.sun.tools.doclint.DocLint$1"
};

$Object* allocate$DocLint($Class* clazz) {
	return $of($alloc(DocLint));
}

$String* DocLint::XMSGS_OPTION = nullptr;
$String* DocLint::XMSGS_CUSTOM_PREFIX = nullptr;
$String* DocLint::XCHECK_PACKAGE = nullptr;
$ServiceLoader$Provider* DocLint::docLintProvider = nullptr;

void DocLint::init$() {
}

DocLint* DocLint::newDocLint() {
	$load(DocLint);
	$synchronized(class$) {
		$init(DocLint);
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		if (DocLint::docLintProvider == nullptr) {
			$assignStatic(DocLint::docLintProvider, $cast($ServiceLoader$Provider, $nc($($nc($($nc($($nc($($ServiceLoader::load(DocLint::class$, $($ClassLoader::getSystemClassLoader()))))->stream()))->filter(static_cast<$Predicate*>($$new(DocLint$$Lambda$lambda$newDocLint$0)))))->findFirst()))->orElse($$new($DocLint$1))));
		}
		return $cast(DocLint, $nc(DocLint::docLintProvider)->get());
	}
}

bool DocLint::lambda$newDocLint$0($ServiceLoader$Provider* p_) {
	$init(DocLint);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(($cast(DocLint, $($nc(p_)->get()))))->getName()))->equals("doclint"_s);
}

DocLint::DocLint() {
}

void clinit$DocLint($Class* class$) {
	$assignStatic(DocLint::XMSGS_OPTION, "-Xmsgs"_s);
	$assignStatic(DocLint::XMSGS_CUSTOM_PREFIX, "-Xmsgs:"_s);
	$assignStatic(DocLint::XCHECK_PACKAGE, "-XcheckPackage:"_s);
}

$Class* DocLint::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DocLint$$Lambda$lambda$newDocLint$0::classInfo$.name)) {
			return DocLint$$Lambda$lambda$newDocLint$0::load$(name, initialize);
		}
	}
	$loadClass(DocLint, name, initialize, &_DocLint_ClassInfo_, clinit$DocLint, allocate$DocLint);
	return class$;
}

$Class* DocLint::class$ = nullptr;

			} // doclint
		} // tools
	} // sun
} // com