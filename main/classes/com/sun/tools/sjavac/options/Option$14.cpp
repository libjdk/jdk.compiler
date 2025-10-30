#include <com/sun/tools/sjavac/options/Option$14.h>

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

$MethodInfo _Option$14_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$14::*)($String*,int32_t,$String*,$String*)>(&Option$14::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$14_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$14_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$14", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$14_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$14",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$14_MethodInfo_,
	nullptr,
	&_Option$14_EnclosingMethodInfo_,
	_Option$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$14($Class* clazz) {
	return $of($alloc(Option$14));
}

void Option$14::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$14::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	$nc(helper)->serverConf($($nc($($nc(iter)->current()))->substring($nc(this->arg)->length())));
}

Option$14::Option$14() {
}

$Class* Option$14::load$($String* name, bool initialize) {
	$loadClass(Option$14, name, initialize, &_Option$14_ClassInfo_, allocate$Option$14);
	return class$;
}

$Class* Option$14::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com