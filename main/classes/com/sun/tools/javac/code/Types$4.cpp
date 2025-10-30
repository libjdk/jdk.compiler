#include <com/sun/tools/javac/code/Types$4.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$TypePair.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ARRAY
#undef BOT
#undef CHAR
#undef CLASS
#undef ERROR
#undef EXTENDS
#undef SHORT
#undef TYPEVAR
#undef UNBOUND
#undef UNKNOWN
#undef UPPER

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$TypePair = ::com::sun::tools::javac::code::Types$TypePair;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$4, this$0)},
	{"cache", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Types$TypePair;>;", $PRIVATE, $field(Types$4, cache)},
	{}
};

$MethodInfo _Types$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$4::*)($Types*)>(&Types$4::init$))},
	{"containsTypeRecursive", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Types$4::*)($Type*,$Type*)>(&Types$4::containsTypeRecursive))},
	{"rewriteSupers", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Types$4::*)($Type*)>(&Types$4::rewriteSupers))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$4_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$4_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$4",
	"com.sun.tools.javac.code.Types$TypeRelation",
	nullptr,
	_Types$4_FieldInfo_,
	_Types$4_MethodInfo_,
	nullptr,
	&_Types$4_EnclosingMethodInfo_,
	_Types$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$4($Class* clazz) {
	return $of($alloc(Types$4));
}

void Types$4::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
	$set(this, cache, $new($HashSet));
}

$Boolean* Types$4::visitType($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(t)->getTag())))->ordinal())) {
	case 3:
		{
			$init($TypeTag);
			bool var$0 = !$nc(s)->hasTag($TypeTag::CHAR);
			return $Boolean::valueOf((var$0 && $nc($(t->getTag()))->isSubRangeOf($(s->getTag()))));
		}
	case 4:
		{
			$init($TypeTag);
			bool var$1 = !$nc(s)->hasTag($TypeTag::SHORT);
			return $Boolean::valueOf((var$1 && $nc($(t->getTag()))->isSubRangeOf($(s->getTag()))));
		}
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
			return $Boolean::valueOf($nc($(t->getTag()))->isSubRangeOf($($nc(s)->getTag())));
		}
	case 10:
		{}
	case 11:
		{
			return $Boolean::valueOf(t->hasTag($($nc(s)->getTag())));
		}
	case 12:
		{
			return $Boolean::valueOf(this->this$0->isSubtypeNoCapture($(t->getUpperBound()), s));
		}
	case 13:
		{
			$init($TypeTag);
			bool var$4 = $nc(s)->hasTag($TypeTag::BOT);
			bool var$3 = var$4 || $nc(s)->hasTag($TypeTag::CLASS);
			bool var$2 = var$3 || $nc(s)->hasTag($TypeTag::ARRAY);
			return $Boolean::valueOf(var$2 || $nc(s)->hasTag($TypeTag::TYPEVAR));
		}
	case 14:
		{}
	case 15:
		{
			return $Boolean::valueOf(false);
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"isSubtype "_s, $(t->getTag())})));
		}
	}
}

bool Types$4::containsTypeRecursive($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$var($Types$TypePair, pair, $new($Types$TypePair, this->this$0, t, s));
	if ($nc(this->cache)->add(pair)) {
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				$var($List, var$3, $nc(t)->getTypeArguments());
				var$2 = this->this$0->containsType(var$3, $($nc(s)->getTypeArguments()));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
			} $finally: {
				$nc(this->cache)->remove(pair);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} else {
		$var($List, var$5, $nc(t)->getTypeArguments());
		return this->this$0->containsType(var$5, $($nc($(rewriteSupers(s)))->getTypeArguments()));
	}
}

