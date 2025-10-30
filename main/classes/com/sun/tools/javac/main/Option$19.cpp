#include <com/sun/tools/javac/main/Option$19.h>

#include <com/sun/tools/javac/main/Option$ArgKind.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$ArgKind = ::com::sun::tools::javac::main::Option$ArgKind;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$19_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$19::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option$19::init$))},
	{"hasArg", "()Z", nullptr, $PUBLIC},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$19_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$19_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$19", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$19_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$19",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$19_MethodInfo_,
	nullptr,
	&_Option$19_EnclosingMethodInfo_,
	_Option$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$19($Class* clazz) {
	return $of($alloc(Option$19));
}

void Option$19::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* ak) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group, ak);
}

bool Option$19::matches($String* arg) {
	return $nc(arg)->startsWith("-A"_s);
}

bool Option$19::hasArg() {
	return false;
}

void Option$19::process($OptionHelper* helper, $String* option) {
	$useLocalCurrentObjectStackCache();
	int32_t argLength = $nc(option)->length();
	if (argLength == 2) {
		$init($CompilerProperties$Errors);
		$throw($($nc(helper)->newInvalidValueException($CompilerProperties$Errors::EmptyAArgument)));
	}
	int32_t sepIndex = option->indexOf((int32_t)u'=');
	$var($String, key, option->substring(2, (sepIndex != -1 ? sepIndex : argLength)));
	if (!$JavacProcessingEnvironment::isValidOptionName(key)) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::InvalidAKey(option)))));
	}
	$nc(helper)->put(option, option);
}

Option$19::Option$19() {
}

$Class* Option$19::load$($String* name, bool initialize) {
	$loadClass(Option$19, name, initialize, &_Option$19_ClassInfo_, allocate$Option$19);
	return class$;
}

$Class* Option$19::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com