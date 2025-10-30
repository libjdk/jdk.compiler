#include <com/sun/tools/javac/comp/Lower$2.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$OperatorSymbol$AccessCode.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/main/Option$PkgInfo.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ALWAYS
#undef AND
#undef ARRAY
#undef ASSIGN
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CLASS
#undef DEREF
#undef DOUBLE
#undef EQ
#undef FLOAT
#undef IDENT
#undef INDEXED
#undef INT
#undef LEGACY
#undef LITERAL
#undef LONG
#undef MTH
#undef NE
#undef NONEMPTY
#undef OR
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef SELECT
#undef SHORT
#undef TYP
#undef TYPECAST
#undef VAR
#undef VOID

using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $Symbol$OperatorSymbol$AccessCodeArray = $Array<::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $Option$PkgInfoArray = $Array<::com::sun::tools::javac::main::Option$PkgInfo>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol$OperatorSymbol$AccessCode = ::com::sun::tools::javac::code::Symbol$OperatorSymbol$AccessCode;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Option$PkgInfo = ::com::sun::tools::javac::main::Option$PkgInfo;
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

$FieldInfo _Lower$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Lower$2, $SwitchMap$com$sun$tools$javac$main$Option$PkgInfo)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Lower$2, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Lower$2, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{"$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Lower$2, $SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)},
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Lower$2, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
	{}
};

$EnclosingMethodInfo _Lower$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Lower",
	nullptr,
	nullptr
};

$InnerClassInfo _Lower$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Lower$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.Lower$2",
	"java.lang.Object",
	nullptr,
	_Lower$2_FieldInfo_,
	nullptr,
	nullptr,
	&_Lower$2_EnclosingMethodInfo_,
	_Lower$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$2($Class* clazz) {
	return $of($alloc(Lower$2));
}

$ints* Lower$2::$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo = nullptr;
$ints* Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;
$ints* Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode = nullptr;
$ints* Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;

void clinit$Lower$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Lower$2::$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo, $new($ints, $($Option$PkgInfo::values())->length));
	{
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo)->set($Option$PkgInfo::ALWAYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo)->set($Option$PkgInfo::LEGACY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$main$Option$PkgInfo)->set($Option$PkgInfo::NONEMPTY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LITERAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::IDENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SELECT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::INDEXED->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPECAST->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::EQ->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREINC->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREDEC->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTINC->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTDEC->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::OR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::AND->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ARRAY->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode, $new($ints, $($Symbol$OperatorSymbol$AccessCode::values())->length));
	{
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->set($Symbol$OperatorSymbol$AccessCode::DEREF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->set($Symbol$OperatorSymbol$AccessCode::ASSIGN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->set($Symbol$OperatorSymbol$AccessCode::PREINC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->set($Symbol$OperatorSymbol$AccessCode::POSTINC->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->set($Symbol$OperatorSymbol$AccessCode::PREDEC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Symbol$OperatorSymbol$AccessCode)->set($Symbol$OperatorSymbol$AccessCode::POSTDEC->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::VAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::MTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Lower$2::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::TYP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Lower$2::Lower$2() {
}

$Class* Lower$2::load$($String* name, bool initialize) {
	$loadClass(Lower$2, name, initialize, &_Lower$2_ClassInfo_, clinit$Lower$2, allocate$Lower$2);
	return class$;
}

$Class* Lower$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com