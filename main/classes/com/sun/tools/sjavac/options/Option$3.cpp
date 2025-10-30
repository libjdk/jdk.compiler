#include <com/sun/tools/sjavac/options/Option$3.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <jcpp.h>

#undef SOURCE_PATH

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

$MethodInfo _Option$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$3::*)($String*,int32_t,$String*,$String*)>(&Option$3::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$3_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$3_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$3",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$3_MethodInfo_,
	nullptr,
	&_Option$3_EnclosingMethodInfo_,
	_Option$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$3($Class* clazz) {
	return $of($alloc(Option$3));
}

void Option$3::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$3::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$init($Option);
	$Option::SOURCE_PATH->processMatching(iter, helper);
}

Option$3::Option$3() {
}

$Class* Option$3::load$($String* name, bool initialize) {
	$loadClass(Option$3, name, initialize, &_Option$3_ClassInfo_, allocate$Option$3);
	return class$;
}

$Class* Option$3::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com