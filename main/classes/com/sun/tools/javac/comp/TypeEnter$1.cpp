#include <com/sun/tools/javac/comp/TypeEnter$1.h>

#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef TYPEAPPLY

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
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
				namespace comp {

$FieldInfo _TypeEnter$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeEnter$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _TypeEnter$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.TypeEnter",
	nullptr,
	nullptr
};

$InnerClassInfo _TypeEnter$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeEnter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.TypeEnter$1",
	"java.lang.Object",
	nullptr,
	_TypeEnter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TypeEnter$1_EnclosingMethodInfo_,
	_TypeEnter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$1($Class* clazz) {
	return $of($alloc(TypeEnter$1));
}

$ints* TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$TypeEnter$1($Class* class$) {
	$assignStatic(TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(TypeEnter$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPEAPPLY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeEnter$1::TypeEnter$1() {
}

$Class* TypeEnter$1::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$1, name, initialize, &_TypeEnter$1_ClassInfo_, clinit$TypeEnter$1, allocate$TypeEnter$1);
	return class$;
}

$Class* TypeEnter$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com