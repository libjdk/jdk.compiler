#include <com/sun/tools/javac/comp/InferenceContext.h>

#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$BestLeafSolver.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/Infer$GraphSolver.h>
#include <com/sun/tools/javac/comp/Infer$GraphStrategy.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer$LeafSolver.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext$1.h>
#include <com/sun/tools/javac/comp/InferenceContext$2.h>
#include <com/sun/tools/javac/comp/InferenceContext$3.h>
#include <com/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EQ
#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$BestLeafSolver = ::com::sun::tools::javac::comp::Infer$BestLeafSolver;
using $Infer$FreeTypeListener = ::com::sun::tools::javac::comp::Infer$FreeTypeListener;
using $Infer$GraphSolver = ::com::sun::tools::javac::comp::Infer$GraphSolver;
using $Infer$GraphStrategy = ::com::sun::tools::javac::comp::Infer$GraphStrategy;
using $Infer$InferenceException = ::com::sun::tools::javac::comp::Infer$InferenceException;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $Infer$LeafSolver = ::com::sun::tools::javac::comp::Infer$LeafSolver;
using $InferenceContext$1 = ::com::sun::tools::javac::comp::InferenceContext$1;
using $InferenceContext$2 = ::com::sun::tools::javac::comp::InferenceContext$2;
using $InferenceContext$3 = ::com::sun::tools::javac::comp::InferenceContext$3;
using $InferenceContext$ReachabilityVisitor = ::com::sun::tools::javac::comp::InferenceContext$ReachabilityVisitor;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class InferenceContext$$Lambda$lambda$restvars$0 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$restvars$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* uv) override {
		 return InferenceContext::lambda$restvars$0($cast($Type$UndetVar, uv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$restvars$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo InferenceContext$$Lambda$lambda$restvars$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$restvars$0::*)()>(&InferenceContext$$Lambda$lambda$restvars$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$restvars$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$restvars$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$restvars$0::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$restvars$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$restvars$0::class$ = nullptr;

class InferenceContext$$Lambda$lambda$instvars$1$1 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$instvars$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* uv) override {
		 return InferenceContext::lambda$instvars$1($cast($Type$UndetVar, uv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$instvars$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo InferenceContext$$Lambda$lambda$instvars$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$instvars$1$1::*)()>(&InferenceContext$$Lambda$lambda$instvars$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$instvars$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$instvars$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$instvars$1$1::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$instvars$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$instvars$1$1::class$ = nullptr;

class InferenceContext$$Lambda$lambda$boundedVars$2$2 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$boundedVars$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* uv) override {
		 return InferenceContext::lambda$boundedVars$2($cast($Type$UndetVar, uv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$boundedVars$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo InferenceContext$$Lambda$lambda$boundedVars$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$boundedVars$2$2::*)()>(&InferenceContext$$Lambda$lambda$boundedVars$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$boundedVars$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$boundedVars$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$boundedVars$2$2::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$boundedVars$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$boundedVars$2$2::class$ = nullptr;

class InferenceContext$$Lambda$lambda$dupTo$3$3 : public $Infer$FreeTypeListener {
	$class(InferenceContext$$Lambda$lambda$dupTo$3$3, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(InferenceContext* inst) {
		$set(this, inst$, inst);
	}
	virtual void typesInferred(InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$dupTo$3(inferenceContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$dupTo$3$3>());
	}
	InferenceContext* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InferenceContext$$Lambda$lambda$dupTo$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$dupTo$3$3, inst$)},
	{}
};
$MethodInfo InferenceContext$$Lambda$lambda$dupTo$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$dupTo$3$3::*)(InferenceContext*)>(&InferenceContext$$Lambda$lambda$dupTo$3$3::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$dupTo$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$dupTo$3$3",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$dupTo$3$3::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$dupTo$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$dupTo$3$3::class$ = nullptr;

class InferenceContext$$Lambda$lambda$min$4$4 : public $Predicate {
	$class(InferenceContext$$Lambda$lambda$min$4$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$($List* redundantVars) {
		$set(this, redundantVars, redundantVars);
	}
	virtual bool test(Object$* b) override {
		 return InferenceContext::lambda$min$4(redundantVars, $cast($Type, b));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$min$4$4>());
	}
	$List* redundantVars = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InferenceContext$$Lambda$lambda$min$4$4::fieldInfos[2] = {
	{"redundantVars", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$4$4, redundantVars)},
	{}
};
$MethodInfo InferenceContext$$Lambda$lambda$min$4$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$min$4$4::*)($List*)>(&InferenceContext$$Lambda$lambda$min$4$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$min$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$4$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$min$4$4::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$min$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$min$4$4::class$ = nullptr;

class InferenceContext$$Lambda$lambda$min$5$5 : public $Infer$FreeTypeListener {
	$class(InferenceContext$$Lambda$lambda$min$5$5, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(InferenceContext* inst, $Type* t, $InferenceContext$ReachabilityVisitor* rv, $Warner* warn) {
		$set(this, inst$, inst);
		$set(this, t, t);
		$set(this, rv, rv);
		$set(this, warn, warn);
	}
	virtual void typesInferred(InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$min$5(t, rv, warn, inferenceContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$min$5$5>());
	}
	InferenceContext* inst$ = nullptr;
	$Type* t = nullptr;
	$InferenceContext$ReachabilityVisitor* rv = nullptr;
	$Warner* warn = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InferenceContext$$Lambda$lambda$min$5$5::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, inst$)},
	{"t", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, t)},
	{"rv", "Lcom/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, rv)},
	{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$5$5, warn)},
	{}
};
$MethodInfo InferenceContext$$Lambda$lambda$min$5$5::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$min$5$5::*)(InferenceContext*,$Type*,$InferenceContext$ReachabilityVisitor*,$Warner*)>(&InferenceContext$$Lambda$lambda$min$5$5::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$min$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$5$5",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$min$5$5::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$min$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$min$5$5::class$ = nullptr;

class InferenceContext$$Lambda$lambda$min$6$6 : public $Infer$FreeTypeListener {
	$class(InferenceContext$$Lambda$lambda$min$6$6, $NO_CLASS_INIT, $Infer$FreeTypeListener)
public:
	void init$(InferenceContext* inst, $List* unreachableVars, $Warner* warn) {
		$set(this, inst$, inst);
		$set(this, unreachableVars, unreachableVars);
		$set(this, warn, warn);
	}
	virtual void typesInferred(InferenceContext* inferenceContext) override {
		$nc(inst$)->lambda$min$6(unreachableVars, warn, inferenceContext);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InferenceContext$$Lambda$lambda$min$6$6>());
	}
	InferenceContext* inst$ = nullptr;
	$List* unreachableVars = nullptr;
	$Warner* warn = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InferenceContext$$Lambda$lambda$min$6$6::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$6$6, inst$)},
	{"unreachableVars", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$6$6, unreachableVars)},
	{"warn", "Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC, $field(InferenceContext$$Lambda$lambda$min$6$6, warn)},
	{}
};
$MethodInfo InferenceContext$$Lambda$lambda$min$6$6::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC, $method(static_cast<void(InferenceContext$$Lambda$lambda$min$6$6::*)(InferenceContext*,$List*,$Warner*)>(&InferenceContext$$Lambda$lambda$min$6$6::init$))},
	{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InferenceContext$$Lambda$lambda$min$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.InferenceContext$$Lambda$lambda$min$6$6",
	"java.lang.Object",
	"com.sun.tools.javac.comp.Infer$FreeTypeListener",
	fieldInfos,
	methodInfos
};
$Class* InferenceContext$$Lambda$lambda$min$6$6::load$($String* name, bool initialize) {
	$loadClass(InferenceContext$$Lambda$lambda$min$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InferenceContext$$Lambda$lambda$min$6$6::class$ = nullptr;

$FieldInfo _InferenceContext_FieldInfo_[] = {
	{"undetvars", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext, undetvars)},
	{"inferencevars", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext, inferencevars)},
	{"freeTypeListeners", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/Infer$FreeTypeListener;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(InferenceContext, freeTypeListeners)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(InferenceContext, types)},
	{"infer", "Lcom/sun/tools/javac/comp/Infer;", nullptr, 0, $field(InferenceContext, infer)},
	{"captureTypeCache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;>;", 0, $field(InferenceContext, captureTypeCache)},
	{}
};

