#include <com/sun/tools/javac/code/Types$2.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$AdaptFailure.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

#undef UNBOUND

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$AdaptFailure = ::com::sun::tools::javac::code::Types$AdaptFailure;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
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

$FieldInfo _Types$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$2, this$0)},
	{}
};

$MethodInfo _Types$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(static_cast<void(Types$2::*)($Types*)>(&Types$2::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Types$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types",
	nullptr,
	nullptr
};

$InnerClassInfo _Types$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$2",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Types$2_FieldInfo_,
	_Types$2_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;>;",
	&_Types$2_EnclosingMethodInfo_,
	_Types$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$2($Class* clazz) {
	return $of($alloc(Types$2));
}

void Types$2::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
}

$Type* Types$2::visitType($Type* t, $Symbol* sym) {
	return nullptr;
}

$Type* Types$2::visitClassType($Type$ClassType* t, $Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(t)->tsym, sym)) {
		return t;
	}
	$var($Type, base, this->this$0->asSuper($nc(sym)->type, $nc(t)->tsym));
	if (base == nullptr) {
		return nullptr;
	}
	$var($ListBuffer, from, $new($ListBuffer));
	$var($ListBuffer, to, $new($ListBuffer));
	try {
		this->this$0->adapt(base, t, from, to);
	} catch ($Types$AdaptFailure& ex) {
		return nullptr;
	}
	$var($Type, var$0, $nc(sym)->type);
	$var($List, var$1, from->toList());
	$var($Type, res, this->this$0->subst(var$0, var$1, $(to->toList())));
	if (!this->this$0->isSubtype(res, t)) {
		return nullptr;
	}
	$var($ListBuffer, openVars, $new($ListBuffer));
	{
		$var($List, l, $nc($nc(sym)->type)->allparams());
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			bool var$2 = $nc(res)->contains($cast($Type, l->head));
			if (var$2 && !$nc(t)->contains($cast($Type, l->head))) {
				openVars->append($cast($Type, l->head));
			}
		}
	}
	if (openVars->nonEmpty()) {
		if ($nc(t)->isRaw()) {
			$assign(res, this->this$0->erasure(res));
		} else {
			$var($List, opens, openVars->toList());
			$var($ListBuffer, qs, $new($ListBuffer));
			{
				$var($List, iter, opens);
				for (; $nc(iter)->nonEmpty(); $assign(iter, $nc(iter)->tail)) {
					$init($BoundKind);
					qs->append($$new($Type$WildcardType, $nc(this->this$0->syms)->objectType, $BoundKind::UNBOUND, static_cast<$Symbol$TypeSymbol*>($nc(this->this$0->syms)->boundClass), $cast($Type$TypeVar, iter->head)));
				}
			}
			$assign(res, this->this$0->subst(res, opens, $(qs->toList())));
		}
	}
	return res;
}

$Type* Types$2::visitErrorType($Type$ErrorType* t, $Symbol* sym) {
	return t;
}

$Object* Types$2::visitErrorType($Type$ErrorType* t, Object$* sym) {
	return $of(this->visitErrorType(t, $cast($Symbol, sym)));
}

$Object* Types$2::visitClassType($Type$ClassType* t, Object$* sym) {
	return $of(this->visitClassType(t, $cast($Symbol, sym)));
}

$Object* Types$2::visitType($Type* t, Object$* sym) {
	return $of(this->visitType(t, $cast($Symbol, sym)));
}

Types$2::Types$2() {
}

$Class* Types$2::load$($String* name, bool initialize) {
	$loadClass(Types$2, name, initialize, &_Types$2_ClassInfo_, allocate$Types$2);
	return class$;
}

$Class* Types$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com