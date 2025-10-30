#include <com/sun/tools/sjavac/options/Option$1.h>

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

$MethodInfo _Option$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$1::*)($String*,int32_t,$String*,$String*)>(&Option$1::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$1_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$1_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$1",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$1_MethodInfo_,
	nullptr,
	&_Option$1_EnclosingMethodInfo_,
	_Option$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$1($Class* clazz) {
	return $of($alloc(Option$1));
}

void Option$1::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$1::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$var($List, paths, getFileListArg(iter, helper));
	if (paths != nullptr) {
		$nc(helper)->sourceRoots(paths);
	}
}

Option$1::Option$1() {
}

$Class* Option$1::load$($String* name, bool initialize) {
	$loadClass(Option$1, name, initialize, &_Option$1_ClassInfo_, allocate$Option$1);
	return class$;
}

$Class* Option$1::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com