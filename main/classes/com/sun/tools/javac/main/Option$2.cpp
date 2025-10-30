#include <com/sun/tools/javac/main/Option$2.h>

#include <com/sun/tools/doclint/DocLint.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

#undef XDOCLINT_CUSTOM
#undef XMSGS_CUSTOM_PREFIX

using $DocLint = ::com::sun::tools::doclint::DocLint;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$2::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$2::init$))},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$2",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$2_MethodInfo_,
	nullptr,
	&_Option$2_EnclosingMethodInfo_,
	_Option$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$2($Class* clazz) {
	return $of($alloc(Option$2));
}

void Option$2::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

bool Option$2::matches($String* option) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$init($DocLint);
	return $nc($($DocLint::newDocLint()))->isValidOption($($nc(option)->replace(static_cast<$CharSequence*>($Option::XDOCLINT_CUSTOM->primaryName), static_cast<$CharSequence*>($DocLint::XMSGS_CUSTOM_PREFIX))));
}

void Option$2::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, prev, $nc(helper)->get($Option::XDOCLINT_CUSTOM));
	$var($String, next, (prev == nullptr) ? arg : ($str({prev, " "_s, arg})));
	helper->put($Option::XDOCLINT_CUSTOM->primaryName, next);
}

Option$2::Option$2() {
}

$Class* Option$2::load$($String* name, bool initialize) {
	$loadClass(Option$2, name, initialize, &_Option$2_ClassInfo_, allocate$Option$2);
	return class$;
}

$Class* Option$2::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com