$Type* Types$4::rewriteSupers($Type* t) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(t)->isParameterized()) {
		return t;
	}
	$var($ListBuffer, from, $new($ListBuffer));
	$var($ListBuffer, to, $new($ListBuffer));
	this->this$0->adaptSelf(t, from, to);
	if (from->isEmpty()) {
		return t;
	}
	$var($ListBuffer, rewrite, $new($ListBuffer));
	bool changed = false;
	{
		$var($Iterator, i$, $nc($(to->toList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, orig, $cast($Type, i$->next()));
			{
				$var($Type, s, rewriteSupers(orig));
				bool var$0 = $nc(s)->isSuperBound();
				if (var$0 && !s->isExtendsBound()) {
					$init($BoundKind);
					$assign(s, $new($Type$WildcardType, $nc(this->this$0->syms)->objectType, $BoundKind::UNBOUND, static_cast<$Symbol$TypeSymbol*>($nc(this->this$0->syms)->boundClass), $(s->getMetadata())));
					changed = true;
				} else if (s != orig) {
					$var($Type, var$1, this->this$0->wildUpperBound(s));
					$init($BoundKind);
					$var($BoundKind, var$2, $BoundKind::EXTENDS);
					$var($Symbol$TypeSymbol, var$3, static_cast<$Symbol$TypeSymbol*>($nc(this->this$0->syms)->boundClass));
					$assign(s, $new($Type$WildcardType, var$1, var$2, var$3, $(s->getMetadata())));
					changed = true;
				}
				rewrite->append(s);
			}
		}
	}
	if (changed) {
		$var($Type, var$4, $nc($nc(t)->tsym)->type);
		$var($List, var$5, from->toList());
		return this->this$0->subst(var$4, var$5, $(rewrite->toList()));
	} else {
		return t;
	}
}

$Boolean* Types$4::visitClassType($Type$ClassType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, sup, this->this$0->asSuper(t, $nc(s)->tsym));
	if (sup == nullptr) {
		return $Boolean::valueOf(false);
	}
	$init($TypeTag);
	if (!$nc(sup)->hasTag($TypeTag::CLASS)) {
		return $Boolean::valueOf(this->this$0->isSubtypeNoCapture(sup, s));
	}
	bool var$1 = $nc(sup)->tsym == $nc(s)->tsym;
	if (var$1) {
		bool var$2 = !s->isParameterized();
		var$1 = (var$2 || containsTypeRecursive(s, sup));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Type, var$3, $nc(sup)->getEnclosingType());
		var$0 = this->this$0->isSubtypeNoCapture(var$3, $($nc(s)->getEnclosingType()));
	}
	return $Boolean::valueOf(var$0);
}

$Boolean* Types$4::visitArrayType($Type$ArrayType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(s)->hasTag($TypeTag::ARRAY)) {
		if ($nc($nc(t)->elemtype)->isPrimitive()) {
			return $Boolean::valueOf(this->this$0->isSameType(t->elemtype, $(this->this$0->elemtype(s))));
		} else {
			return $Boolean::valueOf(this->this$0->isSubtypeNoCapture(t->elemtype, $(this->this$0->elemtype(s))));
		}
	}
	if ($nc(s)->hasTag($TypeTag::CLASS)) {
		$var($Name, sname, $nc(s->tsym)->getQualifiedName());
		return $Boolean::valueOf(sname == $nc(this->this$0->names)->java_lang_Object || sname == $nc(this->this$0->names)->java_lang_Cloneable || sname == $nc(this->this$0->names)->java_io_Serializable);
	}
	return $Boolean::valueOf(false);
}

$Boolean* Types$4::visitUndetVar($Type$UndetVar* t, $Type* s) {
	$init($TypeTag);
	bool var$0 = $equals(t, s) || $nc(t)->qtype == s || $nc(s)->hasTag($TypeTag::ERROR);
	if (var$0 || $nc(s)->hasTag($TypeTag::UNKNOWN)) {
		return $Boolean::valueOf(true);
	} else {
		if (s->hasTag($TypeTag::BOT)) {
			return $Boolean::valueOf(false);
		}
	}
	$init($Type$UndetVar$InferenceBound);
	$nc(t)->addBound($Type$UndetVar$InferenceBound::UPPER, s, this->this$0);
	return $Boolean::valueOf(true);
}

$Boolean* Types$4::visitErrorType($Type$ErrorType* t, $Type* s) {
	return $Boolean::valueOf(true);
}

$Object* Types$4::visitUndetVar($Type$UndetVar* t, Object$* s) {
	return $of(this->visitUndetVar(t, $cast($Type, s)));
}

$Object* Types$4::visitErrorType($Type$ErrorType* t, Object$* s) {
	return $of(this->visitErrorType(t, $cast($Type, s)));
}

$Object* Types$4::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($Type, s)));
}

$Object* Types$4::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Type, s)));
}

$Object* Types$4::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$4::Types$4() {
}

$Class* Types$4::load$($String* name, bool initialize) {
	$loadClass(Types$4, name, initialize, &_Types$4_ClassInfo_, allocate$Types$4);
	return class$;
}

$Class* Types$4::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com