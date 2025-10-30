#include <com/sun/tools/sjavac/options/Option$23.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _Option$23_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$23::*)($String*,int32_t,$String*,$String*)>(&Option$23::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$23_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$23_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$23", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$23_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$23",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$23_MethodInfo_,
	nullptr,
	&_Option$23_EnclosingMethodInfo_,
	_Option$23_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$23($Class* clazz) {
	return $of($alloc(Option$23));
}

void Option$23::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$23::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$var($Path, dir, getFileArg(iter, helper, false, true));
	if (dir != nullptr) {
		$nc(helper)->destDir(dir);
	}
}

Option$23::Option$23() {
}

$Class* Option$23::load$($String* name, bool initialize) {
	$loadClass(Option$23, name, initialize, &_Option$23_ClassInfo_, allocate$Option$23);
	return class$;
}

$Class* Option$23::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com