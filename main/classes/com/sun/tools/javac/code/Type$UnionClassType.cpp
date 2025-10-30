#include <com/sun/tools/javac/code/Type$UnionClassType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <javax/lang/model/type/UnionType.h>
#include <jcpp.h>

#undef UNION

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $1List = ::java::util::List;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;
using $UnionType = ::javax::lang::model::type::UnionType;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$UnionClassType_FieldInfo_[] = {
	{"alternatives_field", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/code/Type;>;", $FINAL, $field(Type$UnionClassType, alternatives_field)},
	{}
};

$MethodInfo _Type$UnionClassType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type$ClassType;Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $method(static_cast<void(Type$UnionClassType::*)($Type$ClassType*,$List*)>(&Type$UnionClassType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$UnionClassType;", nullptr, $PUBLIC},
	{"getAlternativeTypes", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getAlternatives", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getLub", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"isCompound", "()Z", nullptr, $PUBLIC},
	{"isUnion", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$UnionClassType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$UnionClassType", "com.sun.tools.javac.code.Type", "UnionClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$UnionClassType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$UnionClassType",
	"com.sun.tools.javac.code.Type$ClassType",
	"javax.lang.model.type.UnionType",
	_Type$UnionClassType_FieldInfo_,
	_Type$UnionClassType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$UnionClassType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$UnionClassType($Class* clazz) {
	return $of($alloc(Type$UnionClassType));
}

$String* Type$UnionClassType::toString() {
	 return this->$Type$ClassType::toString();
}

$1List* Type$UnionClassType::getAnnotationMirrors() {
	 return this->$Type$ClassType::getAnnotationMirrors();
}

$Annotation* Type$UnionClassType::getAnnotation($Class* annotationType) {
	 return this->$Type$ClassType::getAnnotation(annotationType);
}

$AnnotationArray* Type$UnionClassType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type$ClassType::getAnnotationsByType(annotationType);
}

bool Type$UnionClassType::equals(Object$* t) {
	 return this->$Type$ClassType::equals(t);
}

int32_t Type$UnionClassType::hashCode() {
	 return this->$Type$ClassType::hashCode();
}

$Object* Type$UnionClassType::clone() {
	 return this->$Type$ClassType::clone();
}

void Type$UnionClassType::finalize() {
	this->$Type$ClassType::finalize();
}

void Type$UnionClassType::init$($Type$ClassType* ct, $List* alternatives) {
	$Type$ClassType::init$($nc(ct)->outer_field, ct->typarams_field, ct->tsym);
	$set(this, allparams_field, $nc(ct)->allparams_field);
	$set(this, supertype_field, ct->supertype_field);
	$set(this, interfaces_field, ct->interfaces_field);
	$set(this, all_interfaces_field, ct->interfaces_field);
	$set(this, alternatives_field, alternatives);
}

Type$UnionClassType* Type$UnionClassType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a union type"_s));
	$shouldNotReachHere();
}

$Type* Type$UnionClassType::getLub() {
	return $nc(this->tsym)->type;
}

$1List* Type$UnionClassType::getAlternatives() {
	return $Collections::unmodifiableList(this->alternatives_field);
}

bool Type$UnionClassType::isUnion() {
	return true;
}

bool Type$UnionClassType::isCompound() {
	return $nc($(getLub()))->isCompound();
}

$TypeKind* Type$UnionClassType::getKind() {
	$init($TypeKind);
	return $TypeKind::UNION;
}

$Object* Type$UnionClassType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitUnion(this, p));
}

$Iterable* Type$UnionClassType::getAlternativeTypes() {
	return static_cast<$Iterable*>(static_cast<$Collection*>(static_cast<$AbstractCollection*>(this->alternatives_field)));
}

Type$UnionClassType::Type$UnionClassType() {
}

$Class* Type$UnionClassType::load$($String* name, bool initialize) {
	$loadClass(Type$UnionClassType, name, initialize, &_Type$UnionClassType_ClassInfo_, allocate$Type$UnionClassType);
	return class$;
}

$Class* Type$UnionClassType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com