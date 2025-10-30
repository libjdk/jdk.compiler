#include <com/sun/tools/javac/code/Type$JCVoidType.h>

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
#undef VOID

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

$MethodInfo _Type$JCVoidType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type$JCVoidType::*)()>(&Type$JCVoidType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$JCVoidType;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"isCompound", "()Z", nullptr, $PUBLIC},
	{"isPrimitiveOrVoid", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$JCVoidType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$JCVoidType", "com.sun.tools.javac.code.Type", "JCVoidType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$JCVoidType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$JCVoidType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.NoType",
	nullptr,
	_Type$JCVoidType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$JCVoidType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$JCVoidType($Class* clazz) {
	return $of($alloc(Type$JCVoidType));
}

$Annotation* Type$JCVoidType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$JCVoidType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

$String* Type$JCVoidType::toString() {
	 return this->$Type::toString();
}

bool Type$JCVoidType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$JCVoidType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$JCVoidType::clone() {
	 return this->$Type::clone();
}

void Type$JCVoidType::finalize() {
	this->$Type::finalize();
}

void Type$JCVoidType::init$() {
	$init($TypeMetadata);
	$Type::init$(nullptr, $TypeMetadata::EMPTY);
}

Type$JCVoidType* Type$JCVoidType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a void type"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$JCVoidType::getTag() {
	$init($TypeTag);
	return $TypeTag::VOID;
}

$TypeKind* Type$JCVoidType::getKind() {
	$init($TypeKind);
	return $TypeKind::VOID;
}

bool Type$JCVoidType::isCompound() {
	return false;
}

$Object* Type$JCVoidType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitNoType(this, p));
}

bool Type$JCVoidType::isPrimitiveOrVoid() {
	return true;
}

$List* Type$JCVoidType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$JCVoidType::Type$JCVoidType() {
}

$Class* Type$JCVoidType::load$($String* name, bool initialize) {
	$loadClass(Type$JCVoidType, name, initialize, &_Type$JCVoidType_ClassInfo_, allocate$Type$JCVoidType);
	return class$;
}

$Class* Type$JCVoidType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com