#include <com/sun/tools/sjavac/comp/PubapiVisitor.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <com/sun/tools/sjavac/pubapi/PubApiTypeParam.h>
#include <com/sun/tools/sjavac/pubapi/PubMethod.h>
#include <com/sun/tools/sjavac/pubapi/PubType.h>
#include <com/sun/tools/sjavac/pubapi/PubVar.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/ElementScanner14.h>
#include <jcpp.h>

#undef PRIVATE

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $1Name = ::com::sun::tools::javac::util::Name;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $PubApiTypeParam = ::com::sun::tools::sjavac::pubapi::PubApiTypeParam;
using $PubMethod = ::com::sun::tools::sjavac::pubapi::PubMethod;
using $PubType = ::com::sun::tools::sjavac::pubapi::PubType;
using $PubVar = ::com::sun::tools::sjavac::pubapi::PubVar;
using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Modifier = ::javax::lang::model::element::Modifier;
using $Name = ::javax::lang::model::element::Name;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $ElementScanner14 = ::javax::lang::model::util::ElementScanner14;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PubapiVisitor$$Lambda$encodeChar : public $IntFunction {
	$class(PubapiVisitor$$Lambda$encodeChar, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t c) override {
		 return $of(PubapiVisitor::encodeChar(c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubapiVisitor$$Lambda$encodeChar>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubapiVisitor$$Lambda$encodeChar::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubapiVisitor$$Lambda$encodeChar::*)()>(&PubapiVisitor$$Lambda$encodeChar::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubapiVisitor$$Lambda$encodeChar::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.PubapiVisitor$$Lambda$encodeChar",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* PubapiVisitor$$Lambda$encodeChar::load$($String* name, bool initialize) {
	$loadClass(PubapiVisitor$$Lambda$encodeChar, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubapiVisitor$$Lambda$encodeChar::class$ = nullptr;

class PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1 : public $Function {
	$class(PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$(PubapiVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* e) override {
		 return $of($nc(inst$)->lambda$getTypeParameters$0($cast($TypeParameterElement, e)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1>());
	}
	PubapiVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1, inst$)},
	{}
};
$MethodInfo PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/comp/PubapiVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::*)(PubapiVisitor*)>(&PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::load$($String* name, bool initialize) {
	$loadClass(PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::class$ = nullptr;

class PubapiVisitor$$Lambda$asType$2 : public $Function {
	$class(PubapiVisitor$$Lambda$asType$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($VariableElement, inst$)->asType());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubapiVisitor$$Lambda$asType$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubapiVisitor$$Lambda$asType$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubapiVisitor$$Lambda$asType$2::*)()>(&PubapiVisitor$$Lambda$asType$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubapiVisitor$$Lambda$asType$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.PubapiVisitor$$Lambda$asType$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubapiVisitor$$Lambda$asType$2::load$($String* name, bool initialize) {
	$loadClass(PubapiVisitor$$Lambda$asType$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubapiVisitor$$Lambda$asType$2::class$ = nullptr;

class PubapiVisitor$$Lambda$fromType$3 : public $Function {
	$class(PubapiVisitor$$Lambda$fromType$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* type) override {
		 return $of($TypeDesc::fromType($cast($TypeMirror, type)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PubapiVisitor$$Lambda$fromType$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PubapiVisitor$$Lambda$fromType$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubapiVisitor$$Lambda$fromType$3::*)()>(&PubapiVisitor$$Lambda$fromType$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PubapiVisitor$$Lambda$fromType$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.PubapiVisitor$$Lambda$fromType$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* PubapiVisitor$$Lambda$fromType$3::load$($String* name, bool initialize) {
	$loadClass(PubapiVisitor$$Lambda$fromType$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PubapiVisitor$$Lambda$fromType$3::class$ = nullptr;

$FieldInfo _PubapiVisitor_FieldInfo_[] = {
	{"collectedApi", "Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PRIVATE, $field(PubapiVisitor, collectedApi)},
	{}
};

$MethodInfo _PubapiVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PubapiVisitor::*)()>(&PubapiVisitor::init$))},
	{"encodeChar", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&PubapiVisitor::encodeChar))},
	{"getCollectedPubApi", "()Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC},
	{"getParamTypes", "(Ljavax/lang/model/element/ExecutableElement;)Ljava/util/List;", "(Ljavax/lang/model/element/ExecutableElement;)Ljava/util/List<Ljavax/lang/model/type/TypeMirror;>;", $PRIVATE, $method(static_cast<$List*(PubapiVisitor::*)($ExecutableElement*)>(&PubapiVisitor::getParamTypes))},
	{"getTypeDescs", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;)Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/TypeDesc;>;", $PRIVATE, $method(static_cast<$List*(PubapiVisitor::*)($List*)>(&PubapiVisitor::getTypeDescs))},
	{"getTypeParameters", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Ljavax/lang/model/element/TypeParameterElement;>;)Ljava/util/List<Lcom/sun/tools/sjavac/pubapi/PubApiTypeParam;>;", $PRIVATE, $method(static_cast<$List*(PubapiVisitor::*)($List*)>(&PubapiVisitor::getTypeParameters))},
	{"isAnonymous", "(Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PubapiVisitor::*)($TypeElement*)>(&PubapiVisitor::isAnonymous))},
	{"isNonPrivate", "(Ljavax/lang/model/element/Element;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PubapiVisitor::*)($Element*)>(&PubapiVisitor::isNonPrivate))},
	{"lambda$getTypeParameters$0", "(Ljavax/lang/model/element/TypeParameterElement;)Lcom/sun/tools/sjavac/pubapi/PubApiTypeParam;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$PubApiTypeParam*(PubapiVisitor::*)($TypeParameterElement*)>(&PubapiVisitor::lambda$getTypeParameters$0))},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _PubapiVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.PubapiVisitor",
	"javax.lang.model.util.ElementScanner14",
	nullptr,
	_PubapiVisitor_FieldInfo_,
	_PubapiVisitor_MethodInfo_,
	"Ljavax/lang/model/util/ElementScanner14<Ljava/lang/Void;Ljava/lang/Void;>;"
};

$Object* allocate$PubapiVisitor($Class* clazz) {
	return $of($alloc(PubapiVisitor));
}

void PubapiVisitor::init$() {
	$ElementScanner14::init$();
	$set(this, collectedApi, $new($PubApi));
}

bool PubapiVisitor::isNonPrivate($Element* e) {
	$init($Modifier);
	return !$nc($($nc(e)->getModifiers()))->contains($Modifier::PRIVATE);
}

$Void* PubapiVisitor::visitType($TypeElement* e, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if (isNonPrivate(static_cast<$Element*>(static_cast<$Parameterizable*>(e)))) {
		$var($PubApi, prevApi, this->collectedApi);
		$set(this, collectedApi, $new($PubApi));
		$ElementScanner14::visitType(e, p);
		if (!isAnonymous(e)) {
			$var($String, name, $nc($nc(($cast($Symbol$ClassSymbol, e)))->flatname)->toString());
			$var($PubType, t, $new($PubType, $($nc(e)->getModifiers()), name, this->collectedApi));
			$nc($nc(prevApi)->types)->put(t->fqName, t);
		}
		$set(this, collectedApi, prevApi);
	}
	return nullptr;
}

bool PubapiVisitor::isAnonymous($TypeElement* e) {
	return $nc($($nc(e)->getQualifiedName()))->length() == 0;
}

$String* PubapiVisitor::encodeChar(int32_t c) {
	$init(PubapiVisitor);
	$useLocalCurrentObjectStackCache();
	return $String::format("\\u%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(c)))}));
}

$Void* PubapiVisitor::visitVariable($VariableElement* e, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if (isNonPrivate(e)) {
		$var($Object, constVal, $nc(e)->getConstantValue());
		$var($String, constValStr, nullptr);
		if (constVal != nullptr) {
			if ($nc($($nc($(e->asType()))->toString()))->equals("char"_s)) {
				char16_t c = $nc($($of(constVal)->toString()))->charAt(0);
				$assign(constValStr, $str({"\'"_s, $(encodeChar(c)), "\'"_s}));
			} else {
				$assign(constValStr, $cast($String, $nc($($($nc($($of(constVal)->toString()))->chars())->mapToObj(static_cast<$IntFunction*>($$new(PubapiVisitor$$Lambda$encodeChar)))))->collect($($Collectors::joining(""_s, "\""_s, "\""_s)))));
			}
		}
		$var($Set, var$0, e->getModifiers());
		$var($TypeDesc, var$1, $TypeDesc::fromType($(e->asType())));
		$var($PubVar, v, $new($PubVar, var$0, var$1, $($of(e)->toString()), constValStr));
		$nc($nc(this->collectedApi)->variables)->put(v->identifier, v);
	}
	return nullptr;
}

$Void* PubapiVisitor::visitRecordComponent($RecordComponentElement* e, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$var($Set, var$0, $nc(e)->getModifiers());
	$var($TypeDesc, var$1, $TypeDesc::fromType($(e->asType())));
	$var($PubVar, v, $new($PubVar, var$0, var$1, $($of(e)->toString()), nullptr));
	$nc($nc(this->collectedApi)->recordComponents)->put(v->identifier, v);
	return nullptr;
}

$Void* PubapiVisitor::visitExecutable($ExecutableElement* e, $Void* p) {
	$useLocalCurrentObjectStackCache();
	if (isNonPrivate(e)) {
		$var($Set, var$0, $nc(e)->getModifiers());
		$var($List, var$1, getTypeParameters($(e->getTypeParameters())));
		$var($TypeDesc, var$2, $TypeDesc::fromType($(e->getReturnType())));
		$var($String, var$3, $nc($of($(e->getSimpleName())))->toString());
		$var($List, var$4, getTypeDescs($(getParamTypes(e))));
		$var($PubMethod, m, $new($PubMethod, var$0, var$1, var$2, var$3, var$4, $(getTypeDescs($(e->getThrownTypes())))));
		$nc($nc(this->collectedApi)->methods)->put($(m->asSignatureString()), m);
	}
	return nullptr;
}

$List* PubapiVisitor::getTypeParameters($List* elements) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(elements)->stream()))->map(static_cast<$Function*>($$new(PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1, this)))))->toList();
}

$List* PubapiVisitor::getParamTypes($ExecutableElement* e) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc($($nc(e)->getParameters()))->stream()))->map(static_cast<$Function*>($$new(PubapiVisitor$$Lambda$asType$2)))))->toList();
}

$List* PubapiVisitor::getTypeDescs($List* list) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($nc(list)->stream()))->map(static_cast<$Function*>($$new(PubapiVisitor$$Lambda$fromType$3)))))->toList();
}

$PubApi* PubapiVisitor::getCollectedPubApi() {
	return this->collectedApi;
}

$Object* PubapiVisitor::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $of(this->visitRecordComponent(e, $cast($Void, p)));
}

$Object* PubapiVisitor::visitExecutable($ExecutableElement* e, Object$* p) {
	return $of(this->visitExecutable(e, $cast($Void, p)));
}

$Object* PubapiVisitor::visitType($TypeElement* e, Object$* p) {
	return $of(this->visitType(e, $cast($Void, p)));
}

$Object* PubapiVisitor::visitVariable($VariableElement* e, Object$* p) {
	return $of(this->visitVariable(e, $cast($Void, p)));
}

$PubApiTypeParam* PubapiVisitor::lambda$getTypeParameters$0($TypeParameterElement* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc($of($($nc(e)->getSimpleName())))->toString());
	return $new($PubApiTypeParam, var$0, $(getTypeDescs($(e->getBounds()))));
}

PubapiVisitor::PubapiVisitor() {
}

$Class* PubapiVisitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PubapiVisitor$$Lambda$encodeChar::classInfo$.name)) {
			return PubapiVisitor$$Lambda$encodeChar::load$(name, initialize);
		}
		if (name->equals(PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::classInfo$.name)) {
			return PubapiVisitor$$Lambda$lambda$getTypeParameters$0$1::load$(name, initialize);
		}
		if (name->equals(PubapiVisitor$$Lambda$asType$2::classInfo$.name)) {
			return PubapiVisitor$$Lambda$asType$2::load$(name, initialize);
		}
		if (name->equals(PubapiVisitor$$Lambda$fromType$3::classInfo$.name)) {
			return PubapiVisitor$$Lambda$fromType$3::load$(name, initialize);
		}
	}
	$loadClass(PubapiVisitor, name, initialize, &_PubapiVisitor_ClassInfo_, allocate$PubapiVisitor);
	return class$;
}

$Class* PubapiVisitor::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com