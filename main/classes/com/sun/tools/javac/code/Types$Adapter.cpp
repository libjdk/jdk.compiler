#include <com/sun/tools/javac/code/Types$Adapter.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$AdaptFailure.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>
#include <com/sun/tools/javac/code/Types$TypePair.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ARRAY
#undef CLASS

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$AdaptFailure = ::com::sun::tools::javac::code::Types$AdaptFailure;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$SimpleVisitor = ::com::sun::tools::javac::code::Types$SimpleVisitor;
using $Types$TypePair = ::com::sun::tools::javac::code::Types$TypePair;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$Adapter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$Adapter, this$0)},
	{"from", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$Adapter, from)},
	{"to", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$Adapter, to)},
	{"mapping", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;>;", 0, $field(Types$Adapter, mapping)},
	{"cache", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Types$TypePair;>;", $PRIVATE, $field(Types$Adapter, cache)},
	{}
};

$MethodInfo _Types$Adapter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/code/Type;>;)V", 0, $method(static_cast<void(Types$Adapter::*)($Types*,$ListBuffer*,$ListBuffer*)>(&Types$Adapter::init$))},
	{"adapt", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Types$AdaptFailure"},
	{"adaptRecursive", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(static_cast<void(Types$Adapter::*)($Type*,$Type*)>(&Types$Adapter::adaptRecursive))},
	{"adaptRecursive", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(Types$Adapter::*)($List*,$List*)>(&Types$Adapter::adaptRecursive))},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Types$AdaptFailure"},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Types$AdaptFailure"},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Types$AdaptFailure"},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Lcom/sun/tools/javac/code/Type;)Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Types$AdaptFailure"},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Types$Adapter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$Adapter", "com.sun.tools.javac.code.Types", "Adapter", 0},
	{"com.sun.tools.javac.code.Types$SimpleVisitor", "com.sun.tools.javac.code.Types", "SimpleVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$Adapter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$Adapter",
	"com.sun.tools.javac.code.Types$SimpleVisitor",
	nullptr,
	_Types$Adapter_FieldInfo_,
	_Types$Adapter_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$SimpleVisitor<Ljava/lang/Void;Lcom/sun/tools/javac/code/Type;>;",
	nullptr,
	_Types$Adapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$Adapter($Class* clazz) {
	return $of($alloc(Types$Adapter));
}

void Types$Adapter::init$($Types* this$0, $ListBuffer* from, $ListBuffer* to) {
	$set(this, this$0, this$0);
	$Types$SimpleVisitor::init$();
	$set(this, cache, $new($HashSet));
	$set(this, from, from);
	$set(this, to, to);
	$set(this, mapping, $new($HashMap));
}

void Types$Adapter::adapt($Type* source, $Type* target) {
	$useLocalCurrentObjectStackCache();
	visit(source, target);
	$var($List, fromList, $nc(this->from)->toList());
	$var($List, toList, $nc(this->to)->toList());
	while (!$nc(fromList)->isEmpty()) {
		$var($Type, val, $cast($Type, $nc(this->mapping)->get($nc(($cast($Type, fromList->head)))->tsym)));
		if (!$equals($nc(toList)->head, val)) {
			$set(toList, head, val);
		}
		$assign(fromList, fromList->tail);
		$assign(toList, $nc(toList)->tail);
	}
}

$Void* Types$Adapter::visitClassType($Type$ClassType* source, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(target)->hasTag($TypeTag::CLASS)) {
		$var($List, var$0, $nc(source)->allparams());
		adaptRecursive(var$0, $(target->allparams()));
	}
	return nullptr;
}

$Void* Types$Adapter::visitArrayType($Type$ArrayType* source, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc(target)->hasTag($TypeTag::ARRAY)) {
		$var($Type, var$0, this->this$0->elemtype(source));
		adaptRecursive(var$0, $(this->this$0->elemtype(target)));
	}
	return nullptr;
}

$Void* Types$Adapter::visitWildcardType($Type$WildcardType* source, $Type* target) {
	$useLocalCurrentObjectStackCache();
	if ($nc(source)->isExtendsBound()) {
		$var($Type, var$0, this->this$0->wildUpperBound(source));
		adaptRecursive(var$0, $(this->this$0->wildUpperBound(target)));
	} else if (source->isSuperBound()) {
		$var($Type, var$1, this->this$0->wildLowerBound(source));
		adaptRecursive(var$1, $(this->this$0->wildLowerBound(target)));
	}
	return nullptr;
}

$Void* Types$Adapter::visitTypeVar($Type$TypeVar* source, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$var($Type, val, $cast($Type, $nc(this->mapping)->get($nc(source)->tsym)));
	if (val != nullptr) {
		bool var$0 = val->isSuperBound();
		if (var$0 && $nc(target)->isSuperBound()) {
			$var($Type, var$1, this->this$0->wildLowerBound(val));
			$assign(val, this->this$0->isSubtype(var$1, $(this->this$0->wildLowerBound(target))) ? target : val);
		} else {
			bool var$3 = val->isExtendsBound();
			if (var$3 && target->isExtendsBound()) {
				$var($Type, var$4, this->this$0->wildUpperBound(val));
				$assign(val, this->this$0->isSubtype(var$4, $(this->this$0->wildUpperBound(target))) ? val : target);
			} else if (!this->this$0->isSameType(val, target)) {
				$throwNew($Types$AdaptFailure);
			}
		}
	} else {
		$assign(val, target);
		$nc(this->from)->append(source);
		$nc(this->to)->append(target);
	}
	$nc(this->mapping)->put($nc(source)->tsym, val);
	return nullptr;
}

$Void* Types$Adapter::visitType($Type* source, $Type* target) {
	return nullptr;
}

void Types$Adapter::adaptRecursive($Type* source, $Type* target) {
	$useLocalCurrentObjectStackCache();
	$var($Types$TypePair, pair, $new($Types$TypePair, this->this$0, source, target));
	if ($nc(this->cache)->add(pair)) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				visit(source, target);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->cache)->remove(pair);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Types$Adapter::adaptRecursive($List* source$renamed, $List* target$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, source, source$renamed);
	$var($List, target, target$renamed);
	int32_t var$0 = $nc(source)->length();
	if (var$0 == $nc(target)->length()) {
		while ($nc(source)->nonEmpty()) {
			adaptRecursive($cast($Type, source->head), $cast($Type, $nc(target)->head));
			$assign(source, source->tail);
			$assign(target, $nc(target)->tail);
		}
	}
}

$Object* Types$Adapter::visitTypeVar($Type$TypeVar* source, Object$* target) {
	return $of(this->visitTypeVar(source, $cast($Type, target)));
}

$Object* Types$Adapter::visitArrayType($Type$ArrayType* source, Object$* target) {
	return $of(this->visitArrayType(source, $cast($Type, target)));
}

$Object* Types$Adapter::visitWildcardType($Type$WildcardType* source, Object$* target) {
	return $of(this->visitWildcardType(source, $cast($Type, target)));
}

$Object* Types$Adapter::visitClassType($Type$ClassType* source, Object$* target) {
	return $of(this->visitClassType(source, $cast($Type, target)));
}

$Object* Types$Adapter::visitType($Type* source, Object$* target) {
	return $of(this->visitType(source, $cast($Type, target)));
}

Types$Adapter::Types$Adapter() {
}

$Class* Types$Adapter::load$($String* name, bool initialize) {
	$loadClass(Types$Adapter, name, initialize, &_Types$Adapter_ClassInfo_, allocate$Types$Adapter);
	return class$;
}

$Class* Types$Adapter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com