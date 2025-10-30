#include <com/sun/tools/javac/parser/UnicodeReader$1.h>

#include <com/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BACKSLASH
#undef BROKEN_ESCAPE
#undef VALID_ESCAPE

using $UnicodeReader$UnicodeEscapeResultArray = $Array<::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult>;
using $UnicodeReader = ::com::sun::tools::javac::parser::UnicodeReader;
using $UnicodeReader$UnicodeEscapeResult = ::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _UnicodeReader$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeReader$1, $SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult)},
	{}
};

$EnclosingMethodInfo _UnicodeReader$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.parser.UnicodeReader",
	nullptr,
	nullptr
};

$InnerClassInfo _UnicodeReader$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.UnicodeReader$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _UnicodeReader$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.parser.UnicodeReader$1",
	"java.lang.Object",
	nullptr,
	_UnicodeReader$1_FieldInfo_,
	nullptr,
	nullptr,
	&_UnicodeReader$1_EnclosingMethodInfo_,
	_UnicodeReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.UnicodeReader"
};

$Object* allocate$UnicodeReader$1($Class* clazz) {
	return $of($alloc(UnicodeReader$1));
}

$ints* UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult = nullptr;

void clinit$UnicodeReader$1($Class* class$) {
	$assignStatic(UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult, $new($ints, $($UnicodeReader$UnicodeEscapeResult::values())->length));
	{
		try {
			$nc(UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult)->set($UnicodeReader$UnicodeEscapeResult::BACKSLASH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult)->set($UnicodeReader$UnicodeEscapeResult::VALID_ESCAPE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(UnicodeReader$1::$SwitchMap$com$sun$tools$javac$parser$UnicodeReader$UnicodeEscapeResult)->set($UnicodeReader$UnicodeEscapeResult::BROKEN_ESCAPE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

UnicodeReader$1::UnicodeReader$1() {
}

$Class* UnicodeReader$1::load$($String* name, bool initialize) {
	$loadClass(UnicodeReader$1, name, initialize, &_UnicodeReader$1_ClassInfo_, clinit$UnicodeReader$1, allocate$UnicodeReader$1);
	return class$;
}

$Class* UnicodeReader$1::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com