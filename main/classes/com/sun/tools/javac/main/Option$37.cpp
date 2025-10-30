#include <com/sun/tools/javac/main/Option$37.h>

#include <com/sun/tools/javac/main/Option$ArgKind.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$ArgKind = ::com::sun::tools::javac::main::Option$ArgKind;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$37_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$37::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option$37::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$37_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$37_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$37", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$37_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$37",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$37_MethodInfo_,
	nullptr,
	&_Option$37_EnclosingMethodInfo_,
	_Option$37_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$37($Class* clazz) {
	return $of($alloc(Option$37));
}

void Option$37::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* ak) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group, ak);
}

void Option$37::process($OptionHelper* helper, $String* option) {
	$throwNew($AssertionError, $of("the @ flag should be caught by CommandLine."_s));
}

Option$37::Option$37() {
}

$Class* Option$37::load$($String* name, bool initialize) {
	$loadClass(Option$37, name, initialize, &_Option$37_ClassInfo_, allocate$Option$37);
	return class$;
}

$Class* Option$37::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com