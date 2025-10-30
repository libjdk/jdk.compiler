#include <com/sun/tools/javac/tree/TreeInfo$2.h>

#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef AND
#undef ANNOTATED_TYPE
#undef ANNOTATION
#undef APPLY
#undef ASSIGN
#undef BINDINGPATTERN
#undef BITAND
#undef BITAND_ASG
#undef BITOR
#undef BITOR_ASG
#undef BITXOR
#undef BITXOR_ASG
#undef BLOCK
#undef CASE
#undef CATCH
#undef CLASSDEF
#undef COMPL
#undef CONDEXPR
#undef DIV
#undef DIV_ASG
#undef DOLOOP
#undef EQ
#undef ERRONEOUS
#undef EXEC
#undef EXPORTS
#undef FOREACHLOOP
#undef FORLOOP
#undef GE
#undef GT
#undef GUARDPATTERN
#undef IDENT
#undef IF
#undef INDEXED
#undef LABELLED
#undef LE
#undef LT
#undef METHODDEF
#undef MINUS
#undef MINUS_ASG
#undef MOD
#undef MODIFIERS
#undef MODULEDEF
#undef MOD_ASG
#undef MUL
#undef MUL_ASG
#undef NE
#undef NEG
#undef NEWCLASS
#undef NOT
#undef NULLCHK
#undef OPENS
#undef OR
#undef PACKAGEDEF
#undef PARENS
#undef PARENTHESIZEDPATTERN
#undef PLUS
#undef PLUS_ASG
#undef POS
#undef POSTDEC
#undef POSTINC
#undef PREDEC
#undef PREINC
#undef REFERENCE
#undef SELECT
#undef SL
#undef SL_ASG
#undef SR
#undef SR_ASG
#undef SWITCH
#undef SYNCHRONIZED
#undef TOPLEVEL
#undef TRY
#undef TYPEAPPLY
#undef TYPEARRAY
#undef TYPECAST
#undef TYPEIDENT
#undef TYPEPARAMETER
#undef TYPETEST
#undef TYPE_ANNOTATION
#undef USR
#undef USR_ASG
#undef VARDEF
#undef WHILELOOP
#undef WILDCARD

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
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

$FieldInfo _TreeInfo$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TreeInfo$2, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _TreeInfo$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.tree.TreeInfo",
	nullptr,
	nullptr
};

$InnerClassInfo _TreeInfo$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.TreeInfo$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TreeInfo$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.tree.TreeInfo$2",
	"java.lang.Object",
	nullptr,
	_TreeInfo$2_FieldInfo_,
	nullptr,
	nullptr,
	&_TreeInfo$2_EnclosingMethodInfo_,
	_TreeInfo$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.TreeInfo"
};

$Object* allocate$TreeInfo$2($Class* clazz) {
	return $of($alloc(TreeInfo$2));
}

$ints* TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$TreeInfo$2($Class* class$) {
	$assignStatic(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::APPLY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NEWCLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PARENS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::IDENT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SELECT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPEAPPLY->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::ANNOTATED_TYPE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::VARDEF->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::REFERENCE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREINC->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PREDEC->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTINC->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POSTDEC->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::ASSIGN->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITOR_ASG->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITXOR_ASG->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITAND_ASG->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SL_ASG->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SR_ASG->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::USR_ASG->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PLUS_ASG->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MINUS_ASG->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MUL_ASG->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::DIV_ASG->ordinal(), 24);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MOD_ASG->ordinal(), 25);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::ERRONEOUS->ordinal(), 26);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPEARRAY->ordinal(), 27);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MODULEDEF->ordinal(), 28);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PACKAGEDEF->ordinal(), 29);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::OR->ordinal(), 30);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::AND->ordinal(), 31);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITOR->ordinal(), 32);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITXOR->ordinal(), 33);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BITAND->ordinal(), 34);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::EQ->ordinal(), 35);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NE->ordinal(), 36);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LT->ordinal(), 37);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::GT->ordinal(), 38);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LE->ordinal(), 39);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::GE->ordinal(), 40);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SL->ordinal(), 41);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SR->ordinal(), 42);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::USR->ordinal(), 43);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PLUS->ordinal(), 44);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MINUS->ordinal(), 45);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MUL->ordinal(), 46);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::DIV->ordinal(), 47);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MOD->ordinal(), 48);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CLASSDEF->ordinal(), 49);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CONDEXPR->ordinal(), 50);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::EXEC->ordinal(), 51);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::INDEXED->ordinal(), 52);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::METHODDEF->ordinal(), 53);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPETEST->ordinal(), 54);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BINDINGPATTERN->ordinal(), 55);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::GUARDPATTERN->ordinal(), 56);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::POS->ordinal(), 57);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NEG->ordinal(), 58);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NOT->ordinal(), 59);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::COMPL->ordinal(), 60);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CASE->ordinal(), 61);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CATCH->ordinal(), 62);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::FORLOOP->ordinal(), 63);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::FOREACHLOOP->ordinal(), 64);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::IF->ordinal(), 65);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::LABELLED->ordinal(), 66);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::MODIFIERS->ordinal(), 67);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SYNCHRONIZED->ordinal(), 68);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TOPLEVEL->ordinal(), 69);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TRY->ordinal(), 70);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::WILDCARD->ordinal(), 71);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPECAST->ordinal(), 72);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::WHILELOOP->ordinal(), 73);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PARENTHESIZEDPATTERN->ordinal(), 74);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::DOLOOP->ordinal(), 75);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::SWITCH->ordinal(), 76);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::ANNOTATION->ordinal(), 77);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPE_ANNOTATION->ordinal(), 78);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPEPARAMETER->ordinal(), 79);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BLOCK->ordinal(), 80);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NULLCHK->ordinal(), 81);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::EXPORTS->ordinal(), 82);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::OPENS->ordinal(), 83);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TreeInfo$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPEIDENT->ordinal(), 84);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TreeInfo$2::TreeInfo$2() {
}

$Class* TreeInfo$2::load$($String* name, bool initialize) {
	$loadClass(TreeInfo$2, name, initialize, &_TreeInfo$2_ClassInfo_, clinit$TreeInfo$2, allocate$TreeInfo$2);
	return class$;
}

$Class* TreeInfo$2::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com