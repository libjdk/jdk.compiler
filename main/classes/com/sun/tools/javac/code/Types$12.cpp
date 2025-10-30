#include <com/sun/tools/javac/code/Types$12.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef CLASS
#undef ERROR
#undef TYPEVAR

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $List = ::com::sun::tools::javac::util::List;
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

$FieldInfo _Types$12_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$12, this$0)},
	{"seenTypes", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE, $field(Types$12, seenTypes)},
	{}
};

$MethodInfo _Types$12_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$12::*)($Types*)>(&Types$12::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$12_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$12_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$12",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Types$12_FieldInfo_,
	_Types$12_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;",
	&_Types$12_EnclosingMethodInfo_,
	_Types$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$12($Class* clazz) {
	return $of($alloc(Types$12));
}

void Types$12::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
	$set(this, seenTypes, $new($HashSet));
}

$Type* Types$12::visitType($Type* t, $Symbol* sym) {
	return nullptr;
}

$Type* Types$12::visitClassType($Type$ClassType* t, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(t)->tsym, sym)) {
		return t;
	}
	$var($Symbol, c, $nc(t)->tsym);
	if (!$nc(this->seenTypes)->add(c)) {
		return nullptr;
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Type, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Type, st, this->this$0->supertype(t));
			$init($TypeTag);
			bool var$3 = $nc(st)->hasTag($TypeTag::CLASS);
			if (var$3 || $nc(st)->hasTag($TypeTag::TYPEVAR)) {
				$var($Type, x, this->this$0->asSuper(st, sym));
				if (x != nullptr) {
					$assign(var$2, x);
					return$1 = true;
					goto $finally;
				}
			}
			if (((int64_t)($nc(sym)->flags() & (uint64_t)(int64_t)512)) != 0) {
				{
					$var($List, l, this->this$0->interfaces(t));
					for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
						if (!$nc(($cast($Type, l->head)))->hasTag($TypeTag::ERROR)) {
							$var($Type, x, this->this$0->asSuper($cast($Type, l->head), sym));
							if (x != nullptr) {
								$assign(var$2, x);
								return$1 = true;
								goto $finally;
							}
						}
					}
				}
			}
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$nc(this->seenTypes)->remove(c);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Type* Types$12::visitArrayType($Type$ArrayType* t, $Symbol* sym) {
	return this->this$0->isSubtype(t, $nc(sym)->type) ? $nc(sym)->type : ($Type*)nullptr;
}

$Type* Types$12::visitTypeVar($Type$TypeVar* t, $Symbol* sym) {
	if ($equals($nc(t)->tsym, sym)) {
		return t;
	} else {
		return this->this$0->asSuper($(t->getUpperBound()), sym);
	}
}

$Type* Types$12::visitErrorType($Type$ErrorType* t, $Symbol* sym) {
	return t;
}

$Object* Types$12::visitErrorType($Type$ErrorType* t, Object$* sym) {
	return $of(this->visitErrorType(t, $cast($Symbol, sym)));
}

$Object* Types$12::visitTypeVar($Type$TypeVar* t, Object$* sym) {
	return $of(this->visitTypeVar(t, $cast($Symbol, sym)));
}

$Object* Types$12::visitArrayType($Type$ArrayType* t, Object$* sym) {
	return $of(this->visitArrayType(t, $cast($Symbol, sym)));
}

$Object* Types$12::visitClassType($Type$ClassType* t, Object$* sym) {
	return $of(this->visitClassType(t, $cast($Symbol, sym)));
}

$Object* Types$12::visitType($Type* t, Object$* sym) {
	return $of(this->visitType(t, $cast($Symbol, sym)));
}

Types$12::Types$12() {
}

$Class* Types$12::load$($String* name, bool initialize) {
	$loadClass(Types$12, name, initialize, &_Types$12_ClassInfo_, allocate$Types$12);
	return class$;
}

$Class* Types$12::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com