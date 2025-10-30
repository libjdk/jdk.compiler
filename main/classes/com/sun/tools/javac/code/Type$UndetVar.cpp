#include <com/sun/tools/javac/code/Type$UndetVar.h>

#include <com/sun/tools/javac/code/Type$5.h>
#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$1.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar$Kind.h>
#include <com/sun/tools/javac/code/Type$UndetVar$UndetVarListener.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BOT
#undef CAPTURED
#undef EQ
#undef LOWER
#undef NORMAL
#undef THROWS
#undef UNDETVAR
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$5 = ::com::sun::tools::javac::code::Type$5;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar$1 = ::com::sun::tools::javac::code::Type$UndetVar$1;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Type$UndetVar$Kind = ::com::sun::tools::javac::code::Type$UndetVar$Kind;
using $Type$UndetVar$UndetVarListener = ::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Infer$IncorporationAction = ::com::sun::tools::javac::comp::Infer$IncorporationAction;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayDeque = ::java::util::ArrayDeque;
using $EnumMap = ::java::util::EnumMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$UndetVar$$Lambda$lambda$substBounds$0 : public $Type$UndetVar$UndetVarListener {
	$class(Type$UndetVar$$Lambda$lambda$substBounds$0, $NO_CLASS_INIT, $Type$UndetVar$UndetVarListener)
public:
	void init$(Type$UndetVar* inst, $ListBuffer* boundsChanged) {
		$set(this, inst$, inst);
		$set(this, boundsChanged, boundsChanged);
	}
	virtual void varBoundChanged(Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib, $Type* t, bool _ignored) override {
		$nc(inst$)->lambda$substBounds$0(boundsChanged, uv, ib, t, _ignored);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Type$UndetVar$$Lambda$lambda$substBounds$0>());
	}
	Type$UndetVar* inst$ = nullptr;
	$ListBuffer* boundsChanged = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Type$UndetVar$$Lambda$lambda$substBounds$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Type$UndetVar$$Lambda$lambda$substBounds$0, inst$)},
	{"boundsChanged", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $PUBLIC, $field(Type$UndetVar$$Lambda$lambda$substBounds$0, boundsChanged)},
	{}
};
$MethodInfo Type$UndetVar$$Lambda$lambda$substBounds$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$UndetVar$$Lambda$lambda$substBounds$0::*)(Type$UndetVar*,$ListBuffer*)>(&Type$UndetVar$$Lambda$lambda$substBounds$0::init$))},
	{"varBoundChanged", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Type$UndetVar$$Lambda$lambda$substBounds$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.code.Type$UndetVar$$Lambda$lambda$substBounds$0",
	"java.lang.Object",
	"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener",
	fieldInfos,
	methodInfos
};
$Class* Type$UndetVar$$Lambda$lambda$substBounds$0::load$($String* name, bool initialize) {
	$loadClass(Type$UndetVar$$Lambda$lambda$substBounds$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Type$UndetVar$$Lambda$lambda$substBounds$0::class$ = nullptr;

$FieldInfo _Type$UndetVar_FieldInfo_[] = {
	{"incorporationActions", "Ljava/util/ArrayDeque;", "Ljava/util/ArrayDeque<Lcom/sun/tools/javac/comp/Infer$IncorporationAction;>;", $PUBLIC, $field(Type$UndetVar, incorporationActions)},
	{"bounds", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", $PROTECTED, $field(Type$UndetVar, bounds)},
	{"inst", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Type$UndetVar, inst)},
	{"declaredCount", "I", nullptr, $PUBLIC, $field(Type$UndetVar, declaredCount)},
	{"listener", "Lcom/sun/tools/javac/code/Type$UndetVar$UndetVarListener;", nullptr, $PUBLIC, $field(Type$UndetVar, listener)},
	{"kind", "Lcom/sun/tools/javac/code/Type$UndetVar$Kind;", nullptr, 0, $field(Type$UndetVar, kind)},
	{"toTypeVarMap", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", 0, $field(Type$UndetVar, toTypeVarMap)},
	{}
};

$MethodInfo _Type$UndetVar_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/Type$UndetVar$UndetVarListener;Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$UndetVar::*)($Type$TypeVar*,$Type$UndetVar$UndetVarListener*,$Types*)>(&Type$UndetVar::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"addBound", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Type$UndetVar::*)($Type$UndetVar$InferenceBound*,$Type*,$Types*)>(&Type$UndetVar::addBound))},
	{"addBound", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Type$UndetVar::*)($Type$UndetVar$InferenceBound*,$Type*,$Types*,bool)>(&Type$UndetVar::addBound))},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$UndetVar;", nullptr, $PUBLIC},
	{"debugString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"dup", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/code/Type$UndetVar;", nullptr, $PUBLIC},
	{"dupTo", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC},
	{"getBounds", "([Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)Lcom/sun/tools/javac/util/List;", "([Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $TRANSIENT},
	{"getDeclaredBounds", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getInst", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"isCaptured", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Type$UndetVar::*)()>(&Type$UndetVar::isCaptured))},
	{"isPartial", "()Z", nullptr, $PUBLIC},
	{"isThrows", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Type$UndetVar::*)()>(&Type$UndetVar::isThrows))},
	{"lambda$substBounds$0", "(Lcom/sun/tools/javac/util/ListBuffer;Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Type$UndetVar::*)($ListBuffer*,Type$UndetVar*,$Type$UndetVar$InferenceBound*,$Type*,bool)>(&Type$UndetVar::lambda$substBounds$0))},
	{"notifyBoundChange", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/code/Type;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Type$UndetVar::*)($Type$UndetVar$InferenceBound*,$Type*,bool)>(&Type$UndetVar::notifyBoundChange))},
	{"setBounds", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC},
	{"setInst", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"setThrow", "()V", nullptr, $PUBLIC},
	{"substBounds", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Types;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Types;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$UndetVar_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$DelegatedType", "com.sun.tools.javac.code.Type", "DelegatedType", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound", "com.sun.tools.javac.code.Type$UndetVar", "InferenceBound", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$UndetVarListener", "com.sun.tools.javac.code.Type$UndetVar", "UndetVarListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$UndetVar$Kind", "com.sun.tools.javac.code.Type$UndetVar", "Kind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Type$UndetVar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$UndetVar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$UndetVar",
	"com.sun.tools.javac.code.Type$DelegatedType",
	nullptr,
	_Type$UndetVar_FieldInfo_,
	_Type$UndetVar_MethodInfo_,
	nullptr,
	nullptr,
	_Type$UndetVar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UndetVar($Class* clazz) {
	return $of($alloc(Type$UndetVar));
}

$Object* Type$UndetVar::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitUndetVar(this, s));
}

