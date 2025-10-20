#include <com/sun/tools/javac/main/Option$20.h>

#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef DEFAULT_MODULE_FOR_CREATED_FILES

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

$MethodInfo _Option$20_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$20::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$20::init$))},
	{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$20_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$20_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$20", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$20_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$20",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$20_MethodInfo_,
	nullptr,
	&_Option$20_EnclosingMethodInfo_,
	_Option$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$20($Class* clazz) {
	return $of($alloc(Option$20));
}

void Option$20::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$20::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, prev, $nc(helper)->get($Option::DEFAULT_MODULE_FOR_CREATED_FILES));
	if (prev != nullptr) {
		$throw($(helper->newInvalidValueException($($CompilerProperties$Errors::OptionTooMany($Option::DEFAULT_MODULE_FOR_CREATED_FILES->primaryName)))));
	} else if ($nc(arg)->isEmpty()) {
		$throw($(helper->newInvalidValueException($($CompilerProperties$Errors::NoValueForOption(option)))));
	} else if ($nc($($nc($(getPattern()))->matcher(arg)))->matches()) {
		helper->put($Option::DEFAULT_MODULE_FOR_CREATED_FILES->primaryName, arg);
	} else {
		$throw($(helper->newInvalidValueException($($CompilerProperties$Errors::BadValueForOption(option, arg)))));
	}
}

$Pattern* Option$20::getPattern() {
	return $Pattern::compile("[^,].*"_s);
}

Option$20::Option$20() {
}

$Class* Option$20::load$($String* name, bool initialize) {
	$loadClass(Option$20, name, initialize, &_Option$20_ClassInfo_, allocate$Option$20);
	return class$;
}

$Class* Option$20::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com