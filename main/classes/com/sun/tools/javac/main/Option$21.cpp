#include <com/sun/tools/javac/main/Option$21.h>

#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

#undef EXTENDED
#undef JAVAC
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

$MethodInfo _Option$21_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$21::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$21::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$21_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$21_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$21", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$21_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$21",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$21_MethodInfo_,
	nullptr,
	&_Option$21_EnclosingMethodInfo_,
	_Option$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$21($Class* clazz) {
	return $of($alloc(Option$21));
}

void Option$21::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$21::process($OptionHelper* helper, $String* option) {
	$useLocalCurrentObjectStackCache();
	$var($Log, log, $nc(helper)->getLog());
	$init($Option$OptionKind);
	$Option::showHelp(log, $Option$OptionKind::EXTENDED);
	$init($Log$WriterKind);
	$nc(log)->printNewline($Log$WriterKind::STDOUT);
	$init($Log$PrefixKind);
	log->printLines($Log$WriterKind::STDOUT, $Log$PrefixKind::JAVAC, "msg.usage.nonstandard.footer"_s, $$new($ObjectArray, 0));
	$Option::process(helper, option);
}

Option$21::Option$21() {
}

$Class* Option$21::load$($String* name, bool initialize) {
	$loadClass(Option$21, name, initialize, &_Option$21_ClassInfo_, allocate$Option$21);
	return class$;
}

$Class* Option$21::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com