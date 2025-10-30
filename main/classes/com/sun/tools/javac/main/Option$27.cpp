#include <com/sun/tools/javac/main/Option$27.h>

#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

#undef PLUGIN

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

$MethodInfo _Option$27_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$27::*)($String*,int32_t,$String*,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$27::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Option$27_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$27_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$27", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$27_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$27",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$27_MethodInfo_,
	nullptr,
	&_Option$27_EnclosingMethodInfo_,
	_Option$27_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$27($Class* clazz) {
	return $of($alloc(Option$27));
}

void Option$27::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$27::process($OptionHelper* helper, $String* option, $String* p) {
	$useLocalCurrentObjectStackCache();
	$init($Option);
	$var($String, prev, $nc(helper)->get($Option::PLUGIN));
	helper->put($Option::PLUGIN->primaryName, (prev == nullptr) ? p : $$str({prev, $$str(u'\0'), p}));
}

Option$27::Option$27() {
}

$Class* Option$27::load$($String* name, bool initialize) {
	$loadClass(Option$27, name, initialize, &_Option$27_ClassInfo_, allocate$Option$27);
	return class$;
}

$Class* Option$27::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com