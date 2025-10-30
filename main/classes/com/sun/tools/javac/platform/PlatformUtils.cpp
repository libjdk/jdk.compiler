#include <com/sun/tools/javac/platform/PlatformUtils.h>

#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/platform/PlatformProvider$PlatformNotSupported.h>
#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $PlatformProvider = ::com::sun::tools::javac::platform::PlatformProvider;
using $PlatformProvider$PlatformNotSupported = ::com::sun::tools::javac::platform::PlatformProvider$PlatformNotSupported;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Optional = ::java::util::Optional;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Spliterator = ::java::util::Spliterator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0 : public $Predicate {
	$class(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* platformProviderName) {
		$set(this, platformProviderName, platformProviderName);
	}
	virtual bool test(Object$* provider) override {
		 return PlatformUtils::lambda$lookupPlatformDescription$0(platformProviderName, $cast($PlatformProvider, provider));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0>());
	}
	$String* platformProviderName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::fieldInfos[2] = {
	{"platformProviderName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, platformProviderName)},
	{}
};
$MethodInfo PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::*)($String*)>(&PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::load$($String* name, bool initialize) {
	$loadClass(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::class$ = nullptr;

class PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1 : public $Function {
	$class(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$($String* platformProviderName, $String* platformOptions) {
		$set(this, platformProviderName, platformProviderName);
		$set(this, platformOptions, platformOptions);
	}
	virtual $Object* apply(Object$* provider) override {
		 return $of(PlatformUtils::lambda$lookupPlatformDescription$1(platformProviderName, platformOptions, $cast($PlatformProvider, provider)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1>());
	}
	$String* platformProviderName = nullptr;
	$String* platformOptions = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::fieldInfos[3] = {
	{"platformProviderName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, platformProviderName)},
	{"platformOptions", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, platformOptions)},
	{}
};
$MethodInfo PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::*)($String*,$String*)>(&PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::load$($String* name, bool initialize) {
	$loadClass(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::class$ = nullptr;

class PlatformUtils$$Lambda$equals$2 : public $Predicate {
	$class(PlatformUtils$$Lambda$equals$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		 return $nc(inst$)->equals(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformUtils$$Lambda$equals$2>());
	}
	$String* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PlatformUtils$$Lambda$equals$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$equals$2, inst$)},
	{}
};
$MethodInfo PlatformUtils$$Lambda$equals$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PlatformUtils$$Lambda$equals$2::*)($String*)>(&PlatformUtils$$Lambda$equals$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformUtils$$Lambda$equals$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.platform.PlatformUtils$$Lambda$equals$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* PlatformUtils$$Lambda$equals$2::load$($String* name, bool initialize) {
	$loadClass(PlatformUtils$$Lambda$equals$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformUtils$$Lambda$equals$2::class$ = nullptr;

$MethodInfo _PlatformUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformUtils::*)()>(&PlatformUtils::init$))},
	{"lambda$lookupPlatformDescription$0", "(Ljava/lang/String;Lcom/sun/tools/javac/platform/PlatformProvider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$PlatformProvider*)>(&PlatformUtils::lambda$lookupPlatformDescription$0))},
	{"lambda$lookupPlatformDescription$1", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/platform/PlatformProvider;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Optional*(*)($String*,$String*,$PlatformProvider*)>(&PlatformUtils::lambda$lookupPlatformDescription$1))},
	{"lookupPlatformDescription", "(Ljava/lang/String;)Lcom/sun/tools/javac/platform/PlatformDescription;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlatformDescription*(*)($String*)>(&PlatformUtils::lookupPlatformDescription))},
	{}
};

$ClassInfo _PlatformUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.platform.PlatformUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PlatformUtils_MethodInfo_
};

$Object* allocate$PlatformUtils($Class* clazz) {
	return $of($alloc(PlatformUtils));
}

void PlatformUtils::init$() {
}

$PlatformDescription* PlatformUtils::lookupPlatformDescription($String* platformString) {
	$load(PlatformUtils);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t separator = $nc(platformString)->indexOf(":"_s);
	$var($String, platformProviderName, separator != (-1) ? platformString->substring(0, separator) : platformString);
	$var($String, platformOptions, separator != (-1) ? platformString->substring(separator + 1) : ""_s);
	$load($PlatformProvider);
	$load($Arguments);
	$var($Iterable, providers, $ServiceLoader::load($PlatformProvider::class$, $($Arguments::class$->getClassLoader())));
	return $cast($PlatformDescription, $nc($($nc($($nc($($nc($($StreamSupport::stream($($nc(providers)->spliterator()), false)))->filter(static_cast<$Predicate*>($$new(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, platformProviderName)))))->findFirst()))->flatMap(static_cast<$Function*>($$new(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, platformProviderName, platformOptions)))))->orElse(nullptr));
}

$Optional* PlatformUtils::lambda$lookupPlatformDescription$1($String* platformProviderName, $String* platformOptions, $PlatformProvider* provider) {
	try {
		return $Optional::of($($nc(provider)->getPlatform(platformProviderName, platformOptions)));
	} catch ($PlatformProvider$PlatformNotSupported& pns) {
		return $Optional::empty();
	}
	$shouldNotReachHere();
}

bool PlatformUtils::lambda$lookupPlatformDescription$0($String* platformProviderName, $PlatformProvider* provider) {
	$useLocalCurrentObjectStackCache();
	return $nc($($StreamSupport::stream($($nc($($nc(provider)->getSupportedPlatformNames()))->spliterator()), false)))->anyMatch(static_cast<$Predicate*>($$new(PlatformUtils$$Lambda$equals$2, static_cast<$String*>($nc(platformProviderName)))));
}

PlatformUtils::PlatformUtils() {
}

$Class* PlatformUtils::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::classInfo$.name)) {
			return PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::load$(name, initialize);
		}
		if (name->equals(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::classInfo$.name)) {
			return PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::load$(name, initialize);
		}
		if (name->equals(PlatformUtils$$Lambda$equals$2::classInfo$.name)) {
			return PlatformUtils$$Lambda$equals$2::load$(name, initialize);
		}
	}
	$loadClass(PlatformUtils, name, initialize, &_PlatformUtils_ClassInfo_, allocate$PlatformUtils);
	return class$;
}

$Class* PlatformUtils::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com