$MethodInfo _InferenceContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(InferenceContext::*)($Infer*,$List*)>(&InferenceContext::init$))},
	{"<init>", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/comp/Infer;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(InferenceContext::*)($Infer*,$List*,$List*)>(&InferenceContext::init$))},
	{"addFreeTypeListener", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/comp/Infer$FreeTypeListener;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/comp/Infer$FreeTypeListener;)V", 0},
	{"addVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;)V", nullptr, 0},
	{"asInstType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"asInstTypes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"asUndetVar", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Type*(InferenceContext::*)($Type*)>(&InferenceContext::asUndetVar))},
	{"asUndetVars", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(static_cast<$List*(InferenceContext::*)($List*)>(&InferenceContext::asUndetVars))},
	{"boundedVars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(static_cast<$List*(InferenceContext::*)()>(&InferenceContext::boundedVars))},
	{"cachedCapture", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;Z)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"dupTo", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, 0},
	{"dupTo", "(Lcom/sun/tools/javac/comp/InferenceContext;Z)V", nullptr, 0},
	{"filterVars", "(Ljava/util/function/Predicate;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type$UndetVar;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(static_cast<$List*(InferenceContext::*)($Predicate*)>(&InferenceContext::filterVars))},
	{"free", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $FINAL, $method(static_cast<bool(InferenceContext::*)($Type*)>(&InferenceContext::free))},
	{"free", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $FINAL, $method(static_cast<bool(InferenceContext::*)($List*)>(&InferenceContext::free))},
	{"freeVarsIn", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(static_cast<$List*(InferenceContext::*)($Type*)>(&InferenceContext::freeVarsIn))},
	{"freeVarsIn", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $FINAL, $method(static_cast<$List*(InferenceContext::*)($List*)>(&InferenceContext::freeVarsIn))},
	{"inferenceVars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"instTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"instvars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"lambda$boundedVars$2", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type$UndetVar*)>(&InferenceContext::lambda$boundedVars$2))},
	{"lambda$dupTo$3", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(InferenceContext::*)(InferenceContext*)>(&InferenceContext::lambda$dupTo$3))},
	{"lambda$instvars$1", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type$UndetVar*)>(&InferenceContext::lambda$instvars$1))},
	{"lambda$min$4", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($List*,$Type*)>(&InferenceContext::lambda$min$4))},
	{"lambda$min$5", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/InferenceContext$ReachabilityVisitor;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(InferenceContext::*)($Type*,$InferenceContext$ReachabilityVisitor*,$Warner*,InferenceContext*)>(&InferenceContext::lambda$min$5))},
	{"lambda$min$6", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(InferenceContext::*)($List*,$Warner*,InferenceContext*)>(&InferenceContext::lambda$min$6))},
	{"lambda$restvars$0", "(Lcom/sun/tools/javac/code/Type$UndetVar;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Type$UndetVar*)>(&InferenceContext::lambda$restvars$0))},
	{"min", "(Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/InferenceContext;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;ZLcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/InferenceContext;", 0},
	{"notifyChange", "()V", nullptr, 0},
	{"notifyChange", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", 0},
	{"restvars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"rollback", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC},
	{"save", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"solve", "(Lcom/sun/tools/javac/comp/Infer$GraphStrategy;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PRIVATE, $method(static_cast<void(InferenceContext::*)($Infer$GraphStrategy*,$Warner*)>(&InferenceContext::solve))},
	{"solve", "(Lcom/sun/tools/javac/util/Warner;)V", nullptr, $PUBLIC},
	{"solve", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC},
	{"solveAny", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC},
	{"solveBasic", "(Ljava/util/EnumSet;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $method(static_cast<$List*(InferenceContext::*)($EnumSet*)>(&InferenceContext::solveBasic))},
	{"solveBasic", "(Lcom/sun/tools/javac/util/List;Ljava/util/EnumSet;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", 0},
	{"solveLegacy", "(ZLcom/sun/tools/javac/util/Warner;Ljava/util/EnumSet;)V", "(ZLcom/sun/tools/javac/util/Warner;Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)V", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undetVars", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"update", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{}
};

$InnerClassInfo _InferenceContext_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor", "com.sun.tools.javac.comp.InferenceContext", "ReachabilityVisitor", 0},
	{"com.sun.tools.javac.comp.InferenceContext$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.InferenceContext$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.InferenceContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InferenceContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.comp.InferenceContext",
	"java.lang.Object",
	nullptr,
	_InferenceContext_FieldInfo_,
	_InferenceContext_MethodInfo_,
	nullptr,
	nullptr,
	_InferenceContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor,com.sun.tools.javac.comp.InferenceContext$3,com.sun.tools.javac.comp.InferenceContext$2,com.sun.tools.javac.comp.InferenceContext$1"
};

$Object* allocate$InferenceContext($Class* clazz) {
	return $of($alloc(InferenceContext));
}

$Type* InferenceContext::update($Type* t) {
	return t;
}

void InferenceContext::init$($Infer* infer, $List* inferencevars) {
	InferenceContext::init$(infer, inferencevars, $($nc(inferencevars)->map($nc(infer)->fromTypeVarFun)));
}

void InferenceContext::init$($Infer* infer, $List* inferencevars, $List* undetvars) {
	$set(this, freeTypeListeners, $new($LinkedHashMap));
	$set(this, captureTypeCache, $new($HashMap));
	$set(this, inferencevars, inferencevars);
	$set(this, undetvars, undetvars);
	$set(this, infer, infer);
	$set(this, types, $nc(infer)->types);
}

void InferenceContext::addVar($Type$TypeVar* t) {
	$set(this, undetvars, $nc(this->undetvars)->prepend($($nc($nc(this->infer)->fromTypeVarFun)->apply(static_cast<$Type*>(t)))));
	$set(this, inferencevars, $nc(this->inferencevars)->prepend(t));
}

$List* InferenceContext::inferenceVars() {
	return this->inferencevars;
}

$List* InferenceContext::undetVars() {
	return this->undetvars;
}

$List* InferenceContext::restvars() {
	return filterVars(static_cast<$Predicate*>($$new(InferenceContext$$Lambda$lambda$restvars$0)));
}

$List* InferenceContext::instvars() {
	return filterVars(static_cast<$Predicate*>($$new(InferenceContext$$Lambda$lambda$instvars$1$1)));
}

$List* InferenceContext::boundedVars() {
	return filterVars(static_cast<$Predicate*>($$new(InferenceContext$$Lambda$lambda$boundedVars$2$2)));
}

$List* InferenceContext::filterVars($Predicate* fu) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, res, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
				if ($nc(fu)->test(uv)) {
					res->append($nc(uv)->qtype);
				}
			}
		}
	}
	return res->toList();
}

bool InferenceContext::free($Type* t) {
	return $nc(t)->containsAny(this->inferencevars);
}

bool InferenceContext::free($List* ts) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if (free(t)) {
					return true;
				}
			}
		}
	}
	return false;
}