void Type$UndetVar::init$($Type$TypeVar* origin, $Type$UndetVar$UndetVarListener* listener, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	$Type$DelegatedType::init$($TypeTag::UNDETVAR, origin);
	$set(this, incorporationActions, $new($ArrayDeque));
	$set(this, inst, nullptr);
	$set(this, listener, nullptr);
	$set(this, toTypeVarMap, $new($Type$UndetVar$1, this));
	$init($Type$UndetVar$Kind);
	$set(this, kind, $nc(origin)->isCaptured() ? $Type$UndetVar$Kind::CAPTURED : $Type$UndetVar$Kind::NORMAL);
	$set(this, listener, listener);
	$load($Type$UndetVar$InferenceBound);
	$set(this, bounds, $new($EnumMap, $Type$UndetVar$InferenceBound::class$));
	$var($List, declaredBounds, $nc(types)->getBounds(origin));
	this->declaredCount = $nc(declaredBounds)->length();
	$init($Type$UndetVar$InferenceBound);
	$nc(this->bounds)->put($Type$UndetVar$InferenceBound::UPPER, $($List::nil()));
	$nc(this->bounds)->put($Type$UndetVar$InferenceBound::LOWER, $($List::nil()));
	$nc(this->bounds)->put($Type$UndetVar$InferenceBound::EQ, $($List::nil()));
	{
		$var($Iterator, i$, $nc($(declaredBounds->reverse()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				addBound($Type$UndetVar$InferenceBound::UPPER, t, types, true);
			}
		}
	}
	bool var$0 = $nc(origin)->isCaptured();
	if (var$0 && !$nc(origin->lower)->hasTag($TypeTag::BOT)) {
		addBound($Type$UndetVar$InferenceBound::LOWER, origin->lower, types, true);
	}
}

$String* Type$UndetVar::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	appendAnnotationsString(sb);
	if (this->inst == nullptr) {
		sb->append($of(this->qtype));
		sb->append(u'?');
	} else {
		sb->append($of(this->inst));
	}
	return sb->toString();
}

