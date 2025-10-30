#include <com/sun/tools/javac/main/Option$39.h>

#include <com/sun/tools/javac/main/Option$41.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef ADD_EXPORTS
#undef ADD_MODULES
#undef LIMIT_MODULES
#undef MODULE_PATH
#undef PATCH_MODULE
#undef UPGRADE_MODULE_PATH

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$41 = ::com::sun::tools::javac::main::Option$41;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $VM = ::jdk::internal::misc::VM;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$39$$Lambda$lambda$process$0 : public $Supplier {
	$class(Option$39$$Lambda$lambda$process$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* arg) {
		$set(this, arg, arg);
	}
	virtual $Object* get() override {
		 return $of(Option$39::lambda$process$0(arg));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$39$$Lambda$lambda$process$0>());
	}
	$String* arg = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Option$39$$Lambda$lambda$process$0::fieldInfos[2] = {
	{"arg", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Option$39$$Lambda$lambda$process$0, arg)},
	{}
};
$MethodInfo Option$39$$Lambda$lambda$process$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Option$39$$Lambda$lambda$process$0::*)($String*)>(&Option$39$$Lambda$lambda$process$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$39$$Lambda$lambda$process$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$39$$Lambda$lambda$process$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Option$39$$Lambda$lambda$process$0::load$($String* name, bool initialize) {
	$loadClass(Option$39$$Lambda$lambda$process$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$39$$Lambda$lambda$process$0::class$ = nullptr;

class Option$39$$Lambda$lambda$process$1$1 : public $Predicate {
	$class(Option$39$$Lambda$lambda$process$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return Option$39::lambda$process$1($cast($String, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$39$$Lambda$lambda$process$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Option$39$$Lambda$lambda$process$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Option$39$$Lambda$lambda$process$1$1::*)()>(&Option$39$$Lambda$lambda$process$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$39$$Lambda$lambda$process$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$39$$Lambda$lambda$process$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Option$39$$Lambda$lambda$process$1$1::load$($String* name, bool initialize) {
	$loadClass(Option$39$$Lambda$lambda$process$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$39$$Lambda$lambda$process$1$1::class$ = nullptr;

$MethodInfo _Option$39_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$39::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$39::init$))},
	{"getSupportedRuntimeOptions", "()[Lcom/sun/tools/javac/main/Option;", nullptr, $PRIVATE, $method(static_cast<$OptionArray*(Option$39::*)()>(&Option$39::getSupportedRuntimeOptions))},
	{"lambda$process$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&Option$39::lambda$process$0))},
	{"lambda$process$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&Option$39::lambda$process$1))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$39_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$39_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$39", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$39_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$39",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$39_MethodInfo_,
	nullptr,
	&_Option$39_EnclosingMethodInfo_,
	_Option$39_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$39($Class* clazz) {
	return $of($alloc(Option$39));
}

void Option$39::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$39::process($OptionHelper* helper, $String* option) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, runtimeArgs, $VM::getRuntimeArguments());
	{
		$var($StringArray, arr$, runtimeArgs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, arg, arr$->get(i$));
			{
				{
					$var($OptionArray, arr$, getSupportedRuntimeOptions());
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$Option* o = arr$->get(i$);
						{
							if ($nc(o)->matches(arg)) {
								$init($Option$41);
								{
									int32_t eq = 0;
									$var($String, mods, nullptr)
									switch ($nc($Option$41::$SwitchMap$com$sun$tools$javac$main$Option)->get((o)->ordinal())) {
									case 1:
										{
											eq = $nc(arg)->indexOf((int32_t)u'=');
											$Assert::check(eq > 0, static_cast<$Supplier*>($$new(Option$39$$Lambda$lambda$process$0, arg)));
											$assign(mods, $cast($String, $nc($($nc($($Arrays::stream($($(arg->substring(eq + 1))->split(","_s)))))->filter(static_cast<$Predicate*>($$new(Option$39$$Lambda$lambda$process$1$1)))))->collect($($Collectors::joining(","_s)))));
											if (!$nc(mods)->isEmpty()) {
												$var($String, updatedArg, $str({$(arg->substring(0, eq + 1)), mods}));
												o->handleOption(helper, updatedArg, $($Collections::emptyIterator()));
											}
											break;
										}
									default:
										{
											o->handleOption(helper, arg, $($Collections::emptyIterator()));
											break;
										}
									}
								}
								break;
							}
						}
					}
				}
			}
		}
	}
}

$OptionArray* Option$39::getSupportedRuntimeOptions() {
	$init($Option);
	$var($OptionArray, supportedRuntimeOptions, $new($OptionArray, {
		$Option::ADD_EXPORTS,
		$Option::ADD_MODULES,
		$Option::LIMIT_MODULES,
		$Option::MODULE_PATH,
		$Option::UPGRADE_MODULE_PATH,
		$Option::PATCH_MODULE
	}));
	return supportedRuntimeOptions;
}

bool Option$39::lambda$process$1($String* s) {
	$init(Option$39);
	bool var$0 = !$nc(s)->isEmpty();
	return var$0 && !s->equals("ALL-DEFAULT"_s);
}

$String* Option$39::lambda$process$0($String* arg) {
	$init(Option$39);
	return ($str({"invalid runtime option:"_s, arg}));
}

Option$39::Option$39() {
}

$Class* Option$39::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Option$39$$Lambda$lambda$process$0::classInfo$.name)) {
			return Option$39$$Lambda$lambda$process$0::load$(name, initialize);
		}
		if (name->equals(Option$39$$Lambda$lambda$process$1$1::classInfo$.name)) {
			return Option$39$$Lambda$lambda$process$1$1::load$(name, initialize);
		}
	}
	$loadClass(Option$39, name, initialize, &_Option$39_ClassInfo_, allocate$Option$39);
	return class$;
}

$Class* Option$39::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com