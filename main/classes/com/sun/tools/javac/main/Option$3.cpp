#include <com/sun/tools/javac/main/Option$3.h>

#include <com/sun/tools/doclint/DocLint.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

#undef XCHECK_PACKAGE
#undef XDOCLINT_PACKAGE

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

$MethodInfo _Option$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$3::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$3::init$))},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$3",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$3_MethodInfo_,
	nullptr,
	&_Option$3_EnclosingMethodInfo_,
	_Option$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$3($Class* clazz) {
	return $of($alloc(Option$3));
}

void Option$3::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

bool Option$3::matches($String* option) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$init($DocLint);
	return $nc($($DocLint::newDocLint()))->isValidOption($($nc(option)->replace(static_cast<$CharSequence*>($Option::XDOCLINT_PACKAGE->primaryName), static_cast<$CharSequence*>($DocLint::XCHECK_PACKAGE))));
}

void Option$3::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, prev, $nc(helper)->get($Option::XDOCLINT_PACKAGE));
	$var($String, next, (prev == nullptr) ? arg : ($str({prev, ","_s, arg})));
	helper->put($Option::XDOCLINT_PACKAGE->primaryName, next);
}

Option$3::Option$3() {
}

$Class* Option$3::load$($String* name, bool initialize) {
	$loadClass(Option$3, name, initialize, &_Option$3_ClassInfo_, allocate$Option$3);
	return class$;
}

$Class* Option$3::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com