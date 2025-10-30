#include <com/sun/tools/javac/main/Option$7.h>

#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef PATCH_MODULE

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$7$$Lambda$lambda$process$0 : public $Function {
	$class(Option$7$$Lambda$lambda$process$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Option$7::lambda$process$0($cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Option$7$$Lambda$lambda$process$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Option$7$$Lambda$lambda$process$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Option$7$$Lambda$lambda$process$0::*)()>(&Option$7$$Lambda$lambda$process$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Option$7$$Lambda$lambda$process$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.main.Option$7$$Lambda$lambda$process$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Option$7$$Lambda$lambda$process$0::load$($String* name, bool initialize) {
	$loadClass(Option$7$$Lambda$lambda$process$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Option$7$$Lambda$lambda$process$0::class$ = nullptr;

$MethodInfo _Option$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$7::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$7::init$))},
	{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC},
	{"lambda$process$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&Option$7::lambda$process$0))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$7", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$7_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$7",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$7_MethodInfo_,
	nullptr,
	&_Option$7_EnclosingMethodInfo_,
	_Option$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$7($Class* clazz) {
	return $of($alloc(Option$7));
}

void Option$7::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$7::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(arg)->isEmpty()) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::NoValueForOption(option)))));
	} else if ($nc($($nc($(getPattern()))->matcher(arg)))->matches()) {
		$init($Option);
		$var($String, prev, $nc(helper)->get($Option::PATCH_MODULE));
		if (prev == nullptr) {
			$Option::process(helper, option, arg);
		} else {
			$var($String, argModulePackage, arg->substring(0, arg->indexOf((int32_t)u'=')));
			bool isRepeated = $nc(($cast($Set, $($nc($($nc($($Arrays::stream($($nc(prev)->split($cstr({'\0'}))))))->map(static_cast<$Function*>($$new(Option$7$$Lambda$lambda$process$0)))))->collect($($Collectors::toSet()))))))->contains(argModulePackage);
			if (isRepeated) {
				$throw($(helper->newInvalidValueException($($CompilerProperties$Errors::RepeatedValueForPatchModule(argModulePackage)))));
			} else {
				$Option::process(helper, option, $$str({prev, $$str(u'\0'), arg}));
			}
		}
	} else {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::BadValueForOption(option, arg)))));
	}
}

$Pattern* Option$7::getPattern() {
	return $Pattern::compile("([^/]+)=(,*[^,].*)"_s);
}

$String* Option$7::lambda$process$0($String* s) {
	$init(Option$7);
	return $nc(s)->substring(0, s->indexOf((int32_t)u'='));
}

Option$7::Option$7() {
}

$Class* Option$7::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Option$7$$Lambda$lambda$process$0::classInfo$.name)) {
			return Option$7$$Lambda$lambda$process$0::load$(name, initialize);
		}
	}
	$loadClass(Option$7, name, initialize, &_Option$7_ClassInfo_, allocate$Option$7);
	return class$;
}

$Class* Option$7::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com