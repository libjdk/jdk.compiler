#include <com/sun/tools/sjavac/options/Option$10.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <jcpp.h>

using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _Option$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$10::*)($String*,int32_t,$String*,$String*)>(&Option$10::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$10_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$10_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$10", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$10_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$10",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$10_MethodInfo_,
	nullptr,
	&_Option$10_EnclosingMethodInfo_,
	_Option$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$10($Class* clazz) {
	return $of($alloc(Option$10));
}

void Option$10::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$10::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$var($String, pattern, getFilePatternArg(iter, helper));
	if (pattern != nullptr) {
		$nc(helper)->include(pattern);
	}
}

Option$10::Option$10() {
}

$Class* Option$10::load$($String* name, bool initialize) {
	$loadClass(Option$10, name, initialize, &_Option$10_ClassInfo_, allocate$Option$10);
	return class$;
}

$Class* Option$10::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com