#include <com/sun/tools/sjavac/pubapi/ReferenceTypeDesc.h>

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef DECLARED

using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

$FieldInfo _ReferenceTypeDesc_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceTypeDesc, serialVersionUID)},
	{"javaType", "Ljava/lang/String;", nullptr, 0, $field(ReferenceTypeDesc, javaType)},
	{}
};

$MethodInfo _ReferenceTypeDesc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceTypeDesc::*)($String*)>(&ReferenceTypeDesc::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReferenceTypeDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.ReferenceTypeDesc",
	"com.sun.tools.sjavac.pubapi.TypeDesc",
	nullptr,
	_ReferenceTypeDesc_FieldInfo_,
	_ReferenceTypeDesc_MethodInfo_
};

$Object* allocate$ReferenceTypeDesc($Class* clazz) {
	return $of($alloc(ReferenceTypeDesc));
}

void ReferenceTypeDesc::init$($String* javaType) {
	$init($TypeKind);
	$TypeDesc::init$($TypeKind::DECLARED);
	$set(this, javaType, javaType);
}

bool ReferenceTypeDesc::equals(Object$* obj) {
	if (!$TypeDesc::equals(obj)) {
		return false;
	}
	return $nc(this->javaType)->equals($nc(($cast(ReferenceTypeDesc, obj)))->javaType);
}

int32_t ReferenceTypeDesc::hashCode() {
	int32_t var$0 = $TypeDesc::hashCode();
	return var$0 ^ $nc(this->javaType)->hashCode();
}

$String* ReferenceTypeDesc::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[type: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->javaType)
	}));
}

ReferenceTypeDesc::ReferenceTypeDesc() {
}

$Class* ReferenceTypeDesc::load$($String* name, bool initialize) {
	$loadClass(ReferenceTypeDesc, name, initialize, &_ReferenceTypeDesc_ClassInfo_, allocate$ReferenceTypeDesc);
	return class$;
}

$Class* ReferenceTypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com