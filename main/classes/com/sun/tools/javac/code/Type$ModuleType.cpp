#include <com/sun/tools/javac/code/Type$ModuleType.h>

#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
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
#undef MODULE

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
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

$MethodInfo _Type$ModuleType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, 0, $method(static_cast<void(Type$ModuleType::*)($Symbol$ModuleSymbol*)>(&Type$ModuleType::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"annotatedType", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type$ModuleType;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;)Lcom/sun/tools/javac/code/Type$ModuleType;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ModuleType;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$ModuleType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$ModuleType", "com.sun.tools.javac.code.Type", "ModuleType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Type$ModuleType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$ModuleType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.NoType",
	nullptr,
	_Type$ModuleType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$ModuleType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$ModuleType($Class* clazz) {
	return $of($alloc(Type$ModuleType));
}

$Annotation* Type$ModuleType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$ModuleType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

bool Type$ModuleType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$ModuleType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$ModuleType::clone() {
	 return this->$Type::clone();
}

void Type$ModuleType::finalize() {
	this->$Type::finalize();
}

void Type$ModuleType::init$($Symbol$ModuleSymbol* tsym) {
	$init($TypeMetadata);
	$Type::init$(tsym, $TypeMetadata::EMPTY);
}

Type$ModuleType* Type$ModuleType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a module type"_s));
	$shouldNotReachHere();
}

Type$ModuleType* Type$ModuleType::annotatedType($List* annos) {
	$throwNew($AssertionError, $of("Cannot annotate a module type"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$ModuleType::getTag() {
	$init($TypeTag);
	return $TypeTag::MODULE;
}

$Object* Type$ModuleType::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitModuleType(this, s));
}

$String* Type$ModuleType::toString() {
	return $nc($($nc(this->tsym)->getQualifiedName()))->toString();
}

$TypeKind* Type$ModuleType::getKind() {
	$init($TypeKind);
	return $TypeKind::MODULE;
}

$Object* Type$ModuleType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitNoType(this, p));
}

$1List* Type$ModuleType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$ModuleType::Type$ModuleType() {
}

$Class* Type$ModuleType::load$($String* name, bool initialize) {
	$loadClass(Type$ModuleType, name, initialize, &_Type$ModuleType_ClassInfo_, allocate$Type$ModuleType);
	return class$;
}

$Class* Type$ModuleType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com