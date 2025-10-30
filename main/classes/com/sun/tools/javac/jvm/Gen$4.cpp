#include <com/sun/tools/javac/jvm/Gen$4.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ARRAY
#undef BLOCK
#undef COMPL
#undef METHOD
#undef METHODDEF
#undef NEG
#undef NULLCHK
#undef POS
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef VARDEF

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
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
				namespace jvm {

$FieldInfo _Gen$4_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Gen$4, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Gen$4, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{}
};

$EnclosingMethodInfo _Gen$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.Gen",
	nullptr,
	nullptr
};

$InnerClassInfo _Gen$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Gen$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Gen$4_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.jvm.Gen$4",
	"java.lang.Object",
	nullptr,
	_Gen$4_FieldInfo_,
	nullptr,
	nullptr,
	&_Gen$4_EnclosingMethodInfo_,
	_Gen$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Gen"
};

$Object* allocate$Gen$4($Class* clazz) {
	return $of($alloc(Gen$4));
}

$ints* Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Gen$4::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void clinit$Gen$4($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BLOCK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::METHODDEF->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::VARDEF->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTINC->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTDEC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NEG->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::COMPL->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREINC->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREDEC->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NULLCHK->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Gen$4::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::METHOD->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Gen$4::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ARRAY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Gen$4::Gen$4() {
}

$Class* Gen$4::load$($String* name, bool initialize) {
	$loadClass(Gen$4, name, initialize, &_Gen$4_ClassInfo_, clinit$Gen$4, allocate$Gen$4);
	return class$;
}

$Class* Gen$4::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com