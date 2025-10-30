#include <com/sun/tools/javac/main/Option$8.h>

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

$MethodInfo _Option$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$8::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$8::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$8_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$8_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$8", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$8_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$8",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$8_MethodInfo_,
	nullptr,
	&_Option$8_EnclosingMethodInfo_,
	_Option$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$8($Class* clazz) {
	return $of($alloc(Option$8));
}

void Option$8::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$8::process($OptionHelper* helper, $String* option, $String* arg) {
	$nc(helper)->remove("-Xbootclasspath/p:"_s);
	helper->remove("-Xbootclasspath/a:"_s);
	$Option::process(helper, option, arg);
}

Option$8::Option$8() {
}

$Class* Option$8::load$($String* name, bool initialize) {
	$loadClass(Option$8, name, initialize, &_Option$8_ClassInfo_, allocate$Option$8);
	return class$;
}

$Class* Option$8::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com