$String* Type$UndetVar::debugString() {
	$useLocalCurrentObjectStackCache();
	$var($String, result, $str({"inference var = "_s, this->qtype, "\n"_s}));
	if (this->inst != nullptr) {
		$plusAssign(result, $$str({"inst = "_s, this->inst, $$str(u'\n')}));
	}
	{
		$var($Type$UndetVar$InferenceBoundArray, arr$, $Type$UndetVar$InferenceBound::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Type$UndetVar$InferenceBound* bound = arr$->get(i$);
			{
				$var($List, aboundList, $cast($List, $nc(this->bounds)->get(bound)));
				if (aboundList != nullptr && aboundList->size() > 0) {
					$plusAssign(result, $$str({bound, " = "_s, aboundList, $$str(u'\n')}));
				}
			}
		}
	}
	return result;
}

void Type$UndetVar::setThrow() {
	$init($Type$UndetVar$Kind);
	if (this->kind == $Type$UndetVar$Kind::CAPTURED) {
		$throwNew($IllegalStateException);
	}
	$set(this, kind, $Type$UndetVar$Kind::THROWS);
}

Type$UndetVar* Type$UndetVar::dup($Types* types) {
	$var(Type$UndetVar, uv2, $new(Type$UndetVar, $cast($Type$TypeVar, this->qtype), this->listener, types));
	dupTo(uv2, types);
	return uv2;
}

void Type$UndetVar::dupTo(Type$UndetVar* uv2, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$set($nc(uv2), listener, nullptr);
	$nc(uv2->bounds)->clear();
	{
		$var($Type$UndetVar$InferenceBoundArray, arr$, $Type$UndetVar$InferenceBound::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Type$UndetVar$InferenceBound* ib = arr$->get(i$);
			{
				$nc(uv2->bounds)->put(ib, $($List::nil()));
				{
					$var($Iterator, i$, $nc($(getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Type, t, $cast($Type, i$->next()));
						{
							uv2->addBound(ib, t, types, true);
						}
					}
				}
			}
		}
	}
	$set(uv2, inst, this->inst);
	$set(uv2, listener, this->listener);
	$set(uv2, incorporationActions, $new($ArrayDeque));
	{
		$var($Iterator, i$, $nc(this->incorporationActions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Infer$IncorporationAction, action, $cast($Infer$IncorporationAction, i$->next()));
			{
				$nc(uv2->incorporationActions)->add($($nc(action)->dup(uv2)));
			}
		}
	}
	$set(uv2, kind, this->kind);
}

Type$UndetVar* Type$UndetVar::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to an UndetVar type"_s));
	$shouldNotReachHere();
}

bool Type$UndetVar::isPartial() {
	return true;
}

$Type* Type$UndetVar::baseType() {
	return (this->inst == nullptr) ? static_cast<$Type*>(this) : $nc(this->inst)->baseType();
}

$Type* Type$UndetVar::getInst() {
	return this->inst;
}

void Type$UndetVar::setInst($Type* inst) {
	$set(this, inst, inst);
	if (this->listener != nullptr) {
		$nc(this->listener)->varInstantiated(this);
	}
}

$List* Type$UndetVar::getBounds($Type$UndetVar$InferenceBoundArray* ibs) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Type$UndetVar$InferenceBoundArray, arr$, ibs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Type$UndetVar$InferenceBound* ib = arr$->get(i$);
			{
				buf->appendList($cast($List, $($nc(this->bounds)->get(ib))));
			}
		}
	}
	return buf->toList();
}

$List* Type$UndetVar::getDeclaredBounds() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	int32_t count = 0;
	{
		$init($Type$UndetVar$InferenceBound);
		$var($Iterator, i$, $nc($(getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER}))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, b, $cast($Type, i$->next()));
			{
				if (count++ == this->declaredCount) {
					break;
				}
				buf->append(b);
			}
		}
	}
	return buf->toList();
}

void Type$UndetVar::setBounds($Type$UndetVar$InferenceBound* ib, $List* newBounds) {
	$nc(this->bounds)->put(ib, newBounds);
}

void Type$UndetVar::addBound($Type$UndetVar$InferenceBound* ib, $Type* bound$renamed, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($Type, bound, bound$renamed);
	if ($nc(types)->mapCapturesToBounds) {
		$init($Type$5);
		{
			$var($Type, altBound, nullptr)
			switch ($nc($Type$5::$SwitchMap$com$sun$tools$javac$code$Type$UndetVar$InferenceBound)->get($nc((ib))->ordinal())) {
			case 2:
				{
					$assign(bound, types->cvarUpperBound(bound));
					break;
				}
			case 1:
				{
					$assign(altBound, types->cvarLowerBound(bound));
					$init($TypeTag);
					if (!$nc(altBound)->hasTag($TypeTag::BOT)) {
						$assign(bound, altBound);
					}
					break;
				}
			}
		}
	}
	addBound(ib, bound, types, false);
}

