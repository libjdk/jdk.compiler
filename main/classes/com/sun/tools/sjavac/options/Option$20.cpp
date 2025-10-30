#include <com/sun/tools/sjavac/options/Option$20.h>

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

$MethodInfo _Option$20_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$20::*)($String*,int32_t,$String*,$String*)>(&Option$20::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$20_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$20_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$20", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$20_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$20",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$20_MethodInfo_,
	nullptr,
	&_Option$20_EnclosingMethodInfo_,
	_Option$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$20($Class* clazz) {
	return $of($alloc(Option$20));
}

void Option$20::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$20::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$nc(helper)->permitUnidentifiedArtifacts();
}

Option$20::Option$20() {
}

$Class* Option$20::load$($String* name, bool initialize) {
	$loadClass(Option$20, name, initialize, &_Option$20_ClassInfo_, allocate$Option$20);
	return class$;
}

$Class* Option$20::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com