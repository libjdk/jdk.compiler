#include <com/sun/tools/javac/code/Types$13.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$13_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$13, this$0)},
	{}
};

$MethodInfo _Types$13_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$13::*)($Types*)>(&Types$13::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$13_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$13_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$13", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$13_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$13",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Types$13_FieldInfo_,
	_Types$13_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;",
	&_Types$13_EnclosingMethodInfo_,
	_Types$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$13($Class* clazz) {
	return $of($alloc(Types$13));
}

void Types$13::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
}

$Type* Types$13::visitType($Type* t, $Symbol* sym) {
	return $nc(sym)->type;
}

$Type* Types$13::visitWildcardType($Type$WildcardType* t, $Symbol* sym) {
	return this->this$0->memberType($(this->this$0->wildUpperBound(t)), sym);
}

$Type* Types$13::visitClassType($Type$ClassType* t, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, owner, $nc(sym)->owner);
	int64_t flags = sym->flags();
	if ((((int64_t)(flags & (uint64_t)(int64_t)8)) == 0) && $nc($nc(owner)->type)->isParameterized()) {
		$var($Type, base, this->this$0->asOuterSuper(t, owner));
		$assign(base, $nc(t)->isCompound() ? this->this$0->capture(base) : base);
		if (base != nullptr) {
			$var($List, ownerParams, $nc(owner->type)->allparams());
			$var($List, baseParams, base->allparams());
			if ($nc(ownerParams)->nonEmpty()) {
				if ($nc(baseParams)->isEmpty()) {
					return this->this$0->erasure(sym->type);
				} else {
					return this->this$0->subst(sym->type, ownerParams, baseParams);
				}
			}
		}
	}
	return sym->type;
}

$Type* Types$13::visitTypeVar($Type$TypeVar* t, $Symbol* sym) {
	return this->this$0->memberType($($nc(t)->getUpperBound()), sym);
}

$Type* Types$13::visitErrorType($Type$ErrorType* t, $Symbol* sym) {
	return t;
}

$Object* Types$13::visitErrorType($Type$ErrorType* t, Object$* sym) {
	return $of(this->visitErrorType(t, $cast($Symbol, sym)));
}

$Object* Types$13::visitTypeVar($Type$TypeVar* t, Object$* sym) {
	return $of(this->visitTypeVar(t, $cast($Symbol, sym)));
}

$Object* Types$13::visitWildcardType($Type$WildcardType* t, Object$* sym) {
	return $of(this->visitWildcardType(t, $cast($Symbol, sym)));
}

$Object* Types$13::visitClassType($Type$ClassType* t, Object$* sym) {
	return $of(this->visitClassType(t, $cast($Symbol, sym)));
}

$Object* Types$13::visitType($Type* t, Object$* sym) {
	return $of(this->visitType(t, $cast($Symbol, sym)));
}

Types$13::Types$13() {
}

$Class* Types$13::load$($String* name, bool initialize) {
	$loadClass(Types$13, name, initialize, &_Types$13_ClassInfo_, allocate$Types$13);
	return class$;
}

$Class* Types$13::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com