void Type$UndetVar::addBound($Type$UndetVar$InferenceBound* ib, $Type* bound, $Types* types, bool update) {
	$useLocalCurrentObjectStackCache();
	$init($Type$UndetVar$Kind);
	if (this->kind == $Type$UndetVar$Kind::CAPTURED && !update) {
		$init($TypeTag);
		bool var$0 = $nc(bound)->hasTag($TypeTag::UNDETVAR);
		if (var$0 && !$nc(($cast(Type$UndetVar, bound)))->isCaptured()) {
			($cast(Type$UndetVar, bound))->addBound($($nc(ib)->complement()), this, types, false);
		}
	} else {
		$var($Type, bound2, $nc($($nc(bound)->map(this->toTypeVarMap)))->baseType());
		$var($List, prevBounds, $cast($List, $nc(this->bounds)->get(ib)));
		if (bound == this->qtype) {
			return;
		}
		{
			$var($Iterator, i$, $nc(prevBounds)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, b, $cast($Type, i$->next()));
				{
					if ($nc(types)->isSameType(b, bound2)) {
						return;
					}
				}
			}
		}
		$nc(this->bounds)->put(ib, $(prevBounds->prepend(bound2)));
		notifyBoundChange(ib, bound2, false);
	}
}

void Type$UndetVar::substBounds($List* from, $List* to, $Types* types) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, boundsChanged, $new($ListBuffer));
	$var($Type$UndetVar$UndetVarListener, prevListener, this->listener);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, listener, static_cast<$Type$UndetVar$UndetVarListener*>($new(Type$UndetVar$$Lambda$lambda$substBounds$0, this, boundsChanged)));
			{
				$var($Iterator, i$, $nc($($nc(this->bounds)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, _entry, $cast($Map$Entry, i$->next()));
					{
						$Type$UndetVar$InferenceBound* ib = $cast($Type$UndetVar$InferenceBound, $nc(_entry)->getKey());
						$var($List, prevBounds, $cast($List, _entry->getValue()));
						$var($ListBuffer, newBounds, $new($ListBuffer));
						$var($ListBuffer, deps, $new($ListBuffer));
						{
							$var($Iterator, i$, $nc(prevBounds)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Type, t, $cast($Type, i$->next()));
								{
									if (!$nc(t)->containsAny(from)) {
										newBounds->append(t);
									} else {
										deps->append(t);
									}
								}
							}
						}
						$nc(this->bounds)->put(ib, $(newBounds->toList()));
						{
							$var($Iterator, i$, deps->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($Type, dep, $cast($Type, i$->next()));
								{
									addBound(ib, $($nc(types)->subst(dep, from, to)), types, true);
								}
							}
						}
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, listener, prevListener);
			{
				$var($Iterator, i$, boundsChanged->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Pair, boundUpdate, $cast($Pair, i$->next()));
					{
						notifyBoundChange($cast($Type$UndetVar$InferenceBound, $nc(boundUpdate)->fst), $cast($Type, boundUpdate->snd), true);
					}
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Type$UndetVar::notifyBoundChange($Type$UndetVar$InferenceBound* ib, $Type* bound, bool update) {
	if (this->listener != nullptr) {
		$nc(this->listener)->varBoundChanged(this, ib, bound, update);
	}
}

bool Type$UndetVar::isCaptured() {
	$init($Type$UndetVar$Kind);
	return this->kind == $Type$UndetVar$Kind::CAPTURED;
}

bool Type$UndetVar::isThrows() {
	$init($Type$UndetVar$Kind);
	return this->kind == $Type$UndetVar$Kind::THROWS;
}

void Type$UndetVar::lambda$substBounds$0($ListBuffer* boundsChanged, Type$UndetVar* uv, $Type$UndetVar$InferenceBound* ib, $Type* t, bool _ignored) {
	$Assert::check(uv == this);
	$nc(boundsChanged)->add($$new($Pair, ib, t));
}

Type$UndetVar::Type$UndetVar() {
}

$Class* Type$UndetVar::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Type$UndetVar$$Lambda$lambda$substBounds$0::classInfo$.name)) {
			return Type$UndetVar$$Lambda$lambda$substBounds$0::load$(name, initialize);
		}
	}
	$loadClass(Type$UndetVar, name, initialize, &_Type$UndetVar_ClassInfo_, allocate$Type$UndetVar);
	return class$;
}

$Class* Type$UndetVar::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com