#include <com/sun/tools/javac/main/Option$15.h>

#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <jcpp.h>

using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
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

$MethodInfo _Option$15_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$15::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$15::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$15_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$15_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$15", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$15_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$15",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$15_MethodInfo_,
	nullptr,
	&_Option$15_EnclosingMethodInfo_,
	_Option$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$15($Class* clazz) {
	return $of($alloc(Option$15));
}

void Option$15::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$15::process($OptionHelper* helper, $String* option, $String* operand) {
	$useLocalCurrentObjectStackCache();
	$Profile* profile = $Profile::lookup(operand);
	if (profile == nullptr) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::InvalidProfile(operand)))));
	}
	$Option::process(helper, option, operand);
}

Option$15::Option$15() {
}

$Class* Option$15::load$($String* name, bool initialize) {
	$loadClass(Option$15, name, initialize, &_Option$15_ClassInfo_, allocate$Option$15);
	return class$;
}

$Class* Option$15::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com