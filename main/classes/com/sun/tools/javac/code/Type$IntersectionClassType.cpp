#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef INTERSECTION

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Collections = ::java::util::Collections;
using $1List = ::java::util::List;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$IntersectionClassType_FieldInfo_[] = {
	{"allInterfaces", "Z", nullptr, $PUBLIC, $field(Type$IntersectionClassType, allInterfaces)},
	{}
};

$MethodInfo _Type$IntersectionClassType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Z)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Z)V", $PUBLIC, $method(static_cast<void(Type$IntersectionClassType::*)($List*,$Symbol$ClassSymbol*,bool)>(&Type$IntersectionClassType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$IntersectionClassType;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC},
	{"getComponents", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getExplicitComponents", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"isCompound", "()Z", nullptr, $PUBLIC},
	{"isIntersection", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$IntersectionClassType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$IntersectionClassType", "com.sun.tools.javac.code.Type", "IntersectionClassType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$ClassType", "com.sun.tools.javac.code.Type", "ClassType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$IntersectionClassType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$IntersectionClassType",
	"com.sun.tools.javac.code.Type$ClassType",
	"javax.lang.model.type.IntersectionType",
	_Type$IntersectionClassType_FieldInfo_,
	_Type$IntersectionClassType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$IntersectionClassType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$IntersectionClassType($Class* clazz) {
	return $of($alloc(Type$IntersectionClassType));
}

$String* Type$IntersectionClassType::toString() {
	 return this->$Type$ClassType::toString();
}

$1List* Type$IntersectionClassType::getAnnotationMirrors() {
	 return this->$Type$ClassType::getAnnotationMirrors();
}

$Annotation* Type$IntersectionClassType::getAnnotation($Class* annotationType) {
	 return this->$Type$ClassType::getAnnotation(annotationType);
}

$AnnotationArray* Type$IntersectionClassType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type$ClassType::getAnnotationsByType(annotationType);
}

bool Type$IntersectionClassType::equals(Object$* t) {
	 return this->$Type$ClassType::equals(t);
}

int32_t Type$IntersectionClassType::hashCode() {
	 return this->$Type$ClassType::hashCode();
}

$Object* Type$IntersectionClassType::clone() {
	 return this->$Type$ClassType::clone();
}

void Type$IntersectionClassType::finalize() {
	this->$Type$ClassType::finalize();
}

void Type$IntersectionClassType::init$($List* bounds, $Symbol$ClassSymbol* csym, bool allInterfaces) {
	$init($Type);
	$Type$ClassType::init$($Type::noType, $($List::nil()), csym);
	this->allInterfaces = allInterfaces;
	$Assert::check(((int64_t)($nc(csym)->flags() & (uint64_t)(int64_t)0x01000000)) != 0);
	$set(this, supertype_field, $cast($Type, $nc(bounds)->head));
	$set(this, interfaces_field, bounds->tail);
	bool var$0 = !$nc($nc(this->supertype_field)->tsym)->isCompleted();
	$Assert::check(var$0 || !$nc(this->supertype_field)->isInterface(), $of(this->supertype_field));
}

Type$IntersectionClassType* Type$IntersectionClassType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to an intersection type"_s));
	$shouldNotReachHere();
}

$1List* Type$IntersectionClassType::getBounds() {
	return $Collections::unmodifiableList($(getExplicitComponents()));
}

bool Type$IntersectionClassType::isCompound() {
	return true;
}

$List* Type$IntersectionClassType::getComponents() {
	return $nc(this->interfaces_field)->prepend(this->supertype_field);
}

bool Type$IntersectionClassType::isIntersection() {
	return true;
}

$List* Type$IntersectionClassType::getExplicitComponents() {
	return this->allInterfaces ? this->interfaces_field : getComponents();
}

$TypeKind* Type$IntersectionClassType::getKind() {
	$init($TypeKind);
	return $TypeKind::INTERSECTION;
}

$Object* Type$IntersectionClassType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitIntersection(this, p));
}

Type$IntersectionClassType::Type$IntersectionClassType() {
}

$Class* Type$IntersectionClassType::load$($String* name, bool initialize) {
	$loadClass(Type$IntersectionClassType, name, initialize, &_Type$IntersectionClassType_ClassInfo_, allocate$Type$IntersectionClassType);
	return class$;
}

$Class* Type$IntersectionClassType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com