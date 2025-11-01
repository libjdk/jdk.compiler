#include <com/sun/tools/javac/code/Type$TypeVar.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeVariableSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$TypeVar$1.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVariable.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef EMPTY
#undef TYPEVAR

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$TypeVariableSymbol = ::com::sun::tools::javac::code::Symbol$TypeVariableSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$TypeVar$1 = ::com::sun::tools::javac::code::Type$TypeVar$1;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVariable = ::javax::lang::model::type::TypeVariable;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$TypeVar_FieldInfo_[] = {
	{"_bound", "Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE, $field(Type$TypeVar, _bound)},
	{"lower", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$TypeVar, lower)},
	{"rank_field", "I", nullptr, 0, $field(Type$TypeVar, rank_field)},
	{}
};

$MethodInfo _Type$TypeVar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$TypeVar::*)($Name*,$Symbol*,$Type*)>(&Type$TypeVar::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$TypeVar::*)($Symbol$TypeSymbol*,$Type*,$Type*)>(&Type$TypeVar::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$TypeVar::*)($Symbol$TypeSymbol*,$Type*,$Type*,$TypeMetadata*)>(&Type$TypeVar::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$TypeVar;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getLowerBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"getUpperBound", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"isCaptured", "()Z", nullptr, $PUBLIC},
	{"isNullOrReference", "()Z", nullptr, $PUBLIC},
	{"isReference", "()Z", nullptr, $PUBLIC},
	{"setUpperBound", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$TypeVar_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$TypeVar", "com.sun.tools.javac.code.Type", "TypeVar", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$TypeVar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$TypeVar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$TypeVar",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.TypeVariable",
	_Type$TypeVar_FieldInfo_,
	_Type$TypeVar_MethodInfo_,
	nullptr,
	nullptr,
	_Type$TypeVar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$TypeVar($Class* clazz) {
	return $of($alloc(Type$TypeVar));
}

$Annotation* Type$TypeVar::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$TypeVar::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

$String* Type$TypeVar::toString() {
	 return this->$Type::toString();
}

bool Type$TypeVar::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$TypeVar::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$TypeVar::clone() {
	 return this->$Type::clone();
}

void Type$TypeVar::finalize() {
	this->$Type::finalize();
}

Type$TypeVar::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Type$TypeVar, $TypeVariable, memberClass0$);
}

$Element* Type$TypeVar::MemberClass0$::asElement() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->asElement();
}

$TypeMirror* Type$TypeVar::MemberClass0$::getUpperBound() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->getUpperBound();
}

$TypeMirror* Type$TypeVar::MemberClass0$::getLowerBound() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->getLowerBound();
}

$TypeKind* Type$TypeVar::MemberClass0$::getKind() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->getKind();
}

bool Type$TypeVar::MemberClass0$::equals(Object$* arg0) {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->equals(arg0);
}

int32_t Type$TypeVar::MemberClass0$::hashCode() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->hashCode();
}

$String* Type$TypeVar::MemberClass0$::toString() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->toString();
}

$1List* Type$TypeVar::MemberClass0$::getAnnotationMirrors() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Type$TypeVar::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Type$TypeVar::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Type$TypeVar::MemberClass0$::accept($TypeVisitor* arg0, Object$* arg1) {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->accept(arg0, arg1);
}

$Object* Type$TypeVar::MemberClass0$::clone() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->clone();
}

void Type$TypeVar::MemberClass0$::finalize() {
	return ((Type$TypeVar*)(void*)((int8_t*)(void*)this - $offsetof(Type$TypeVar, memberClass0$)))->finalize();
}

void Type$TypeVar::init$($Name* name, $Symbol* owner, $Type* lower) {
	$init($TypeMetadata);
	$Type::init$(nullptr, $TypeMetadata::EMPTY);
	$set(this, _bound, nullptr);
	this->rank_field = -1;
	$Assert::checkNonNull(lower);
	$set(this, tsym, $new($Symbol$TypeVariableSymbol, 0, name, this, owner));
	this->setUpperBound(nullptr);
	$set(this, lower, lower);
}

void Type$TypeVar::init$($Symbol$TypeSymbol* tsym, $Type* bound, $Type* lower) {
	$init($TypeMetadata);
	Type$TypeVar::init$(tsym, bound, lower, $TypeMetadata::EMPTY);
}

void Type$TypeVar::init$($Symbol$TypeSymbol* tsym, $Type* bound, $Type* lower, $TypeMetadata* metadata) {
	$Type::init$(tsym, metadata);
	$set(this, _bound, nullptr);
	this->rank_field = -1;
	$Assert::checkNonNull(lower);
	this->setUpperBound(bound);
	$set(this, lower, lower);
}

Type$TypeVar* Type$TypeVar::cloneWithMetadata($TypeMetadata* md) {
	return $new($Type$TypeVar$1, this, this->tsym, $(getUpperBound()), this->lower, md);
}

$TypeTag* Type$TypeVar::getTag() {
	$init($TypeTag);
	return $TypeTag::TYPEVAR;
}

$Object* Type$TypeVar::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitTypeVar(this, s));
}

$Type* Type$TypeVar::getUpperBound() {
	return this->_bound;
}

void Type$TypeVar::setUpperBound($Type* bound) {
	$set(this, _bound, bound);
}

$Type* Type$TypeVar::getLowerBound() {
	return this->lower;
}

$TypeKind* Type$TypeVar::getKind() {
	$init($TypeKind);
	return $TypeKind::TYPEVAR;
}

bool Type$TypeVar::isCaptured() {
	return false;
}

bool Type$TypeVar::isReference() {
	return true;
}

bool Type$TypeVar::isNullOrReference() {
	return true;
}

$Object* Type$TypeVar::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitTypeVariable($as($TypeVariable, this), p));
}

$1List* Type$TypeVar::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

$Symbol$TypeSymbol* Type$TypeVar::asElement() {
	return $Type::asElement();
}

Type$TypeVar::Type$TypeVar() {
}

$Class* Type$TypeVar::load$($String* name, bool initialize) {
	$loadClass(Type$TypeVar, name, initialize, &_Type$TypeVar_ClassInfo_, allocate$Type$TypeVar);
	return class$;
}

$Class* Type$TypeVar::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com