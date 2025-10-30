#include <com/sun/source/util/ParameterNameProvider.h>

#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VariableElement = ::javax::lang::model::element::VariableElement;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _ParameterNameProvider_MethodInfo_[] = {
	{"getParameterName", "(Ljavax/lang/model/element/VariableElement;)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParameterNameProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.ParameterNameProvider",
	nullptr,
	nullptr,
	nullptr,
	_ParameterNameProvider_MethodInfo_
};

$Object* allocate$ParameterNameProvider($Class* clazz) {
	return $of($alloc(ParameterNameProvider));
}

$Class* ParameterNameProvider::load$($String* name, bool initialize) {
	$loadClass(ParameterNameProvider, name, initialize, &_ParameterNameProvider_ClassInfo_, allocate$ParameterNameProvider);
	return class$;
}

$Class* ParameterNameProvider::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com