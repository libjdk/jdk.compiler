#include <com/sun/tools/javac/main/Option$24.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
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

$MethodInfo _Option$24_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$24::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$24::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$24_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$24_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$24", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$24_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$24",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$24_MethodInfo_,
	nullptr,
	&_Option$24_EnclosingMethodInfo_,
	_Option$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$24($Class* clazz) {
	return $of($alloc(Option$24));
}

void Option$24::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$24::process($OptionHelper* helper, $String* option) {
	$init($Type);
	$Type::moreInfo = true;
	$Option::process(helper, option);
}

Option$24::Option$24() {
}

$Class* Option$24::load$($String* name, bool initialize) {
	$loadClass(Option$24, name, initialize, &_Option$24_ClassInfo_, allocate$Option$24);
	return class$;
}

$Class* Option$24::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com