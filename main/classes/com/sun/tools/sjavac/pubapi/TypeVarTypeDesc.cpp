#include <com/sun/tools/sjavac/pubapi/TypeVarTypeDesc.h>

#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef TYPEVAR

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

$FieldInfo _TypeVarTypeDesc_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeVarTypeDesc, serialVersionUID)},
	{"identifier", "Ljava/lang/String;", nullptr, 0, $field(TypeVarTypeDesc, identifier)},
	{}
};

$MethodInfo _TypeVarTypeDesc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeVarTypeDesc::*)($String*)>(&TypeVarTypeDesc::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TypeVarTypeDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.TypeVarTypeDesc",
	"com.sun.tools.sjavac.pubapi.TypeDesc",
	nullptr,
	_TypeVarTypeDesc_FieldInfo_,
	_TypeVarTypeDesc_MethodInfo_
};

$Object* allocate$TypeVarTypeDesc($Class* clazz) {
	return $of($alloc(TypeVarTypeDesc));
}

void TypeVarTypeDesc::init$($String* identifier) {
	$init($TypeKind);
	$TypeDesc::init$($TypeKind::TYPEVAR);
	$set(this, identifier, identifier);
}

bool TypeVarTypeDesc::equals(Object$* obj) {
	if (!$TypeDesc::equals(obj)) {
		return false;
	}
	return $nc(this->identifier)->equals($nc(($cast(TypeVarTypeDesc, obj)))->identifier);
}

int32_t TypeVarTypeDesc::hashCode() {
	int32_t var$0 = $TypeDesc::hashCode();
	return var$0 ^ $nc(this->identifier)->hashCode();
}

$String* TypeVarTypeDesc::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[identifier: %s]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->identifier)
	}));
}

TypeVarTypeDesc::TypeVarTypeDesc() {
}

$Class* TypeVarTypeDesc::load$($String* name, bool initialize) {
	$loadClass(TypeVarTypeDesc, name, initialize, &_TypeVarTypeDesc_ClassInfo_, allocate$TypeVarTypeDesc);
	return class$;
}

$Class* TypeVarTypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com