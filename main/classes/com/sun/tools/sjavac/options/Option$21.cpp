#include <com/sun/tools/sjavac/options/Option$21.h>

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

$MethodInfo _Option$21_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$21::*)($String*,int32_t,$String*,$String*)>(&Option$21::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$21_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$21_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$21", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$21_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$21",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$21_MethodInfo_,
	nullptr,
	&_Option$21_EnclosingMethodInfo_,
	_Option$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$21($Class* clazz) {
	return $of($alloc(Option$21));
}

void Option$21::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$21::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$nc(helper)->permitDefaultPackage();
}

Option$21::Option$21() {
}

$Class* Option$21::load$($String* name, bool initialize) {
	$loadClass(Option$21, name, initialize, &_Option$21_ClassInfo_, allocate$Option$21);
	return class$;
}

$Class* Option$21::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com