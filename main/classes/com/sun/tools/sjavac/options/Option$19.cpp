#include <com/sun/tools/sjavac/options/Option$19.h>

#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _Option$19_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$19::*)($String*,int32_t,$String*,$String*)>(&Option$19::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$19_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$19_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$19", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$19_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$19",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$19_MethodInfo_,
	nullptr,
	&_Option$19_EnclosingMethodInfo_,
	_Option$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$19($Class* clazz) {
	return $of($alloc(Option$19));
}

void Option$19::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$19::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	$var($String, a, $nc($($nc(iter)->current()))->substring($nc(this->arg)->length()));
	$nc(helper)->permitArtifact($($nc($($nc($($Paths::get(a, $$new($StringArray, 0))))->toFile()))->getAbsolutePath()));
}

Option$19::Option$19() {
}

$Class* Option$19::load$($String* name, bool initialize) {
	$loadClass(Option$19, name, initialize, &_Option$19_ClassInfo_, allocate$Option$19);
	return class$;
}

$Class* Option$19::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com