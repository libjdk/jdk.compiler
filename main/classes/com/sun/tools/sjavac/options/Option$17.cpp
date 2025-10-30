#include <com/sun/tools/sjavac/options/Option$17.h>

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

$MethodInfo _Option$17_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$17::*)($String*,int32_t,$String*,$String*)>(&Option$17::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$17_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$17_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$17", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$17_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$17",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$17_MethodInfo_,
	nullptr,
	&_Option$17_EnclosingMethodInfo_,
	_Option$17_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$17($Class* clazz) {
	return $of($alloc(Option$17));
}

void Option$17::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$17::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	$nc(helper)->logLevel($($nc($($nc(iter)->current()))->substring($nc(this->arg)->length())));
}

Option$17::Option$17() {
}

$Class* Option$17::load$($String* name, bool initialize) {
	$loadClass(Option$17, name, initialize, &_Option$17_ClassInfo_, allocate$Option$17);
	return class$;
}

$Class* Option$17::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com