#include <com/sun/tools/javac/main/Option$33.h>

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

#undef ADD_READS

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

$MethodInfo _Option$33_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$33::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$33::init$))},
	{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$33_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$33_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$33", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$33_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$33",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$33_MethodInfo_,
	nullptr,
	&_Option$33_EnclosingMethodInfo_,
	_Option$33_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$33($Class* clazz) {
	return $of($alloc(Option$33));
}

void Option$33::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$33::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(arg)->isEmpty()) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::NoValueForOption(option)))));
	} else if ($nc($($nc($(getPattern()))->matcher(arg)))->matches()) {
		$init($Option);
		$var($String, prev, $nc(helper)->get($Option::ADD_READS));
		helper->put($Option::ADD_READS->primaryName, (prev == nullptr) ? arg : $$str({prev, $$str(u'\0'), arg}));
	} else {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::BadValueForOption(option, arg)))));
	}
}

$Pattern* Option$33::getPattern() {
	return $Pattern::compile("([^=]+)=(,*[^,].*)"_s);
}

Option$33::Option$33() {
}

$Class* Option$33::load$($String* name, bool initialize) {
	$loadClass(Option$33, name, initialize, &_Option$33_ClassInfo_, allocate$Option$33);
	return class$;
}

$Class* Option$33::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com