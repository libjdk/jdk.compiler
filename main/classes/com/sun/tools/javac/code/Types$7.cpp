#include <com/sun/tools/javac/code/Types$7.h>

#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BOT
#undef CLASS
#undef DONT_REWRITE_TYPEVARS
#undef ERROR
#undef HIGH
#undef LOW
#undef NONE
#undef REWRITE_TYPEVARS
#undef TYPEVAR
#undef UNCHECKED

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$7, this$0)},
	{}
};

$MethodInfo _Types$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$7::*)($Types*)>(&Types$7::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitCompoundType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;Z)Z", nullptr, 0},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$7_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$7_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$7",
	"com.sun.tools.javac.code.Types$TypeRelation",
	nullptr,
	_Types$7_FieldInfo_,
	_Types$7_MethodInfo_,
	nullptr,
	&_Types$7_EnclosingMethodInfo_,
	_Types$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$7($Class* clazz) {
	return $of($alloc(Types$7));
}

void Types$7::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
}

$Boolean* Types$7::visitType($Type* t, $Type* s) {
	$init($TypeTag);
	bool var$0 = $nc(s)->hasTag($TypeTag::ERROR);
	if (var$0 || $nc(t)->hasTag($TypeTag::NONE)) {
		return $Boolean::valueOf(true);
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
		{
			return $Boolean::valueOf($nc(s)->isNumeric());
		}
	case 10:
		{
			return $Boolean::valueOf($nc(s)->hasTag($TypeTag::BOOLEAN));
		}
	case 11:
		{
			return $Boolean::valueOf(false);
		}
	case 13:
		{
			return $Boolean::valueOf(this->this$0->isSubtype(t, s));
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$Boolean* Types$7::visitWildcardType($Type$WildcardType* t, $Type* s) {
	return $Boolean::valueOf(this->this$0->isCastable($(this->this$0->wildUpperBound(t)), s, $cast($Warner, $nc(this->this$0->warnStack)->head)));
}

$Boolean* Types$7::visitClassType($Type$ClassType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = $nc(s)->hasTag($TypeTag::ERROR);
	if (var$0 || $nc(s)->hasTag($TypeTag::BOT)) {
		return $Boolean::valueOf(true);
	}
	if ($nc(s)->hasTag($TypeTag::TYPEVAR)) {
		if (this->this$0->isCastable(t, $(s->getUpperBound()), this->this$0->noWarnings)) {
			$init($Lint$LintCategory);
			$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
			return $Boolean::valueOf(true);
		} else {
			return $Boolean::valueOf(false);
		}
	}
	bool var$1 = $nc(t)->isCompound();
	if (var$1 || $nc(s)->isCompound()) {
		return $Boolean::valueOf(!$nc(t)->isCompound() ? visitCompoundType($cast($Type$ClassType, s), t, true) : visitCompoundType(t, s, false));
	}
	bool var$2 = $nc(s)->hasTag($TypeTag::CLASS);
	if (var$2 || $nc(s)->hasTag($TypeTag::ARRAY)) {
		bool upcast = false;
		$var($Type, var$4, this->this$0->erasure(static_cast<$Type*>(t)));
		bool var$3 = (upcast = this->this$0->isSubtype(var$4, $(this->this$0->erasure(s))));
		if (!var$3) {
			$var($Type, var$5, this->this$0->erasure(s));
			var$3 = this->this$0->isSubtype(var$5, $(this->this$0->erasure(static_cast<$Type*>(t))));
		}
		if (var$3) {
			if (!upcast && s->hasTag($TypeTag::ARRAY)) {
				if (!this->this$0->isReifiable(s)) {
					$init($Lint$LintCategory);
					$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
				}
				return $Boolean::valueOf(true);
			} else if (s->isRaw()) {
				return $Boolean::valueOf(true);
			} else if ($nc(t)->isRaw()) {
				if (!this->this$0->isUnbounded(s)) {
					$init($Lint$LintCategory);
					$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
				}
				return $Boolean::valueOf(true);
			}
			$var($Type, a, upcast ? static_cast<$Type*>(t) : s);
			$var($Type, b, upcast ? s : static_cast<$Type*>(t));
			bool HIGH = true;
			bool LOW = false;
			bool DONT_REWRITE_TYPEVARS = false;
			$var($Type, aHigh, this->this$0->rewriteQuantifiers(a, HIGH, DONT_REWRITE_TYPEVARS));
			$var($Type, aLow, this->this$0->rewriteQuantifiers(a, LOW, DONT_REWRITE_TYPEVARS));
			$var($Type, bHigh, this->this$0->rewriteQuantifiers(b, HIGH, DONT_REWRITE_TYPEVARS));
			$var($Type, bLow, this->this$0->rewriteQuantifiers(b, LOW, DONT_REWRITE_TYPEVARS));
			$var($Type, lowSub, this->this$0->asSub(bLow, $nc(aLow)->tsym));
			$var($Type, highSub, (lowSub == nullptr) ? ($Type*)nullptr : this->this$0->asSub(bHigh, $nc(aHigh)->tsym));
			if (highSub == nullptr) {
				bool REWRITE_TYPEVARS = true;
				$assign(aHigh, this->this$0->rewriteQuantifiers(a, HIGH, REWRITE_TYPEVARS));
				$assign(aLow, this->this$0->rewriteQuantifiers(a, LOW, REWRITE_TYPEVARS));
				$assign(bHigh, this->this$0->rewriteQuantifiers(b, HIGH, REWRITE_TYPEVARS));
				$assign(bLow, this->this$0->rewriteQuantifiers(b, LOW, REWRITE_TYPEVARS));
				$assign(lowSub, this->this$0->asSub(bLow, $nc(aLow)->tsym));
				$assign(highSub, (lowSub == nullptr) ? ($Type*)nullptr : this->this$0->asSub(bHigh, $nc(aHigh)->tsym));
			}
			if (highSub != nullptr) {
				if (!($nc(a)->tsym == highSub->tsym && a->tsym == $nc(lowSub)->tsym)) {
					$Assert::error($$str({a->tsym, " != "_s, highSub->tsym, " != "_s, lowSub->tsym}));
				}
				$var($List, var$9, $nc(aHigh)->allparams());
				bool var$8 = !this->this$0->disjointTypes(var$9, $(highSub->allparams()));
				if (var$8) {
					$var($List, var$10, $nc(aHigh)->allparams());
					var$8 = !this->this$0->disjointTypes(var$10, $($nc(lowSub)->allparams()));
				}
				bool var$7 = var$8;
				if (var$7) {
					$var($List, var$11, $nc(aLow)->allparams());
					var$7 = !this->this$0->disjointTypes(var$11, $(highSub->allparams()));
				}
				bool var$6 = var$7;
				if (var$6) {
					$var($List, var$12, $nc(aLow)->allparams());
					var$6 = !this->this$0->disjointTypes(var$12, $($nc(lowSub)->allparams()));
				}
				if (var$6) {
					if (upcast ? this->this$0->giveWarning(a, b) : this->this$0->giveWarning(b, a)) {
						$init($Lint$LintCategory);
						$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
					}
					return $Boolean::valueOf(true);
				}
			}
			if (this->this$0->isReifiable(s)) {
				return $Boolean::valueOf(this->this$0->isSubtypeUnchecked(a, b));
			} else {
				return $Boolean::valueOf(this->this$0->isSubtypeUnchecked(a, b, $cast($Warner, $nc(this->this$0->warnStack)->head)));
			}
		}
		if (s->hasTag($TypeTag::CLASS)) {
			if (((int64_t)($nc(s->tsym)->flags() & (uint64_t)(int64_t)512)) != 0) {
				return $Boolean::valueOf((((int64_t)($nc($nc(t)->tsym)->flags() & (uint64_t)(int64_t)16)) == 0) ? this->this$0->sideCast(t, s, $cast($Warner, $nc(this->this$0->warnStack)->head)) : this->this$0->sideCastFinal(t, s, $cast($Warner, $nc(this->this$0->warnStack)->head)));
			} else if (((int64_t)($nc($nc(t)->tsym)->flags() & (uint64_t)(int64_t)512)) != 0) {
				return $Boolean::valueOf((((int64_t)($nc(s->tsym)->flags() & (uint64_t)(int64_t)16)) == 0) ? this->this$0->sideCast(t, s, $cast($Warner, $nc(this->this$0->warnStack)->head)) : this->this$0->sideCastFinal(t, s, $cast($Warner, $nc(this->this$0->warnStack)->head)));
			} else {
				return $Boolean::valueOf(false);
			}
		}
	}
	return $Boolean::valueOf(false);
}

bool Types$7::visitCompoundType($Type$ClassType* ct, $Type* s, bool reverse) {
	$useLocalCurrentObjectStackCache();
	$var($Warner, warn, this->this$0->noWarnings);
	{
		$var($Iterator, i$, $nc($(this->this$0->directSupertypes(ct)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, c, $cast($Type, i$->next()));
			{
				$nc(warn)->clear();
				if (reverse ? !this->this$0->isCastable(s, c, warn) : !this->this$0->isCastable(c, s, warn)) {
					return false;
				}
			}
		}
	}
	$init($Lint$LintCategory);
	if ($nc(warn)->hasLint($Lint$LintCategory::UNCHECKED)) {
		$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
	}
	return true;
}

$Boolean* Types$7::visitArrayType($Type$ArrayType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(s)->getTag())))->ordinal())) {
	case 16:
		{}
	case 13:
		{
			return $Boolean::valueOf(true);
		}
	case 12:
		{
			if (this->this$0->isCastable(s, t, this->this$0->noWarnings)) {
				$init($Lint$LintCategory);
				$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
				return $Boolean::valueOf(true);
			} else {
				return $Boolean::valueOf(false);
			}
		}
	case 2:
		{
			return $Boolean::valueOf(this->this$0->isSubtype(t, s));
		}
	case 1:
		{
			bool var$0 = $nc($(this->this$0->elemtype(t)))->isPrimitive();
			if (var$0 || $nc($(this->this$0->elemtype(s)))->isPrimitive()) {
				return $Boolean::valueOf($nc($(this->this$0->elemtype(t)))->hasTag($($nc($(this->this$0->elemtype(s)))->getTag())));
			} else {
				$var($Type, var$1, this->this$0->elemtype(t));
				return $cast($Boolean, visit(var$1, $(this->this$0->elemtype(s))));
			}
		}
	default:
		{
			return $Boolean::valueOf(false);
		}
	}
}

