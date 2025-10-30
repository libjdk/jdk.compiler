#include <com/sun/tools/javac/main/Option$11.h>

#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

#undef ENDORSEDDIRS

using $Option = ::com::sun::tools::javac::main::Option;
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

$MethodInfo _Option$11_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$11::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$11::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$11_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$11_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$11", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$11_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$11",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$11_MethodInfo_,
	nullptr,
	&_Option$11_EnclosingMethodInfo_,
	_Option$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$11($Class* clazz) {
	return $of($alloc(Option$11));
}

void Option$11::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$11::process($OptionHelper* helper, $String* option, $String* arg) {
	$init($Option);
	$Option::ENDORSEDDIRS->process(helper, "-endorseddirs"_s, arg);
}

Option$11::Option$11() {
}

$Class* Option$11::load$($String* name, bool initialize) {
	$loadClass(Option$11, name, initialize, &_Option$11_ClassInfo_, allocate$Option$11);
	return class$;
}

$Class* Option$11::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com