$List* InferenceContext::freeVarsIn($Type* t) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($(inferenceVars()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, iv, $cast($Type, i$->next()));
			{
				if ($nc(t)->contains(iv)) {
					buf->add(iv);
				}
			}
		}
	}
	return buf->toList();
}

$List* InferenceContext::freeVarsIn($List* ts) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->appendList($(freeVarsIn(t)));
			}
		}
	}
	$var($ListBuffer, buf2, $new($ListBuffer));
	{
		$var($Iterator, i$, buf->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				if (!buf2->contains(t)) {
					buf2->add(t);
				}
			}
		}
	}
	return buf2->toList();
}

$Type* InferenceContext::asUndetVar($Type* t) {
	return $nc(this->types)->subst(t, this->inferencevars, this->undetvars);
}

$List* InferenceContext::asUndetVars($List* ts) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->append($(asUndetVar(t)));
			}
		}
	}
	return buf->toList();
}

$List* InferenceContext::instTypes() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
				buf->append($nc(uv)->getInst() != nullptr ? $($nc(uv)->getInst()) : uv->qtype);
			}
		}
	}
	return buf->toList();
}

$Type* InferenceContext::asInstType($Type* t) {
	return $nc(this->types)->subst(t, this->inferencevars, $(instTypes()));
}