$Boolean* Types$7::visitTypeVar($Type$TypeVar* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(s)->getTag())))->ordinal())) {
	case 16:
		{}
	case 13:
		{
			return $Boolean::valueOf(true);
		}
	case 12:
		{
			if (this->this$0->isSubtype(t, s)) {
				return $Boolean::valueOf(true);
			} else if (this->this$0->isCastable($($nc(t)->getUpperBound()), s, this->this$0->noWarnings)) {
				$init($Lint$LintCategory);
				$nc(($cast($Warner, $nc(this->this$0->warnStack)->head)))->warn($Lint$LintCategory::UNCHECKED);
				return $Boolean::valueOf(true);
			} else {
				return $Boolean::valueOf(false);
			}
		}
	default:
		{
			return $Boolean::valueOf(this->this$0->isCastable($($nc(t)->getUpperBound()), s, $cast($Warner, $nc(this->this$0->warnStack)->head)));
		}
	}
}

$Boolean* Types$7::visitErrorType($Type$ErrorType* t, $Type* s) {
	return $Boolean::valueOf(true);
}

$Object* Types$7::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($Type, s)));
}

$Object* Types$7::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Type, s)));
}

$Object* Types$7::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($Type, s)));
}

$Object* Types$7::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Type, s)));
}

$Object* Types$7::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Type, s)));
}

$Object* Types$7::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$7::Types$7() {
}

$Class* Types$7::load$($String* name, bool initialize) {
	$loadClass(Types$7, name, initialize, &_Types$7_ClassInfo_, allocate$Types$7);
	return class$;
}

$Class* Types$7::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com