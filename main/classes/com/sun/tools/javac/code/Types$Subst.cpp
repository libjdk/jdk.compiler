#include <com/sun/tools/javac/code/Types$Subst.h>

#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types$Subst$1.h>
#include <com/sun/tools/javac/code/Types$Subst$2.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Types$Subst$1 = ::com::sun::tools::javac::code::Types$Subst$1;
using $Types$Subst$2 = ::com::sun::tools::javac::code::Types$Subst$2;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$Subst_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$Subst, this$0)},
	{"from", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$Subst, from)},
	{"to", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$Subst, to)},
	{}
};

$MethodInfo _Types$Subst_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(Types$Subst::*)($Types*,$List*,$List*)>(&Types$Subst::init$))},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$Subst_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$Subst", "com.sun.tools.javac.code.Types", "Subst", $PRIVATE},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Types$Subst$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$Subst$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Types$Subst_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$Subst",
	"com.sun.tools.javac.code.Type$StructuralTypeMapping",
	nullptr,
	_Types$Subst_FieldInfo_,
	_Types$Subst_MethodInfo_,
	"Lcom/sun/tools/javac/code/Type$StructuralTypeMapping<Ljava/lang/Void;>;",
	nullptr,
	_Types$Subst_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$Subst($Class* clazz) {
	return $of($alloc(Types$Subst));
}

void Types$Subst::init$($Types* this$0, $List* from$renamed, $List* to$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, from, from$renamed);
	$var($List, to, to$renamed);
	$set(this, this$0, this$0);
	$Type$StructuralTypeMapping::init$();
	int32_t fromLength = $nc(from)->length();
	int32_t toLength = $nc(to)->length();
	while (fromLength > toLength) {
		--fromLength;
		$assign(from, from->tail);
	}
	while (fromLength < toLength) {
		--toLength;
		$assign(to, to->tail);
	}
	$set(this, from, from);
	$set(this, to, to);
}

$Type* Types$Subst::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, from, this->from);
		$var($List, to, this->to);
		for (; $nc(from)->nonEmpty(); $assign(from, $nc(from)->tail), $assign(to, $nc(to)->tail)) {
			if ($nc(t)->equalsIgnoreMetadata($cast($Type, from->head))) {
				return $nc(($cast($Type, to->head)))->withTypeVar(t);
			}
		}
	}
	return t;
}

$Type* Types$Subst::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(t)->isCompound()) {
		return $cast($Type, $Type$StructuralTypeMapping::visitClassType(t, ignored));
	} else {
		$var($Type, st, visit($(this->this$0->supertype(t))));
		$var($List, is, visit($(this->this$0->interfaces(t)), $of(ignored)));
		bool var$0 = st == this->this$0->supertype(t);
		if (var$0 && is == this->this$0->interfaces(t)) {
			return t;
		} else {
			return this->this$0->makeIntersectionType($($nc(is)->prepend(st)));
		}
	}
}

$Type* Types$Subst::visitWildcardType($Type$WildcardType* t, $Void* ignored) {
	$var($Type$WildcardType, t2, $cast($Type$WildcardType, $cast($Type, $Type$StructuralTypeMapping::visitWildcardType(t, ignored))));
	bool var$0 = t2 != t && $nc(t)->isExtendsBound();
	if (var$0 && $nc($nc(t2)->type)->isExtendsBound()) {
		$set(t2, type, this->this$0->wildUpperBound(t2->type));
	}
	return t2;
}

$Type* Types$Subst::visitForAll($Type$ForAll* t$renamed, $Void* ignored) {
	$useLocalCurrentObjectStackCache();
	$var($Type$ForAll, t, t$renamed);
	if ($Type::containsAny(this->to, $nc(t)->tvars)) {
		$var($List, freevars, this->this$0->newInstances($nc(t)->tvars));
		$assign(t, $new($Type$ForAll, freevars, $(this->this$0->subst($nc(t)->qtype, t->tvars, freevars))));
	}
	$var($List, tvars1, this->this$0->substBounds($nc(t)->tvars, this->from, this->to));
	$var($Type, qtype1, visit($nc(t)->qtype));
	if (tvars1 == $nc(t)->tvars && qtype1 == t->qtype) {
		return t;
	} else if (tvars1 == t->tvars) {
		return $new($Types$Subst$1, this, tvars1, qtype1);
	} else {
		return $new($Types$Subst$2, this, tvars1, $(this->this$0->subst(qtype1, t->tvars, tvars1)));
	}
}

$Object* Types$Subst::visitForAll($Type$ForAll* t, Object$* ignored) {
	return $of(this->visitForAll(t, $cast($Void, ignored)));
}

$Object* Types$Subst::visitWildcardType($Type$WildcardType* t, Object$* ignored) {
	return $of(this->visitWildcardType(t, $cast($Void, ignored)));
}

$Object* Types$Subst::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$Subst::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

Types$Subst::Types$Subst() {
}

$Class* Types$Subst::load$($String* name, bool initialize) {
	$loadClass(Types$Subst, name, initialize, &_Types$Subst_ClassInfo_, allocate$Types$Subst);
	return class$;
}

$Class* Types$Subst::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com