#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$5.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType$1.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType$2.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef EMPTY
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$5 = ::com::sun::tools::javac::code::Type$5;
using $Type$JCPrimitiveType$1 = ::com::sun::tools::javac::code::Type$JCPrimitiveType$1;
using $Type$JCPrimitiveType$2 = ::com::sun::tools::javac::code::Type$JCPrimitiveType$2;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $1List = ::java::util::List;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeVisitor = ::javax::lang::model::type::TypeVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Type$JCPrimitiveType_FieldInfo_[] = {
	{"tag", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, 0, $field(Type$JCPrimitiveType, tag)},
	{}
};

$MethodInfo _Type$JCPrimitiveType_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Type$JCPrimitiveType::*)($TypeTag*,$Symbol$TypeSymbol*)>(&Type$JCPrimitiveType::init$))},
	{"<init>", "(Lcom/sun/tools/javac/code/TypeTag;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/TypeMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(Type$JCPrimitiveType::*)($TypeTag*,$Symbol$TypeSymbol*,$TypeMetadata*)>(&Type$JCPrimitiveType::init$))},
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC},
	{"cloneWithMetadata", "(Lcom/sun/tools/javac/code/TypeMetadata;)Lcom/sun/tools/javac/code/Type$JCPrimitiveType;", nullptr, $PUBLIC},
	{"constType", "(Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC},
	{"getTag", "()Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC},
	{"isFalse", "()Z", nullptr, $PUBLIC},
	{"isIntegral", "()Z", nullptr, $PUBLIC},
	{"isNumeric", "()Z", nullptr, $PUBLIC},
	{"isPrimitive", "()Z", nullptr, $PUBLIC},
	{"isPrimitiveOrVoid", "()Z", nullptr, $PUBLIC},
	{"isTrue", "()Z", nullptr, $PUBLIC},
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Type$JCPrimitiveType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Type$JCPrimitiveType", "com.sun.tools.javac.code.Type", "JCPrimitiveType", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Type$JCPrimitiveType$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Type$JCPrimitiveType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$JCPrimitiveType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Type$JCPrimitiveType",
	"com.sun.tools.javac.code.Type",
	"javax.lang.model.type.PrimitiveType",
	_Type$JCPrimitiveType_FieldInfo_,
	_Type$JCPrimitiveType_MethodInfo_,
	nullptr,
	nullptr,
	_Type$JCPrimitiveType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Type"
};

$Object* allocate$Type$JCPrimitiveType($Class* clazz) {
	return $of($alloc(Type$JCPrimitiveType));
}

$Annotation* Type$JCPrimitiveType::getAnnotation($Class* annotationType) {
	 return this->$Type::getAnnotation(annotationType);
}

$AnnotationArray* Type$JCPrimitiveType::getAnnotationsByType($Class* annotationType) {
	 return this->$Type::getAnnotationsByType(annotationType);
}

$String* Type$JCPrimitiveType::toString() {
	 return this->$Type::toString();
}

bool Type$JCPrimitiveType::equals(Object$* t) {
	 return this->$Type::equals(t);
}

int32_t Type$JCPrimitiveType::hashCode() {
	 return this->$Type::hashCode();
}

$Object* Type$JCPrimitiveType::clone() {
	 return this->$Type::clone();
}

void Type$JCPrimitiveType::finalize() {
	this->$Type::finalize();
}

void Type$JCPrimitiveType::init$($TypeTag* tag, $Symbol$TypeSymbol* tsym) {
	$init($TypeMetadata);
	Type$JCPrimitiveType::init$(tag, tsym, $TypeMetadata::EMPTY);
}

void Type$JCPrimitiveType::init$($TypeTag* tag, $Symbol$TypeSymbol* tsym, $TypeMetadata* metadata) {
	$Type::init$(tsym, metadata);
	$set(this, tag, tag);
	$Assert::check($nc(tag)->isPrimitive);
}

Type$JCPrimitiveType* Type$JCPrimitiveType::cloneWithMetadata($TypeMetadata* md) {
	return $new($Type$JCPrimitiveType$1, this, this->tag, this->tsym, md);
}

bool Type$JCPrimitiveType::isNumeric() {
	$init($TypeTag);
	return this->tag != $TypeTag::BOOLEAN;
}

bool Type$JCPrimitiveType::isIntegral() {
	$init($Type$5);
	switch ($nc($Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc((this->tag))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{}
	case 5:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

bool Type$JCPrimitiveType::isPrimitive() {
	return true;
}

$TypeTag* Type$JCPrimitiveType::getTag() {
	return this->tag;
}

bool Type$JCPrimitiveType::isPrimitiveOrVoid() {
	return true;
}

$Type* Type$JCPrimitiveType::constType(Object$* constValue) {
	$var($Object, value, constValue);
	return $new($Type$JCPrimitiveType$2, this, this->tag, this->tsym, this->metadata, value);
}

$String* Type$JCPrimitiveType::stringValue() {
	$useLocalCurrentObjectStackCache();
	$var($Object, cv, $Assert::checkNonNull($(constValue())));
	$init($TypeTag);
	if (this->tag == $TypeTag::BOOLEAN) {
		return $nc(($cast($Integer, cv)))->intValue() == 0 ? "false"_s : "true"_s;
	} else {
		if (this->tag == $TypeTag::CHAR) {
			return $String::valueOf((char16_t)$nc(($cast($Integer, cv)))->intValue());
		} else {
			return $nc($of(cv))->toString();
		}
	}
}

bool Type$JCPrimitiveType::isFalse() {
	$init($TypeTag);
	bool var$0 = this->tag == $TypeTag::BOOLEAN && constValue() != nullptr;
	return var$0 && $nc(($cast($Integer, $(constValue()))))->intValue() == 0;
}

bool Type$JCPrimitiveType::isTrue() {
	$init($TypeTag);
	bool var$0 = this->tag == $TypeTag::BOOLEAN && constValue() != nullptr;
	return var$0 && $nc(($cast($Integer, $(constValue()))))->intValue() != 0;
}

$Object* Type$JCPrimitiveType::accept($TypeVisitor* v, Object$* p) {
	return $of($nc(v)->visitPrimitive(this, p));
}

$TypeKind* Type$JCPrimitiveType::getKind() {
	$init($Type$5);
	switch ($nc($Type$5::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc((this->tag))->ordinal())) {
	case 2:
		{
			$init($TypeKind);
			return $TypeKind::BYTE;
		}
	case 1:
		{
			$init($TypeKind);
			return $TypeKind::CHAR;
		}
	case 3:
		{
			$init($TypeKind);
			return $TypeKind::SHORT;
		}
	case 4:
		{
			$init($TypeKind);
			return $TypeKind::INT;
		}
	case 5:
		{
			$init($TypeKind);
			return $TypeKind::LONG;
		}
	case 6:
		{
			$init($TypeKind);
			return $TypeKind::FLOAT;
		}
	case 7:
		{
			$init($TypeKind);
			return $TypeKind::DOUBLE;
		}
	case 8:
		{
			$init($TypeKind);
			return $TypeKind::BOOLEAN;
		}
	}
	$throwNew($AssertionError);
}

$1List* Type$JCPrimitiveType::getAnnotationMirrors() {
	return $Type::getAnnotationMirrors();
}

Type$JCPrimitiveType::Type$JCPrimitiveType() {
}

$Class* Type$JCPrimitiveType::load$($String* name, bool initialize) {
	$loadClass(Type$JCPrimitiveType, name, initialize, &_Type$JCPrimitiveType_ClassInfo_, allocate$Type$JCPrimitiveType);
	return class$;
}

$Class* Type$JCPrimitiveType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com