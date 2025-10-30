#include <com/sun/tools/javac/model/AnnotationProxyMaker$MirroredTypeExceptionProxy.h>

#include <com/sun/tools/javac/model/AnnotationProxyMaker.h>
#include <java/io/ObjectInputStream.h>
#include <javax/lang/model/type/MirroredTypeException.h>
#include <javax/lang/model/type/MirroredTypesException.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $AnnotationProxyMaker = ::com::sun::tools::javac::model::AnnotationProxyMaker;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MirroredTypeException = ::javax::lang::model::type::MirroredTypeException;
using $MirroredTypesException = ::javax::lang::model::type::MirroredTypesException;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _AnnotationProxyMaker$MirroredTypeExceptionProxy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AnnotationProxyMaker$MirroredTypeExceptionProxy, serialVersionUID)},
	{"type", "Ljavax/lang/model/type/TypeMirror;", nullptr, $PRIVATE | $TRANSIENT, $field(AnnotationProxyMaker$MirroredTypeExceptionProxy, type)},
	{"typeString", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AnnotationProxyMaker$MirroredTypeExceptionProxy, typeString)},
	{}
};

$MethodInfo _AnnotationProxyMaker$MirroredTypeExceptionProxy_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/type/TypeMirror;)V", nullptr, 0, $method(static_cast<void(AnnotationProxyMaker$MirroredTypeExceptionProxy::*)($TypeMirror*)>(&AnnotationProxyMaker$MirroredTypeExceptionProxy::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AnnotationProxyMaker$MirroredTypeExceptionProxy::*)($ObjectInputStream*)>(&AnnotationProxyMaker$MirroredTypeExceptionProxy::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AnnotationProxyMaker$MirroredTypeExceptionProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypeExceptionProxy", "com.sun.tools.javac.model.AnnotationProxyMaker", "MirroredTypeExceptionProxy", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AnnotationProxyMaker$MirroredTypeExceptionProxy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.model.AnnotationProxyMaker$MirroredTypeExceptionProxy",
	"sun.reflect.annotation.ExceptionProxy",
	nullptr,
	_AnnotationProxyMaker$MirroredTypeExceptionProxy_FieldInfo_,
	_AnnotationProxyMaker$MirroredTypeExceptionProxy_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationProxyMaker$MirroredTypeExceptionProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.AnnotationProxyMaker"
};

$Object* allocate$AnnotationProxyMaker$MirroredTypeExceptionProxy($Class* clazz) {
	return $of($alloc(AnnotationProxyMaker$MirroredTypeExceptionProxy));
}

void AnnotationProxyMaker$MirroredTypeExceptionProxy::init$($TypeMirror* t) {
	$ExceptionProxy::init$();
	$set(this, type, t);
	$set(this, typeString, $nc(t)->toString());
}

$String* AnnotationProxyMaker$MirroredTypeExceptionProxy::toString() {
	return $str({this->typeString, ".class"_s});
}

int32_t AnnotationProxyMaker$MirroredTypeExceptionProxy::hashCode() {
	return $nc($of((this->type != nullptr ? $of(this->type) : $of(this->typeString))))->hashCode();
}

bool AnnotationProxyMaker$MirroredTypeExceptionProxy::equals(Object$* obj) {
	$var(AnnotationProxyMaker$MirroredTypeExceptionProxy, proxy, nullptr);
	bool var$1 = this->type != nullptr;
	if (var$1) {
		bool var$2 = $instanceOf(AnnotationProxyMaker$MirroredTypeExceptionProxy, obj);
		if (var$2) {
			$assign(proxy, $cast(AnnotationProxyMaker$MirroredTypeExceptionProxy, obj));
			var$2 = true;
		}
		var$1 = var$2;
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->type)->equals($nc(proxy)->type);
}

$RuntimeException* AnnotationProxyMaker$MirroredTypeExceptionProxy::generateException() {
	return $new($MirroredTypeException, this->type);
}

void AnnotationProxyMaker$MirroredTypeExceptionProxy::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, type, nullptr);
}

AnnotationProxyMaker$MirroredTypeExceptionProxy::AnnotationProxyMaker$MirroredTypeExceptionProxy() {
}

$Class* AnnotationProxyMaker$MirroredTypeExceptionProxy::load$($String* name, bool initialize) {
	$loadClass(AnnotationProxyMaker$MirroredTypeExceptionProxy, name, initialize, &_AnnotationProxyMaker$MirroredTypeExceptionProxy_ClassInfo_, allocate$AnnotationProxyMaker$MirroredTypeExceptionProxy);
	return class$;
}

$Class* AnnotationProxyMaker$MirroredTypeExceptionProxy::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com