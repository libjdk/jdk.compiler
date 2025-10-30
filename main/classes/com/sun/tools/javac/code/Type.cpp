#include <com/sun/tools/javac/code/Type.h>

#include <com/sun/tools/javac/code/AnnoConstruct.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$1.h>
#include <com/sun/tools/javac/code/Type$2.h>
#include <com/sun/tools/javac/code/Type$3.h>
#include <com/sun/tools/javac/code/Type$4.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$StructuralTypeMapping.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/TypeMetadata$Annotations.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types$TypeMapping.h>
#include <com/sun/tools/javac/code/Types$UniqueType.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Array.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Predicate.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef ANNOTATIONS
#undef ARRAY
#undef EMPTY
#undef OTHER
#undef TYPEVAR

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnoConstruct = ::com::sun::tools::javac::code::AnnoConstruct;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type$1 = ::com::sun::tools::javac::code::Type$1;
using $Type$2 = ::com::sun::tools::javac::code::Type$2;
using $Type$3 = ::com::sun::tools::javac::code::Type$3;
using $Type$4 = ::com::sun::tools::javac::code::Type$4;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$StructuralTypeMapping = ::com::sun::tools::javac::code::Type$StructuralTypeMapping;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeMetadata$Annotations = ::com::sun::tools::javac::code::TypeMetadata$Annotations;
using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DefaultTypeVisitor = ::com::sun::tools::javac::code::Types$DefaultTypeVisitor;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $Types$TypeMapping = ::com::sun::tools::javac::code::Types$TypeMapping;
using $Types$UniqueType = ::com::sun::tools::javac::code::Types$UniqueType;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1Array = ::java::lang::reflect::Array;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $Predicate = ::java::util::function::Predicate;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type_FieldInfo_[] = {
	{"metadata", "Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PROTECTED | $FINAL, $field(Type, metadata)},
	{"noType", "Lcom/sun/tools/javac/code/Type$JCNoType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, noType)},
	{"recoveryType", "Lcom/sun/tools/javac/code/Type$JCNoType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, recoveryType)},
	{"stuckType", "Lcom/sun/tools/javac/code/Type$JCNoType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, stuckType)},
	{"moreInfo", "Z", nullptr, $PUBLIC | $STATIC, $staticField(Type, moreInfo)},
	{"tsym", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC, $field(Type, tsym)},
	{"stripMetadata", "Lcom/sun/tools/javac/code/Types$TypeMapping;", "Lcom/sun/tools/javac/code/Types$TypeMapping<Ljava/lang/Void;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Type, stripMetadata$)},
	{}
};

$MethodInfo _Type_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type::*)($Symbol$TypeSymbol*,$TypeMetadata*)>(&Type::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"allparams", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"annotatedType", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"appendAnnotationsString", "(Ljava/lang/StringBuilder;Z)V", nullptr, $PROTECTED},
	{"appendAnnotationsString", "(Ljava/lang/StringBuilder;)V", nullptr, $PROTECTED},
	{"argtypes", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"asElement", "()Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC},
	{"asMethodType", "()Lcom/sun/tools/javac/code/Type$MethodType;", nullptr, $PUBLIC},
	{"baseType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"baseTypes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*)>(&Type::baseTypes))},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"complete", "()V", nullptr, $PUBLIC},
	{"constType", "(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"constValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"contains", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($List*,Type*)>(&Type::contains))},
	{"containsAny", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC},
	{"containsAny", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($List*,$List*)>(&Type::containsAny))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equalsIgnoreMetadata", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"filter", "(Lcom/sun/tools/javac/util/List;Ljava/util/function/Predicate;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*,$Predicate*)>(&Type::filter))},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)TA;", $PUBLIC},
	{"getAnnotationMirrors", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", $PUBLIC},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PUBLIC},
	{"getEnclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getLowerBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getMetadata", "()Lcom/sun/tools/javac/code/TypeMetadata;", nullptr, $PUBLIC},
	{"getMetadataOfKind", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;)Lcom/sun/tools/javac/code/TypeMetadata$Entry;", nullptr, $PUBLIC},
	{"getModelType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getModelTypes", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*)>(&Type::getModelTypes))},
	{"getOriginalType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getParameterTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getReceiverType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getReturnType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThrownTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getUpperBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"hasTag", "(Lcom/sun/tools/javac/code/TypeTag;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAnnotated", "()Z", nullptr, $PUBLIC},
	{"isCompound", "()Z", nullptr, $PUBLIC},
	{"isErroneous", "()Z", nullptr, $PUBLIC},
	{"isErroneous", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($List*)>(&Type::isErroneous))},
	{"isExtendsBound", "()Z", nullptr, $PUBLIC},
	{"isFalse", "()Z", nullptr, $PUBLIC},
	{"isFinal", "()Z", nullptr, $PUBLIC},
	{"isIntegral", "()Z", nullptr, $PUBLIC},
	{"isInterface", "()Z", nullptr, $PUBLIC},
	{"isIntersection", "()Z", nullptr, $PUBLIC},
	{"isNullOrReference", "()Z", nullptr, $PUBLIC},
	{"isNumeric", "()Z", nullptr, $PUBLIC},
	{"isParameterized", "()Z", nullptr, $PUBLIC},
	{"isPartial", "()Z", nullptr, $PUBLIC},
	{"isPrimitive", "()Z", nullptr, $PUBLIC},
	{"isPrimitiveOrVoid", "()Z", nullptr, $PUBLIC},
	{"isRaw", "()Z", nullptr, $PUBLIC},
	{"isReference", "()Z", nullptr, $PUBLIC},
	{"isSuperBound", "()Z", nullptr, $PUBLIC},
	{"isTrue", "()Z", nullptr, $PUBLIC},
	{"isUnbound", "()Z", nullptr, $PUBLIC},
	{"isUnion", "()Z", nullptr, $PUBLIC},
	{"map", "(Lcom/sun/tools/javac/code/Types$TypeMapping;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", "<Z:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Types$TypeMapping<TZ;>;TZ;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"map", "(Lcom/sun/tools/javac/code/Types$TypeMapping;)Lcom/sun/tools/javac/code/Type;", "<Z:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Types$TypeMapping<TZ;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC},
	{"needsStripping", "()Z", nullptr, $PROTECTED},
	{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"stripMetadata", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"stripMetadataIfNeeded", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Lcom/sun/tools/javac/util/List;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($List*)>(&Type::toString))},
	{"typeNoMetadata", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PROTECTED},
	{"withTypeVar", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.Type$Visitor", "com.sun.tools.javac.code.Type", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$UnknownType", "com.sun.tools.javac.code.Type", "UnknownType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ErrorType", "com.sun.tools.javac.code.Type", "ErrorType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$BottomType", "com.sun.tools.javac.code.Type", "BottomType", $STATIC},
	{"com.sun.tools.javac.code.Type$JCVoidType", "com.sun.tools.javac.code.Type", "JCVoidType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ForAll", "com.sun.tools.javac.code.Type", "ForAll", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$DelegatedType", "com.sun.tools.javac.code.Type", "DelegatedType", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$CapturedType", "com.sun.tools.javac.code.Type", "CapturedType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$TypeVar", "com.sun.tools.javac.code.Type", "TypeVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ModuleType", "com.sun.tools.javac.code.Type", "ModuleType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$PackageType", "com.sun.tools.javac.code.Type", "PackageType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$MethodType", "com.sun.tools.javac.code.Type", "MethodType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ArrayType", "com.sun.tools.javac.code.Type", "ArrayType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$IntersectionClassType", "com.sun.tools.javac.code.Type", "IntersectionClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$UnionClassType", "com.sun.tools.javac.code.Type", "UnionClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ErasedClassType", "com.sun.tools.javac.code.Type", "ErasedClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$WildcardType", "com.sun.tools.javac.code.Type", "WildcardType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$JCPrimitiveType", "com.sun.tools.javac.code.Type", "JCPrimitiveType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$StructuralTypeMapping", "com.sun.tools.javac.code.Type", "StructuralTypeMapping", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.code.Type$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Type",
	"com.sun.tools.javac.code.AnnoConstruct",
	"javax.lang.model.type.TypeMirror,com.sun.tools.javac.jvm.PoolConstant",
	_Type_FieldInfo_,
	_Type_MethodInfo_,
	nullptr,
	nullptr,
	_Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type$5,com.sun.tools.javac.code.Type$Visitor,com.sun.tools.javac.code.Type$UnknownType,com.sun.tools.javac.code.Type$ErrorType,com.sun.tools.javac.code.Type$ErrorType$1,com.sun.tools.javac.code.Type$BottomType,com.sun.tools.javac.code.Type$JCVoidType,com.sun.tools.javac.code.Type$JCNoType,com.sun.tools.javac.code.Type$UndetVar,com.sun.tools.javac.code.Type$UndetVar$InferenceBound,com.sun.tools.javac.code.Type$UndetVar$InferenceBound$3,com.sun.tools.javac.code.Type$UndetVar$InferenceBound$2,com.sun.tools.javac.code.Type$UndetVar$InferenceBound$1,com.sun.tools.javac.code.Type$UndetVar$UndetVarListener,com.sun.tools.javac.code.Type$UndetVar$Kind,com.sun.tools.javac.code.Type$UndetVar$1,com.sun.tools.javac.code.Type$ForAll,com.sun.tools.javac.code.Type$DelegatedType,com.sun.tools.javac.code.Type$CapturedType,com.sun.tools.javac.code.Type$CapturedType$1,com.sun.tools.javac.code.Type$TypeVar,com.sun.tools.javac.code.Type$TypeVar$1,com.sun.tools.javac.code.Type$ModuleType,com.sun.tools.javac.code.Type$PackageType,com.sun.tools.javac.code.Type$MethodType,com.sun.tools.javac.code.Type$ArrayType,com.sun.tools.javac.code.Type$ArrayType$2,com.sun.tools.javac.code.Type$ArrayType$1,com.sun.tools.javac.code.Type$IntersectionClassType,com.sun.tools.javac.code.Type$UnionClassType,com.sun.tools.javac.code.Type$ErasedClassType,com.sun.tools.javac.code.Type$ClassType,com.sun.tools.javac.code.Type$ClassType$2,com.sun.tools.javac.code.Type$ClassType$1,com.sun.tools.javac.code.Type$WildcardType,com.sun.tools.javac.code.Type$WildcardType$1,com.sun.tools.javac.code.Type$JCPrimitiveType,com.sun.tools.javac.code.Type$JCPrimitiveType$2,com.sun.tools.javac.code.Type$JCPrimitiveType$1,com.sun.tools.javac.code.Type$StructuralTypeMapping,com.sun.tools.javac.code.Type$StructuralTypeMapping$4,com.sun.tools.javac.code.Type$StructuralTypeMapping$3,com.sun.tools.javac.code.Type$StructuralTypeMapping$2,com.sun.tools.javac.code.Type$StructuralTypeMapping$1,com.sun.tools.javac.code.Type$4,com.sun.tools.javac.code.Type$3,com.sun.tools.javac.code.Type$2,com.sun.tools.javac.code.Type$1"
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

$Object* Type::clone() {
	 return this->$AnnoConstruct::clone();
}

void Type::finalize() {
	this->$AnnoConstruct::finalize();
}

$Type$JCNoType* Type::noType = nullptr;
$Type$JCNoType* Type::recoveryType = nullptr;
$Type$JCNoType* Type::stuckType = nullptr;
bool Type::moreInfo = false;
$Types$TypeMapping* Type::stripMetadata$ = nullptr;

$TypeMetadata* Type::getMetadata() {
	return this->metadata;
}

$TypeMetadata$Entry* Type::getMetadataOfKind($TypeMetadata$Entry$Kind* kind) {
	return this->metadata != nullptr ? $nc(this->metadata)->get(kind) : ($TypeMetadata$Entry*)nullptr;
}

int32_t Type::poolTag() {
	$throwNew($AssertionError, $of("Invalid pool entry"_s));
	$shouldNotReachHere();
}

$Object* Type::poolKey($Types* types) {
	return $of($new($Types$UniqueType, this, types));
}

bool Type::hasTag($TypeTag* tag) {
	return tag == getTag();
}

bool Type::isNumeric() {
	return false;
}

bool Type::isIntegral() {
	return false;
}

bool Type::isPrimitive() {
	return false;
}

bool Type::isPrimitiveOrVoid() {
	return false;
}

bool Type::isReference() {
	return false;
}

bool Type::isNullOrReference() {
	return false;
}

bool Type::isPartial() {
	return false;
}

$Object* Type::constValue() {
	return $of(nullptr);
}

bool Type::isFalse() {
	return false;
}

bool Type::isTrue() {
	return false;
}

Type* Type::getModelType() {
	return this;
}

$List* Type::getModelTypes($List* ts) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, lb, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Type, t, $cast(Type, i$->next()));
			lb->append($($nc(t)->getModelType()));
		}
	}
	return lb->toList();
}

