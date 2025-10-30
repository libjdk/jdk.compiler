#include <com/sun/tools/javac/api/JavacTaskImpl$3.h>

#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CLASSDEF
#undef MODULEDEF
#undef PACKAGEDEF

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
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
				namespace api {

$FieldInfo _JavacTaskImpl$3_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacTaskImpl$3, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _JavacTaskImpl$3_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.api.JavacTaskImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _JavacTaskImpl$3_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.JavacTaskImpl$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JavacTaskImpl$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.api.JavacTaskImpl$3",
	"java.lang.Object",
	nullptr,
	_JavacTaskImpl$3_FieldInfo_,
	nullptr,
	nullptr,
	&_JavacTaskImpl$3_EnclosingMethodInfo_,
	_JavacTaskImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.JavacTaskImpl"
};

$Object* allocate$JavacTaskImpl$3($Class* clazz) {
	return $of($alloc(JavacTaskImpl$3));
}

$ints* JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$JavacTaskImpl$3($Class* class$) {
	$assignStatic(JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CLASSDEF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MODULEDEF->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JavacTaskImpl$3::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PACKAGEDEF->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JavacTaskImpl$3::JavacTaskImpl$3() {
}

$Class* JavacTaskImpl$3::load$($String* name, bool initialize) {
	$loadClass(JavacTaskImpl$3, name, initialize, &_JavacTaskImpl$3_ClassInfo_, clinit$JavacTaskImpl$3, allocate$JavacTaskImpl$3);
	return class$;
}

$Class* JavacTaskImpl$3::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com