$List* InferenceContext::asInstTypes($List* ts) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->append($(asInstType(t)));
			}
		}
	}
	return buf->toList();
}

void InferenceContext::addFreeTypeListener($List* types, $Infer$FreeTypeListener* ftl) {
	$nc(this->freeTypeListeners)->put(ftl, $(freeVarsIn(types)));
}

void InferenceContext::notifyChange() {
	$useLocalCurrentObjectStackCache();
	notifyChange($($nc(this->inferencevars)->diff($(restvars()))));
}

void InferenceContext::notifyChange($List* inferredVars) {
	$useLocalCurrentObjectStackCache();
	$var($Infer$InferenceException, thrownEx, nullptr);
	{
		$var($Iterator, i$, $nc($($$new($LinkedHashMap, this->freeTypeListeners)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($List, var$0, $cast($List, $nc(entry)->getValue()));
				if (!$Type::containsAny(var$0, $($nc(this->inferencevars)->diff(inferredVars)))) {
					try {
						$nc(($cast($Infer$FreeTypeListener, $($nc(entry)->getKey()))))->typesInferred(this);
						$nc(this->freeTypeListeners)->remove($(entry->getKey()));
					} catch ($Infer$InferenceException& ex) {
						if (thrownEx == nullptr) {
							$assign(thrownEx, ex);
						}
					}
				}
			}
		}
	}
	if (thrownEx != nullptr) {
		$throw(thrownEx);
	}
}

$List* InferenceContext::save() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->undetvars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				buf->add($($nc(($cast($Type$UndetVar, t)))->dup($nc(this->infer)->types)));
			}
		}
	}
	return buf->toList();
}

