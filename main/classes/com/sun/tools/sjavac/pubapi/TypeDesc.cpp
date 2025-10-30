#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>

#include <com/sun/tools/javac/util/StringUtils.h>
#include <com/sun/tools/sjavac/pubapi/ArrayTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/PrimitiveTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/ReferenceTypeDesc.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc$1.h>
#include <com/sun/tools/sjavac/pubapi/TypeVarTypeDesc.h>
#include <java/lang/AssertionError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <javax/lang/model/util/SimpleTypeVisitor14.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/SimpleTypeVisitor7.h>
#include <javax/lang/model/util/SimpleTypeVisitor8.h>
#include <javax/lang/model/util/SimpleTypeVisitor9.h>
#include <jcpp.h>

#undef ARRAY
#undef DECLARED
#undef TYPEVAR
#undef VOID

using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $ArrayTypeDesc = ::com::sun::tools::sjavac::pubapi::ArrayTypeDesc;
using $PrimitiveTypeDesc = ::com::sun::tools::sjavac::pubapi::PrimitiveTypeDesc;
using $ReferenceTypeDesc = ::com::sun::tools::sjavac::pubapi::ReferenceTypeDesc;
using $TypeDesc$1 = ::com::sun::tools::sjavac::pubapi::TypeDesc$1;
using $TypeVarTypeDesc = ::com::sun::tools::sjavac::pubapi::TypeVarTypeDesc;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;
using $AbstractTypeVisitor6 = ::javax::lang::model::util::AbstractTypeVisitor6;
using $SimpleTypeVisitor14 = ::javax::lang::model::util::SimpleTypeVisitor14;
using $SimpleTypeVisitor6 = ::javax::lang::model::util::SimpleTypeVisitor6;
using $SimpleTypeVisitor7 = ::javax::lang::model::util::SimpleTypeVisitor7;
using $SimpleTypeVisitor8 = ::javax::lang::model::util::SimpleTypeVisitor8;
using $SimpleTypeVisitor9 = ::javax::lang::model::util::SimpleTypeVisitor9;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

$FieldInfo _TypeDesc_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeDesc, serialVersionUID)},
	{"typeKind", "Ljavax/lang/model/type/TypeKind;", nullptr, 0, $field(TypeDesc, typeKind)},
	{}
};

$MethodInfo _TypeDesc_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/type/TypeKind;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeDesc::*)($TypeKind*)>(&TypeDesc::init$))},
	{"decodeString", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeDesc*(*)($String*)>(&TypeDesc::decodeString))},
	{"encodeAsString", "(Lcom/sun/tools/sjavac/pubapi/TypeDesc;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(TypeDesc*)>(&TypeDesc::encodeAsString))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fromType", "(Ljavax/lang/model/type/TypeMirror;)Lcom/sun/tools/sjavac/pubapi/TypeDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeDesc*(*)($TypeMirror*)>(&TypeDesc::fromType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeDesc_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.pubapi.TypeDesc$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TypeDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.sjavac.pubapi.TypeDesc",
	"java.lang.Object",
	"java.io.Serializable",
	_TypeDesc_FieldInfo_,
	_TypeDesc_MethodInfo_,
	nullptr,
	nullptr,
	_TypeDesc_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.pubapi.TypeDesc$1"
};

$Object* allocate$TypeDesc($Class* clazz) {
	return $of($alloc(TypeDesc));
}

void TypeDesc::init$($TypeKind* typeKind) {
	$set(this, typeKind, typeKind);
}

TypeDesc* TypeDesc::decodeString($String* s$renamed) {
	$init(TypeDesc);
	$useLocalCurrentObjectStackCache();
	$var($String, s, s$renamed);
	$assign(s, $nc(s)->trim());
	if (s->endsWith("[]"_s)) {
		$var($String, componentPart, s->substring(0, s->length() - 2));
		return $new($ArrayTypeDesc, $(decodeString(componentPart)));
	}
	if (s->startsWith("#"_s)) {
		return $new($TypeVarTypeDesc, $(s->substring(1)));
	}
	if (s->matches("boolean|byte|char|double|float|int|long|short|void"_s)) {
		$TypeKind* tk = $TypeKind::valueOf($($StringUtils::toUpperCase(s)));
		return $new($PrimitiveTypeDesc, tk);
	}
	return $new($ReferenceTypeDesc, s);
}

$String* TypeDesc::encodeAsString(TypeDesc* td) {
	$init(TypeDesc);
	$useLocalCurrentObjectStackCache();
	$init($TypeKind);
	if ($nc($nc(td)->typeKind)->isPrimitive() || $nc(td)->typeKind == $TypeKind::VOID) {
		return $StringUtils::toLowerCase($($nc(td->typeKind)->toString()));
	}
	if ($nc(td)->typeKind == $TypeKind::ARRAY) {
		return $str({$(encodeAsString($nc(($cast($ArrayTypeDesc, td)))->compTypeDesc)), "[]"_s});
	}
	if ($nc(td)->typeKind == $TypeKind::TYPEVAR) {
		return $str({"#"_s, $nc(($cast($TypeVarTypeDesc, td)))->identifier});
	}
	if ($nc(td)->typeKind == $TypeKind::DECLARED) {
		return $nc($nc(($cast($ReferenceTypeDesc, td)))->javaType)->toString();
	}
	$throwNew($AssertionError, $of($$str({"Unhandled type: "_s, $nc(td)->typeKind})));
}

TypeDesc* TypeDesc::fromType($TypeMirror* type) {
	$init(TypeDesc);
	$useLocalCurrentObjectStackCache();
	$var($TypeVisitor, v, $new($TypeDesc$1));
	$var(TypeDesc, td, $cast(TypeDesc, v->visit(type)));
	if (td == nullptr) {
		$var($String, var$1, $$str({"Unhandled type mirror: "_s, type, " ("_s}));
		$var($String, var$0, $$concat(var$1, $($nc($of(type))->getClass())));
		$throwNew($AssertionError, $of(($$concat(var$0, ")"))));
	}
	return td;
}

bool TypeDesc::equals(Object$* obj) {
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	return $nc(this->typeKind)->equals($nc(($cast(TypeDesc, obj)))->typeKind);
}

int32_t TypeDesc::hashCode() {
	return $nc(this->typeKind)->hashCode();
}

TypeDesc::TypeDesc() {
}

$Class* TypeDesc::load$($String* name, bool initialize) {
	$loadClass(TypeDesc, name, initialize, &_TypeDesc_ClassInfo_, allocate$TypeDesc);
	return class$;
}

$Class* TypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com