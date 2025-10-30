#include <com/sun/tools/sjavac/options/Option$8.h>

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

$MethodInfo _Option$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$8::*)($String*,int32_t,$String*,$String*)>(&Option$8::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$8_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$8_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$8", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$8_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$8",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$8_MethodInfo_,
	nullptr,
	&_Option$8_EnclosingMethodInfo_,
	_Option$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$8($Class* clazz) {
	return $of($alloc(Option$8));
}

void Option$8::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$8::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$init($Option);
	$Option::CLASS_PATH->processMatching(iter, helper);
}

Option$8::Option$8() {
}

$Class* Option$8::load$($String* name, bool initialize) {
	$loadClass(Option$8, name, initialize, &_Option$8_ClassInfo_, allocate$Option$8);
	return class$;
}

$Class* Option$8::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com