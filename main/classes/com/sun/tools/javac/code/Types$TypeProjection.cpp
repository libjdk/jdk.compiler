#include <com/sun/tools/javac/code/Types$TypeProjection.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types$TypeProjection$1.h>
#include <com/sun/tools/javac/code/Types$TypeProjection$2.h>
#include <com/sun/tools/javac/code/Types$TypeProjection$TypeArgumentProjection.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef BOT
#undef UPWARDS

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$ProjectionKind = ::com::sun::tools::javac::code::Types$ProjectionKind;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Types$TypeProjection$1 = ::com::sun::tools::javac::code::Types$TypeProjection$1;
using $Types$TypeProjection$2 = ::com::sun::tools::javac::code::Types$TypeProjection$2;
using $Types$TypeProjection$TypeArgumentProjection = ::com::sun::tools::javac::code::Types$TypeProjection$TypeArgumentProjection;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$TypeProjection$$Lambda$lambda$visitClassType$0 : public $Function {
	$class(Types$TypeProjection$$Lambda$lambda$visitClassType$0, $NO_CLASS_INIT, $Function)
public:
	void init$(Types$TypeProjection* inst, $Types$ProjectionKind* pkind) {
		$set(this, inst$, inst);
		$set(this, pkind, pkind);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of($nc(inst$)->lambda$visitClassType$0(pkind, $cast($Type, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Types$TypeProjection$$Lambda$lambda$visitClassType$0>());
	}
	Types$TypeProjection* inst$ = nullptr;
	$Types$ProjectionKind* pkind = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Types$TypeProjection$$Lambda$lambda$visitClassType$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Types$TypeProjection$$Lambda$lambda$visitClassType$0, inst$)},
	{"pkind", "Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, $PUBLIC, $field(Types$TypeProjection$$Lambda$lambda$visitClassType$0, pkind)},
	{}
};
$MethodInfo Types$TypeProjection$$Lambda$lambda$visitClassType$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$TypeProjection;Lcom/sun/tools/javac/code/Types$ProjectionKind;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$TypeProjection$$Lambda$lambda$visitClassType$0::*)(Types$TypeProjection*,$Types$ProjectionKind*)>(&Types$TypeProjection$$Lambda$lambda$visitClassType$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Types$TypeProjection$$Lambda$lambda$visitClassType$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Types$TypeProjection$$Lambda$lambda$visitClassType$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Types$TypeProjection$$Lambda$lambda$visitClassType$0::load$($String* name, bool initialize) {
	$loadClass(Types$TypeProjection$$Lambda$lambda$visitClassType$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Types$TypeProjection$$Lambda$lambda$visitClassType$0::class$ = nullptr;

$FieldInfo _Types$TypeProjection_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$TypeProjection, this$0)},
	{"vars", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$TypeProjection, vars)},
	{"seen", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$TypeProjection, seen)},
	{}
};

$MethodInfo _Types$TypeProjection_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(Types$TypeProjection::*)($Types*,$List*)>(&Types$TypeProjection::init$))},
	{"lambda$visitClassType$0", "(Lcom/sun/tools/javac/code/Types$ProjectionKind;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Type*(Types$TypeProjection::*)($Types$ProjectionKind*,$Type*)>(&Types$TypeProjection::lambda$visitClassType$0))},
	{"mapTypeArgument", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Types$TypeProjection::*)($Type*,$Type*,$Type*,$Types$ProjectionKind*)>(&Types$TypeProjection::mapTypeArgument))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Types$ProjectionKind;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$TypeProjection_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$TypeProjection", "com.sun.tools.javac.code.Types", "TypeProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeMapping", "com.sun.tools.javac.code.Types", "TypeMapping", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection", "com.sun.tools.javac.code.Types$TypeProjection", "TypeArgumentProjection", 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$TypeProjection$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _Types$TypeProjection_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$TypeProjection",
	"com.sun.tools.javac.code.Types$TypeMapping",
	nullptr,
	_Types$TypeProjection_FieldInfo_,
	_Types$TypeProjection_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$TypeMapping<Lcom/sun/tools/javac/code/Types$ProjectionKind;>;",
	nullptr,
	_Types$TypeProjection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$TypeProjection($Class* clazz) {
	return $of($alloc(Types$TypeProjection));
}

void Types$TypeProjection::init$($Types* this$0, $List* vars) {
	$set(this, this$0, this$0);
	$Types$TypeMapping::init$();
	$set(this, seen, $new($HashSet));
	$set(this, vars, vars);
}

