#include <com/sun/tools/sjavac/pubapi/PrimitiveTypeDesc.h>

#include <com/sun/tools/javac/util/StringUtils.h>
#include <com/sun/tools/sjavac/pubapi/TypeDesc.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef VOID

using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $TypeDesc = ::com::sun::tools::sjavac::pubapi::TypeDesc;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

$FieldInfo _PrimitiveTypeDesc_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrimitiveTypeDesc, serialVersionUID)},
	{}
};

$MethodInfo _PrimitiveTypeDesc_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/type/TypeKind;)V", nullptr, $PUBLIC, $method(static_cast<void(PrimitiveTypeDesc::*)($TypeKind*)>(&PrimitiveTypeDesc::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrimitiveTypeDesc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.pubapi.PrimitiveTypeDesc",
	"com.sun.tools.sjavac.pubapi.TypeDesc",
	nullptr,
	_PrimitiveTypeDesc_FieldInfo_,
	_PrimitiveTypeDesc_MethodInfo_
};

$Object* allocate$PrimitiveTypeDesc($Class* clazz) {
	return $of($alloc(PrimitiveTypeDesc));
}

void PrimitiveTypeDesc::init$($TypeKind* typeKind) {
	$TypeDesc::init$(typeKind);
	$init($TypeKind);
	if (!$nc(typeKind)->isPrimitive() && typeKind != $TypeKind::VOID) {
		$throwNew($IllegalArgumentException, "Only primitives or void accepted"_s);
	}
}

$String* PrimitiveTypeDesc::toString() {
	return $StringUtils::toLowerCase($($nc(this->typeKind)->toString()));
}

PrimitiveTypeDesc::PrimitiveTypeDesc() {
}

$Class* PrimitiveTypeDesc::load$($String* name, bool initialize) {
	$loadClass(PrimitiveTypeDesc, name, initialize, &_PrimitiveTypeDesc_ClassInfo_, allocate$PrimitiveTypeDesc);
	return class$;
}

$Class* PrimitiveTypeDesc::class$ = nullptr;

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com