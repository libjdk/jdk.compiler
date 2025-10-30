#include <com/sun/tools/javac/code/Type$PackageType.h>

#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef EMPTY
#undef PACKAGE

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $NoType = ::javax::lang::model::type::NoType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Type$PackageType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$PackageSymbol;)V", nullptr, 0, $method(static_cast<void(Type$PackageType::*)($Symbol$PackageSymbol*)>(&Type$PackageType::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$PackageType;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$PackageType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$PackageType", "com.sun.tools.javac.code.Type", "PackageType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$PackageType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$PackageType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.NoType",
	nullptr,
	_Type$PackageType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$PackageType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$PackageType($Class* clazz) {
	return $of($alloc(Type$PackageType));
}

$Annotation* Type$PackageType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$PackageType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

bool Type$PackageType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$PackageType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$PackageType::clone() {
	 return this->$Type::clone();
}

void Type$PackageType::finalize() {
	this->$Type::finalize();
}

void Type$PackageType::init$($Symbol$PackageSymbol* tsym) {
	$init($TypeMetadata);
	$Type::init$(tsym, $TypeMetadata::EMPTY);
}

Type$PackageType* Type$PackageType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a package type"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$PackageType::getTag() {
	$init($TypeTag);
	return $TypeTag::PACKAGE;
}

$Object* Type$PackageType::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitPackageType(this, s));
}

$String* Type$PackageType::toString() {
	return $nc($($nc(this->tsym)->getQualifiedName()))->toString();
}

$TypeKind* Type$PackageType::getKind() {
	$init($TypeKind);
	return $TypeKind::PACKAGE;
}

$Object* Type$PackageType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitNoType(this, p));
}

$1List* Type$PackageType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$PackageType::Type$PackageType() {
}

$Class* Type$PackageType::load$($String* name, bool initialize) {
	$loadClass(Type$PackageType, name, initialize, &_Type$PackageType_ClassInfo_, allocate$Type$PackageType);
	return class$;
}

$Class* Type$PackageType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com