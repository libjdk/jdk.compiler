#include <com/sun/tools/javac/main/Option$23.h>

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

$MethodInfo _Option$23_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$23::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*,$Option$ArgKind*)>(&Option$23::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$23_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$23_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$23", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$23_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$23",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$23_MethodInfo_,
	nullptr,
	&_Option$23_EnclosingMethodInfo_,
	_Option$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$23($Class* clazz) {
	return $of($alloc(Option$23));
}

void Option$23::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* ak) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group, ak);
}

void Option$23::process($OptionHelper* helper, $String* option) {
	$throwNew($AssertionError, $of("the -J flag should be caught by the launcher."_s));
}

Option$23::Option$23() {
}

$Class* Option$23::load$($String* name, bool initialize) {
	$loadClass(Option$23, name, initialize, &_Option$23_ClassInfo_, allocate$Option$23);
	return class$;
}

$Class* Option$23::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com