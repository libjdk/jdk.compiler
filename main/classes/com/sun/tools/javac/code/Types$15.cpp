#include <com/sun/tools/javac/code/Types$15.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef TYPEVAR

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$15_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$15, this$0)},
	{}
};

$MethodInfo _Types$15_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$15::*)($Types*)>(&Types$15::init$))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$15_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$15_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$15", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$15_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$15",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_Types$15_FieldInfo_,
	_Types$15_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;",
	&_Types$15_EnclosingMethodInfo_,
	_Types$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$15($Class* clazz) {
	return $of($alloc(Types$15));
}

void Types$15::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Type* Types$15::visitType($Type* t, $Void* ignored) {
	$init($Type);
	return $Type::noType;
}

$Type* Types$15::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->supertype_field == nullptr) {
		$var($Type, supertype, $nc(($cast($Symbol$ClassSymbol, t->tsym)))->getSuperclass());
		if (t->isInterface()) {
			$assign(supertype, $nc(($cast($Type$ClassType, $nc(t->tsym)->type)))->supertype_field);
		}
		if (t->supertype_field == nullptr) {
			$var($List, actuals, $nc($(this->this$0->classBound(t)))->allparams());
			$var($List, formals, $nc($nc(t->tsym)->type)->allparams());
			if (t->hasErasedSupertypes()) {
				$set(t, supertype_field, this->this$0->erasureRecursive(supertype));
			} else if ($nc(formals)->nonEmpty()) {
				$set(t, supertype_field, this->this$0->subst(supertype, formals, actuals));
			} else {
				$set(t, supertype_field, supertype);
			}
		}
	}
	return $nc(t)->supertype_field;
}

$Type* Types$15::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	bool var$0 = $nc($($nc(t)->getUpperBound()))->hasTag($TypeTag::TYPEVAR);
	if (!var$0) {
		bool var$1 = !$nc($($nc(t)->getUpperBound()))->isCompound();
		var$0 = (var$1 && !$nc($(t->getUpperBound()))->isInterface());
	}
	if (var$0) {
		return t->getUpperBound();
	} else {
		return this->this$0->supertype($(t->getUpperBound()));
	}
}

$Type* Types$15::visitArrayType($Type$ArrayType* t, $Void* ignored) {
	bool var$0 = $nc($nc(t)->elemtype)->isPrimitive();
	if (var$0 || this->this$0->isSameType($nc(t)->elemtype, $nc(this->this$0->syms)->objectType)) {
		return this->this$0->arraySuperType();
	} else {
		return $new($Type$ArrayType, $(this->this$0->supertype($nc(t)->elemtype)), $nc(t)->tsym);
	}
}

$Type* Types$15::visitErrorType($Type$ErrorType* t, $Void* ignored) {
	$init($Type);
	return $Type::noType;
}

$Object* Types$15::visitErrorType($Type$ErrorType* t, Object$* ignored) {
	return $of(this->visitErrorType(t, $cast($Void, ignored)));
}

$Object* Types$15::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

$Object* Types$15::visitArrayType($Type$ArrayType* t, Object$* ignored) {
	return $of(this->visitArrayType(t, $cast($Void, ignored)));
}

$Object* Types$15::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$15::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$15::Types$15() {
}

$Class* Types$15::load$($String* name, bool initialize) {
	$loadClass(Types$15, name, initialize, &_Types$15_ClassInfo_, allocate$Types$15);
	return class$;
}

$Class* Types$15::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com