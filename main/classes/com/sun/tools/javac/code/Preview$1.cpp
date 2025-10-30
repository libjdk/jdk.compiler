#include <com/sun/tools/javac/code/Preview$1.h>

#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CASE_NULL
#undef PATTERN_SWITCH

using $Source$FeatureArray = $Array<::com::sun::tools::javac::code::Source$Feature>;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
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
				namespace code {

$FieldInfo _Preview$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$Source$Feature", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Preview$1, $SwitchMap$com$sun$tools$javac$code$Source$Feature)},
	{}
};

$EnclosingMethodInfo _Preview$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Preview",
	nullptr,
	nullptr
};

$InnerClassInfo _Preview$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Preview$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Preview$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.code.Preview$1",
	"java.lang.Object",
	nullptr,
	_Preview$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Preview$1_EnclosingMethodInfo_,
	_Preview$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Preview"
};

$Object* allocate$Preview$1($Class* clazz) {
	return $of($alloc(Preview$1));
}

$ints* Preview$1::$SwitchMap$com$sun$tools$javac$code$Source$Feature = nullptr;

void clinit$Preview$1($Class* class$) {
	$assignStatic(Preview$1::$SwitchMap$com$sun$tools$javac$code$Source$Feature, $new($ints, $($Source$Feature::values())->length));
	{
		try {
			$nc(Preview$1::$SwitchMap$com$sun$tools$javac$code$Source$Feature)->set($Source$Feature::CASE_NULL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Preview$1::$SwitchMap$com$sun$tools$javac$code$Source$Feature)->set($Source$Feature::PATTERN_SWITCH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Preview$1::Preview$1() {
}

$Class* Preview$1::load$($String* name, bool initialize) {
	$loadClass(Preview$1, name, initialize, &_Preview$1_ClassInfo_, clinit$Preview$1, allocate$Preview$1);
	return class$;
}

$Class* Preview$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com