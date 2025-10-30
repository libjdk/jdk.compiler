#include <com/sun/tools/javac/main/Option$38.h>

#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/lang/CharSequence.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <javax/lang/model/SourceVersion.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $SourceVersion = ::javax::lang::model::SourceVersion;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$MethodInfo _Option$38_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(static_cast<void(Option$38::*)($String*,int32_t,$String*,$String*,$Option$OptionKind*,$Option$OptionGroup*)>(&Option$38::init$))},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.main.Option$InvalidValueException"},
	{}
};

$EnclosingMethodInfo _Option$38_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr
};

$InnerClassInfo _Option$38_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.main.Option$38", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Option$38_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.main.Option$38",
	"com.sun.tools.javac.main.Option",
	nullptr,
	nullptr,
	_Option$38_MethodInfo_,
	nullptr,
	&_Option$38_EnclosingMethodInfo_,
	_Option$38_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.main.Option"
};

$Object* allocate$Option$38($Class* clazz) {
	return $of($alloc(Option$38));
}

void Option$38::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

bool Option$38::matches($String* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->endsWith(".java"_s)) {
		return true;
	}
	int32_t sep = $nc(s)->indexOf((int32_t)u'/');
	if (sep != -1) {
		bool var$0 = $SourceVersion::isName($(s->substring(0, sep)));
		return var$0 && $SourceVersion::isName($(s->substring(sep + 1)));
	} else {
		return $SourceVersion::isName(s);
	}
}

void Option$38::process($OptionHelper* helper, $String* option) {
	$useLocalCurrentObjectStackCache();
	if ($nc(option)->endsWith(".java"_s)) {
		try {
			$var($Path, p, $Paths::get(option, $$new($StringArray, 0)));
			if (!$Files::exists(p, $$new($LinkOptionArray, 0))) {
				$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::FileNotFound($($nc(p)->toString()))))));
			}
			if (!$Files::isRegularFile(p, $$new($LinkOptionArray, 0))) {
				$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::FileNotFile(p)))));
			}
			$nc(helper)->addFile(p);
		} catch ($InvalidPathException& ex) {
			$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::InvalidPath(option)))));
		}
	} else {
		$nc(helper)->addClassName(option);
	}
}

Option$38::Option$38() {
}

$Class* Option$38::load$($String* name, bool initialize) {
	$loadClass(Option$38, name, initialize, &_Option$38_ClassInfo_, allocate$Option$38);
	return class$;
}

$Class* Option$38::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com