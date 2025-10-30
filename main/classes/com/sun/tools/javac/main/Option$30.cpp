#include <com/sun/tools/javac/main/Option$30.h>

#include <com/sun/tools/javac/main/Option$ArgKind.h>
#include <com/sun/tools/javac/main/Option$HiddenGroup.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

#undef DIAGS

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$ArgKind = ::com::sun::tools::javac::main::Option$ArgKind;
using $Option$HiddenGroup = ::com::sun::tools::javac::main::Option$HiddenGroup;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$30_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$30::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option$30::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$30_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$30_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$30", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$30_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$30",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$30_MethodInfo_,
	nullptr,
	&_Option$30_EnclosingMethodInfo_,
	_Option$30_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$30($Class* clazz) {
	return $of($alloc(Option$30));
}

void Option$30::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* argKind) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group, argKind);
}

void Option$30::process($OptionHelper* helper, $String* option, $String* arg) {
	$init($Option$HiddenGroup);
	$Option$HiddenGroup::DIAGS->process(helper, option, arg);
}

Option$30::Option$30() {
}

$Class* Option$30::load$($String* name, bool initialize) {
	$loadClass(Option$30, name, initialize, &_Option$30_ClassInfo_, allocate$Option$30);
	return class$;
}

$Class* Option$30::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com