void InferenceContext::rollback($List* saved_undet$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, saved_undet, saved_undet$renamed);
	$Assert::check(saved_undet != nullptr);
	$var($ListBuffer, newUndetVars, $new($ListBuffer));
	$var($ListBuffer, newInferenceVars, $new($ListBuffer));
	while (true) {
		bool var$0 = $nc(saved_undet)->nonEmpty();
		if (!(var$0 && $nc(this->undetvars)->nonEmpty())) {
			break;
		}
		{
			$var($Type$UndetVar, uv, $cast($Type$UndetVar, $nc(this->undetvars)->head));
			$var($Type$UndetVar, uv_saved, $cast($Type$UndetVar, saved_undet->head));
			if ($nc(uv)->qtype == $nc(uv_saved)->qtype) {
				uv_saved->dupTo(uv, this->types);
				$set(this, undetvars, $nc(this->undetvars)->tail);
				$assign(saved_undet, saved_undet->tail);
				newUndetVars->add(uv);
				newInferenceVars->add(uv->qtype);
			} else {
				$set(this, undetvars, $nc(this->undetvars)->tail);
			}
		}
	}
	$set(this, undetvars, newUndetVars->toList());
	$set(this, inferencevars, newInferenceVars->toList());
}

void InferenceContext::dupTo(InferenceContext* that) {
	dupTo(that, false);
}

void InferenceContext::dupTo(InferenceContext* that, bool clone) {
	$useLocalCurrentObjectStackCache();
	$set($nc(that), inferencevars, $nc(that->inferencevars)->appendList($($nc(this->inferencevars)->diff(that->inferencevars))));
	$var($List, undetsToPropagate, clone ? save() : this->undetvars);
	$set(that, undetvars, $nc(that->undetvars)->appendList($($nc(undetsToPropagate)->diff(that->undetvars))));
	{
		$var($Iterator, i$, $nc(this->inferencevars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Object, var$0, static_cast<$Infer$FreeTypeListener*>($new(InferenceContext$$Lambda$lambda$dupTo$3$3, this)));
				$nc(that->freeTypeListeners)->put(var$0, $($List::of(t)));
			}
		}
	}
}

