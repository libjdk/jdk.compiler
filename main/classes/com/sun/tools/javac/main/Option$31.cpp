#include <com/sun/tools/javac/main/Option$31.h>

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

$MethodInfo _Option$31_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$31::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$31::init$))},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$31_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$31_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$31", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$31_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$31",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$31_MethodInfo_,
	nullptr,
	&_Option$31_EnclosingMethodInfo_,
	_Option$31_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$31($Class* clazz) {
	return $of($alloc(Option$31));
}

void Option$31::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

bool Option$31::matches($String* s) {
	return $nc(s)->startsWith(this->primaryName);
}

void Option$31::process($OptionHelper* helper, $String* option) {
	process(helper, option, $($nc(option)->substring($nc(this->primaryName)->length())));
}

void Option$31::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalCurrentObjectStackCache();
	int32_t eq = $nc(arg)->indexOf((int32_t)u'=');
	$var($String, key, (eq < 0) ? arg : arg->substring(0, eq));
	$var($String, value, (eq < 0) ? arg : arg->substring(eq + 1));
	$nc(helper)->put(key, value);
}

Option$31::Option$31() {
}

$Class* Option$31::load$($String* name, bool initialize) {
	$loadClass(Option$31, name, initialize, &_Option$31_ClassInfo_, allocate$Option$31);
	return class$;
}

$Class* Option$31::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com