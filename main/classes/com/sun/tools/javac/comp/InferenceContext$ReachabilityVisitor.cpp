#include <com/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor.h>

#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef UNDETVAR

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class InferenceContext$ReachabilityVisitor$$Lambda$visit : public $Consumer {
	$class(InferenceContext$ReachabilityVisitor$$Lambda$visit, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Types$UnaryVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->visit($cast($Type, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$ReachabilityVisitor$$Lambda$visit>());
	}
	$Types$UnaryVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InferenceContext$ReachabilityVisitor$$Lambda$visit::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$ReachabilityVisitor$$Lambda$visit, inst$)},
	{}
};
$MethodInfo InferenceContext$ReachabilityVisitor$$Lambda$visit::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$UnaryVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$ReachabilityVisitor$$Lambda$visit::*)($Types$UnaryVisitor*)>(&InferenceContext$ReachabilityVisitor$$Lambda$visit::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$ReachabilityVisitor$$Lambda$visit::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor$$Lambda$visit",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* InferenceContext$ReachabilityVisitor$$Lambda$visit::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$ReachabilityVisitor$$Lambda$visit, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$ReachabilityVisitor$$Lambda$visit::class$ = nullptr;

$FieldInfo _InferenceContext$ReachabilityVisitor_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $FINAL | $SYNTHETIC, $field(InferenceContext$ReachabilityVisitor, this$0)},
	{"equiv", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext$ReachabilityVisitor, equiv)},
	{"min", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext$ReachabilityVisitor, min)},
	{"minMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type;Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(InferenceContext$ReachabilityVisitor, minMap)},
	{}
};

$MethodInfo _InferenceContext$ReachabilityVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, 0, $method(static_cast<void(InferenceContext$ReachabilityVisitor::*)($InferenceContext*)>(&InferenceContext$ReachabilityVisitor::init$))},
	{"isEquiv", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)Z", nullptr, 0},
	{"scan", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitArrayType", "(Lcom/sun/tools/javac/code/Type$ArrayType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitUndetVar", "(Lcom/sun/tools/javac/code/Type$UndetVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _InferenceContext$ReachabilityVisitor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor", "com.sun.tools.javac.comp.InferenceContext", "ReachabilityVisitor", 0},
	{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _InferenceContext$ReachabilityVisitor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor",
	"com.sun.tools.javac.code.Types$UnaryVisitor",
	nullptr,
	_InferenceContext$ReachabilityVisitor_FieldInfo_,
	_InferenceContext$ReachabilityVisitor_MethodInfo_,
	"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Void;>;",
	nullptr,
	_InferenceContext$ReachabilityVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.InferenceContext"
};

$Object* allocate$InferenceContext$ReachabilityVisitor($Class* clazz) {
	return $of($alloc(InferenceContext$ReachabilityVisitor));
}

void InferenceContext$ReachabilityVisitor::init$($InferenceContext* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
	$set(this, equiv, $new($LinkedHashSet));
	$set(this, min, $new($LinkedHashSet));
	$set(this, minMap, $new($LinkedHashMap));
}

void InferenceContext$ReachabilityVisitor::scan($List* roots) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(roots)->stream()))->forEach(static_cast<$Consumer*>($$new(InferenceContext$ReachabilityVisitor$$Lambda$visit, this)));
}

$Void* InferenceContext$ReachabilityVisitor::visitType($Type* t, $Void* _unused) {
	return nullptr;
}

$Void* InferenceContext$ReachabilityVisitor::visitUndetVar($Type$UndetVar* t, $Void* _unused) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->min)->add($nc(t)->qtype)) {
		$var($Set, deps, $cast($Set, $nc(this->minMap)->getOrDefault($nc(t)->qtype, $$new($LinkedHashSet, $(static_cast<$Collection*>($Collections::singleton(t->qtype)))))));
		{
			$var($Type$UndetVar$InferenceBoundArray, arr$, $Type$UndetVar$InferenceBound::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Type$UndetVar$InferenceBound* boundKind = arr$->get(i$);
				{
					{
						$var($Iterator, i$, $nc($($nc(t)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {boundKind}))))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Type, b, $cast($Type, i$->next()));
							{
								$var($Type, undet, this->this$0->asUndetVar(b));
								$init($TypeTag);
								if (!$nc(undet)->hasTag($TypeTag::UNDETVAR)) {
									visit(undet);
								} else if (isEquiv(t, b, boundKind)) {
									$nc(deps)->add(b);
									$nc(this->equiv)->add(b);
								} else {
									visit(undet);
								}
							}
						}
					}
				}
			}
		}
		$nc(this->minMap)->put($nc(t)->qtype, deps);
	}
	return nullptr;
}

