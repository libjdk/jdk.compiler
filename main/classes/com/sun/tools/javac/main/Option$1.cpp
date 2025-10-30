#include <com/sun/tools/javac/main/Option$1.h>

#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

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

$MethodInfo _Option$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$1::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$1::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$1",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$1_MethodInfo_,
	nullptr,
	&_Option$1_EnclosingMethodInfo_,
	_Option$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$1($Class* clazz) {
	return $of($alloc(Option$1));
}

void Option$1::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$1::process($OptionHelper* helper, $String* option) {
	$nc(helper)->put("-g:"_s, "none"_s);
}

Option$1::Option$1() {
}

$Class* Option$1::load$($String* name, bool initialize) {
	$loadClass(Option$1, name, initialize, &_Option$1_ClassInfo_, allocate$Option$1);
	return class$;
}

$Class* Option$1::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com