#include <com/sun/tools/javac/code/Types$5.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$PackageType.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ARRAY
#undef EQ
#undef ERROR
#undef FORALL
#undef TYPEVAR
#undef UNKNOWN
#undef WILDCARD

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$PackageType = ::com::sun::tools::javac::code::Type$PackageType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$5, this$0)},
	{}
};

$MethodInfo _Types$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$5::*)($Types*)>(&Types$5::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitPackageType", "(Lcom/sun/tools/javac/code/Type$PackageType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$5_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$5_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$5",
	"com.sun.tools.javac.code.Types$TypeRelation",
	nullptr,
	_Types$5_FieldInfo_,
	_Types$5_MethodInfo_,
	nullptr,
	&_Types$5_EnclosingMethodInfo_,
	_Types$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$5($Class* clazz) {
	return $of($alloc(Types$5));
}

void Types$5::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
}

$Boolean* Types$5::visitType($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->equalsIgnoreMetadata(s)) {
		return $Boolean::valueOf(true);
	}
	if ($nc(s)->isPartial()) {
		return $cast($Boolean, visit(s, t));
	}
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 3:
		{}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{}
	case 10:
		{}
	case 11:
		{}
	case 13:
		{}
	case 15:
		{
			return $Boolean::valueOf(t->hasTag($($nc(s)->getTag())));
		}
	case 12:
		{
			{
				$init($TypeTag);
				if ($nc(s)->hasTag($TypeTag::TYPEVAR)) {
					return $Boolean::valueOf(t == s);
				} else {
					bool var$1 = s->isSuperBound();
					bool var$0 = var$1 && !s->isExtendsBound();
					return $Boolean::valueOf(var$0 && $nc(($cast($Boolean, $(visit(t, $(this->this$0->wildUpperBound(s)))))))->booleanValue());
				}
			}
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"isSameType "_s, $(t->getTag())})));
		}
	}
}

$Boolean* Types$5::visitWildcardType($Type$WildcardType* t, $Type* s) {
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::WILDCARD)) {
		return $Boolean::valueOf(false);
	} else {
		$var($Type$WildcardType, t2, $cast($Type$WildcardType, s));
		bool var$1 = $nc(t)->kind == t2->kind;
		if (!var$1) {
			bool var$2 = $nc(t)->isExtendsBound();
			var$1 = (var$2 && s->isExtendsBound());
		}
		bool var$0 = (var$1);
		return $Boolean::valueOf(var$0 && this->this$0->isSameType(t->type, t2->type));
	}
}

