#include <com/sun/tools/javac/main/Option$18.h>

#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

#undef JAVAC
#undef STANDARD
#undef STDOUT

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$18_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$18::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$18::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$18_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$18_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$18", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$18_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$18",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$18_MethodInfo_,
	nullptr,
	&_Option$18_EnclosingMethodInfo_,
	_Option$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$18($Class* clazz) {
	return $of($alloc(Option$18));
}

void Option$18::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$18::process($OptionHelper* helper, $String* option) {
	$useLocalCurrentObjectStackCache();
	$var($Log, log, $nc(helper)->getLog());
	$var($String, ownName, helper->getOwnName());
	$init($Log$WriterKind);
	$init($Log$PrefixKind);
	$nc(log)->printLines($Log$WriterKind::STDOUT, $Log$PrefixKind::JAVAC, "msg.usage.header"_s, $$new($ObjectArray, {$of(ownName)}));
	$init($Option$OptionKind);
	$Option::showHelp(log, $Option$OptionKind::STANDARD);
	log->printNewline($Log$WriterKind::STDOUT);
	$Option::process(helper, option);
}

Option$18::Option$18() {
}

$Class* Option$18::load$($String* name, bool initialize) {
	$loadClass(Option$18, name, initialize, &_Option$18_ClassInfo_, allocate$Option$18);
	return class$;
}

$Class* Option$18::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com