#include <com/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy.h>

#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor.h>
#include <java/lang/annotation/AnnotationTypeMismatchException.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Type = ::com::sun::tools::javac::code::Type;
using $AnnotationProxyMaker$ValueVisitor = ::com::sun::tools::javac::model::AnnotationProxyMaker$ValueVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AnnotationTypeMismatchException = ::java::lang::annotation::AnnotationTypeMismatchException;
using $Method = ::java::lang::reflect::Method;
using $ExceptionProxy = ::sun::reflect::annotation::ExceptionProxy;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

$FieldInfo _AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, this$1)},
	{"val$attr", "Lcom/sun/tools/javac/code/Attribute;", nullptr, $FINAL | $SYNTHETIC, $field(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, val$attr)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, serialVersionUID)},
	{"method", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $TRANSIENT, $field(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, method)},
	{}
};

$MethodInfo _AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/model/AnnotationProxyMaker$ValueVisitor;Ljava/lang/reflect/Method;Lcom/sun/tools/javac/code/Attribute;)V", "(Ljava/lang/reflect/Method;)V", 0, $method(static_cast<void(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::*)($AnnotationProxyMaker$ValueVisitor*,$Method*,$Attribute*)>(&AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::init$))},
	{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor",
	"typeMismatch",
	"(Ljava/lang/reflect/Method;Lcom/sun/tools/javac/code/Attribute;)V"
};

$InnerClassInfo _AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor", "com.sun.tools.javac.model.AnnotationProxyMaker", "ValueVisitor", $PRIVATE},
	{"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy", nullptr, "AnnotationTypeMismatchExceptionProxy", 0},
	{}
};

$ClassInfo _AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.model.AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy",
	"sun.reflect.annotation.ExceptionProxy",
	nullptr,
	_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_FieldInfo_,
	_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_MethodInfo_,
	nullptr,
	&_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_EnclosingMethodInfo_,
	_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.model.AnnotationProxyMaker"
};

$Object* allocate$AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy($Class* clazz) {
	return $of($alloc(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy));
}

void AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::init$($AnnotationProxyMaker$ValueVisitor* this$1, $Method* method, $Attribute* val$attr) {
	$set(this, this$1, this$1);
	$set(this, val$attr, val$attr);
	$ExceptionProxy::init$();
	$set(this, method, method);
}

$String* AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::toString() {
	return "<error>"_s;
}

$RuntimeException* AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::generateException() {
	return $new($AnnotationTypeMismatchException, this->method, $($nc($nc(this->val$attr)->type)->toString()));
}

AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy() {
}

$Class* AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::load$($String* name, bool initialize) {
	$loadClass(AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy, name, initialize, &_AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy_ClassInfo_, allocate$AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy);
	return class$;
}

$Class* AnnotationProxyMaker$ValueVisitor$1AnnotationTypeMismatchExceptionProxy::class$ = nullptr;

				} // model
			} // javac
		} // tools
	} // sun
} // com