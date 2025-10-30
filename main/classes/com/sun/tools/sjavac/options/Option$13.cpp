#include <com/sun/tools/sjavac/options/Option$13.h>

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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _Option$13_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$13::*)($String*,int32_t,$String*,$String*)>(&Option$13::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$13_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$13_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$13", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$13_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$13",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$13_MethodInfo_,
	nullptr,
	&_Option$13_EnclosingMethodInfo_,
	_Option$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$13($Class* clazz) {
	return $of($alloc(Option$13));
}

void Option$13::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$13::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(iter)->hasNext();
	if (var$0 || !$nc($($nc(iter)->peek()))->matches("\\d+"_s)) {
		$nc(helper)->reportError($$str({this->arg, " must be followed by an integer"_s}));
		return;
	}
	$nc(helper)->numCores($Integer::parseInt($($cast($String, $nc(iter)->next()))));
}

Option$13::Option$13() {
}

$Class* Option$13::load$($String* name, bool initialize) {
	$loadClass(Option$13, name, initialize, &_Option$13_ClassInfo_, allocate$Option$13);
	return class$;
}

$Class* Option$13::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com