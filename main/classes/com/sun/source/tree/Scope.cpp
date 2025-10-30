#include <com/sun/source/tree/Scope.h>

#include <java/lang/Iterable.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _Scope_MethodInfo_[] = {
	{"getEnclosingClass", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingMethod", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingScope", "()Lcom/sun/source/tree/Scope;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Scope_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.Scope",
	nullptr,
	nullptr,
	nullptr,
	_Scope_MethodInfo_
};

$Object* allocate$Scope($Class* clazz) {
	return $of($alloc(Scope));
}

$Class* Scope::load$($String* name, bool initialize) {
	$loadClass(Scope, name, initialize, &_Scope_ClassInfo_, allocate$Scope);
	return class$;
}

$Class* Scope::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com