InferenceContext* InferenceContext::min($List* roots, bool shouldSolve, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(roots)->length();
	if (var$0 == $nc(this->inferencevars)->length()) {
		return this;
	}
	$var($InferenceContext$ReachabilityVisitor, rv, $new($InferenceContext$ReachabilityVisitor, this));
	rv->scan(roots);
	int32_t var$1 = $nc(rv->min)->size();
	if (var$1 == $nc(this->inferencevars)->length()) {
		return this;
	}
	$var($List, minVars, $List::from(static_cast<$Iterable*>(rv->min)));
	$var($List, redundantVars, $nc(this->inferencevars)->diff(minVars));
	$var($ListBuffer, minUndetVars, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(minVars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, minVar, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, asUndetVar(minVar)));
				$Assert::check($nc($nc(uv)->incorporationActions)->isEmpty());
				$var($Type$UndetVar, uv2, $nc(uv)->dup(this->types));
				{
					$var($Type$UndetVar$InferenceBoundArray, arr$, $Type$UndetVar$InferenceBound::values());
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$Type$UndetVar$InferenceBound* ib = arr$->get(i$);
						{
							$var($List, newBounds, $cast($List, $nc($($nc($($nc($(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {ib}))))->stream()))->filter(static_cast<$Predicate*>($$new(InferenceContext$$Lambda$lambda$min$4$4, redundantVars)))))->collect($($List::collector()))));
							$nc(uv2)->setBounds(ib, newBounds);
						}
					}
				}
				minUndetVars->add(uv2);
			}
		}
	}
	$var(InferenceContext, minContext, $new(InferenceContext, this->infer, minVars, $(minUndetVars->toList())));
	{
		$var($Iterator, i$, $nc(minContext->inferencevars)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($List, var$2, $List::of(t));
				minContext->addFreeTypeListener(var$2, static_cast<$Infer$FreeTypeListener*>($$new(InferenceContext$$Lambda$lambda$min$5$5, this, t, rv, warn)));
			}
		}
	}
	if (shouldSolve) {
		$var($List, unreachableVars, $nc(redundantVars)->diff($($List::from(static_cast<$Iterable*>(rv->equiv)))));
		minContext->addFreeTypeListener(minVars, static_cast<$Infer$FreeTypeListener*>($$new(InferenceContext$$Lambda$lambda$min$6$6, this, unreachableVars, warn)));
	}
	return minContext;
}

void InferenceContext::solve($Infer$GraphStrategy* ss, $Warner* warn) {
	$var($Infer$GraphSolver, s, $new($Infer$GraphSolver, static_cast<$Infer*>($nc(this->infer)), this, warn));
	s->solve(ss);
}

void InferenceContext::solve($Warner* warn) {
	solve(static_cast<$Infer$GraphStrategy*>($$new($InferenceContext$1, this, static_cast<$Infer*>($nc(this->infer)))), warn);
}

void InferenceContext::solve($List* vars, $Warner* warn) {
	solve(static_cast<$Infer$GraphStrategy*>($$new($InferenceContext$2, this, static_cast<$Infer*>($nc(this->infer)), vars, vars)), warn);
}

void InferenceContext::solveAny($List* varsToSolve, $Warner* warn) {
	$useLocalCurrentObjectStackCache();
	solve(static_cast<$Infer$GraphStrategy*>($$new($InferenceContext$3, this, static_cast<$Infer*>($nc(this->infer)), $($nc(varsToSolve)->intersect($(restvars()))))), warn);
}

$List* InferenceContext::solveBasic($EnumSet* steps) {
	return solveBasic(this->inferencevars, steps);
}

$List* InferenceContext::solveBasic($List* varsToSolve, $EnumSet* steps) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, solvedVars, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc($($nc(varsToSolve)->intersect($(restvars()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, t, $cast($Type, i$->next()));
			{
				$var($Type$UndetVar, uv, $cast($Type$UndetVar, asUndetVar(t)));
				{
					$var($Iterator, i$, $nc(steps)->iterator());
					for (; $nc(i$)->hasNext();) {
						$Infer$InferenceStep* step = $cast($Infer$InferenceStep, i$->next());
						{
							if ($nc(step)->accepts(uv, this)) {
								$nc(uv)->setInst($(step->solve(uv, this)));
								solvedVars->add(uv->qtype);
								break;
							}
						}
					}
				}
			}
		}
	}
	return solvedVars->toList();
}

void InferenceContext::solveLegacy(bool partial, $Warner* warn, $EnumSet* steps) {
	$useLocalCurrentObjectStackCache();
	while (true) {
		$var($List, solvedVars, solveBasic(steps));
		if ($nc($(restvars()))->isEmpty() || partial) {
			break;
		} else if ($nc(solvedVars)->isEmpty()) {
			$nc(this->infer)->instantiateAsUninferredVars($(restvars()), this);
			break;
		} else {
			{
				$var($Iterator, i$, $nc(this->undetvars)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Type, t, $cast($Type, i$->next()));
					{
						$var($Type$UndetVar, uv, $cast($Type$UndetVar, t));
						$nc(uv)->substBounds(solvedVars, $(asInstTypes(solvedVars)), this->types);
					}
				}
			}
		}
	}
	$nc(this->infer)->doIncorporation(this, warn);
}

