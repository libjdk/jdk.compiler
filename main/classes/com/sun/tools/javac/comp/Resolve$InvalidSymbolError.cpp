#include <com/sun/tools/javac/comp/Resolve$InvalidSymbolError.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindSelector = ::com::sun::tools::javac::code::Kinds$KindSelector;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Resolve$InvalidSymbolError_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InvalidSymbolError, this$0)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Resolve$InvalidSymbolError, sym)},
	{}
};

$MethodInfo _Resolve$InvalidSymbolError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Resolve$InvalidSymbolError::*)($Resolve*,$Kinds$Kind*,$Symbol*,$String*)>(&Resolve$InvalidSymbolError::init$))},
	{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Resolve$InvalidSymbolError_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$InvalidSymbolError", "com.sun.tools.javac.comp.Resolve", "InvalidSymbolError", $ABSTRACT},
	{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
	{}
};

$ClassInfo _Resolve$InvalidSymbolError_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.comp.Resolve$InvalidSymbolError",
	"com.sun.tools.javac.comp.Resolve$ResolveError",
	nullptr,
	_Resolve$InvalidSymbolError_FieldInfo_,
	_Resolve$InvalidSymbolError_MethodInfo_,
	nullptr,
	nullptr,
	_Resolve$InvalidSymbolError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$InvalidSymbolError($Class* clazz) {
	return $of($alloc(Resolve$InvalidSymbolError));
}

void Resolve$InvalidSymbolError::init$($Resolve* this$0, $Kinds$Kind* kind, $Symbol* sym, $String* debugName) {
	$set(this, this$0, this$0);
	$Resolve$ResolveError::init$(this$0, kind, debugName);
	$set(this, sym, sym);
}

bool Resolve$InvalidSymbolError::exists() {
	return true;
}

$String* Resolve$InvalidSymbolError::toString() {
	return $str({$($Resolve$ResolveError::toString()), " wrongSym="_s, this->sym});
}

$Symbol* Resolve$InvalidSymbolError::access($Name* name, $Symbol$TypeSymbol* location) {
	bool var$0 = !$nc($nc(this->sym)->kind)->isResolutionError();
	$init($Kinds$KindSelector);
	if (var$0 && $nc($nc(this->sym)->kind)->matches($Kinds$KindSelector::TYP)) {
		return $nc($($nc(this->this$0->types)->createErrorType(name, location, $nc(this->sym)->type)))->tsym;
	} else {
		return this->sym;
	}
}

Resolve$InvalidSymbolError::Resolve$InvalidSymbolError() {
}

$Class* Resolve$InvalidSymbolError::load$($String* name, bool initialize) {
	$loadClass(Resolve$InvalidSymbolError, name, initialize, &_Resolve$InvalidSymbolError_ClassInfo_, allocate$Resolve$InvalidSymbolError);
	return class$;
}

$Class* Resolve$InvalidSymbolError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com