Type* Type::getOriginalType() {
	return this;
}

$Object* Type::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitType(this, s));
}

void Type::init$($Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$AnnoConstruct::init$();
	$Assert::checkNonNull(metadata);
	$set(this, tsym, tsym);
	$set(this, metadata, metadata);
}

Type* Type::map($Types$TypeMapping* mapping, Object$* arg) {
	return $cast(Type, $nc(mapping)->visit(this, arg));
}

Type* Type::map($Types$TypeMapping* mapping) {
	return $cast(Type, $nc(mapping)->visit(this, nullptr));
}

Type* Type::constType(Object$* constValue) {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

Type* Type::baseType() {
	return this;
}

Type* Type::typeNoMetadata() {
	$init($TypeMetadata);
	return this->metadata == $TypeMetadata::EMPTY ? this : baseType();
}

bool Type::needsStripping() {
	return false;
}

Type* Type::stripMetadataIfNeeded() {
	return needsStripping() ? $cast(Type, accept(static_cast<$Type$Visitor*>(Type::stripMetadata$), ($Object*)nullptr)) : this;
}

Type* Type::stripMetadata() {
	return $cast(Type, accept(static_cast<$Type$Visitor*>(Type::stripMetadata$), ($Object*)nullptr));
}

Type* Type::annotatedType($List* annos) {
	$useLocalCurrentObjectStackCache();
	$var($TypeMetadata$Entry, annoMetadata, $new($TypeMetadata$Annotations, annos));
	return cloneWithMetadata($($nc(this->metadata)->combine(annoMetadata)));
}

bool Type::isAnnotated() {
	$useLocalCurrentObjectStackCache();
	$init($TypeMetadata$Entry$Kind);
	$var($TypeMetadata$Annotations, metadata, $cast($TypeMetadata$Annotations, getMetadataOfKind($TypeMetadata$Entry$Kind::ANNOTATIONS)));
	return nullptr != metadata && !$nc($(metadata->getAnnotations()))->isEmpty();
}

$1List* Type::getAnnotationMirrors() {
	$init($TypeMetadata$Entry$Kind);
	$var($TypeMetadata$Annotations, metadata, $cast($TypeMetadata$Annotations, getMetadataOfKind($TypeMetadata$Entry$Kind::ANNOTATIONS)));
	return (metadata == nullptr ? $List::nil() : $nc(metadata)->getAnnotations());
}

$Annotation* Type::getAnnotation($Class* annotationType) {
	return nullptr;
}

$AnnotationArray* Type::getAnnotationsByType($Class* annotationType) {
	$var($AnnotationArray, tmp, $cast($AnnotationArray, $1Array::newInstance(annotationType, 0)));
	return tmp;
}

$List* Type::baseTypes($List* ts) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	if ($nc(ts)->nonEmpty()) {
		$var(Type, t, $nc(($cast(Type, ts->head)))->baseType());
		$var($List, baseTypes, Type::baseTypes(ts->tail));
		if (!$equals(t, ts->head) || baseTypes != ts->tail) {
			return $nc(baseTypes)->prepend(t);
		}
	}
	return ts;
}

