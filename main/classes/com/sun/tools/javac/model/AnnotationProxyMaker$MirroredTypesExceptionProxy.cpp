#include <com/sun/tools/javac/model/AnnotationProxyMaker$MirroredTypesExceptionProxy.h>

#include <com/sun/tools/javac/model/AnnotationProxyMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/type/MirroredTypesException.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $AnnotationProxyMaker = ::com::sun::tools::javac::model::AnnotationProxyMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $1List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $MirroredTypesException = ::javax::lang::model::type::MirroredTypesException;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0 : public $Function {
	$class(AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(AnnotationProxyMaker$MirroredTypesExceptionProxy::lambda$toString$0($cast($TypeMirror, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::*)()>(&AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::load$($String* name, bool initialize) {
	$loadClass(AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::class$ = nullptr;

$FieldInfo _AnnotationProxyMaker$MirroredTypesExceptionProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AnnotationProxyMaker$MirroredTypesExceptionProxy, serialVersionUID)},
	{"types", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljavax/lang/model/type/TypeMirror;>;", $PRIVATE | $TRANSIENT, $field(AnnotationProxyMaker$MirroredTypesExceptionProxy, types)},
	{"typeStrings", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AnnotationProxyMaker$MirroredTypesExceptionProxy, typeStrings)},
	{}
};

$MethodInfo _AnnotationProxyMaker$MirroredTypesExceptionProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Ljavax/lang/model/type/TypeMirror;>;)V", 0, $method(static_cast<void(AnnotationProxyMaker$MirroredTypesExceptionProxy::*)($List*)>(&AnnotationProxyMaker$MirroredTypesExceptionProxy::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"lambda$toString$0", "(Ljavax/lang/model/type/TypeMirror;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($TypeMirror*)>(&AnnotationProxyMaker$MirroredTypesExceptionProxy::lambda$toString$0))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AnnotationProxyMaker$MirroredTypesExceptionProxy::*)($ObjectInputStream*)>(&AnnotationProxyMaker$MirroredTypesExceptionProxy::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AnnotationProxyMaker$MirroredTypesExceptionProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypesExceptionProxy", "com.sun.tools.javac.model.AnnotationProxyMaker", "MirroredTypesExceptionProxy", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AnnotationProxyMaker$MirroredTypesExceptionProxy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypesExceptionProxy",
	"sun.reflect.annotation.ExceptionProxy",
	nullptr,
	_AnnotationProxyMaker$MirroredTypesExceptionProxy_FieldInfo_,
	_AnnotationProxyMaker$MirroredTypesExceptionProxy_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationProxyMaker$MirroredTypesExceptionProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.AnnotationProxyMaker"
};

$Object* allocate$AnnotationProxyMaker$MirroredTypesExceptionProxy($Class* clazz) {
	return $of($alloc(AnnotationProxyMaker$MirroredTypesExceptionProxy));
}

void AnnotationProxyMaker$MirroredTypesExceptionProxy::init$($List* ts) {
	$ExceptionProxy::init$();
	$set(this, types, ts);
	$set(this, typeStrings, $nc(ts)->toString());
}

$String* AnnotationProxyMaker$MirroredTypesExceptionProxy::toString() {
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc($($nc($($nc(this->types)->stream()))->map(static_cast<$Function*>($$new(AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0)))))->collect($($Collectors::joining(", "_s, "{"_s, "}"_s))));
}

int32_t AnnotationProxyMaker$MirroredTypesExceptionProxy::hashCode() {
	return $nc($of((this->types != nullptr ? $of(this->types) : $of(this->typeStrings))))->hashCode();
}

bool AnnotationProxyMaker$MirroredTypesExceptionProxy::equals(Object$* obj) {
	$var(AnnotationProxyMaker$MirroredTypesExceptionProxy, proxy, nullptr);
	bool var$1 = this->types != nullptr;
	if (var$1) {
		bool var$2 = $instanceOf(AnnotationProxyMaker$MirroredTypesExceptionProxy, obj);
		if (var$2) {
			$assign(proxy, $cast(AnnotationProxyMaker$MirroredTypesExceptionProxy, obj));
			var$2 = true;
		}
		var$1 = var$2;
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->types)->equals($nc(proxy)->types);
}

$RuntimeException* AnnotationProxyMaker$MirroredTypesExceptionProxy::generateException() {
	return $new($MirroredTypesException, this->types);
}

void AnnotationProxyMaker$MirroredTypesExceptionProxy::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, types, nullptr);
}

$String* AnnotationProxyMaker$MirroredTypesExceptionProxy::lambda$toString$0($TypeMirror* t) {
	$init(AnnotationProxyMaker$MirroredTypesExceptionProxy);
	return $str({$($nc(t)->toString()), ".class"_s});
}

AnnotationProxyMaker$MirroredTypesExceptionProxy::AnnotationProxyMaker$MirroredTypesExceptionProxy() {
}

$Class* AnnotationProxyMaker$MirroredTypesExceptionProxy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::classInfo$.name)) {
			return AnnotationProxyMaker$MirroredTypesExceptionProxy$$Lambda$lambda$toString$0::load$(name, initialize);
		}
	}
	$loadClass(AnnotationProxyMaker$MirroredTypesExceptionProxy, name, initialize, &_AnnotationProxyMaker$MirroredTypesExceptionProxy_ClassInfo_, allocate$AnnotationProxyMaker$MirroredTypesExceptionProxy);
	return class$;
}

$Class* AnnotationProxyMaker$MirroredTypesExceptionProxy::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com