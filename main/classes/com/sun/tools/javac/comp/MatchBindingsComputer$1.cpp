#include <com/sun/tools/javac/comp/MatchBindingsComputer$1.h>

#include <com/sun/tools/javac/comp/MatchBindingsComputer.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef AND
#undef BINDINGPATTERN
#undef CONDEXPR
#undef GUARDPATTERN
#undef NOT
#undef OR
#undef PARENS
#undef PARENTHESIZEDPATTERN
#undef TYPETEST

using $JCTree$TagArray = $Array<::com::sun::tools::javac::tree::JCTree$Tag>;
using $MatchBindingsComputer = ::com::sun::tools::javac::comp::MatchBindingsComputer;
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

$FieldInfo _MatchBindingsComputer$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MatchBindingsComputer$1, $SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)},
	{}
};

$EnclosingMethodInfo _MatchBindingsComputer$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.MatchBindingsComputer",
	nullptr,
	nullptr
};

$InnerClassInfo _MatchBindingsComputer$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.MatchBindingsComputer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MatchBindingsComputer$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.tools.javac.comp.MatchBindingsComputer$1",
	"java.lang.Object",
	nullptr,
	_MatchBindingsComputer$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MatchBindingsComputer$1_EnclosingMethodInfo_,
	_MatchBindingsComputer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.MatchBindingsComputer"
};

$Object* allocate$MatchBindingsComputer$1($Class* clazz) {
	return $of($alloc(MatchBindingsComputer$1));
}

$ints* MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag = nullptr;

void clinit$MatchBindingsComputer$1($Class* class$) {
	$assignStatic(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag, $new($ints, $($JCTree$Tag::values())->length));
	{
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::AND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::OR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::NOT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::BINDINGPATTERN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PARENTHESIZEDPATTERN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::GUARDPATTERN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::PARENS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::TYPETEST->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MatchBindingsComputer$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->set($JCTree$Tag::CONDEXPR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MatchBindingsComputer$1::MatchBindingsComputer$1() {
}

$Class* MatchBindingsComputer$1::load$($String* name, bool initialize) {
	$loadClass(MatchBindingsComputer$1, name, initialize, &_MatchBindingsComputer$1_ClassInfo_, clinit$MatchBindingsComputer$1, allocate$MatchBindingsComputer$1);
	return class$;
}

$Class* MatchBindingsComputer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com