void Type::appendAnnotationsString($StringBuilder* sb, bool prefix) {
	if (isAnnotated()) {
		if (prefix) {
			$nc(sb)->append(" "_s);
		}
		$nc(sb)->append($($of(getAnnotationMirrors())));
		sb->append(" "_s);
	}
}

void Type::appendAnnotationsString($StringBuilder* sb) {
	appendAnnotationsString(sb, false);
}

$String* Type::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	appendAnnotationsString(sb);
	if (this->tsym == nullptr || $nc(this->tsym)->name == nullptr) {
		sb->append("<none>"_s);
	} else {
		sb->append($($nc($nc(this->tsym)->name)->toString()));
	}
	$init($TypeTag);
	if (Type::moreInfo && hasTag($TypeTag::TYPEVAR)) {
		sb->append(hashCode());
	}
	return sb->toString();
}

$String* Type::toString($List* ts) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	if ($nc(ts)->isEmpty()) {
		return ""_s;
	} else {
		$var($StringBuilder, buf, $new($StringBuilder));
		buf->append($($nc(($cast(Type, ts->head)))->toString()));
		{
			$var($List, l, ts->tail);
			for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
				buf->append(","_s)->append($($nc(($cast(Type, l->head)))->toString()));
			}
		}
		return buf->toString();
	}
}

