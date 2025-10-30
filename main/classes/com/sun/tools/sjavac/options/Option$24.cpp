#include <com/sun/tools/sjavac/options/Option$24.h>

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

$MethodInfo _Option$24_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$24::*)($String*,int32_t,$String*,$String*)>(&Option$24::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$24_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$24_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$24", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$24_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$24",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$24_MethodInfo_,
	nullptr,
	&_Option$24_EnclosingMethodInfo_,
	_Option$24_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$24($Class* clazz) {
	return $of($alloc(Option$24));
}

void Option$24::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$24::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$var($Path, dir, getFileArg(iter, helper, false, true));
	if (dir != nullptr) {
		$nc(helper)->generatedSourcesDir(dir);
	}
}

Option$24::Option$24() {
}

$Class* Option$24::load$($String* name, bool initialize) {
	$loadClass(Option$24, name, initialize, &_Option$24_ClassInfo_, allocate$Option$24);
	return class$;
}

$Class* Option$24::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com