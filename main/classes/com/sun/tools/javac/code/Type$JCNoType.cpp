#include <com/sun/tools/javac/code/Type$JCNoType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef EMPTY
#undef NONE

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $1List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $List = ::java::util::List;
using $NoType = ::javax::lang::model::type::NoType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$JCNoType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type$JCNoType::*)()>(&Type$JCNoType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$JCNoType;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"isCompound", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$JCNoType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$JCNoType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$JCNoType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.NoType",
	nullptr,
	_Type$JCNoType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$JCNoType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$JCNoType($Class* clazz) {
	return $of($alloc(Type$JCNoType));
}

$Annotation* Type$JCNoType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$JCNoType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

$String* Type$JCNoType::toString() {
	 return this->$Type::toString();
}

bool Type$JCNoType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$JCNoType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$JCNoType::clone() {
	 return this->$Type::clone();
}

void Type$JCNoType::finalize() {
	this->$Type::finalize();
}

void Type$JCNoType::init$() {
	$init($TypeMetadata);
	$Type::init$(nullptr, $TypeMetadata::EMPTY);
}

Type$JCNoType* Type$JCNoType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a JCNoType"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$JCNoType::getTag() {
	$init($TypeTag);
	return $TypeTag::NONE;
}

$TypeKind* Type$JCNoType::getKind() {
	$init($TypeKind);
	return $TypeKind::NONE;
}

$Object* Type$JCNoType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitNoType(this, p));
}

bool Type$JCNoType::isCompound() {
	return false;
}

$List* Type$JCNoType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$JCNoType::Type$JCNoType() {
}

$Class* Type$JCNoType::load$($String* name, bool initialize) {
	$loadClass(Type$JCNoType, name, initialize, &_Type$JCNoType_ClassInfo_, allocate$Type$JCNoType);
	return class$;
}

$Class* Type$JCNoType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com