$String* Type::stringValue() {
	$useLocalCurrentObjectStackCache();
	$var($Object, cv, $Assert::checkNonNull($(constValue())));
	return $nc($of(cv))->toString();
}

bool Type::equals(Object$* t) {
	return $equals(this, t);
}

bool Type::equalsIgnoreMetadata(Type* t) {
	$useLocalCurrentObjectStackCache();
	return $nc($(typeNoMetadata()))->equals($($nc(t)->typeNoMetadata()));
}

int32_t Type::hashCode() {
	return $AnnoConstruct::hashCode();
}

$String* Type::argtypes(bool varargs) {
	$useLocalCurrentObjectStackCache();
	$var($List, args, getParameterTypes());
	if (!varargs) {
		return $nc(args)->toString();
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	while ($nc($nc(args)->tail)->nonEmpty()) {
		buf->append(args->head);
		$assign(args, args->tail);
		buf->append(u',');
	}
	$init($TypeTag);
	if ($nc(($cast(Type, $nc(args)->head)))->hasTag($TypeTag::ARRAY)) {
		buf->append($of($nc(($cast($Type$ArrayType, args->head)))->elemtype));
		if ($nc($($cast($List, $nc(($cast(Type, args->head)))->getAnnotationMirrors())))->nonEmpty()) {
			buf->append($($of($nc(($cast(Type, args->head)))->getAnnotationMirrors())));
		}
		buf->append("..."_s);
	} else {
		buf->append(args->head);
	}
	return buf->toString();
}

$List* Type::getTypeArguments() {
	return $List::nil();
}

Type* Type::getEnclosingType() {
	return nullptr;
}

$List* Type::getParameterTypes() {
	return $List::nil();
}

Type* Type::getReturnType() {
	return nullptr;
}

Type* Type::getReceiverType() {
	return nullptr;
}

$List* Type::getThrownTypes() {
	return $List::nil();
}

Type* Type::getUpperBound() {
	return nullptr;
}

Type* Type::getLowerBound() {
	return nullptr;
}

$List* Type::allparams() {
	return $List::nil();
}

bool Type::isErroneous() {
	return false;
}

bool Type::isErroneous($List* ts) {
	$init(Type);
	{
		$var($List, l, ts);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			if ($nc(($cast(Type, l->head)))->isErroneous()) {
				return true;
			}
		}
	}
	return false;
}

