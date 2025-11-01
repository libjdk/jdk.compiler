#include <com/sun/tools/javac/code/Type$MethodType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef EMPTY
#undef EXECUTABLE
#undef METHOD

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$Visitor = ::com::sun::tools::javac::code::Type$Visitor;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
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

$FieldInfo _Type$MethodType_FieldInfo_[] = {
	{"argtypes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$MethodType, argtypes$)},
	{"restype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$MethodType, restype)},
	{"thrown", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $field(Type$MethodType, thrown)},
	{"recvtype", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $field(Type$MethodType, recvtype)},
	{}
};

$MethodInfo _Type$MethodType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", $PUBLIC, $method(static_cast<void(Type$MethodType::*)($List*,$Type*,$List*,$Symbol$TypeSymbol*)>(&Type$MethodType::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Type$Visitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;S:Ljava/lang/Object;>(Lcom/sun/tools/javac/code/Type$Visitor<TR;TS;>;TS;)TR;", $PUBLIC},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"asElement", "()Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $PUBLIC},
	{"asMethodType", "()Lcom/sun/tools/javac/code/Type$MethodType;", nullptr, $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$MethodType;", nullptr, $PUBLIC},
	{"complete", "()V", nullptr, $PUBLIC},
	{"contains", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getParameterTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getReceiverType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getReturnType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"getThrownTypes", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC},
	{"getTypeVariables", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type$TypeVar;>;", $PUBLIC},
	{"isErroneous", "()Z", nullptr, $PUBLIC},
	{"*poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"poolTag", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$MethodType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$MethodType", "com.sun.tools.javac.code.Type", "MethodType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Type$MethodType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$MethodType",
	"com.sun.tools.javac.code.Type",
	"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,javax.lang.model.type.ExecutableType",
	_Type$MethodType_FieldInfo_,
	_Type$MethodType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$MethodType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$MethodType($Class* clazz) {
	return $of($alloc(Type$MethodType));
}

$Object* Type$MethodType::poolKey($Types* types) {
	 return this->$Type::poolKey(types);
}

$Annotation* Type$MethodType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$MethodType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

bool Type$MethodType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$MethodType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$MethodType::clone() {
	 return this->$Type::clone();
}

void Type$MethodType::finalize() {
	this->$Type::finalize();
}

Type$MethodType::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Type$MethodType, $ExecutableType, memberClass0$);
}

$1List* Type$MethodType::MemberClass0$::getTypeVariables() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getTypeVariables();
}

$TypeMirror* Type$MethodType::MemberClass0$::getReturnType() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getReturnType();
}

$1List* Type$MethodType::MemberClass0$::getParameterTypes() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getParameterTypes();
}

$TypeMirror* Type$MethodType::MemberClass0$::getReceiverType() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getReceiverType();
}

$1List* Type$MethodType::MemberClass0$::getThrownTypes() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getThrownTypes();
}

$TypeKind* Type$MethodType::MemberClass0$::getKind() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getKind();
}

bool Type$MethodType::MemberClass0$::equals(Object$* arg0) {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->equals(arg0);
}

int32_t Type$MethodType::MemberClass0$::hashCode() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->hashCode();
}

$String* Type$MethodType::MemberClass0$::toString() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->toString();
}

$1List* Type$MethodType::MemberClass0$::getAnnotationMirrors() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getAnnotationMirrors();
}

$Annotation* Type$MethodType::MemberClass0$::getAnnotation($Class* arg0) {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getAnnotation(arg0);
}

$AnnotationArray* Type$MethodType::MemberClass0$::getAnnotationsByType($Class* arg0) {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->getAnnotationsByType(arg0);
}

$Object* Type$MethodType::MemberClass0$::accept($TypeVisitor* arg0, Object$* arg1) {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->accept(arg0, arg1);
}

$Object* Type$MethodType::MemberClass0$::clone() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->clone();
}

void Type$MethodType::MemberClass0$::finalize() {
	return ((Type$MethodType*)(void*)((int8_t*)(void*)this - $offsetof(Type$MethodType, memberClass0$)))->finalize();
}

void Type$MethodType::init$($List* argtypes, $Type* restype, $List* thrown, $Symbol$TypeSymbol* methodClass) {
	$init($TypeMetadata);
	$Type::init$(methodClass, $TypeMetadata::EMPTY);
	$set(this, argtypes$, argtypes);
	$set(this, restype, restype);
	$set(this, thrown, thrown);
}

Type$MethodType* Type$MethodType::cloneWithMetadata($TypeMetadata* md) {
	$throwNew($AssertionError, $of("Cannot add metadata to a method type"_s));
	$shouldNotReachHere();
}

$TypeTag* Type$MethodType::getTag() {
	$init($TypeTag);
	return $TypeTag::METHOD;
}

$Object* Type$MethodType::accept($Type$Visitor* v, Object$* s) {
	return $of($nc(v)->visitMethodType(this, s));
}

$String* Type$MethodType::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	appendAnnotationsString(sb);
	sb->append(u'(');
	sb->append($of(this->argtypes$));
	sb->append(u')');
	sb->append($of(this->restype));
	return sb->toString();
}

$List* Type$MethodType::getParameterTypes() {
	return this->argtypes$;
}

$Type* Type$MethodType::getReturnType() {
	return this->restype;
}

$Type* Type$MethodType::getReceiverType() {
	return this->recvtype;
}

$List* Type$MethodType::getThrownTypes() {
	return this->thrown;
}

bool Type$MethodType::isErroneous() {
	bool var$0 = $Type::isErroneous(this->argtypes$);
	return var$0 || this->restype != nullptr && $nc(this->restype)->isErroneous();
}

int32_t Type$MethodType::poolTag() {
	return $ClassFile::CONSTANT_MethodType;
}

bool Type$MethodType::contains($Type* elem) {
	bool var$2 = $nc(elem)->equalsIgnoreMetadata(this);
	bool var$1 = var$2 || $Type::contains(this->argtypes$, elem);
	bool var$0 = var$1 || $nc(this->restype)->contains(elem);
	return var$0 || $Type::contains(this->thrown, elem);
}

Type$MethodType* Type$MethodType::asMethodType() {
	return this;
}

void Type$MethodType::complete() {
	$useLocalCurrentObjectStackCache();
	{
		$var($List, l, this->argtypes$);
		for (; $nc(l)->nonEmpty(); $assign(l, $nc(l)->tail)) {
			$nc(($cast($Type, l->head)))->complete();
		}
	}
	$nc(this->restype)->complete();
	$nc(this->recvtype)->complete();
	{
		$var($List, l, this->thrown);
		for (; l->nonEmpty(); $assign(l, l->tail)) {
			$nc(($cast($Type, l->head)))->complete();
		}
	}
}

$List* Type$MethodType::getTypeVariables() {
	return $List::nil();
}

$Symbol$TypeSymbol* Type$MethodType::asElement() {
	return nullptr;
}

$TypeKind* Type$MethodType::getKind() {
	$init($TypeKind);
	return $TypeKind::EXECUTABLE;
}

$Object* Type$MethodType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitExecutable($as($ExecutableType, this), p));
}

$1List* Type$MethodType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$MethodType::Type$MethodType() {
}

$Class* Type$MethodType::load$($String* name, bool initialize) {
	$loadClass(Type$MethodType, name, initialize, &_Type$MethodType_ClassInfo_, allocate$Type$MethodType);
	return class$;
}

$Class* Type$MethodType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com