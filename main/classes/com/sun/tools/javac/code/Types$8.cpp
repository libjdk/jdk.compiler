#include <com/sun/tools/javac/code/Types$8.h>

#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$TypePair.h>
#include <com/sun/tools/javac/code/Types$TypeRelation.h>
#include <com/sun/tools/javac/code/Types.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef WILDCARD

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$TypePair = ::com::sun::tools::javac::code::Types$TypePair;
using $Types$TypeRelation = ::com::sun::tools::javac::code::Types$TypeRelation;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$8_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$8, this$0)},
	{"cache", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Types$TypePair;>;", $PRIVATE, $field(Types$8, cache)},
	{}
};

$MethodInfo _Types$8_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$8::*)($Types*)>(&Types$8::init$))},
	{"isCastableRecursive", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Types$8::*)($Type*,$Type*)>(&Types$8::isCastableRecursive))},
	{"notSoftSubtypeRecursive", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Types$8::*)($Type*,$Type*)>(&Types$8::notSoftSubtypeRecursive))},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$8_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$8_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeRelation", "com.sun.tools.javac.code.Types", "TypeRelation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$8",
	"com.sun.tools.javac.code.Types$TypeRelation",
	nullptr,
	_Types$8_FieldInfo_,
	_Types$8_MethodInfo_,
	nullptr,
	&_Types$8_EnclosingMethodInfo_,
	_Types$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$8($Class* clazz) {
	return $of($alloc(Types$8));
}

void Types$8::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$TypeRelation::init$();
	$set(this, cache, $new($HashSet));
}

$Boolean* Types$8::visitType($Type* t, $Type* s) {
	$init($TypeTag);
	if ($nc(s)->hasTag($TypeTag::WILDCARD)) {
		return $cast($Boolean, visit(s, t));
	} else {
		bool var$0 = notSoftSubtypeRecursive(t, s);
		return $Boolean::valueOf(var$0 || notSoftSubtypeRecursive(s, t));
	}
}

bool Types$8::isCastableRecursive($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$var($Types$TypePair, pair, $new($Types$TypePair, this->this$0, t, s));
	if ($nc(this->cache)->add(pair)) {
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				var$2 = this->this$0->isCastable(t, s);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
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
		return true;
	}
}

bool Types$8::notSoftSubtypeRecursive($Type* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	$var($Types$TypePair, pair, $new($Types$TypePair, this->this$0, t, s));
	if ($nc(this->cache)->add(pair)) {
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				var$2 = this->this$0->notSoftSubtype(t, s);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
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
		return false;
	}
}

$Boolean* Types$8::visitWildcardType($Type$WildcardType* t, $Type* s) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isUnbound()) {
		return $Boolean::valueOf(false);
	}
	$init($TypeTag);
	if (!$nc(s)->hasTag($TypeTag::WILDCARD)) {
		if ($nc(t)->isExtendsBound()) {
			return $Boolean::valueOf(notSoftSubtypeRecursive(s, t->type));
		} else {
			return $Boolean::valueOf(notSoftSubtypeRecursive(t->type, s));
		}
	}
	if ($nc(s)->isUnbound()) {
		return $Boolean::valueOf(false);
	}
	if ($nc(t)->isExtendsBound()) {
		if ($nc(s)->isExtendsBound()) {
			return $Boolean::valueOf(!isCastableRecursive(t->type, $(this->this$0->wildUpperBound(s))));
		} else if (s->isSuperBound()) {
			return $Boolean::valueOf(notSoftSubtypeRecursive($(this->this$0->wildLowerBound(s)), t->type));
		}
	} else if (t->isSuperBound()) {
		if ($nc(s)->isExtendsBound()) {
			return $Boolean::valueOf(notSoftSubtypeRecursive(t->type, $(this->this$0->wildUpperBound(s))));
		}
	}
	return $Boolean::valueOf(false);
}

$Object* Types$8::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Type, s)));
}

$Object* Types$8::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Type, s)));
}

Types$8::Types$8() {
}

$Class* Types$8::load$($String* name, bool initialize) {
	$loadClass(Types$8, name, initialize, &_Types$8_ClassInfo_, allocate$Types$8);
	return class$;
}

$Class* Types$8::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com