bool Type::isParameterized() {
	return false;
}

bool Type::isRaw() {
	return false;
}

bool Type::isCompound() {
	return false;
}

bool Type::isIntersection() {
	return false;
}

bool Type::isUnion() {
	return false;
}

bool Type::isInterface() {
	return ((int64_t)($nc(this->tsym)->flags() & (uint64_t)(int64_t)512)) != 0;
}

bool Type::isFinal() {
	return ((int64_t)($nc(this->tsym)->flags() & (uint64_t)(int64_t)16)) != 0;
}

bool Type::contains(Type* t) {
	return $nc(t)->equalsIgnoreMetadata(this);
}

bool Type::contains($List* ts, Type* t) {
	$init(Type);
	{
		$var($List, l, ts);
		for (; $nc(l)->tail != nullptr; $assign(l, $nc(l)->tail)) {
			if ($nc(($cast(Type, l->head)))->contains(t)) {
				return true;
			}
		}
	}
	return false;
}

bool Type::containsAny($List* ts) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Type, t, $cast(Type, i$->next()));
			if (this->contains(t)) {
				return true;
			}
		}
	}
	return false;
}

bool Type::containsAny($List* ts1, $List* ts2) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(ts1)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Type, t, $cast(Type, i$->next()));
			if ($nc(t)->containsAny(ts2)) {
				return true;
			}
		}
	}
	return false;
}

$List* Type::filter($List* ts, $Predicate* tf) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(ts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Type, t, $cast(Type, i$->next()));
			{
				if ($nc(tf)->test(t)) {
					buf->append(t);
				}
			}
		}
	}
	return buf->toList();
}

bool Type::isSuperBound() {
	return false;
}

bool Type::isExtendsBound() {
	return false;
}

bool Type::isUnbound() {
	return false;
}

Type* Type::withTypeVar(Type* t) {
	return this;
}

$Type$MethodType* Type::asMethodType() {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

void Type::complete() {
}

$Symbol$TypeSymbol* Type::asElement() {
	return this->tsym;
}

$TypeKind* Type::getKind() {
	$init($TypeKind);
	return $TypeKind::OTHER;
}

$Object* Type::accept($TypeVisitor* v, Object$* p) {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

void clinit$Type($Class* class$) {
	$assignStatic(Type::noType, $new($Type$1));
	$assignStatic(Type::recoveryType, $new($Type$2));
	$assignStatic(Type::stuckType, $new($Type$3));
	Type::moreInfo = false;
	$assignStatic(Type::stripMetadata$, $new($Type$4));
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, clinit$Type, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com