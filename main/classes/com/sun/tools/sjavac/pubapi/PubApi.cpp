#include <com/sun/tools/sjavac/pubapi/PubApi.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/pubapi/PubApiTypeParam.h>
#include <com/sun/tools/sjavac/pubapi/PubMethod.h>
#include <com/sun/tools/sjavac/pubapi/PubType.h>
#include <com/sun/tools/sjavac/pubapi/PubVar.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Modifier.h>
#include <jcpp.h>

#undef METHOD_PATTERN
#undef MODIFIERS
#undef MOD_PATTERN
#undef TYPE_PATTERN
#undef VAR_PATTERN

using $ModifierArray = $Array<::javax::lang::model::element::Modifier>;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $Util = ::com::sun::tools::sjavac::Util;
using $PubApiTypeParam = ::com::sun::tools::sjavac::pubapi::PubApiTypeParam;
using $PubMethod = ::com::sun::tools::sjavac::pubapi::PubMethod;
using $PubType = ::com::sun::tools::sjavac::pubapi::PubType;
using $PubVar = ::com::sun::tools::sjavac::pubapi::PubVar;
using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $Modifier = ::javax::lang::model::element::Modifier;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubApi$$Lambda$name : public $Function {
	$class(PubApi$$Lambda$name, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Enum, inst$)->name());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$name>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$name::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$name::*)()>(&PubApi$$Lambda$name::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$name::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$name",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$name::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$name, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$name::class$ = nullptr;

class PubApi$$Lambda$toLowerCase$1 : public $Function {
	$class(PubApi$$Lambda$toLowerCase$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* source) override {
		 return $of($StringUtils::toLowerCase($cast($String, source)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$toLowerCase$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$toLowerCase$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$toLowerCase$1::*)()>(&PubApi$$Lambda$toLowerCase$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$toLowerCase$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$toLowerCase$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$toLowerCase$1::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$toLowerCase$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$toLowerCase$1::class$ = nullptr;

class PubApi$$Lambda$addPubType$2 : public $Consumer {
	$class(PubApi$$Lambda$addPubType$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$(PubApi* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->addPubType($cast($PubType, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$addPubType$2>());
	}
	PubApi* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PubApi$$Lambda$addPubType$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PubApi$$Lambda$addPubType$2, inst$)},
	{}
};
$MethodInfo PubApi$$Lambda$addPubType$2::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$addPubType$2::*)(PubApi*)>(&PubApi$$Lambda$addPubType$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$addPubType$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$addPubType$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* PubApi$$Lambda$addPubType$2::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$addPubType$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$addPubType$2::class$ = nullptr;

class PubApi$$Lambda$addPubVar$3 : public $Consumer {
	$class(PubApi$$Lambda$addPubVar$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$(PubApi* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* v) override {
		$nc(inst$)->addPubVar($cast($PubVar, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$addPubVar$3>());
	}
	PubApi* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PubApi$$Lambda$addPubVar$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PubApi$$Lambda$addPubVar$3, inst$)},
	{}
};
$MethodInfo PubApi$$Lambda$addPubVar$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$addPubVar$3::*)(PubApi*)>(&PubApi$$Lambda$addPubVar$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$addPubVar$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$addPubVar$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* PubApi$$Lambda$addPubVar$3::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$addPubVar$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$addPubVar$3::class$ = nullptr;

class PubApi$$Lambda$addPubMethod$4 : public $Consumer {
	$class(PubApi$$Lambda$addPubMethod$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$(PubApi* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* m) override {
		$nc(inst$)->addPubMethod($cast($PubMethod, m));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$addPubMethod$4>());
	}
	PubApi* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PubApi$$Lambda$addPubMethod$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PubApi$$Lambda$addPubMethod$4, inst$)},
	{}
};
$MethodInfo PubApi$$Lambda$addPubMethod$4::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$addPubMethod$4::*)(PubApi*)>(&PubApi$$Lambda$addPubMethod$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$addPubMethod$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$addPubMethod$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* PubApi$$Lambda$addPubMethod$4::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$addPubMethod$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$addPubMethod$4::class$ = nullptr;

class PubApi$$Lambda$lambda$varLine$0$5 : public $Function {
	$class(PubApi$$Lambda$lambda$varLine$0$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* v) override {
		 return $of(PubApi::lambda$varLine$0($cast($String, v)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$lambda$varLine$0$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$lambda$varLine$0$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$lambda$varLine$0$5::*)()>(&PubApi$$Lambda$lambda$varLine$0$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$lambda$varLine$0$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$lambda$varLine$0$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$lambda$varLine$0$5::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$lambda$varLine$0$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$lambda$varLine$0$5::class$ = nullptr;

class PubApi$$Lambda$asString$6 : public $Function {
	$class(PubApi$$Lambda$asString$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($PubApiTypeParam, inst$)->asString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$asString$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$asString$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$asString$6::*)()>(&PubApi$$Lambda$asString$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$asString$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$asString$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$asString$6::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$asString$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$asString$6::class$ = nullptr;

class PubApi$$Lambda$typeLine$7 : public $Function {
	$class(PubApi$$Lambda$typeLine$7, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* type) override {
		 return $of(PubApi::typeLine($cast($PubType, type)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$typeLine$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$typeLine$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$typeLine$7::*)()>(&PubApi$$Lambda$typeLine$7::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$typeLine$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$typeLine$7",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$typeLine$7::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$typeLine$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$typeLine$7::class$ = nullptr;

class PubApi$$Lambda$lambda$asListOfStrings$1$8 : public $Consumer {
	$class(PubApi$$Lambda$lambda$asListOfStrings$1$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$($List* lines) {
		$set(this, lines, lines);
	}
	virtual void accept(Object$* type) override {
		PubApi::lambda$asListOfStrings$1(lines, $cast($PubType, type));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$lambda$asListOfStrings$1$8>());
	}
	$List* lines = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PubApi$$Lambda$lambda$asListOfStrings$1$8::fieldInfos[2] = {
	{"lines", "Ljava/util/List;", nullptr, $PUBLIC, $field(PubApi$$Lambda$lambda$asListOfStrings$1$8, lines)},
	{}
};
$MethodInfo PubApi$$Lambda$lambda$asListOfStrings$1$8::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$lambda$asListOfStrings$1$8::*)($List*)>(&PubApi$$Lambda$lambda$asListOfStrings$1$8::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$lambda$asListOfStrings$1$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$lambda$asListOfStrings$1$8",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* PubApi$$Lambda$lambda$asListOfStrings$1$8::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$lambda$asListOfStrings$1$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$lambda$asListOfStrings$1$8::class$ = nullptr;

class PubApi$$Lambda$varLine$9 : public $Function {
	$class(PubApi$$Lambda$varLine$9, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* var) override {
		 return $of(PubApi::varLine($cast($PubVar, var)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$varLine$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$varLine$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$varLine$9::*)()>(&PubApi$$Lambda$varLine$9::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$varLine$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$varLine$9",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$varLine$9::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$varLine$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$varLine$9::class$ = nullptr;

class PubApi$$Lambda$add$10 : public $Consumer {
	$class(PubApi$$Lambda$add$10, $NO_CLASS_INIT, $Consumer)
public:
	void init$($List* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->add(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$add$10>());
	}
	$List* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PubApi$$Lambda$add$10::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PubApi$$Lambda$add$10, inst$)},
	{}
};
$MethodInfo PubApi$$Lambda$add$10::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$add$10::*)($List*)>(&PubApi$$Lambda$add$10::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$add$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$add$10",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* PubApi$$Lambda$add$10::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$add$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$add$10::class$ = nullptr;

class PubApi$$Lambda$methodLine$11 : public $Function {
	$class(PubApi$$Lambda$methodLine$11, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* method) override {
		 return $of(PubApi::methodLine($cast($PubMethod, method)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$methodLine$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$methodLine$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$methodLine$11::*)()>(&PubApi$$Lambda$methodLine$11::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$methodLine$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$methodLine$11",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$methodLine$11::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$methodLine$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$methodLine$11::class$ = nullptr;

class PubApi$$Lambda$encodeAsString$12 : public $Function {
	$class(PubApi$$Lambda$encodeAsString$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* td) override {
		 return $of($TypeDesc::encodeAsString($cast($TypeDesc, td)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$encodeAsString$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$encodeAsString$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$encodeAsString$12::*)()>(&PubApi$$Lambda$encodeAsString$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$encodeAsString$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$encodeAsString$12",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$encodeAsString$12::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$encodeAsString$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$encodeAsString$12::class$ = nullptr;

class PubApi$$Lambda$lambda$asString$2$13 : public $Function {
	$class(PubApi$$Lambda$lambda$asString$2$13, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* mod) override {
		 return $of(PubApi::lambda$asString$2($cast($Modifier, mod)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$lambda$asString$2$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$lambda$asString$2$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$lambda$asString$2$13::*)()>(&PubApi$$Lambda$lambda$asString$2$13::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$lambda$asString$2$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$lambda$asString$2$13",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$lambda$asString$2$13::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$lambda$asString$2$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$lambda$asString$2$13::class$ = nullptr;

class PubApi$$Lambda$decodeString$14 : public $Function {
	$class(PubApi$$Lambda$decodeString$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($TypeDesc::decodeString($cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$decodeString$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$decodeString$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$decodeString$14::*)()>(&PubApi$$Lambda$decodeString$14::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$decodeString$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$decodeString$14",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$decodeString$14::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$decodeString$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$decodeString$14::class$ = nullptr;

class PubApi$$Lambda$parseTypeParam$15 : public $Function {
	$class(PubApi$$Lambda$parseTypeParam$15, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* typeParamString) override {
		 return $of(PubApi::parseTypeParam($cast($String, typeParamString)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$parseTypeParam$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$parseTypeParam$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$parseTypeParam$15::*)()>(&PubApi$$Lambda$parseTypeParam$15::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$parseTypeParam$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$parseTypeParam$15",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$parseTypeParam$15::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$parseTypeParam$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$parseTypeParam$15::class$ = nullptr;

class PubApi$$Lambda$trim$16 : public $Function {
	$class(PubApi$$Lambda$trim$16, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($String, inst$)->trim());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$trim$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$trim$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$trim$16::*)()>(&PubApi$$Lambda$trim$16::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$trim$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$trim$16",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$trim$16::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$trim$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$trim$16::class$ = nullptr;

class PubApi$$Lambda$toUpperCase$17 : public $Function {
	$class(PubApi$$Lambda$toUpperCase$17, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* source) override {
		 return $of($StringUtils::toUpperCase($cast($String, source)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$toUpperCase$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$toUpperCase$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$toUpperCase$17::*)()>(&PubApi$$Lambda$toUpperCase$17::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$toUpperCase$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$toUpperCase$17",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$toUpperCase$17::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$toUpperCase$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$toUpperCase$17::class$ = nullptr;

class PubApi$$Lambda$lambda$parseModifiers$3$18 : public $Predicate {
	$class(PubApi$$Lambda$lambda$parseModifiers$3$18, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		 return PubApi::lambda$parseModifiers$3($cast($String, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$lambda$parseModifiers$3$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$lambda$parseModifiers$3$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$lambda$parseModifiers$3$18::*)()>(&PubApi$$Lambda$lambda$parseModifiers$3$18::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$lambda$parseModifiers$3$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$lambda$parseModifiers$3$18",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$lambda$parseModifiers$3$18::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$lambda$parseModifiers$3$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$lambda$parseModifiers$3$18::class$ = nullptr;

class PubApi$$Lambda$valueOf$19 : public $Function {
	$class(PubApi$$Lambda$valueOf$19, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($Modifier::valueOf($cast($String, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubApi$$Lambda$valueOf$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubApi$$Lambda$valueOf$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi$$Lambda$valueOf$19::*)()>(&PubApi$$Lambda$valueOf$19::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubApi$$Lambda$valueOf$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.pubapi.PubApi$$Lambda$valueOf$19",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubApi$$Lambda$valueOf$19::load$($String* name, bool initialize) {
	$loadClass(PubApi$$Lambda$valueOf$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubApi$$Lambda$valueOf$19::class$ = nullptr;

$FieldInfo _PubApi_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PubApi, serialVersionUID)},
	{"types", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubType;>;", $PUBLIC | $FINAL, $field(PubApi, types)},
	{"variables", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubVar;>;", $PUBLIC | $FINAL, $field(PubApi, variables)},
	{"methods", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubMethod;>;", $PUBLIC | $FINAL, $field(PubApi, methods)},
	{"recordComponents", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubVar;>;", $PUBLIC | $FINAL, $field(PubApi, recordComponents)},
	{"lastInsertedType", "Lcom/sun/tools/sjavac/pubapi/PubType;", nullptr, $PRIVATE, $field(PubApi, lastInsertedType)},
	{"MODIFIERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PubApi, MODIFIERS)},
	{"MOD_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PubApi, MOD_PATTERN)},
	{"METHOD_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PubApi, METHOD_PATTERN)},
	{"VAR_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PubApi, VAR_PATTERN)},
	{"TYPE_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PubApi, TYPE_PATTERN)},
	{}
};

$MethodInfo _PubApi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubApi::*)()>(&PubApi::init$))},
	{"<init>", "(Ljava/util/Collection;Ljava/util/Collection;Ljava/util/Collection;)V", "(Ljava/util/Collection<Lcom/sun/tools/sjavac/pubapi/PubType;>;Ljava/util/Collection<Lcom/sun/tools/sjavac/pubapi/PubVar;>;Ljava/util/Collection<Lcom/sun/tools/sjavac/pubapi/PubMethod;>;)V", $PUBLIC, $method(static_cast<void(PubApi::*)($Collection*,$Collection*,$Collection*)>(&PubApi::init$))},
	{"addPubMethod", "(Lcom/sun/tools/sjavac/pubapi/PubMethod;)V", nullptr, $PUBLIC},
	{"addPubType", "(Lcom/sun/tools/sjavac/pubapi/PubType;)V", nullptr, $PUBLIC},
	{"addPubVar", "(Lcom/sun/tools/sjavac/pubapi/PubVar;)V", nullptr, $PUBLIC},
	{"appendItem", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"asListOfStrings", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"asString", "(Ljava/util/Set;)Ljava/lang/String;", "(Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Set*)>(&PubApi::asString))},
	{"commaSeparated", "(Ljava/util/List;)Ljava/lang/String;", "(Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($List*)>(&PubApi::commaSeparated))},
	{"diff", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)Ljava/util/List;", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"diff", "(Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)Ljava/util/List;", "(Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$List*(PubApi::*)($String*,PubApi*)>(&PubApi::diff))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findClosingTag", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&PubApi::findClosingTag))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isBackwardCompatibleWith", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lambda$asListOfStrings$1", "(Ljava/util/List;Lcom/sun/tools/sjavac/pubapi/PubType;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,$PubType*)>(&PubApi::lambda$asListOfStrings$1))},
	{"lambda$asString$2", "(Ljavax/lang/model/element/Modifier;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Modifier*)>(&PubApi::lambda$asString$2))},
	{"lambda$parseModifiers$3", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&PubApi::lambda$parseModifiers$3))},
	{"lambda$varLine$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&PubApi::lambda$varLine$0))},
	{"mergeTypes", "(Lcom/sun/tools/sjavac/pubapi/PubApi;Lcom/sun/tools/sjavac/pubapi/PubApi;)Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PubApi*(*)(PubApi*,PubApi*)>(&PubApi::mergeTypes))},
	{"methodLine", "(Lcom/sun/tools/sjavac/pubapi/PubMethod;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($PubMethod*)>(&PubApi::methodLine))},
	{"parseModifiers", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC},
	{"parseTypeDescs", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*)>(&PubApi::parseTypeDescs))},
	{"parseTypeParam", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/pubapi/PubApiTypeParam;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PubApiTypeParam*(*)($String*)>(&PubApi::parseTypeParam))},
	{"parseTypeParams", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/PubApiTypeParam;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*)>(&PubApi::parseTypeParams))},
	{"splitOnTopLevelChars", "(Ljava/lang/String;C)Ljava/util/List;", "(Ljava/lang/String;C)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($String*,char16_t)>(&PubApi::splitOnTopLevelChars))},
	{"splitOnTopLevelCommas", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typeLine", "(Lcom/sun/tools/sjavac/pubapi/PubType;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($PubType*)>(&PubApi::typeLine))},
	{"varLine", "(Lcom/sun/tools/sjavac/pubapi/PubVar;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($PubVar*)>(&PubApi::varLine))},
	{}
};

$ClassInfo _PubApi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.PubApi",
	"java.lang.Object",
	"java.io.Serializable",
	_PubApi_FieldInfo_,
	_PubApi_MethodInfo_
};

$Object* allocate$PubApi($Class* clazz) {
	return $of($alloc(PubApi));
}

$String* PubApi::MODIFIERS = nullptr;
$Pattern* PubApi::MOD_PATTERN = nullptr;
$Pattern* PubApi::METHOD_PATTERN = nullptr;
$Pattern* PubApi::VAR_PATTERN = nullptr;
$Pattern* PubApi::TYPE_PATTERN = nullptr;

void PubApi::init$() {
	$set(this, types, $new($HashMap));
	$set(this, variables, $new($HashMap));
	$set(this, methods, $new($HashMap));
	$set(this, recordComponents, $new($HashMap));
	$set(this, lastInsertedType, nullptr);
}

void PubApi::init$($Collection* types, $Collection* variables, $Collection* methods) {
	$useLocalCurrentObjectStackCache();
	$set(this, types, $new($HashMap));
	$set(this, variables, $new($HashMap));
	$set(this, methods, $new($HashMap));
	$set(this, recordComponents, $new($HashMap));
	$set(this, lastInsertedType, nullptr);
	$nc(types)->forEach(static_cast<$Consumer*>($$new(PubApi$$Lambda$addPubType$2, this)));
	$nc(variables)->forEach(static_cast<$Consumer*>($$new(PubApi$$Lambda$addPubVar$3, this)));
	$nc(methods)->forEach(static_cast<$Consumer*>($$new(PubApi$$Lambda$addPubMethod$4, this)));
}

bool PubApi::isBackwardCompatibleWith(PubApi* older) {
	return equals(older);
}

$String* PubApi::typeLine($PubType* type) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	if ($nc($nc(type)->fqName)->isEmpty()) {
		$throwNew($RuntimeException, $$str({"empty class name "_s, type}));
	}
	return $String::format("TYPE %s%s"_s, $$new($ObjectArray, {
		$($of(asString($nc(type)->modifiers))),
		$of($nc(type)->fqName)
	}));
}

$String* PubApi::varLine($PubVar* var) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	return $String::format("VAR %s%s %s%s"_s, $$new($ObjectArray, {
		$($of(asString($nc(var)->modifiers))),
		$($of($TypeDesc::encodeAsString($nc(var)->type))),
		$of($nc(var)->identifier),
		$($nc($($nc($(var->getConstValue()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$lambda$varLine$0$5)))))->orElse(""_s))
	}));
}

$String* PubApi::methodLine($PubMethod* method) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	return $String::format("METHOD %s%s%s %s(%s)%s"_s, $$new($ObjectArray, {
		$($of(asString($nc(method)->modifiers))),
		$nc($nc(method)->typeParams)->isEmpty() ? $of(""_s) : ($of($$str({"<"_s, $cast($String, $($nc($($nc($($nc($nc(method)->typeParams)->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$asString$6)))))->collect($($Collectors::joining(","_s))))), "> "_s}))),
		$($of($TypeDesc::encodeAsString(method->returnType))),
		$of(method->identifier),
		$($of(commaSeparated(method->paramTypes))),
		$nc(method->throwDecls)->isEmpty() ? $of(""_s) : $of($$str({" throws "_s, $(commaSeparated(method->throwDecls))}))
	}));
}

$List* PubApi::asListOfStrings() {
	$useLocalCurrentObjectStackCache();
	$var($List, lines, $new($ArrayList));
	$nc($($nc($($nc($($nc(this->types)->values()))->stream()))->sorted($($Comparator::comparing(static_cast<$Function*>($$new(PubApi$$Lambda$typeLine$7)))))))->forEach(static_cast<$Consumer*>($$new(PubApi$$Lambda$lambda$asListOfStrings$1$8, lines)));
	$nc($($nc($($nc($($nc($($nc(this->variables)->values()))->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$varLine$9)))))->sorted()))->forEach(static_cast<$Consumer*>($$new(PubApi$$Lambda$add$10, static_cast<$List*>(lines))));
	$nc($($nc($($nc($($nc($($nc(this->methods)->values()))->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$methodLine$11)))))->sorted()))->forEach(static_cast<$Consumer*>($$new(PubApi$$Lambda$add$10, static_cast<$List*>(lines))));
	return lines;
}

bool PubApi::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(PubApi, other, $cast(PubApi, obj));
	bool var$1 = $nc(this->types)->equals($nc(other)->types);
	bool var$0 = var$1 && $nc(this->variables)->equals($nc(other)->variables);
	return var$0 && $nc(this->methods)->equals($nc(other)->methods);
}

int32_t PubApi::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = $nc($($nc(this->types)->keySet()))->hashCode();
	int32_t var$0 = var$1 ^ $nc($($nc(this->variables)->keySet()))->hashCode();
	return var$0 ^ $nc($($nc(this->methods)->keySet()))->hashCode();
}

$String* PubApi::commaSeparated($List* typeDescs) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc($($nc($($nc(typeDescs)->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$encodeAsString$12)))))->collect($($Collectors::joining(","_s))));
}

$String* PubApi::asString($Set* modifiers) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc($($nc($($nc($($nc(modifiers)->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$lambda$asString$2$13)))))->sorted()))->collect($($Collectors::joining())));
}

PubApi* PubApi::mergeTypes(PubApi* api1, PubApi* api2) {
	$init(PubApi);
	$Assert::check($nc($nc(api1)->methods)->isEmpty(), "Can only merge types."_s);
	$Assert::check($nc($nc(api2)->methods)->isEmpty(), "Can only merge types."_s);
	$Assert::check($nc($nc(api1)->variables)->isEmpty(), "Can only merge types."_s);
	$Assert::check($nc($nc(api2)->variables)->isEmpty(), "Can only merge types."_s);
	$var(PubApi, merged, $new(PubApi));
	$nc(merged->types)->putAll($nc(api1)->types);
	$nc(merged->types)->putAll($nc(api2)->types);
	return merged;
}

void PubApi::appendItem($String* l$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, l, l$renamed);
	try {
		if ($nc(l)->startsWith("  "_s)) {
			$nc($nc(this->lastInsertedType)->pubApi)->appendItem($(l->substring(2)));
			return;
		}
		if ($nc(l)->startsWith("METHOD"_s)) {
			$assign(l, l->substring("METHOD "_s->length()));
			$var($Set, modifiers, $new($HashSet));
			$var($Matcher, modMatcher, $nc(PubApi::MOD_PATTERN)->matcher(l));
			if ($nc(modMatcher)->find()) {
				$var($String, modifiersStr, modMatcher->group());
				modifiers->addAll($(parseModifiers(modifiersStr)));
				$assign(l, l->substring($nc(modifiersStr)->length()));
			}
			$var($List, typeParams, $new($ArrayList));
			if (l->startsWith("<"_s)) {
				int32_t closingPos = findClosingTag(l, 0);
				$var($String, str, l->substring(1, closingPos));
				$assign(l, l->substring(closingPos + 1));
				typeParams->addAll($(parseTypeParams($(splitOnTopLevelCommas(str)))));
			}
			$var($Matcher, mm, $nc(PubApi::METHOD_PATTERN)->matcher(l));
			if (!$nc(mm)->matches()) {
				$throwNew($AssertionError, $of($$str({"Could not parse return type, identifier, parameter types or throws declaration of method: "_s, l})));
			}
			$var($List, params, splitOnTopLevelCommas($($nc(mm)->group("params"_s))));
			$var($String, th, $cast($String, $nc($($Optional::ofNullable($($nc(mm)->group("throws"_s)))))->orElse(""_s)));
			$var($List, throwz, splitOnTopLevelCommas(th));
			$var($Set, var$0, modifiers);
			$var($List, var$1, typeParams);
			$var($TypeDesc, var$2, $TypeDesc::decodeString($($nc(mm)->group("ret"_s))));
			$var($String, var$3, $nc(mm)->group("name"_s));
			$var($List, var$4, parseTypeDescs(params));
			$var($PubMethod, m, $new($PubMethod, var$0, var$1, var$2, var$3, var$4, $(parseTypeDescs(throwz))));
			addPubMethod(m);
			return;
		}
		$var($Matcher, vm, $nc(PubApi::VAR_PATTERN)->matcher(l));
		if ($nc(vm)->matches()) {
			$var($Set, var$5, parseModifiers($(vm->group("modifiers"_s))));
			$var($TypeDesc, var$6, $TypeDesc::decodeString($(vm->group("type"_s))));
			$var($String, var$7, vm->group("id"_s));
			addPubVar($$new($PubVar, var$5, var$6, var$7, $(vm->group("val"_s))));
			return;
		}
		$var($Matcher, tm, $nc(PubApi::TYPE_PATTERN)->matcher(l));
		if ($nc(tm)->matches()) {
			$var($Set, var$8, parseModifiers($(tm->group("modifiers"_s))));
			$var($String, var$9, tm->group("fullyQualified"_s));
			addPubType($$new($PubType, var$8, var$9, $$new(PubApi)));
			return;
		}
		$throwNew($AssertionError, $of("No matching line pattern."_s));
	} catch ($Throwable& e) {
		$throwNew($AssertionError, $$str({"Could not parse API line: "_s, l}), e);
	}
}

void PubApi::addPubType($PubType* t) {
	$nc(this->types)->put($nc(t)->fqName, t);
	$set(this, lastInsertedType, t);
}

void PubApi::addPubVar($PubVar* v) {
	$nc(this->variables)->put($nc(v)->identifier, v);
}

void PubApi::addPubMethod($PubMethod* m) {
	$nc(this->methods)->put($($nc(m)->asSignatureString()), m);
}

$List* PubApi::parseTypeDescs($List* strs) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(strs)->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$decodeString$14)))))->toList();
}

$List* PubApi::parseTypeParams($List* strs) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(strs)->stream()))->map(static_cast<$Function*>($$new(PubApi$$Lambda$parseTypeParam$15)))))->toList();
}

$PubApiTypeParam* PubApi::parseTypeParam($String* typeParamString) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	int32_t extPos = $nc(typeParamString)->indexOf(" extends "_s);
	if (extPos == -1) {
		return $new($PubApiTypeParam, typeParamString, $($Collections::emptyList()));
	}
	$var($String, identifier, typeParamString->substring(0, extPos));
	$var($String, rest, typeParamString->substring(extPos + " extends "_s->length()));
	$var($List, bounds, parseTypeDescs($(splitOnTopLevelChars(rest, u'&'))));
	return $new($PubApiTypeParam, identifier, bounds);
}

$Set* PubApi::parseModifiers($String* modifiers) {
	$useLocalCurrentObjectStackCache();
	if (modifiers == nullptr) {
		return $Collections::emptySet();
	}
	return $cast($Set, $nc($($nc($($nc($($nc($($nc($($Stream::of($($nc(modifiers)->split(" "_s)))))->map(static_cast<$Function*>($$new(PubApi$$Lambda$trim$16)))))->map(static_cast<$Function*>($$new(PubApi$$Lambda$toUpperCase$17)))))->filter(static_cast<$Predicate*>($$new(PubApi$$Lambda$lambda$parseModifiers$3$18)))))->map(static_cast<$Function*>($$new(PubApi$$Lambda$valueOf$19)))))->collect($($Collectors::toSet())));
}

int32_t PubApi::findClosingTag($String* l, int32_t pos) {
	$init(PubApi);
	while (true) {
		pos = pos + 1;
		if ($nc(l)->charAt(pos) == u'>') {
			return pos;
		}
		if ($nc(l)->charAt(pos) == u'<') {
			pos = findClosingTag(l, pos);
		}
	}
}

$List* PubApi::splitOnTopLevelCommas($String* s) {
	return splitOnTopLevelChars(s, u',');
}

$List* PubApi::splitOnTopLevelChars($String* s, char16_t split) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	if ($nc(s)->isEmpty()) {
		return $Collections::emptyList();
	}
	$var($List, result, $new($ArrayList));
	$var($StringBuilder, buf, $new($StringBuilder));
	int32_t depth = 0;
	{
		$var($chars, arr$, $nc(s)->toCharArray());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				if (c == split && depth == 0) {
					result->add($($nc($(buf->toString()))->trim()));
					$assign(buf, $new($StringBuilder));
				} else {
					if (c == u'<') {
						++depth;
					}
					if (c == u'>') {
						--depth;
					}
					buf->append(c);
				}
			}
		}
	}
	result->add($($nc($(buf->toString()))->trim()));
	return result;
}

bool PubApi::isEmpty() {
	bool var$1 = $nc(this->types)->isEmpty();
	bool var$0 = var$1 && $nc(this->variables)->isEmpty();
	return var$0 && $nc(this->methods)->isEmpty();
}

$List* PubApi::diff(PubApi* prevApi) {
	return diff(""_s, prevApi);
}

$List* PubApi::diff($String* scopePrefix, PubApi* prevApi) {
	$useLocalCurrentObjectStackCache();
	$var($List, diffs, $new($ArrayList));
	{
		$var($Set, var$0, $nc(this->types)->keySet());
		$var($Iterator, i$, $nc($($Util::union$(var$0, $($nc($nc(prevApi)->types)->keySet()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, typeKey, $cast($String, i$->next()));
			{
				$var($PubType, type, $cast($PubType, $nc(this->types)->get(typeKey)));
				$var($PubType, prevType, $cast($PubType, $nc($nc(prevApi)->types)->get(typeKey)));
				if (prevType == nullptr) {
					diffs->add($$str({"Type "_s, scopePrefix, typeKey, " was added"_s}));
				} else if (type == nullptr) {
					diffs->add($$str({"Type "_s, scopePrefix, typeKey, " was removed"_s}));
				} else {
					if (!$nc($nc(type)->modifiers)->equals($nc(prevType)->modifiers)) {
						diffs->add($$str({"Modifiers for type "_s, scopePrefix, typeKey, " changed from "_s, $nc(prevType)->modifiers, " to "_s, type->modifiers}));
					}
					diffs->addAll($($nc($nc(type)->pubApi)->diff($nc(prevType)->pubApi)));
				}
			}
		}
	}
	{
		$var($Set, var$1, $nc(this->variables)->keySet());
		$var($Iterator, i$, $nc($($Util::union$(var$1, $($nc($nc(prevApi)->variables)->keySet()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, varKey, $cast($String, i$->next()));
			{
				$var($PubVar, var, $cast($PubVar, $nc(this->variables)->get(varKey)));
				$var($PubVar, prevVar, $cast($PubVar, $nc($nc(prevApi)->variables)->get(varKey)));
				if (prevVar == nullptr) {
					diffs->add($$str({"Variable "_s, scopePrefix, varKey, " was added"_s}));
				} else if (var == nullptr) {
					diffs->add($$str({"Variable "_s, scopePrefix, varKey, " was removed"_s}));
				} else {
					if (!$nc($nc(var)->modifiers)->equals($nc(prevVar)->modifiers)) {
						diffs->add($$str({"Modifiers for var "_s, scopePrefix, varKey, " changed from "_s, $nc(prevVar)->modifiers, " to "_s, var->modifiers}));
					}
					if (!$nc($nc(var)->type)->equals($nc(prevVar)->type)) {
						diffs->add($$str({"Type of "_s, scopePrefix, varKey, " changed from "_s, $nc(prevVar)->type, " to "_s, var->type}));
					}
					if (!$nc($($nc(var)->getConstValue()))->equals($($nc(prevVar)->getConstValue()))) {
						$var($String, var$2, $$str({"Const value of "_s, scopePrefix, varKey, " changed from "_s, $cast($String, $($nc($($nc(prevVar)->getConstValue()))->orElse("<none>"_s))), " to "_s}));
						diffs->add($$concat(var$2, $cast($String, $($nc($(var->getConstValue()))->orElse("<none>"_s)))));
					}
				}
			}
		}
	}
	{
		$var($Set, var$3, $nc(this->methods)->keySet());
		$var($Iterator, i$, $nc($($Util::union$(var$3, $($nc($nc(prevApi)->methods)->keySet()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, methodKey, $cast($String, i$->next()));
			{
				$var($PubMethod, method, $cast($PubMethod, $nc(this->methods)->get(methodKey)));
				$var($PubMethod, prevMethod, $cast($PubMethod, $nc($nc(prevApi)->methods)->get(methodKey)));
				if (prevMethod == nullptr) {
					diffs->add($$str({"Method "_s, scopePrefix, methodKey, " was added"_s}));
				} else if (method == nullptr) {
					diffs->add($$str({"Method "_s, scopePrefix, methodKey, " was removed"_s}));
				} else {
					if (!$nc($nc(method)->modifiers)->equals($nc(prevMethod)->modifiers)) {
						diffs->add($$str({"Modifiers for method "_s, scopePrefix, methodKey, " changed from "_s, $nc(prevMethod)->modifiers, " to "_s, method->modifiers}));
					}
					if (!$nc($nc(method)->typeParams)->equals($nc(prevMethod)->typeParams)) {
						diffs->add($$str({"Type parameters for method "_s, scopePrefix, methodKey, " changed from "_s, $nc(prevMethod)->typeParams, " to "_s, method->typeParams}));
					}
					if (!$nc($nc(method)->throwDecls)->equals($nc(prevMethod)->throwDecls)) {
						diffs->add($$str({"Throw decl for method "_s, scopePrefix, methodKey, " changed from "_s, $nc(prevMethod)->throwDecls, " to  to "_s, method->throwDecls}));
					}
				}
			}
		}
	}
	return diffs;
}

$String* PubApi::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[types: %s, variables: %s, methods: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$($of($nc(this->types)->values())),
		$($of($nc(this->variables)->values())),
		$($of($nc(this->methods)->values()))
	}));
}

bool PubApi::lambda$parseModifiers$3($String* s) {
	$init(PubApi);
	return !$nc(s)->isEmpty();
}

$String* PubApi::lambda$asString$2($Modifier* mod) {
	$init(PubApi);
	return $str({mod, " "_s});
}

void PubApi::lambda$asListOfStrings$1($List* lines, $PubType* type) {
	$init(PubApi);
	$useLocalCurrentObjectStackCache();
	$nc(lines)->add($(typeLine(type)));
	{
		$var($Iterator, i$, $nc($($nc($nc(type)->pubApi)->asListOfStrings()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, subline, $cast($String, i$->next()));
			lines->add($$str({"  "_s, subline}));
		}
	}
}

$String* PubApi::lambda$varLine$0($String* v) {
	$init(PubApi);
	return $str({" = "_s, v});
}

void clinit$PubApi($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(PubApi::MODIFIERS, $cast($String, $nc($($nc($($nc($($Stream::of($($Modifier::values()))))->map(static_cast<$Function*>($$new(PubApi$$Lambda$name)))))->map(static_cast<$Function*>($$new(PubApi$$Lambda$toLowerCase$1)))))->collect($($Collectors::joining("|"_s, "("_s, ")"_s)))));
	$assignStatic(PubApi::MOD_PATTERN, $Pattern::compile($$str({"("_s, PubApi::MODIFIERS, " )*"_s})));
	$assignStatic(PubApi::METHOD_PATTERN, $Pattern::compile("(?<ret>.+?) (?<name>\\S+)\\((?<params>.*)\\)( throws (?<throws>.*))?"_s));
	$assignStatic(PubApi::VAR_PATTERN, $Pattern::compile($$str({"VAR (?<modifiers>("_s, PubApi::MODIFIERS, " )*)(?<type>.+?) (?<id>\\S+)( = (?<val>.*))?"_s})));
	$assignStatic(PubApi::TYPE_PATTERN, $Pattern::compile($$str({"TYPE (?<modifiers>("_s, PubApi::MODIFIERS, " )*)(?<fullyQualified>\\S+)"_s})));
}

PubApi::PubApi() {
}

$Class* PubApi::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PubApi$$Lambda$name::classInfo$.name)) {
			return PubApi$$Lambda$name::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$toLowerCase$1::classInfo$.name)) {
			return PubApi$$Lambda$toLowerCase$1::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$addPubType$2::classInfo$.name)) {
			return PubApi$$Lambda$addPubType$2::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$addPubVar$3::classInfo$.name)) {
			return PubApi$$Lambda$addPubVar$3::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$addPubMethod$4::classInfo$.name)) {
			return PubApi$$Lambda$addPubMethod$4::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$lambda$varLine$0$5::classInfo$.name)) {
			return PubApi$$Lambda$lambda$varLine$0$5::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$asString$6::classInfo$.name)) {
			return PubApi$$Lambda$asString$6::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$typeLine$7::classInfo$.name)) {
			return PubApi$$Lambda$typeLine$7::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$lambda$asListOfStrings$1$8::classInfo$.name)) {
			return PubApi$$Lambda$lambda$asListOfStrings$1$8::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$varLine$9::classInfo$.name)) {
			return PubApi$$Lambda$varLine$9::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$add$10::classInfo$.name)) {
			return PubApi$$Lambda$add$10::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$methodLine$11::classInfo$.name)) {
			return PubApi$$Lambda$methodLine$11::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$encodeAsString$12::classInfo$.name)) {
			return PubApi$$Lambda$encodeAsString$12::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$lambda$asString$2$13::classInfo$.name)) {
			return PubApi$$Lambda$lambda$asString$2$13::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$decodeString$14::classInfo$.name)) {
			return PubApi$$Lambda$decodeString$14::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$parseTypeParam$15::classInfo$.name)) {
			return PubApi$$Lambda$parseTypeParam$15::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$trim$16::classInfo$.name)) {
			return PubApi$$Lambda$trim$16::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$toUpperCase$17::classInfo$.name)) {
			return PubApi$$Lambda$toUpperCase$17::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$lambda$parseModifiers$3$18::classInfo$.name)) {
			return PubApi$$Lambda$lambda$parseModifiers$3$18::load$(name, initialize);
		}
		if (name->equals(PubApi$$Lambda$valueOf$19::classInfo$.name)) {
			return PubApi$$Lambda$valueOf$19::load$(name, initialize);
		}
	}
	$loadClass(PubApi, name, initialize, &_PubApi_ClassInfo_, clinit$PubApi, allocate$PubApi);
	return class$;
}

$Class* PubApi::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com