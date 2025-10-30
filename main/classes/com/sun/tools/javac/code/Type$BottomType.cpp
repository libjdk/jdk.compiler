#include <com/sun/tools/javac/code/Type$BottomType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/NullType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef BOT
#undef EMPTY
#undef NULL

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
using $NullType = ::javax::lang::model::type::NullType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$BottomType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type$BottomType::*)()>(&Type$BottomType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$BottomType;", nullptr, $PUBLIC},
	{"constType", "(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"isCompound", "()Z", nullptr, $PUBLIC},
	{"isNullOrReference", "()Z", nullptr, $PUBLIC},
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$BottomType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$BottomType", "com.sun.tools.javac.code.Type", "BottomType", $STATIC},
	{}
};

$ClassInfo _Type$BottomType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Type$BottomType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.NullType",
	nullptr,
	_Type$BottomType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$BottomType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$BottomType($Class* clazz) {
	return $of($alloc(Type$BottomType));
}

$Annotation* Type$BottomType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$BottomType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

$String* Type$BottomType::toString() {
	 return this->$Type::toString();
}

bool Type$BottomType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$BottomType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$BottomType::clone() {
	 return this->$Type::clone();
}

void Type$BottomType::finalize() {
	this->$Type::finalize();
}

void Type$BottomType::init$() {
	$init($TypeMetadata);
	$Type::init$(nullptr, $TypeMetadata::EMPTY);
}

Type$BottomType* Type$BottomType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a bottom type"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$BottomType::getTag() {
	$init($TypeTag);
	return $TypeTag::BOT;
}

$TypeKind* Type$BottomType::getKind() {
	$init($TypeKind);
	return $TypeKind::NULL;
}

bool Type$BottomType::isCompound() {
	return false;
}

$Object* Type$BottomType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitNull(this, p));
}

$Type* Type$BottomType::constType(Object$* value) {
	return this;
}

$String* Type$BottomType::stringValue() {
	return "null"_s;
}

bool Type$BottomType::isNullOrReference() {
	return true;
}

$List* Type$BottomType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$BottomType::Type$BottomType() {
}

$Class* Type$BottomType::load$($String* name, bool initialize) {
	$loadClass(Type$BottomType, name, initialize, &_Type$BottomType_ClassInfo_, allocate$Type$BottomType);
	return class$;
}

$Class* Type$BottomType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com