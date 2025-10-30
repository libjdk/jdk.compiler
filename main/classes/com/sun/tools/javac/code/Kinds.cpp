#include <com/sun/tools/javac/code/Kinds.h>

#include <com/sun/source/tree/MemberReferenceTree$ReferenceMode.h>
#include <com/sun/tools/javac/code/Kinds$1.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef ANNOTATION
#undef BOUND
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef INSTANCE_INIT
#undef INTERFACE
#undef METHOD
#undef PACKAGE
#undef RECORD
#undef RECORD_COMPONENT
#undef STATIC_INIT
#undef TYPEVAR
#undef VAR

using $MemberReferenceTree$ReferenceMode = ::com::sun::source::tree::MemberReferenceTree$ReferenceMode;
using $Kinds$1 = ::com::sun::tools::javac::code::Kinds$1;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Kinds_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Kinds::*)()>(&Kinds::init$))},
	{"kindName", "(Lcom/sun/source/tree/MemberReferenceTree$ReferenceMode;)Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Kinds$KindName*(*)($MemberReferenceTree$ReferenceMode*)>(&Kinds::kindName))},
	{"kindName", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Kinds$KindName*(*)($Symbol*)>(&Kinds::kindName))},
	{"typeKindName", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Kinds$KindName;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Kinds$KindName*(*)($Type*)>(&Kinds::typeKindName))},
	{}
};

$InnerClassInfo _Kinds_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Kinds$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.Kinds$KindName", "com.sun.tools.javac.code.Kinds", "KindName", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Kinds$KindSelector", "com.sun.tools.javac.code.Kinds", "KindSelector", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Kinds$Kind", "com.sun.tools.javac.code.Kinds", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Kinds_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Kinds",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Kinds_MethodInfo_,
	nullptr,
	nullptr,
	_Kinds_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Kinds$1,com.sun.tools.javac.code.Kinds$KindName,com.sun.tools.javac.code.Kinds$KindSelector,com.sun.tools.javac.code.Kinds$Kind,com.sun.tools.javac.code.Kinds$Kind$Category"
};

$Object* allocate$Kinds($Class* clazz) {
	return $of($alloc(Kinds));
}

void Kinds::init$() {
}

$Kinds$KindName* Kinds::kindName($MemberReferenceTree$ReferenceMode* mode) {
	$init($Kinds$1);
	switch ($nc($Kinds$1::$SwitchMap$com$sun$source$tree$MemberReferenceTree$ReferenceMode)->get($nc((mode))->ordinal())) {
	case 1:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::METHOD;
		}
	case 2:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::CONSTRUCTOR;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected mode: "_s, mode})));
		}
	}
}

$Kinds$KindName* Kinds::kindName($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$1);
	switch ($nc($Kinds$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc(($($nc(sym)->getKind())))->ordinal())) {
	case 1:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::PACKAGE;
		}
	case 2:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::ENUM;
		}
	case 3:
		{}
	case 4:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::CLASS;
		}
	case 5:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::RECORD;
		}
	case 6:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::INTERFACE;
		}
	case 7:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::TYPEVAR;
		}
	case 8:
		{}
	case 9:
		{}
	case 10:
		{}
	case 11:
		{}
	case 12:
		{}
	case 13:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::VAR;
		}
	case 14:
		{
			$init($Kinds$KindName);
			return (((int64_t)(sym->flags_field & (uint64_t)(int64_t)0x2000000000000000)) != 0) ? $Kinds$KindName::RECORD_COMPONENT : $Kinds$KindName::VAR;
		}
	case 15:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::CONSTRUCTOR;
		}
	case 16:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::METHOD;
		}
	case 17:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::STATIC_INIT;
		}
	case 18:
		{
			$init($Kinds$KindName);
			return $Kinds$KindName::INSTANCE_INIT;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unexpected kind: "_s, $(sym->getKind())})));
		}
	}
}

$Kinds$KindName* Kinds::typeKindName($Type* t) {
	$init($TypeTag);
	bool var$0 = $nc(t)->hasTag($TypeTag::TYPEVAR);
	if (!var$0) {
		bool var$1 = $nc(t)->hasTag($TypeTag::CLASS);
		var$0 = var$1 && ((int64_t)($nc(t->tsym)->flags() & (uint64_t)(int64_t)0x01000000)) != 0;
	}
	if (var$0) {
		$init($Kinds$KindName);
		return $Kinds$KindName::BOUND;
	} else {
		if (t->hasTag($TypeTag::PACKAGE)) {
			$init($Kinds$KindName);
			return $Kinds$KindName::PACKAGE;
		} else if (((int64_t)($nc(t->tsym)->flags_field & (uint64_t)(int64_t)8192)) != 0) {
			$init($Kinds$KindName);
			return $Kinds$KindName::ANNOTATION;
		} else if (((int64_t)($nc(t->tsym)->flags_field & (uint64_t)(int64_t)512)) != 0) {
			$init($Kinds$KindName);
			return $Kinds$KindName::INTERFACE;
		} else {
			$init($Kinds$KindName);
			return $Kinds$KindName::CLASS;
		}
	}
}

Kinds::Kinds() {
}

$Class* Kinds::load$($String* name, bool initialize) {
	$loadClass(Kinds, name, initialize, &_Kinds_ClassInfo_, allocate$Kinds);
	return class$;
}

$Class* Kinds::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com