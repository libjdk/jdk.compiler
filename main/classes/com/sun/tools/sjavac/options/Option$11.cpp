#include <com/sun/tools/sjavac/options/Option$11.h>

#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/options/OptionHelper.h>
#include <java/lang/CharSequence.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $OptionHelper = ::com::sun::tools::sjavac::options::OptionHelper;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _Option$11_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$11::*)($String*,int32_t,$String*,$String*)>(&Option$11::init$))},
	{"processMatching", "(Lcom/sun/tools/sjavac/options/ArgumentIterator;Lcom/sun/tools/sjavac/options/OptionHelper;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _Option$11_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$11_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.options.Option$11", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$11_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.sjavac.options.Option$11",
	"com.sun.tools.sjavac.options.Option",
	nullptr,
	nullptr,
	_Option$11_MethodInfo_,
	nullptr,
	&_Option$11_EnclosingMethodInfo_,
	_Option$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.options.Option"
};

$Object* allocate$Option$11($Class* clazz) {
	return $of($alloc(Option$11));
}

void Option$11::init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description) {
	$Option::init$($enum$name, $enum$ordinal, arg, description);
}

void Option$11::processMatching($ArgumentIterator* iter, $OptionHelper* helper) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!$nc(iter)->hasNext()) {
		$nc(helper)->reportError($$str({this->arg, " must be followed by a translation rule"_s}));
		return;
	}
	$var($String, trArg, $cast($String, $nc(iter)->next()));
	$var($String, ident, "[a-zA-Z_][a-zA-Z0-9_]*"_s);
	$var($Pattern, p, $Pattern::compile($$str({"(?<suffix>\\."_s, ident, ")=(?<class>"_s, ident, "(\\."_s, ident, ")*)(?<extra>,.*)?"_s})));
	$var($Matcher, m, $nc(p)->matcher(trArg));
	if (!$nc(m)->matches()) {
		$nc(helper)->reportError($$str({"The string \""_s, trArg, "\" is not a valid translate pattern"_s}));
		return;
	}
	$var($String, suffix, $nc(m)->group("suffix"_s));
	$var($String, classname, m->group("class"_s));
	$var($String, extra, m->group("extra"_s));
	if ($nc(suffix)->matches("\\.(class|java)"_s)) {
		$nc(helper)->reportError($$str({"You cannot have a translator for "_s, suffix, " files!"_s}));
		return;
	}
	try {
		$Class* trCls = $Class::forName(classname);
		$var($Transformer, transformer, $cast($Transformer, $nc($($nc(trCls)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
		$nc(transformer)->setExtra(extra);
		$nc(helper)->addTransformer(suffix, transformer);
	} catch ($Exception& e) {
		$nc(helper)->reportError($$str({"Cannot use "_s, classname, " as a translator: "_s, $(e->getMessage())}));
	}
}

Option$11::Option$11() {
}

$Class* Option$11::load$($String* name, bool initialize) {
	$loadClass(Option$11, name, initialize, &_Option$11_ClassInfo_, allocate$Option$11);
	return class$;
}

$Class* Option$11::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com