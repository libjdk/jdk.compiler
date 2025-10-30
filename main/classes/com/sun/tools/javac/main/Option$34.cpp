#include <com/sun/tools/javac/main/Option$34.h>

#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef ADD_MODULES

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$34_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$34::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$34::init$))},
	{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$34_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$34_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$34", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$34_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$34",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$34_MethodInfo_,
	nullptr,
	&_Option$34_EnclosingMethodInfo_,
	_Option$34_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$34($Class* clazz) {
	return $of($alloc(Option$34));
}

void Option$34::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$34::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(arg)->isEmpty()) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::NoValueForOption(option)))));
	} else if ($nc($($nc($(getPattern()))->matcher(arg)))->matches()) {
		$init($Option);
		$var($String, prev, $nc(helper)->get($Option::ADD_MODULES));
		helper->put($Option::ADD_MODULES->primaryName, (prev == nullptr) ? arg : $$str({prev, $$str(u','), arg}));
	} else {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::BadValueForOption(option, arg)))));
	}
}

$Pattern* Option$34::getPattern() {
	return $Pattern::compile(",*[^,].*"_s);
}

Option$34::Option$34() {
}

$Class* Option$34::load$($String* name, bool initialize) {
	$loadClass(Option$34, name, initialize, &_Option$34_ClassInfo_, allocate$Option$34);
	return class$;
}

$Class* Option$34::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com