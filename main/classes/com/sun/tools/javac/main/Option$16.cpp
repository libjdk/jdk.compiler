#include <com/sun/tools/javac/main/Option$16.h>

#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

#undef JAVAC
#undef STDOUT

using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
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

$MethodInfo _Option$16_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$16::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$16::init$))},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$16_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$16_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$16", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$16_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$16",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$16_MethodInfo_,
	nullptr,
	&_Option$16_EnclosingMethodInfo_,
	_Option$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$16($Class* clazz) {
	return $of($alloc(Option$16));
}

void Option$16::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$16::process($OptionHelper* helper, $String* option) {
	$useLocalCurrentObjectStackCache();
	$var($Log, log, $nc(helper)->getLog());
	$var($String, ownName, helper->getOwnName());
	$init($Log$WriterKind);
	$init($Log$PrefixKind);
	$nc(log)->printLines($Log$WriterKind::STDOUT, $Log$PrefixKind::JAVAC, "version"_s, $$new($ObjectArray, {
		$of(ownName),
		$($of($JavaCompiler::version()))
	}));
	$Option::process(helper, option);
}

Option$16::Option$16() {
}

$Class* Option$16::load$($String* name, bool initialize) {
	$loadClass(Option$16, name, initialize, &_Option$16_ClassInfo_, allocate$Option$16);
	return class$;
}

$Class* Option$16::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com