$Boolean* Types$5::visitClassType($Type$ClassType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	if ($equals(t, s)) {
		return $Boolean::valueOf(true);
	}
	if ($nc(s)->isPartial()) {
		return $cast($Boolean, visit(s, t));
	}
	bool var$0 = $nc(s)->isSuperBound();
	if (var$0 && !s->isExtendsBound()) {
		bool var$1 = $nc(($cast($Boolean, $(visit(t, $(this->this$0->wildUpperBound(s)))))))->booleanValue();
		return $Boolean::valueOf(var$1 && $nc(($cast($Boolean, $(visit(t, $(this->this$0->wildLowerBound(s)))))))->booleanValue());
	}
	bool var$2 = $nc(t)->isCompound();
	if (var$2 && $nc(s)->isCompound()) {
		$var($Type, var$3, this->this$0->supertype(t));
		if (!$nc(($cast($Boolean, $(visit(var$3, $(this->this$0->supertype(s)))))))->booleanValue()) {
			return $Boolean::valueOf(false);
		}
		$var($Map, tMap, $new($HashMap));
		{
			$var($Iterator, i$, $nc($(this->this$0->interfaces(t)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, ti, $cast($Type, i$->next()));
				{
					if (tMap->containsKey(ti)) {
						$throwNew($AssertionError, $of("Malformed intersection"_s));
					}
					tMap->put($nc(ti)->tsym, ti);
				}
			}
		}
		{
			$var($Iterator, i$, $nc($(this->this$0->interfaces(s)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, si, $cast($Type, i$->next()));
				{
					if (!tMap->containsKey($nc(si)->tsym)) {
						return $Boolean::valueOf(false);
					}
					$var($Type, ti, $cast($Type, tMap->remove($nc(si)->tsym)));
					if (!$nc(($cast($Boolean, $(visit(ti, si)))))->booleanValue()) {
						return $Boolean::valueOf(false);
					}
				}
			}
		}
		return $Boolean::valueOf(tMap->isEmpty());
	}
	bool var$5 = $nc(t)->tsym == $nc(s)->tsym;
	if (var$5) {
		$var($Type, var$6, t->getEnclosingType());
		var$5 = $nc(($cast($Boolean, $(visit(var$6, $(s->getEnclosingType()))))))->booleanValue();
	}
	bool var$4 = var$5;
	if (var$4) {
		$var($List, var$7, t->getTypeArguments());
		var$4 = this->this$0->containsTypeEquivalent(var$7, $(s->getTypeArguments()));
	}
	return $Boolean::valueOf(var$4);
}

$Boolean* Types$5::visitArrayType($Type$ArrayType* t, $Type* s) {
	if ($equals(t, s)) {
		return $Boolean::valueOf(true);
	}
	if ($nc(s)->isPartial()) {
		return $cast($Boolean, visit(s, t));
	}
	$init($TypeTag);
	bool var$0 = $nc(s)->hasTag($TypeTag::ARRAY);
	return $Boolean::valueOf(var$0 && this->this$0->containsTypeEquivalent($nc(t)->elemtype, $(this->this$0->elemtype(s))));
}

$Boolean* Types$5::visitMethodType($Type$MethodType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->hasSameArgs(t, s);
	if (var$0) {
		$var($Type, var$1, $nc(t)->getReturnType());
		var$0 = $nc(($cast($Boolean, $(visit(var$1, $($nc(s)->getReturnType()))))))->booleanValue();
	}
	return $Boolean::valueOf(var$0);
}

$Boolean* Types$5::visitPackageType($Type$PackageType* t, $Type* s) {
	return $Boolean::valueOf($equals(t, s));
}

$Boolean* Types$5::visitForAll($Type$ForAll* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::FORALL)) {
		return $Boolean::valueOf(false);
	}
	$var($Type$ForAll, forAll, $cast($Type$ForAll, s));
	bool var$0 = this->this$0->hasSameBounds(t, forAll);
	return $Boolean::valueOf(var$0 && $nc(($cast($Boolean, $(visit($nc(t)->qtype, $(this->this$0->subst($nc(forAll)->qtype, forAll->tvars, t->tvars)))))))->booleanValue());
}

$Boolean* Types$5::visitUndetVar($Type$UndetVar* t, $Type* s) {
	$init($TypeTag);
	if ($nc(s)->hasTag($TypeTag::WILDCARD)) {
		return $Boolean::valueOf(false);
	}
	bool var$0 = $equals(t, s) || $nc(t)->qtype == s || $nc(s)->hasTag($TypeTag::ERROR);
	if (var$0 || $nc(s)->hasTag($TypeTag::UNKNOWN)) {
		return $Boolean::valueOf(true);
	}
	$init($Type$UndetVar$InferenceBound);
	$nc(t)->addBound($Type$UndetVar$InferenceBound::EQ, s, this->this$0);
	return $Boolean::valueOf(true);
}

$Boolean* Types$5::visitErrorType($Type$ErrorType* t, $Type* s) {
	return $Boolean::valueOf(true);
}

$Object* Types$5::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(this->visitUndetVar(t, $cast($Type, s)));
}

$Object* Types$5::visitForAll($Type$ForAll* t, Object$* s) {
	return $of(this->visitForAll(t, $cast($Type, s)));
}

$Object* Types$5::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($Type, s)));
}

$Object* Types$5::visitPackageType($Type$PackageType* t, Object$* s) {
	return $of(this->visitPackageType(t, $cast($Type, s)));
}

$Object* Types$5::visitMethodType($Type$MethodType* t, Object$* s) {
	return $of(this->visitMethodType(t, $cast($Type, s)));
}

$Object* Types$5::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($Type, s)));
}

$Object* Types$5::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Type, s)));
}

$Object* Types$5::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Type, s)));
}

$Object* Types$5::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$5::Types$5() {
}

$Class* Types$5::load$($String* name, bool initialize) {
	$loadClass(Types$5, name, initialize, &_Types$5_ClassInfo_, allocate$Types$5);
	return class$;
}

$Class* Types$5::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com