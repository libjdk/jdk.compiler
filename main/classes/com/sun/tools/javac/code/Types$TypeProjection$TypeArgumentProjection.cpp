#include <com/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection$1.h>
#include <com/sun/tools/javac/code/Types$TypeProjection.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef BOT
#undef DOWNWARDS
#undef EXTENDS
#undef SUPER
#undef UNBOUND
#undef UPWARDS

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$ProjectionKind = ::com::sun::tools::javac::code::Types$ProjectionKind;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Types$TypeProjection = ::com::sun::tools::javac::code::Types$TypeProjection;
using $Types$TypeProjection$TypeArgumentProjection$1 = ::com::sun::tools::javac::code::Types$TypeProjection$TypeArgumentProjection$1;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$TypeProjection$TypeArgumentProjection_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$TypeProjection;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypeProjection$TypeArgumentProjection, this$1)},
	{"site", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Types$TypeProjection$TypeArgumentProjection, site)},
	{"declaredBound", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Types$TypeProjection$TypeArgumentProjection, declaredBound)},
	{}
};

$MethodInfo _Types$TypeProjection$TypeArgumentProjection_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeProjection;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(static_cast<void(Types$TypeProjection$TypeArgumentProjection::*)($Types$TypeProjection*,$Type*,$Type*)>(&Types$TypeProjection$TypeArgumentProjection::init$))},
	{"makeWildcard", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Types$TypeProjection$TypeArgumentProjection::*)($Type*,$BoundKind*)>(&Types$TypeProjection$TypeArgumentProjection::makeWildcard))},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$TypeProjection$TypeArgumentProjection_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection", "com.sun.tools.javac.code.Types$TypeProjection", "TypeArgumentProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _Types$TypeProjection$TypeArgumentProjection_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection",
	"com.sun.tools.javac.code.Types$TypeMapping",
	nullptr,
	_Types$TypeProjection$TypeArgumentProjection_FieldInfo_,
	_Types$TypeProjection$TypeArgumentProjection_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$TypeMapping<Lcom/sun/tools/javac/code/Types$ProjectionKind;>;",
	nullptr,
	_Types$TypeProjection$TypeArgumentProjection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeProjection$TypeArgumentProjection($Class* clazz) {
	return $of($alloc(Types$TypeProjection$TypeArgumentProjection));
}

void Types$TypeProjection$TypeArgumentProjection::init$($Types$TypeProjection* this$1, $Type* site, $Type* declaredBound) {
	$set(this, this$1, this$1);
	$Types$TypeMapping::init$();
	$set(this, site, site);
	$set(this, declaredBound, declaredBound);
}

$Type* Types$TypeProjection$TypeArgumentProjection::visitType($Type* t, $Types$ProjectionKind* pkind) {
	$useLocalCurrentObjectStackCache();
	$init($Types$ProjectionKind);
	if (pkind == $Types$ProjectionKind::DOWNWARDS) {
		return $nc($nc(this->this$1->this$0)->syms)->botType;
	}
	$var($Type, upper, $nc(t)->map(this->this$1, $Types$ProjectionKind::UPWARDS));
	$var($Type, lower, t->map(this->this$1, $Types$ProjectionKind::DOWNWARDS));
	$var($List, formals, $nc($nc($nc(this->site)->tsym)->type)->getTypeArguments());
	$BoundKind* bk = nullptr;
	$var($Type, bound, nullptr);
	bool var$0 = !$nc(this->this$1->this$0)->isSameType(upper, $nc($nc(this->this$1->this$0)->syms)->objectType);
	if (var$0) {
		bool var$1 = $nc(this->declaredBound)->containsAny(formals);
		var$0 = (var$1 || !$nc(this->this$1->this$0)->isSubtype(this->declaredBound, upper));
	}
	if (var$0) {
		$assign(bound, upper);
		$init($BoundKind);
		bk = $BoundKind::EXTENDS;
	} else {
		$init($TypeTag);
		if (!$nc(lower)->hasTag($TypeTag::BOT)) {
			$assign(bound, lower);
			$init($BoundKind);
			bk = $BoundKind::SUPER;
		} else {
			$assign(bound, $nc($nc(this->this$1->this$0)->syms)->objectType);
			$init($BoundKind);
			bk = $BoundKind::UNBOUND;
		}
	}
	return makeWildcard(bound, bk);
}

$Type* Types$TypeProjection$TypeArgumentProjection::visitWildcardType($Type$WildcardType* wt, $Types$ProjectionKind* pkind) {
	$useLocalCurrentObjectStackCache();
	$var($Type, bound, $nc($nc(this->this$1->this$0)->syms)->botType);
	$BoundKind* bk = $nc(wt)->kind;
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc((wt->kind))->ordinal())) {
	case 1:
		{
			$assign(bound, $nc(wt->type)->map(this->this$1, pkind));
			$init($TypeTag);
			if ($nc(bound)->hasTag($TypeTag::BOT)) {
				return $nc($nc(this->this$1->this$0)->syms)->botType;
			}
			break;
		}
	case 2:
		{
			$assign(bound, $nc(wt->type)->map(this->this$1, $($nc(pkind)->complement())));
			$init($TypeTag);
			if ($nc(bound)->hasTag($TypeTag::BOT)) {
				$assign(bound, $nc($nc(this->this$1->this$0)->syms)->objectType);
				$init($BoundKind);
				bk = $BoundKind::UNBOUND;
			}
			break;
		}
	}
	return makeWildcard(bound, bk);
}

$Type* Types$TypeProjection$TypeArgumentProjection::makeWildcard($Type* bound, $BoundKind* bk) {
	return $new($Types$TypeProjection$TypeArgumentProjection$1, this, bound, bk, $nc($nc(this->this$1->this$0)->syms)->boundClass);
}

$Object* Types$TypeProjection$TypeArgumentProjection::visitType($Type* t, Object$* pkind) {
	return $of(this->visitType(t, $cast($Types$ProjectionKind, pkind)));
}

$Object* Types$TypeProjection$TypeArgumentProjection::visitWildcardType($Type$WildcardType* wt, Object$* pkind) {
	return $of(this->visitWildcardType(wt, $cast($Types$ProjectionKind, pkind)));
}

Types$TypeProjection$TypeArgumentProjection::Types$TypeProjection$TypeArgumentProjection() {
}

$Class* Types$TypeProjection$TypeArgumentProjection::load$($String* name, bool initialize) {
	$loadClass(Types$TypeProjection$TypeArgumentProjection, name, initialize, &_Types$TypeProjection$TypeArgumentProjection_ClassInfo_, allocate$Types$TypeProjection$TypeArgumentProjection);
	return class$;
}

$Class* Types$TypeProjection$TypeArgumentProjection::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com