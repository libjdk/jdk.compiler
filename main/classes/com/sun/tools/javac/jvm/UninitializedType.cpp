#include <com/sun/tools/javac/jvm/UninitializedType.h>

#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <jcpp.h>

#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _UninitializedType_FieldInfo_[] = {
	{"offset", "I", nullptr, $PUBLIC | $FINAL, $field(UninitializedType, offset)},
	{}
};

$MethodInfo _UninitializedType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Type;ILcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(UninitializedType::*)($TypeTag*,$Type*,int32_t,$TypeMetadata*)>(&UninitializedType::init$))},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/jvm/UninitializedType;", nullptr, $PUBLIC},
	{"initializedType", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0},
	{"uninitializedObject", "(Lcom/sun/tools/javac/code/Type;I)Lcom/sun/tools/javac/jvm/UninitializedType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UninitializedType*(*)($Type*,int32_t)>(&UninitializedType::uninitializedObject))},
	{"uninitializedThis", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/UninitializedType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UninitializedType*(*)($Type*)>(&UninitializedType::uninitializedThis))},
	{}
};

$InnerClassInfo _UninitializedType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$DelegatedType", "com.sun.tools.javac.code.Type", "DelegatedType", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _UninitializedType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.UninitializedType",
	"com.sun.tools.javac.code.Type$DelegatedType",
	nullptr,
	_UninitializedType_FieldInfo_,
	_UninitializedType_MethodInfo_,
	nullptr,
	nullptr,
	_UninitializedType_InnerClassesInfo_
};

$Object* allocate$UninitializedType($Class* clazz) {
	return $of($alloc(UninitializedType));
}

UninitializedType* UninitializedType::uninitializedThis($Type* qtype) {
	$init(UninitializedType);
	$init($TypeTag);
	return $new(UninitializedType, $TypeTag::UNINITIALIZED_THIS, qtype, -1, $($nc(qtype)->getMetadata()));
}

UninitializedType* UninitializedType::uninitializedObject($Type* qtype, int32_t offset) {
	$init(UninitializedType);
	$init($TypeTag);
	return $new(UninitializedType, $TypeTag::UNINITIALIZED_OBJECT, qtype, offset, $($nc(qtype)->getMetadata()));
}

void UninitializedType::init$($TypeTag* tag, $Type* qtype, int32_t offset, $TypeMetadata* metadata) {
	$Type$DelegatedType::init$(tag, qtype, metadata);
	this->offset = offset;
}

UninitializedType* UninitializedType::cloneWithMetadata($TypeMetadata* md) {
	return $new(UninitializedType, this->tag, this->qtype, this->offset, md);
}

$Type* UninitializedType::initializedType() {
	return this->qtype;
}

UninitializedType::UninitializedType() {
}

$Class* UninitializedType::load$($String* name, bool initialize) {
	$loadClass(UninitializedType, name, initialize, &_UninitializedType_ClassInfo_, allocate$UninitializedType);
	return class$;
}

$Class* UninitializedType::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com