#include <com/sun/tools/javac/code/Type$ForAll.h>

#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef EXECUTABLE
#undef FORALL

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$DelegatedType = ::com::sun::tools::javac::code::Type$DelegatedType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $ExecutableType = ::javax::lang::model::type::ExecutableType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$ForAll_FieldInfo_[] = {
	{"tvars", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$ForAll, tvars)},
	{}
};

$MethodInfo _Type$ForAll_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)V", $PUBLIC, $method(static_cast<void(Type$ForAll::*)($List*,$Type*)>(&Type$ForAll::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asMethodType", "()Lcom/sun/tools/javac/code/Type$MethodType;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$ForAll;", nullptr, $PUBLIC},
	{"complete", "()V", nullptr, $PUBLIC},
	{"contains", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getParameterTypes", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getReceiverType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getReturnType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getThrownTypes", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTypeArguments", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getTypeVariables", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type$TypeVar;>;", $PUBLIC},
	{"isErroneous", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$ForAll_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$ForAll", "com.sun.tools.javac.code.Type", "ForAll", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$DelegatedType", "com.sun.tools.javac.code.Type", "DelegatedType", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Type$ForAll_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$ForAll",
	"com.sun.tools.javac.code.Type$DelegatedType",
	"javax.lang.model.type.ExecutableType",
	_Type$ForAll_FieldInfo_,
	_Type$ForAll_MethodInfo_,
	nullptr,
	nullptr,
	_Type$ForAll_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$ForAll($Class* clazz) {
	return $of($alloc(Type$ForAll));
}

$1List* Type$ForAll::getAnnotationMirrors() {
	 return this->$Type$DelegatedType::getAnnotationMirrors();
}

$Annotation* Type$ForAll::getAnnotation($Class* annotationType) {
	 return this->$Type$DelegatedType::getAnnotation(annotationType);
}

$AnnotationArray* Type$ForAll::getAnnotationsByType($Class* annotationType) {
	 return this->$Type$DelegatedType::getAnnotationsByType(annotationType);
}

bool Type$ForAll::equals(Object$* t) {
	 return this->$Type$DelegatedType::equals(t);
}

int32_t Type$ForAll::hashCode() {
	 return this->$Type$DelegatedType::hashCode();
}

$Object* Type$ForAll::clone() {
	 return this->$Type$DelegatedType::clone();
}

void Type$ForAll::finalize() {
	this->$Type$DelegatedType::finalize();
}

Type$ForAll::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Type$ForAll, $ExecutableType, memberClass0$);
}

$1List* Type$ForAll::MemberClass0$::getTypeVariables() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getTypeVariables();
}

$TypeMirror* Type$ForAll::MemberClass0$::getReturnType() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getReturnType();
}

$1List* Type$ForAll::MemberClass0$::getParameterTypes() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getParameterTypes();
}

$TypeMirror* Type$ForAll::MemberClass0$::getReceiverType() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getReceiverType();
}

$1List* Type$ForAll::MemberClass0$::getThrownTypes() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getThrownTypes();
}

$TypeKind* Type$ForAll::MemberClass0$::getKind() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getKind();
}

bool Type$ForAll::MemberClass0$::equals(Object$* arg0) {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->equals(arg0);
}

int32_t Type$ForAll::MemberClass0$::hashCode() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->hashCode();
}

$String* Type$ForAll::MemberClass0$::toString() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->toString();
}

$1List* Type$ForAll::MemberClass0$::getAnnotationMirrors() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Type$ForAll::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Type$ForAll::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Type$ForAll::MemberClass0$::accept($TypeVisitor* arg0, Object$* arg1) {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->accept(arg0, arg1);
}

$Object* Type$ForAll::MemberClass0$::clone() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->clone();
}

void Type$ForAll::MemberClass0$::finalize() {
	return ((Type$ForAll*)(void*)((int8_t*)(void*)this - $offsetof(Type$ForAll, memberClass0$)))->finalize();
}

void Type$ForAll::init$($List* tvars, $Type* qtype) {
	$init($TypeTag);
	$Type$DelegatedType::init$($TypeTag::FORALL, $cast($Type$MethodType, qtype));
	$set(this, tvars, tvars);
}

Type$ForAll* Type$ForAll::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a forall type"_s));
	$shouldNotReachHere();
}

$Object* Type$ForAll::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitForAll(this, s));
}

$String* Type$ForAll::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	appendAnnotationsString(sb);
	sb->append(u'<');
	sb->append($of(this->tvars));
	sb->append(u'>');
	sb->append($of(this->qtype));
	return sb->toString();
}

$List* Type$ForAll::getTypeArguments() {
	return this->tvars;
}

bool Type$ForAll::isErroneous() {
	return $nc(this->qtype)->isErroneous();
}

bool Type$ForAll::contains($Type* elem) {
	return $nc(this->qtype)->contains(elem);
}

$Type$MethodType* Type$ForAll::asMethodType() {
	return $cast($Type$MethodType, this->qtype);
}

void Type$ForAll::complete() {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, l, this->tvars);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$nc($($nc(($cast($Type$TypeVar, l->head)))->getUpperBound()))->complete();
		}
	}
	$nc(this->qtype)->complete();
}

$List* Type$ForAll::getTypeVariables() {
	$load($Type$TypeVar);
	return $List::convert($Type$TypeVar::class$, $(getTypeArguments()));
}

$TypeKind* Type$ForAll::getKind() {
	$init($TypeKind);
	return $TypeKind::EXECUTABLE;
}

$Object* Type$ForAll::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitExecutable($as($ExecutableType, this), p));
}

$List* Type$ForAll::getThrownTypes() {
	return $Type$DelegatedType::getThrownTypes();
}

$Type* Type$ForAll::getReceiverType() {
	return $Type$DelegatedType::getReceiverType();
}

$List* Type$ForAll::getParameterTypes() {
	return $Type$DelegatedType::getParameterTypes();
}

$Type* Type$ForAll::getReturnType() {
	return $Type$DelegatedType::getReturnType();
}

Type$ForAll::Type$ForAll() {
}

$Class* Type$ForAll::load$($String* name, bool initialize) {
	$loadClass(Type$ForAll, name, initialize, &_Type$ForAll_ClassInfo_, allocate$Type$ForAll);
	return class$;
}

$Class* Type$ForAll::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com