#include <com/sun/tools/javac/comp/Resolve$16.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$BadMethodReferenceError.h>
#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve$StaticError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <jcpp.h>

#undef NON_STATIC
#undef STATIC

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$BadMethodReferenceError = ::com::sun::tools::javac::comp::Resolve$BadMethodReferenceError;
using $Resolve$InvalidSymbolError = ::com::sun::tools::javac::comp::Resolve$InvalidSymbolError;
using $Resolve$ReferenceChooser = ::com::sun::tools::javac::comp::Resolve$ReferenceChooser;
using $Resolve$ReferenceLookupResult = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult;
using $Resolve$ReferenceLookupResult$StaticKind = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Resolve$StaticError = ::com::sun::tools::javac::comp::Resolve$StaticError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$16_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$16, this$0)},
	{}
};

$MethodInfo _Resolve$16_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(static_cast<void(Resolve$16::*)($Resolve*)>(&Resolve$16::init$))},
	{"boundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0},
	{"unboundResult", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Resolve$16_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$16_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$16", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$ReferenceChooser", "com.sun.tools.javac.comp.Resolve", "ReferenceChooser", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$16_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$16",
	"com.sun.tools.javac.comp.Resolve$ReferenceChooser",
	nullptr,
	_Resolve$16_FieldInfo_,
	_Resolve$16_MethodInfo_,
	nullptr,
	&_Resolve$16_EnclosingMethodInfo_,
	_Resolve$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$16($Class* clazz) {
	return $of($alloc(Resolve$16));
}

void Resolve$16::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$Resolve$ReferenceChooser::init$(this$0);
}

$Resolve$ReferenceLookupResult* Resolve$16::boundResult($Resolve$ReferenceLookupResult* boundRes) {
	bool var$0 = !$nc(boundRes)->isSuccess();
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return var$0 || $nc(boundRes)->hasKind($Resolve$ReferenceLookupResult$StaticKind::NON_STATIC) ? boundRes : $Resolve$ReferenceLookupResult::error($$new($Resolve$BadMethodReferenceError, this->this$0, $nc(boundRes)->sym, false));
}

$Resolve$ReferenceLookupResult* Resolve$16::unboundResult($Resolve$ReferenceLookupResult* boundRes, $Resolve$ReferenceLookupResult* unboundRes) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(boundRes)->isSuccess();
	bool var$0 = var$1 && $nc(boundRes->sym)->isStatic();
	if (var$0) {
		bool var$2 = !$nc(unboundRes)->isSuccess();
		$init($Resolve$ReferenceLookupResult$StaticKind);
		var$0 = (var$2 || $nc(unboundRes)->hasKind($Resolve$ReferenceLookupResult$StaticKind::STATIC));
	}
	if (var$0) {
		return boundRes;
	} else {
		bool var$7 = unboundRes->isSuccess();
		bool var$6 = var$7 && !$nc(unboundRes->sym)->isStatic();
		if (var$6) {
			bool var$8 = !$nc(boundRes)->isSuccess();
			$init($Resolve$ReferenceLookupResult$StaticKind);
			var$6 = (var$8 || $nc(boundRes)->hasKind($Resolve$ReferenceLookupResult$StaticKind::NON_STATIC));
		}
		if (var$6) {
			return unboundRes;
		} else {
			bool var$10 = boundRes->isSuccess();
			if (var$10 && unboundRes->isSuccess()) {
				return $Resolve$ReferenceLookupResult::error($(this->this$0->ambiguityError(boundRes->sym, unboundRes->sym)));
			} else {
				bool var$12 = boundRes->isSuccess();
				if (var$12 || unboundRes->isSuccess()) {
					return $Resolve$ReferenceLookupResult::error($$new($Resolve$BadMethodReferenceError, this->this$0, boundRes->isSuccess() ? boundRes->sym : unboundRes->sym, true));
				} else {
					bool var$13 = boundRes->canIgnore();
					return (var$13 && !unboundRes->canIgnore()) ? unboundRes : boundRes;
				}
			}
		}
	}
}

Resolve$16::Resolve$16() {
}

$Class* Resolve$16::load$($String* name, bool initialize) {
	$loadClass(Resolve$16, name, initialize, &_Resolve$16_ClassInfo_, allocate$Resolve$16);
	return class$;
}

$Class* Resolve$16::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com