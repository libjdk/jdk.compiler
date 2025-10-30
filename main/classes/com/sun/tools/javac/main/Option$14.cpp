#include <com/sun/tools/javac/main/Option$14.h>

#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef JAVAC

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $PlatformProvider = ::com::sun::tools::javac::platform::PlatformProvider;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$14$$Lambda$lambda$help$0 : public $Function {
	$class(Option$14$$Lambda$lambda$help$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* provider) override {
		 return $of(Option$14::lambda$help$0($cast($PlatformProvider, provider)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$14$$Lambda$lambda$help$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Option$14$$Lambda$lambda$help$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Option$14$$Lambda$lambda$help$0::*)()>(&Option$14$$Lambda$lambda$help$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$14$$Lambda$lambda$help$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$14$$Lambda$lambda$help$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Option$14$$Lambda$lambda$help$0::load$($String* name, bool initialize) {
	$loadClass(Option$14$$Lambda$lambda$help$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$14$$Lambda$lambda$help$0::class$ = nullptr;

class Option$14$$Lambda$LinkedHashSet$1 : public $Supplier {
	$class(Option$14$$Lambda$LinkedHashSet$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($LinkedHashSet));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$14$$Lambda$LinkedHashSet$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Option$14$$Lambda$LinkedHashSet$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Option$14$$Lambda$LinkedHashSet$1::*)()>(&Option$14$$Lambda$LinkedHashSet$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$14$$Lambda$LinkedHashSet$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$14$$Lambda$LinkedHashSet$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* Option$14$$Lambda$LinkedHashSet$1::load$($String* name, bool initialize) {
	$loadClass(Option$14$$Lambda$LinkedHashSet$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$14$$Lambda$LinkedHashSet$1::class$ = nullptr;

$MethodInfo _Option$14_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$14::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$14::init$))},
	{"help", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PROTECTED},
	{"lambda$help$0", "(Lcom/sun/tools/javac/platform/PlatformProvider;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($PlatformProvider*)>(&Option$14::lambda$help$0))},
	{}
};

$EnclosingMethodInfo _Option$14_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$14_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$14", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$14_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$14",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$14_MethodInfo_,
	nullptr,
	&_Option$14_EnclosingMethodInfo_,
	_Option$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$14($Class* clazz) {
	return $of($alloc(Option$14));
}

void Option$14::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$14::help($Log* log) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($PlatformProvider);
	$load($Arguments);
	$var($Iterable, providers, $ServiceLoader::load($PlatformProvider::class$, $($Arguments::class$->getClassLoader())));
	$var($Set, platforms, $cast($Set, $nc($($nc($($StreamSupport::stream($($nc(providers)->spliterator()), false)))->flatMap(static_cast<$Function*>($$new(Option$14$$Lambda$lambda$help$0)))))->collect($($Collectors::toCollection(static_cast<$Supplier*>($$new(Option$14$$Lambda$LinkedHashSet$1)))))));
	$var($StringBuilder, targets, $new($StringBuilder));
	$var($String, delim, ""_s);
	{
		$var($Iterator, i$, $nc(platforms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, platform, $cast($String, i$->next()));
			{
				targets->append(delim);
				targets->append(platform);
				$assign(delim, ", "_s);
			}
		}
	}
	$init($Log$PrefixKind);
	$Option::help(log, $($nc(log)->localize($Log$PrefixKind::JAVAC, this->descrKey, $$new($ObjectArray, {$($of(targets->toString()))}))));
}

$Stream* Option$14::lambda$help$0($PlatformProvider* provider) {
	$init(Option$14);
	$useLocalCurrentObjectStackCache();
	return $StreamSupport::stream($($nc($($nc(provider)->getSupportedPlatformNames()))->spliterator()), false);
}

Option$14::Option$14() {
}

$Class* Option$14::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Option$14$$Lambda$lambda$help$0::classInfo$.name)) {
			return Option$14$$Lambda$lambda$help$0::load$(name, initialize);
		}
		if (name->equals(Option$14$$Lambda$LinkedHashSet$1::classInfo$.name)) {
			return Option$14$$Lambda$LinkedHashSet$1::load$(name, initialize);
		}
	}
	$loadClass(Option$14, name, initialize, &_Option$14_ClassInfo_, allocate$Option$14);
	return class$;
}

$Class* Option$14::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com