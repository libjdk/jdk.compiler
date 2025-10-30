#include <com/sun/tools/javac/code/Type$WildcardType.h>

#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type$WildcardType$1.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <javax/lang/model/type/WildcardType.h>
#include <jcpp.h>

#undef EMPTY
#undef EXTENDS
#undef SUPER
#undef UNBOUND
#undef WILDCARD

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $Type$WildcardType$1 = ::com::sun::tools::javac::code::Type$WildcardType$1;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;
using $WildcardType = ::javax::lang::model::type::WildcardType;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$WildcardType_FieldInfo_[] = {
	{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$WildcardType, type)},
	{"kind", "Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC, $field(Type$WildcardType, kind)},
	{"bound", "Lcom/sun/tools/javac/code/Type$TypeVar;", nullptr, $PUBLIC, $field(Type$WildcardType, bound)},
	{"isPrintingBound", "Z", nullptr, 0, $field(Type$WildcardType, isPrintingBound)},
	{}
};

$MethodInfo _Type$WildcardType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$WildcardType::*)($Type*,$BoundKind*,$Symbol$TypeSymbol*)>(&Type$WildcardType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$WildcardType::*)($Type*,$BoundKind*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$WildcardType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type$TypeVar;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$WildcardType::*)($Type*,$BoundKind*,$Symbol$TypeSymbol*,$Type$TypeVar*)>(&Type$WildcardType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/BoundKind;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type$TypeVar;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$WildcardType::*)($Type*,$BoundKind*,$Symbol$TypeSymbol*,$Type$TypeVar*,$TypeMetadata*)>(&Type$WildcardType::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$WildcardType;", nullptr, $PUBLIC},
	{"contains", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getExtendsBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getSuperBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"isExtendsBound", "()Z", nullptr, $PUBLIC},
	{"isNullOrReference", "()Z", nullptr, $PUBLIC},
	{"isReference", "()Z", nullptr, $PUBLIC},
	{"isSuperBound", "()Z", nullptr, $PUBLIC},
	{"isUnbound", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withTypeVar", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$WildcardType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$WildcardType", "com.sun.tools.javac.code.Type", "WildcardType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$WildcardType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$WildcardType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$WildcardType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.WildcardType",
	_Type$WildcardType_FieldInfo_,
	_Type$WildcardType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$WildcardType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$WildcardType($Class* clazz) {
	return $of($alloc(Type$WildcardType));
}

$Annotation* Type$WildcardType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$WildcardType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

bool Type$WildcardType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$WildcardType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$WildcardType::clone() {
	 return this->$Type::clone();
}

void Type$WildcardType::finalize() {
	this->$Type::finalize();
}

$Object* Type$WildcardType::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitWildcardType(this, s));
}

void Type$WildcardType::init$($Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym) {
	$init($TypeMetadata);
	Type$WildcardType::init$(type, kind, tsym, nullptr, $TypeMetadata::EMPTY);
}

void Type$WildcardType::init$($Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	Type$WildcardType::init$(type, kind, tsym, nullptr, metadata);
}

void Type$WildcardType::init$($Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym, $Type$TypeVar* bound) {
	$init($TypeMetadata);
	Type$WildcardType::init$(type, kind, tsym, bound, $TypeMetadata::EMPTY);
}

void Type$WildcardType::init$($Type* type, $BoundKind* kind, $Symbol$TypeSymbol* tsym, $Type$TypeVar* bound, $TypeMetadata* metadata) {
	$Type::init$(tsym, metadata);
	this->isPrintingBound = false;
	$set(this, type, $cast($Type, $Assert::checkNonNull(type)));
	$set(this, kind, kind);
	$set(this, bound, bound);
}

Type$WildcardType* Type$WildcardType::cloneWithMetadata($TypeMetadata* md) {
	return $new($Type$WildcardType$1, this, this->type, this->kind, this->tsym, this->bound, md);
}

$TypeTag* Type$WildcardType::getTag() {
	$init($TypeTag);
	return $TypeTag::WILDCARD;
}

bool Type$WildcardType::contains($Type* t) {
	$init($BoundKind);
	return this->kind != $BoundKind::UNBOUND && $nc(this->type)->contains(t);
}

bool Type$WildcardType::isSuperBound() {
	$init($BoundKind);
	return this->kind == $BoundKind::SUPER || this->kind == $BoundKind::UNBOUND;
}

bool Type$WildcardType::isExtendsBound() {
	$init($BoundKind);
	return this->kind == $BoundKind::EXTENDS || this->kind == $BoundKind::UNBOUND;
}

bool Type$WildcardType::isUnbound() {
	$init($BoundKind);
	return this->kind == $BoundKind::UNBOUND;
}

bool Type$WildcardType::isReference() {
	return true;
}

bool Type$WildcardType::isNullOrReference() {
	return true;
}

$Type* Type$WildcardType::withTypeVar($Type* t) {
	if ($equals(this->bound, t)) {
		return this;
	}
	$set(this, bound, $cast($Type$TypeVar, t));
	return this;
}

$String* Type$WildcardType::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, s, $new($StringBuilder));
	appendAnnotationsString(s);
	s->append($($nc(this->kind)->toString()));
	if (this->kind != $BoundKind::UNBOUND) {
		s->append($of(this->type));
	}
	$init($Type);
	if ($Type::moreInfo && this->bound != nullptr && !this->isPrintingBound) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->isPrintingBound = true;
				s->append("{:"_s)->append($($of($nc(this->bound)->getUpperBound())))->append(":}"_s);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->isPrintingBound = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return s->toString();
}

$TypeMirror* Type$WildcardType::getExtendsBound() {
	$init($BoundKind);
	if (this->kind == $BoundKind::EXTENDS) {
		return this->type;
	} else {
		return nullptr;
	}
}

$TypeMirror* Type$WildcardType::getSuperBound() {
	$init($BoundKind);
	if (this->kind == $BoundKind::SUPER) {
		return this->type;
	} else {
		return nullptr;
	}
}

$TypeKind* Type$WildcardType::getKind() {
	$init($TypeKind);
	return $TypeKind::WILDCARD;
}

$Object* Type$WildcardType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitWildcard(this, p));
}

$1List* Type$WildcardType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$WildcardType::Type$WildcardType() {
}

$Class* Type$WildcardType::load$($String* name, bool initialize) {
	$loadClass(Type$WildcardType, name, initialize, &_Type$WildcardType_ClassInfo_, allocate$Type$WildcardType);
	return class$;
}

$Class* Type$WildcardType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com