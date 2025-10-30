#include <com/sun/tools/sjavac/options/Option$2.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _Option$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$2::*)($String*,int32_t,$String*,$String*)>(&Option$2::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$2_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$2_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$2",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$2_MethodInfo_,
	nullptr,
	&_Option$2_EnclosingMethodInfo_,
	_Option$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$2($Class* clazz) {
	return $of($alloc(Option$2));
}

void Option$2::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$2::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$var($List, paths, getFileListArg(iter, helper));
	if (paths != nullptr) {
		$nc(helper)->sourcepath(paths);
	}
}

Option$2::Option$2() {
}

$Class* Option$2::load$($String* name, bool initialize) {
	$loadClass(Option$2, name, initialize, &_Option$2_ClassInfo_, allocate$Option$2);
	return class$;
}

$Class* Option$2::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com