$Void* InferenceContext$ReachabilityVisitor::visitWildcardType($Type$WildcardType* t, $Void* _unused) {
	return $cast($Void, visit($nc(t)->type));
}

$Void* InferenceContext$ReachabilityVisitor::visitTypeVar($Type$TypeVar* t, $Void* aVoid) {
	$var($Type, undet, this->this$0->asUndetVar(t));
	$init($TypeTag);
	if ($nc(undet)->hasTag($TypeTag::UNDETVAR)) {
		visitUndetVar($cast($Type$UndetVar, undet), ($Void*)nullptr);
	}
	return nullptr;
}

$Void* InferenceContext$ReachabilityVisitor::visitArrayType($Type$ArrayType* t, $Void* _unused) {
	return $cast($Void, visit($nc(t)->elemtype));
}

$Void* InferenceContext$ReachabilityVisitor::visitClassType($Type$ClassType* t, $Void* _unused) {
	$useLocalCurrentObjectStackCache();
	visit($($nc(t)->getEnclosingType()));
	{
		$var($Iterator, i$, $nc($($nc(t)->getTypeArguments()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, targ, $cast($Type, i$->next()));
			{
				visit(targ);
			}
		}
	}
	return nullptr;
}

bool InferenceContext$ReachabilityVisitor::isEquiv($Type$UndetVar* from, $Type* t, $Type$UndetVar$InferenceBound* boundKind) {
	$useLocalCurrentObjectStackCache();
	$var($Type$UndetVar, uv, $cast($Type$UndetVar, this->this$0->asUndetVar(t)));
	{
		$var($Type$UndetVar$InferenceBoundArray, arr$, $Type$UndetVar$InferenceBound::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Type$UndetVar$InferenceBound* ib = arr$->get(i$);
			{
				$var($List, b1, $nc(from)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib})));
				if (ib == boundKind) {
					$assign(b1, $nc(b1)->diff($($List::of(t))));
				}
				$var($List, b2, $nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib})));
				if (ib == $nc(boundKind)->complement()) {
					$assign(b2, $nc(b2)->diff($($List::of(from->qtype))));
				}
				bool var$0 = !$nc(b1)->containsAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(b2)));
				if (var$0 || !$nc(b2)->containsAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(b1)))) {
					return false;
				}
			}
		}
	}
	return true;
}

$Object* InferenceContext$ReachabilityVisitor::visitUndetVar($Type$UndetVar* t, Object$* _unused) {
	return $of(this->visitUndetVar(t, $cast($Void, _unused)));
}

$Object* InferenceContext$ReachabilityVisitor::visitTypeVar($Type$TypeVar* t, Object$* aVoid) {
	return $of(this->visitTypeVar(t, $cast($Void, aVoid)));
}

$Object* InferenceContext$ReachabilityVisitor::visitArrayType($Type$ArrayType* t, Object$* _unused) {
	return $of(this->visitArrayType(t, $cast($Void, _unused)));
}

$Object* InferenceContext$ReachabilityVisitor::visitWildcardType($Type$WildcardType* t, Object$* _unused) {
	return $of(this->visitWildcardType(t, $cast($Void, _unused)));
}

$Object* InferenceContext$ReachabilityVisitor::visitClassType($Type$ClassType* t, Object$* _unused) {
	return $of(this->visitClassType(t, $cast($Void, _unused)));
}

$Object* InferenceContext$ReachabilityVisitor::visitType($Type* t, Object$* _unused) {
	return $of(this->visitType(t, $cast($Void, _unused)));
}

InferenceContext$ReachabilityVisitor::InferenceContext$ReachabilityVisitor() {
}

$Class* InferenceContext$ReachabilityVisitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InferenceContext$ReachabilityVisitor$$Lambda$visit::classInfo$.name)) {
			return InferenceContext$ReachabilityVisitor$$Lambda$visit::load$(name, initialize);
		}
	}
	$loadClass(InferenceContext$ReachabilityVisitor, name, initialize, &_InferenceContext$ReachabilityVisitor_ClassInfo_, allocate$InferenceContext$ReachabilityVisitor);
	return class$;
}

$Class* InferenceContext$ReachabilityVisitor::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com