#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase$1.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

#undef AMBIGUOUS
#undef WRONG_MTHS

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$MethodResolutionPhase = ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$MethodInfo _Resolve$MethodResolutionPhase$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IZZ)V", nullptr, $PRIVATE, $method(static_cast<void(Resolve$MethodResolutionPhase$1::*)($String*,int32_t,bool,bool)>(&Resolve$MethodResolutionPhase$1::init$))},
	{"mergeResults", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Resolve$MethodResolutionPhase$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$MethodResolutionPhase$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase", "com.sun.tools.javac.comp.Resolve", "MethodResolutionPhase", $STATIC | $ENUM},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Resolve$MethodResolutionPhase$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase$1",
	"com.sun.tools.javac.comp.Resolve$MethodResolutionPhase",
	nullptr,
	nullptr,
	_Resolve$MethodResolutionPhase$1_MethodInfo_,
	nullptr,
	&_Resolve$MethodResolutionPhase$1_EnclosingMethodInfo_,
	_Resolve$MethodResolutionPhase$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionPhase$1($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionPhase$1));
}

void Resolve$MethodResolutionPhase$1::init$($String* $enum$name, int32_t $enum$ordinal, bool isBoxingRequired, bool isVarargsRequired) {
	$Resolve$MethodResolutionPhase::init$($enum$name, $enum$ordinal, isBoxingRequired, isVarargsRequired);
}

$Symbol* Resolve$MethodResolutionPhase$1::mergeResults($Symbol* bestSoFar, $Symbol* sym) {
	$init($Kinds$Kind);
	$Assert::check($nc($nc(bestSoFar)->kind)->isResolutionError() && bestSoFar->kind != $Kinds$Kind::AMBIGUOUS);
	if (!$nc($nc(sym)->kind)->isResolutionError()) {
		return sym;
	} else {
		$init($Resolve$18);
		switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(bestSoFar)->kind))->ordinal())) {
		case 3:
			{}
		case 6:
			{
				switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc((sym->kind))->ordinal())) {
				case 3:
					{
						return bestSoFar->kind == $Kinds$Kind::WRONG_MTHS ? bestSoFar : sym;
					}
				case 1:
					{
						return bestSoFar;
					}
				case 6:
					{}
				default:
					{
						return sym;
					}
				}
			}
		default:
			{
				return bestSoFar;
			}
		}
	}
}

Resolve$MethodResolutionPhase$1::Resolve$MethodResolutionPhase$1() {
}

$Class* Resolve$MethodResolutionPhase$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionPhase$1, name, initialize, &_Resolve$MethodResolutionPhase$1_ClassInfo_, allocate$Resolve$MethodResolutionPhase$1);
	return class$;
}

$Class* Resolve$MethodResolutionPhase$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com