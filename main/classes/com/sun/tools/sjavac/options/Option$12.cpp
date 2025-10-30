#include <com/sun/tools/sjavac/options/Option$12.h>

#include <com/sun/tools/sjavac/CopyFile.h>
#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <jcpp.h>

using $CopyFile = ::com::sun::tools::sjavac::CopyFile;
using $Transformer = ::com::sun::tools::sjavac::Transformer;
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

$MethodInfo _Option$12_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$12::*)($String*,int32_t,$String*,$String*)>(&Option$12::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$12_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$12_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$12", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$12_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$12",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$12_MethodInfo_,
	nullptr,
	&_Option$12_EnclosingMethodInfo_,
	_Option$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$12($Class* clazz) {
	return $of($alloc(Option$12));
}

void Option$12::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$12::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(iter)->hasNext()) {
		$nc(helper)->reportError($$str({this->arg, " must be followed by a resource type"_s}));
		return;
	}
	$var($String, copyArg, $cast($String, $nc(iter)->next()));
	if (!$nc(copyArg)->matches("\\.[a-zA-Z_][a-zA-Z0-9_]*"_s)) {
		$nc(helper)->reportError($$str({"The string \""_s, copyArg, "\" is not a valid resource type."_s}));
		return;
	}
	$nc(helper)->addTransformer(copyArg, $$new($CopyFile));
}

Option$12::Option$12() {
}

$Class* Option$12::load$($String* name, bool initialize) {
	$loadClass(Option$12, name, initialize, &_Option$12_ClassInfo_, allocate$Option$12);
	return class$;
}

$Class* Option$12::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com