$Type* Types$TypeProjection::visitClassType($Type$ClassType* t, $Types$ProjectionKind* pkind) {
	$useLocalCurrentObjectStackCache();
	if ($nc(t)->isCompound()) {
		$var($List, components, this->this$0->directSupertypes(t));
		$var($List, components1, $nc(components)->map(static_cast<$Function*>($$new(Types$TypeProjection$$Lambda$lambda$visitClassType$0, this, pkind))));
		if (components == components1) {
			return t;
		} else {
			return this->this$0->makeIntersectionType(components1);
		}
	} else {
		$var($Type, outer, t->getEnclosingType());
		$var($Type, outer1, $cast($Type, visit(outer, pkind)));
		$var($List, typarams, t->getTypeArguments());
		$var($List, formals, $nc($nc(t->tsym)->type)->getTypeArguments());
		$var($ListBuffer, typarams1, $new($ListBuffer));
		bool changed = false;
		{
			$var($Iterator, i$, $nc(typarams)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, actual, $cast($Type, i$->next()));
				{
					$var($Type, t2, mapTypeArgument(t, $($nc(($cast($Type, $nc(formals)->head)))->getUpperBound()), actual, pkind));
					$init($TypeTag);
					if ($nc(t2)->hasTag($TypeTag::BOT)) {
						return $nc(this->this$0->syms)->botType;
					}
					typarams1->add(t2);
					changed |= actual != t2;
					$assign(formals, $nc(formals)->tail);
				}
			}
		}
		if (outer1 == outer && !changed) {
			return t;
		} else {
			$var($Type, var$0, outer1);
			$var($List, var$1, typarams1->toList());
			$var($Symbol$TypeSymbol, var$2, t->tsym);
			return $new($Types$TypeProjection$1, this, var$0, var$1, var$2, $(t->getMetadata()));
		}
	}
}

$Type* Types$TypeProjection::visitArrayType($Type$ArrayType* t, $Types$ProjectionKind* s) {
	$useLocalCurrentObjectStackCache();
	$var($Type, elemtype, $nc(t)->elemtype);
	$var($Type, elemtype1, $cast($Type, visit(elemtype, s)));
	if (elemtype1 == elemtype) {
		return t;
	} else {
		$init($TypeTag);
		if ($nc(elemtype1)->hasTag($TypeTag::BOT)) {
			return $nc(this->this$0->syms)->botType;
		} else {
			return $new($Types$TypeProjection$2, this, elemtype1, t->tsym, t->metadata);
		}
	}
}

$Type* Types$TypeProjection::visitTypeVar($Type$TypeVar* t, $Types$ProjectionKind* pkind) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->vars)->contains(t)) {
		if ($nc(this->seen)->add(t)) {
			{
				$var($Throwable, var$0, nullptr);
				$var($Type, var$2, nullptr);
				bool return$1 = false;
				try {
					$var($Type, bound, nullptr);
					$init($Types$25);
					switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$Types$ProjectionKind)->get($nc((pkind))->ordinal())) {
					case 1:
						{
							$assign(bound, $nc(t)->getUpperBound());
							break;
						}
					case 2:
						{
							$assign(bound, ($nc(t)->getLowerBound() == nullptr) ? $nc(this->this$0->syms)->botType : $nc(t)->getLowerBound());
							break;
						}
					default:
						{
							$Assert::error();
							$assign(var$2, nullptr);
							return$1 = true;
							goto $finally;
						}
					}
					$assign(var$2, $nc(bound)->map(this, pkind));
					return$1 = true;
					goto $finally;
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					$nc(this->seen)->remove(t);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} else {
			$init($Types$ProjectionKind);
			return pkind == $Types$ProjectionKind::UPWARDS ? $nc(this->this$0->syms)->objectType : $nc(this->this$0->syms)->botType;
		}
	} else {
		return t;
	}
}

$Type* Types$TypeProjection::mapTypeArgument($Type* site, $Type* declaredBound, $Type* t, $Types$ProjectionKind* pkind) {
	return $nc(t)->containsAny(this->vars) ? $nc(t)->map($$new($Types$TypeProjection$TypeArgumentProjection, this, site, declaredBound), pkind) : t;
}

$Object* Types$TypeProjection::visitTypeVar($Type$TypeVar* t, Object$* pkind) {
	return $of(this->visitTypeVar(t, $cast($Types$ProjectionKind, pkind)));
}

$Object* Types$TypeProjection::visitArrayType($Type$ArrayType* t, Object$* s) {
	return $of(this->visitArrayType(t, $cast($Types$ProjectionKind, s)));
}

$Object* Types$TypeProjection::visitClassType($Type$ClassType* t, Object$* pkind) {
	return $of(this->visitClassType(t, $cast($Types$ProjectionKind, pkind)));
}

$Type* Types$TypeProjection::lambda$visitClassType$0($Types$ProjectionKind* pkind, $Type* c) {
	return $nc(c)->map(this, pkind);
}

Types$TypeProjection::Types$TypeProjection() {
}

$Class* Types$TypeProjection::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Types$TypeProjection$$Lambda$lambda$visitClassType$0::classInfo$.name)) {
			return Types$TypeProjection$$Lambda$lambda$visitClassType$0::load$(name, initialize);
		}
	}
	$loadClass(Types$TypeProjection, name, initialize, &_Types$TypeProjection_ClassInfo_, allocate$Types$TypeProjection);
	return class$;
}

$Class* Types$TypeProjection::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com