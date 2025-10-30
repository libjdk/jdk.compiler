#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector$1.h>

#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/sjavac/comp/dependencies/PublicApiCollector.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ANALYZE
#undef COMPILATION

using $TaskEvent$KindArray = $Array<::com::sun::source::util::TaskEvent$Kind>;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $PublicApiCollector = ::com::sun::tools::sjavac::comp::dependencies::PublicApiCollector;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					namespace dependencies {

$FieldInfo _PublicApiCollector$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$source$util$TaskEvent$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PublicApiCollector$1, $SwitchMap$com$sun$source$util$TaskEvent$Kind)},
	{}
};

$EnclosingMethodInfo _PublicApiCollector$1_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector",
	nullptr,
	nullptr
};

$InnerClassInfo _PublicApiCollector$1_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _PublicApiCollector$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector$1",
	"java.lang.Object",
	nullptr,
	_PublicApiCollector$1_FieldInfo_,
	nullptr,
	nullptr,
	&_PublicApiCollector$1_EnclosingMethodInfo_,
	_PublicApiCollector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.comp.dependencies.PublicApiCollector"
};

$Object* allocate$PublicApiCollector$1($Class* clazz) {
	return $of($alloc(PublicApiCollector$1));
}

$ints* PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind = nullptr;

void clinit$PublicApiCollector$1($Class* class$) {
	$assignStatic(PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind, $new($ints, $($TaskEvent$Kind::values())->length));
	{
		try {
			$nc(PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind)->set($TaskEvent$Kind::ANALYZE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(PublicApiCollector$1::$SwitchMap$com$sun$source$util$TaskEvent$Kind)->set($TaskEvent$Kind::COMPILATION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

PublicApiCollector$1::PublicApiCollector$1() {
}

$Class* PublicApiCollector$1::load$($String* name, bool initialize) {
	$loadClass(PublicApiCollector$1, name, initialize, &_PublicApiCollector$1_ClassInfo_, clinit$PublicApiCollector$1, allocate$PublicApiCollector$1);
	return class$;
}

$Class* PublicApiCollector$1::class$ = nullptr;

					} // dependencies
				} // comp
			} // sjavac
		} // tools
	} // sun
} // com