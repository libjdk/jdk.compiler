#include <com/sun/tools/javac/comp/Attr$13.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ABSENT_MTH
#undef AMBIGUOUS
#undef AND
#undef APPLY
#undef ARRAY
#undef BLOCK
#undef CLASS
#undef CLASSDEF
#undef CONDEXPR
#undef DOLOOP
#undef ERR
#undef ERROR
#undef FOREACHLOOP
#undef FORLOOP
#undef HIDDEN
#undef LABELLED
#undef LAMBDA
#undef LITERAL
#undef METHODDEF
#undef MISSING_ENCL
#undef MODULEDEF
#undef MTH
#undef NEW
#undef NEWCLASS
#undef OR
#undef PACKAGE
#undef PACKAGEDEF
#undef PARENS
#undef PCK
#undef REFERENCE
#undef STATICERR
#undef SWITCH
#undef SWITCH_EXPRESSION
#undef TOPLEVEL
#undef TYP
#undef TYPEVAR
#undef VAR
#undef VARDEF
#undef WHILELOOP
#undef WILDCARD
#undef WRONG_MTH
#undef WRONG_MTHS

using $MemberReferenceTree$ReferenceModeArray = $Array<::com::sun::source::tree::MemberReferenceTree$ReferenceMode>;
using $Kinds$KindArray = $Array<::com::sun::tools::javac::code::Kinds$Kind>;
using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
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

$FieldInfo _Attr$13_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Attr$13, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{"$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Attr$13, $SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)},
	{"$SwitchMap$com$sun$tools$javac$code$Kinds$Kind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Attr$13, $SwitchMap$com$sun$tools$javac$code$Kinds$Kind)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Attr$13, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _Attr$13_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Attr",
	nullptr,
	nullptr
};

$InnerClassInfo _Attr$13_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Attr$13", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Attr$13_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.Attr$13",
	"java.lang.Object",
	nullptr,
	_Attr$13_FieldInfo_,
	nullptr,
	nullptr,
	&_Attr$13_EnclosingMethodInfo_,
	_Attr$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Attr"
};

$Object* allocate$Attr$13($Class* clazz) {
	return $of($alloc(Attr$13));
}

$ints* Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Attr$13::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode = nullptr;
$ints* Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind = nullptr;
$ints* Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$Attr$13($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::PACKAGE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ARRAY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CLASS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::WILDCARD->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::TYPEVAR->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::ERROR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Attr$13::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode, $new($ints, $($MemberReferenceTree$ReferenceMode::values())->length));
	{
		try {
			$nc(Attr$13::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->set($MemberReferenceTree$ReferenceMode::NEW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind, $new($ints, $($Kinds$Kind::values())->length));
	{
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::ABSENT_MTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::MISSING_ENCL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::WRONG_MTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::WRONG_MTHS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::AMBIGUOUS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::HIDDEN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::STATICERR->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::TYP->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::VAR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::MTH->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::PCK->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->set($Kinds$Kind::ERR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LITERAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LAMBDA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::REFERENCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PARENS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CONDEXPR->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::APPLY->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NEWCLASS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LABELLED->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::DOLOOP->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::WHILELOOP->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::FORLOOP->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::FOREACHLOOP->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SWITCH->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SWITCH_EXPRESSION->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::METHODDEF->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CLASSDEF->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::AND->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::OR->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::VARDEF->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BLOCK->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TOPLEVEL->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MODULEDEF->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Attr$13::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PACKAGEDEF->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Attr$13::Attr$13() {
}

$Class* Attr$13::load$($String* name, bool initialize) {
	$loadClass(Attr$13, name, initialize, &_Attr$13_ClassInfo_, clinit$Attr$13, allocate$Attr$13);
	return class$;
}

$Class* Attr$13::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com