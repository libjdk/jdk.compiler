#include <com/sun/tools/javac/code/Type$ArrayType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType$1.h>
#include <com/sun/tools/javac/code/Type$ArrayType$2.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef ARRAY
#undef EMPTY

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType$1 = ::com::sun::tools::javac::code::Type$ArrayType$1;
using $Type$ArrayType$2 = ::com::sun::tools::javac::code::Type$ArrayType$2;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$ArrayType_FieldInfo_[] = {
	{"elemtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$ArrayType, elemtype)},
	{}
};

$MethodInfo _Type$ArrayType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$ArrayType::*)($Type*,$Symbol$TypeSymbol*)>(&Type$ArrayType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$ArrayType::*)($Type*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$ArrayType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type$ArrayType;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$ArrayType::*)(Type$ArrayType*)>(&Type$ArrayType::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"allparams", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ArrayType;", nullptr, $PUBLIC},
	{"complete", "()V", nullptr, $PUBLIC},
	{"contains", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComponentType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isErroneous", "()Z", nullptr, $PUBLIC},
	{"isNullOrReference", "()Z", nullptr, $PUBLIC},
	{"isParameterized", "()Z", nullptr, $PUBLIC},
	{"isRaw", "()Z", nullptr, $PUBLIC},
	{"isReference", "()Z", nullptr, $PUBLIC},
	{"isVarargs", "()Z", nullptr, $PUBLIC},
	{"makeVarargs", "()Lcom/sun/tools/javac/code/Type$ArrayType;", nullptr, $PUBLIC},
	{"*poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$ArrayType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$ArrayType$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$ArrayType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$ArrayType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$ArrayType",
	"com.sun.tools.javac.code.Type",
	"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,javax.lang.model.type.ArrayType",
	_Type$ArrayType_FieldInfo_,
	_Type$ArrayType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$ArrayType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$ArrayType($Class* clazz) {
	return $of($alloc(Type$ArrayType));
}

$Object* Type$ArrayType::poolKey($Types* types) {
	 return this->$Type::poolKey(types);
}

$Annotation* Type$ArrayType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$ArrayType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

$Object* Type$ArrayType::clone() {
	 return this->$Type::clone();
}

void Type$ArrayType::finalize() {
	this->$Type::finalize();
}

void Type$ArrayType::init$($Type* elemtype, $Symbol$TypeSymbol* arrayClass) {
	$init($TypeMetadata);
	Type$ArrayType::init$(elemtype, arrayClass, $TypeMetadata::EMPTY);
}

void Type$ArrayType::init$($Type* elemtype, $Symbol$TypeSymbol* arrayClass, $TypeMetadata* metadata) {
	$Type::init$(arrayClass, metadata);
	$set(this, elemtype, elemtype);
}

void Type$ArrayType::init$(Type$ArrayType* that) {
	Type$ArrayType::init$($nc(that)->elemtype, that->tsym, $(that->getMetadata()));
}

int32_t Type$ArrayType::poolTag() {
	return $ClassFile::CONSTANT_Class;
}

Type$ArrayType* Type$ArrayType::cloneWithMetadata($TypeMetadata* md) {
	return $new($Type$ArrayType$1, this, this->elemtype, this->tsym, md);
}

$TypeTag* Type$ArrayType::getTag() {
	$init($TypeTag);
	return $TypeTag::ARRAY;
}

$Object* Type$ArrayType::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitArrayType(this, s));
}

$String* Type$ArrayType::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($Type, t, this->elemtype);
	$init($TypeKind);
	while ($nc(t)->getKind() == $TypeKind::ARRAY) {
		$assign(t, $cast($Type, $nc(($cast(Type$ArrayType, t)))->getComponentType()));
	}
	sb->append($of(t));
	$assign(t, this);
	do {
		t->appendAnnotationsString(sb, true);
		sb->append("[]"_s);
		$assign(t, $cast($Type, $nc(($cast(Type$ArrayType, t)))->getComponentType()));
	} while (t->getKind() == $TypeKind::ARRAY);
	return sb->toString();
}

bool Type$ArrayType::equals(Object$* obj) {
	$var(Type$ArrayType, arrayType, nullptr);
	bool var$1 = $instanceOf(Type$ArrayType, obj);
	if (var$1) {
		$assign(arrayType, $cast(Type$ArrayType, obj));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && (this == arrayType || $nc(this->elemtype)->equals($nc(arrayType)->elemtype));
}

int32_t Type$ArrayType::hashCode() {
	$init($TypeTag);
	int32_t var$0 = ($TypeTag::ARRAY->ordinal() << 5);
	return var$0 + $nc(this->elemtype)->hashCode();
}

bool Type$ArrayType::isVarargs() {
	return false;
}

$List* Type$ArrayType::allparams() {
	return $nc(this->elemtype)->allparams();
}

bool Type$ArrayType::isErroneous() {
	return $nc(this->elemtype)->isErroneous();
}

bool Type$ArrayType::isParameterized() {
	return $nc(this->elemtype)->isParameterized();
}

bool Type$ArrayType::isReference() {
	return true;
}

bool Type$ArrayType::isNullOrReference() {
	return true;
}

bool Type$ArrayType::isRaw() {
	return $nc(this->elemtype)->isRaw();
}

Type$ArrayType* Type$ArrayType::makeVarargs() {
	return $new($Type$ArrayType$2, this, this->elemtype, this->tsym, this->metadata);
}

bool Type$ArrayType::contains($Type* elem) {
	bool var$0 = $nc(elem)->equalsIgnoreMetadata(this);
	return var$0 || $nc(this->elemtype)->contains(elem);
}

void Type$ArrayType::complete() {
	$nc(this->elemtype)->complete();
}

$TypeMirror* Type$ArrayType::getComponentType() {
	return this->elemtype;
}

$TypeKind* Type$ArrayType::getKind() {
	$init($TypeKind);
	return $TypeKind::ARRAY;
}

$Object* Type$ArrayType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitArray(this, p));
}

$1List* Type$ArrayType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$ArrayType::Type$ArrayType() {
}

$Class* Type$ArrayType::load$($String* name, bool initialize) {
	$loadClass(Type$ArrayType, name, initialize, &_Type$ArrayType_ClassInfo_, allocate$Type$ArrayType);
	return class$;
}

$Class* Type$ArrayType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com