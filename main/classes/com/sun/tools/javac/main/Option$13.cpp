#include <com/sun/tools/javac/main/Option$13.h>

#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/CharSequence.h>
#include <java/util/StringJoiner.h>
#include <jcpp.h>

#undef JAVAC

using $TargetArray = $Array<::com::sun::tools::javac::jvm::Target>;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringJoiner = ::java::util::StringJoiner;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$13_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$13::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$13::init$))},
	{"help", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PROTECTED},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$13_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$13_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$13", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$13_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$13",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$13_MethodInfo_,
	nullptr,
	&_Option$13_EnclosingMethodInfo_,
	_Option$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$13($Class* clazz) {
	return $of($alloc(Option$13));
}

void Option$13::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$13::process($OptionHelper* helper, $String* option, $String* operand) {
	$useLocalCurrentObjectStackCache();
	$Target* target = $Target::lookup(operand);
	if (target == nullptr) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::InvalidTarget(operand)))));
	}
	$Option::process(helper, option, operand);
}

void Option$13::help($Log* log) {
	$useLocalCurrentObjectStackCache();
	$var($StringJoiner, sj, $new($StringJoiner, ", "_s));
	{
		$var($TargetArray, arr$, $Target::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Target* target = arr$->get(i$);
			{
				if ($nc(target)->isSupported()) {
					sj->add(target->name$);
				}
			}
		}
	}
	$init($Log$PrefixKind);
	$Option::help(log, $($nc(log)->localize($Log$PrefixKind::JAVAC, this->descrKey, $$new($ObjectArray, {$($of(sj->toString()))}))));
}

Option$13::Option$13() {
}

$Class* Option$13::load$($String* name, bool initialize) {
	$loadClass(Option$13, name, initialize, &_Option$13_ClassInfo_, allocate$Option$13);
	return class$;
}

$Class* Option$13::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com