$String* InferenceContext::toString() {
	return $str({"Inference vars: "_s, this->inferencevars, $$str(u'\n'), "Undet vars: "_s, this->undetvars});
}

$Type* InferenceContext::cachedCapture($JCTree* tree, $Type* t, bool readOnly) {
	$useLocalCurrentObjectStackCache();
	$var($Type, captured, $cast($Type, $nc(this->captureTypeCache)->get(tree)));
	if (captured != nullptr) {
		return captured;
	}
	$var($Type, result, $nc(this->types)->capture(t));
	if (result != t && !readOnly) {
		$nc(this->captureTypeCache)->put(tree, result);
	}
	return result;
}

void InferenceContext::lambda$min$6($List* unreachableVars, $Warner* warn, InferenceContext* inferenceContext) {
	solve(unreachableVars, warn);
	notifyChange();
}

void InferenceContext::lambda$min$5($Type* t, $InferenceContext$ReachabilityVisitor* rv, $Warner* warn, InferenceContext* inferenceContext) {
	$useLocalCurrentObjectStackCache();
	$var($Type, instType, $nc(inferenceContext)->asInstType(t));
	{
		$var($Iterator, i$, $nc(($cast($Set, $($nc($nc(rv)->minMap)->get(t)))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, eq, $cast($Type, i$->next()));
			{
				$nc(($cast($Type$UndetVar, $(asUndetVar(eq)))))->setInst(instType);
			}
		}
	}
	$nc(this->infer)->doIncorporation(this, warn);
	notifyChange();
}

bool InferenceContext::lambda$min$4($List* redundantVars, $Type* b) {
	return !$nc(redundantVars)->contains(b);
}

void InferenceContext::lambda$dupTo$3(InferenceContext* inferenceContext) {
	this->notifyChange();
}

bool InferenceContext::lambda$boundedVars$2($Type$UndetVar* uv) {
	$useLocalCurrentObjectStackCache();
	$init($Type$UndetVar$InferenceBound);
	return $nc($($nc($($nc($($nc(uv)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {$Type$UndetVar$InferenceBound::UPPER}))))->diff($(uv->getDeclaredBounds()))))->appendList($(uv->getBounds($$new($Type$UndetVar$InferenceBoundArray, {
		$Type$UndetVar$InferenceBound::EQ,
		$Type$UndetVar$InferenceBound::LOWER
	}))))))->nonEmpty();
}

bool InferenceContext::lambda$instvars$1($Type$UndetVar* uv) {
	return $nc(uv)->getInst() != nullptr;
}

bool InferenceContext::lambda$restvars$0($Type$UndetVar* uv) {
	return $nc(uv)->getInst() == nullptr;
}

InferenceContext::InferenceContext() {
}

$Class* InferenceContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InferenceContext$$Lambda$lambda$restvars$0::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$restvars$0::load$(name, initialize);
		}
		if (name->equals(InferenceContext$$Lambda$lambda$instvars$1$1::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$instvars$1$1::load$(name, initialize);
		}
		if (name->equals(InferenceContext$$Lambda$lambda$boundedVars$2$2::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$boundedVars$2$2::load$(name, initialize);
		}
		if (name->equals(InferenceContext$$Lambda$lambda$dupTo$3$3::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$dupTo$3$3::load$(name, initialize);
		}
		if (name->equals(InferenceContext$$Lambda$lambda$min$4$4::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$min$4$4::load$(name, initialize);
		}
		if (name->equals(InferenceContext$$Lambda$lambda$min$5$5::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$min$5$5::load$(name, initialize);
		}
		if (name->equals(InferenceContext$$Lambda$lambda$min$6$6::classInfo$.name)) {
			return InferenceContext$$Lambda$lambda$min$6$6::load$(name, initialize);
		}
	}
	$loadClass(InferenceContext, name, initialize, &_InferenceContext_ClassInfo_, allocate$InferenceContext);
	return class$;
}

$Class* InferenceContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com