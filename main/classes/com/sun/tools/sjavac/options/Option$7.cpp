#include <com/sun/tools/sjavac/options/Option$7.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <jcpp.h>

#undef CLASS_PATH

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

$MethodInfo _Option$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$7::*)($String*,int32_t,$String*,$String*)>(&Option$7::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$7_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$7_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$7", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$7_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$7",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$7_MethodInfo_,
	nullptr,
	&_Option$7_EnclosingMethodInfo_,
	_Option$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$7($Class* clazz) {
	return $of($alloc(Option$7));
}

void Option$7::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$7::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$init($Option);
	$Option::CLASS_PATH->processMatching(iter, helper);
}

Option$7::Option$7() {
}

$Class* Option$7::load$($String* name, bool initialize) {
	$loadClass(Option$7, name, initialize, &_Option$7_ClassInfo_, allocate$Option$7);
	return class$;
}

$Class* Option$7::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com