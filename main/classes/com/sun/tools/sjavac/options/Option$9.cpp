#include <com/sun/tools/sjavac/options/Option$9.h>

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

$MethodInfo _Option$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$9::*)($String*,int32_t,$String*,$String*)>(&Option$9::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$9_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$9_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$9", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$9_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$9",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$9_MethodInfo_,
	nullptr,
	&_Option$9_EnclosingMethodInfo_,
	_Option$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$9($Class* clazz) {
	return $of($alloc(Option$9));
}

void Option$9::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$9::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$var($String, pattern, getFilePatternArg(iter, helper));
	if (pattern != nullptr) {
		$nc(helper)->exclude(pattern);
	}
}

Option$9::Option$9() {
}

$Class* Option$9::load$($String* name, bool initialize) {
	$loadClass(Option$9, name, initialize, &_Option$9_ClassInfo_, allocate$Option$9);
	return class$;
}

$Class* Option$9::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com