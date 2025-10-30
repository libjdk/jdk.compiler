#include <com/sun/tools/javac/code/Types$Rewriter.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef B
#undef EXTENDS
#undef WILDCARD

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$Rewriter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$Rewriter, this$0)},
	{"high", "Z", nullptr, 0, $field(Types$Rewriter, high)},
	{"rewriteTypeVars", "Z", nullptr, 0, $field(Types$Rewriter, rewriteTypeVars)},
	{}
};

$MethodInfo _Types$Rewriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;ZZ)V", nullptr, 0, $method(static_cast<void(Types$Rewriter::*)($Types*,bool,bool)>(&Types$Rewriter::init$))},
	{"B", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"rewriteAsWildcardType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/BoundKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Types$Rewriter::*)($Type*,$Type$TypeVar*,$BoundKind*)>(&Types$Rewriter::rewriteAsWildcardType))},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$Rewriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$Rewriter", "com.sun.tools.javac.code.Types", "Rewriter", 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$Rewriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$Rewriter",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_Types$Rewriter_FieldInfo_,
	_Types$Rewriter_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_Types$Rewriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$Rewriter($Class* clazz) {
	return $of($alloc(Types$Rewriter));
}

void Types$Rewriter::init$($Types* this$0, bool high, bool rewriteTypeVars) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
	this->high = high;
	this->rewriteTypeVars = rewriteTypeVars;
}

$Type* Types$Rewriter::visitClassType($Type$ClassType* t, $Void* s) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, rewritten, $new($ListBuffer));
	bool changed = false;
	{
		$var($Iterator, i$, $nc($($nc(t)->allparams()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, arg, $cast($Type, i$->next()));
			{
				$var($Type, bound, $cast($Type, visit(arg)));
				if (arg != bound) {
					changed = true;
				}
				rewritten->append(bound);
			}
		}
	}
	if (changed) {
		$var($Type, var$0, $nc(t->tsym)->type);
		$var($List, var$1, $nc($nc(t->tsym)->type)->allparams());
		return this->this$0->subst(var$0, var$1, $(rewritten->toList()));
	} else {
		return t;
	}
}

$Type* Types$Rewriter::visitType($Type* t, $Void* s) {
	return t;
}

$Type* Types$Rewriter::visitCapturedType($Type$CapturedType* t, $Void* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, w_bound, $nc($nc(t)->wildcard)->type);
	$var($Type, bound, $nc(w_bound)->contains(t) ? this->this$0->erasure(w_bound) : $cast($Type, visit(w_bound)));
	return rewriteAsWildcardType($cast($Type, $(visit(bound))), $nc(t->wildcard)->bound, $nc(t->wildcard)->kind);
}

$Type* Types$Rewriter::visitTypeVar($Type$TypeVar* t, $Void* s) {
	$useLocalCurrentObjectStackCache();
	if (this->rewriteTypeVars) {
		$var($Type, bound, $nc($($nc(t)->getUpperBound()))->contains(t) ? this->this$0->erasure($($nc(t)->getUpperBound())) : $cast($Type, visit($($nc(t)->getUpperBound()))));
		$init($BoundKind);
		return rewriteAsWildcardType(bound, t, $BoundKind::EXTENDS);
	} else {
		return t;
	}
}

$Type* Types$Rewriter::visitWildcardType($Type$WildcardType* t, $Void* s) {
	$var($Type, bound2, $cast($Type, visit($nc(t)->type)));
	return $nc(t)->type == bound2 ? static_cast<$Type*>(t) : rewriteAsWildcardType(bound2, $nc(t)->bound, t->kind);
}

$Type* Types$Rewriter::rewriteAsWildcardType($Type* bound, $Type$TypeVar* formal, $BoundKind* bk) {
	$useLocalCurrentObjectStackCache();
	$init($Types$25);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc((bk))->ordinal())) {
	case 1:
		{
			return this->high ? static_cast<$Type*>(this->this$0->makeExtendsWildcard($(B(bound)), formal)) : static_cast<$Type*>(this->this$0->makeExtendsWildcard($nc(this->this$0->syms)->objectType, formal));
		}
	case 2:
		{
			return this->high ? static_cast<$Type*>(this->this$0->makeSuperWildcard($nc(this->this$0->syms)->botType, formal)) : static_cast<$Type*>(this->this$0->makeSuperWildcard($(B(bound)), formal));
		}
	case 3:
		{
			return this->this$0->makeExtendsWildcard($nc(this->this$0->syms)->objectType, formal);
		}
	default:
		{
			$Assert::error($$str({"Invalid bound kind "_s, bk}));
			return nullptr;
		}
	}
}

$Type* Types$Rewriter::B($Type* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, t, t$renamed);
	$init($TypeTag);
	while ($nc(t)->hasTag($TypeTag::WILDCARD)) {
		$var($Type$WildcardType, w, $cast($Type$WildcardType, t));
		$assign(t, this->high ? $cast($Type, w->getExtendsBound()) : $cast($Type, w->getSuperBound()));
		if (t == nullptr) {
			$assign(t, this->high ? $nc(this->this$0->syms)->objectType : $nc(this->this$0->syms)->botType);
		}
	}
	return t;
}

$Object* Types$Rewriter::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitClassType($Type$ClassType* t, Object$* s) {
	return $of(this->visitClassType(t, $cast($Void, s)));
}

$Object* Types$Rewriter::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Void, s)));
}

Types$Rewriter::Types$Rewriter() {
}

$Class* Types$Rewriter::load$($String* name, bool initialize) {
	$loadClass(Types$Rewriter, name, initialize, &_Types$Rewriter_ClassInfo_, allocate$Types$Rewriter);
	return class$;
}

$Class* Types$Rewriter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com