#include <com/sun/tools/javac/main/Option$28.h>

#include <com/sun/tools/javac/main/Option$ArgKind.h>
#include <com/sun/tools/javac/main/Option$HiddenGroup.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

#undef DEBUG

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

$MethodInfo _Option$28_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$28::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option$28::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$28_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$28_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$28", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$28_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$28",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$28_MethodInfo_,
	nullptr,
	&_Option$28_EnclosingMethodInfo_,
	_Option$28_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$28($Class* clazz) {
	return $of($alloc(Option$28));
}

void Option$28::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* argKind) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group, argKind);
}

void Option$28::process($OptionHelper* helper, $String* option, $String* arg) {
	$init($Option$HiddenGroup);
	$Option$HiddenGroup::DEBUG->process(helper, option, arg);
}

Option$28::Option$28() {
}

$Class* Option$28::load$($String* name, bool initialize) {
	$loadClass(Option$28, name, initialize, &_Option$28_ClassInfo_, allocate$Option$28);
	return class$;
}

$Class* Option$28::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com