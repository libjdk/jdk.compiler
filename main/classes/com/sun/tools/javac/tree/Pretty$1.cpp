#include <com/sun/tools/javac/tree/Pretty$1.h>

#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef AND
#undef BITAND
#undef BITOR
#undef BITXOR
#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef COMPL
#undef DIV
#undef DOUBLE
#undef EQ
#undef FLOAT
#undef GE
#undef GT
#undef INT
#undef LE
#undef LONG
#undef LT
#undef MINUS
#undef MOD
#undef MUL
#undef NE
#undef NEG
#undef NOT
#undef NULLCHK
#undef OR
#undef PLUS
#undef POS
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef SHORT
#undef SL
#undef SR
#undef USR
#undef VOID

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $Pretty = ::com::sun::tools::javac::tree::Pretty;
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
				namespace tree {

$FieldInfo _Pretty$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Pretty$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Pretty$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _Pretty$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.Pretty",
	nullptr,
	nullptr
};

$InnerClassInfo _Pretty$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.Pretty$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Pretty$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.Pretty$1",
	"java.lang.Object",
	nullptr,
	_Pretty$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Pretty$1_EnclosingMethodInfo_,
	_Pretty$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.Pretty"
};

$Object* allocate$Pretty$1($Class* clazz) {
	return $of($alloc(Pretty$1));
}

$ints* Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$Pretty$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::INT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::LONG->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::FLOAT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::DOUBLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::CHAR->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOOLEAN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BOT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::BYTE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::SHORT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->set($TypeTag::VOID->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NEG->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NOT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::COMPL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREINC->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREDEC->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTINC->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTDEC->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NULLCHK->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::OR->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::AND->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::EQ->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NE->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LT->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::GT->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LE->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::GE->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITOR->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITXOR->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITAND->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SL->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SR->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::USR->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PLUS->ordinal(), 24);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MINUS->ordinal(), 25);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MUL->ordinal(), 26);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::DIV->ordinal(), 27);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Pretty$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MOD->ordinal(), 28);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Pretty$1::Pretty$1() {
}

$Class* Pretty$1::load$($String* name, bool initialize) {
	$loadClass(Pretty$1, name, initialize, &_Pretty$1_ClassInfo_, clinit$Pretty$1, allocate$Pretty$1);
	return class$;
}

$Class* Pretty$1::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com