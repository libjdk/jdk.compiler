#include <com/sun/tools/javac/code/TypeTag.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/tools/javac/code/TypeTag$1.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BOOLEAN_LITERAL
#undef BOT
#undef BYTE
#undef CHAR
#undef CHAR_LITERAL
#undef CLASS
#undef DEFERRED
#undef DOUBLE
#undef DOUBLE_LITERAL
#undef ERROR
#undef FLOAT
#undef FLOAT_LITERAL
#undef FORALL
#undef INT
#undef INT_LITERAL
#undef LONG
#undef LONG_LITERAL
#undef MAX_VALUE
#undef METHOD
#undef MIN_VALUE
#undef MODULE
#undef NONE
#undef NULL_LITERAL
#undef PACKAGE
#undef SHORT
#undef STRING_LITERAL
#undef TYPEVAR
#undef UNDETVAR
#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS
#undef UNKNOWN
#undef VOID
#undef WILDCARD

using $TypeTagArray = $Array<::com::sun::tools::javac::code::TypeTag>;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TypeTag$1 = ::com::sun::tools::javac::code::TypeTag$1;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TypeTag_FieldInfo_[] = {
	{"BYTE", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, BYTE)},
	{"CHAR", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, CHAR)},
	{"SHORT", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, SHORT)},
	{"LONG", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, LONG)},
	{"FLOAT", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, FLOAT)},
	{"INT", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, INT)},
	{"DOUBLE", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, DOUBLE)},
	{"BOOLEAN", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, BOOLEAN)},
	{"VOID", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, VOID)},
	{"CLASS", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, CLASS)},
	{"ARRAY", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, ARRAY)},
	{"METHOD", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, METHOD)},
	{"PACKAGE", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, PACKAGE)},
	{"MODULE", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, MODULE)},
	{"TYPEVAR", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, TYPEVAR)},
	{"WILDCARD", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, WILDCARD)},
	{"FORALL", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, FORALL)},
	{"DEFERRED", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, DEFERRED)},
	{"BOT", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, BOT)},
	{"NONE", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, NONE)},
	{"ERROR", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, ERROR)},
	{"UNKNOWN", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, UNKNOWN)},
	{"UNDETVAR", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, UNDETVAR)},
	{"UNINITIALIZED_THIS", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, UNINITIALIZED_THIS)},
	{"UNINITIALIZED_OBJECT", "Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeTag, UNINITIALIZED_OBJECT)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeTag, $VALUES)},
	{"superClasses", "I", nullptr, $FINAL, $field(TypeTag, superClasses)},
	{"numericClass", "I", nullptr, $FINAL, $field(TypeTag, numericClass)},
	{"isPrimitive", "Z", nullptr, $FINAL, $field(TypeTag, isPrimitive)},
	{}
};

$MethodInfo _TypeTag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TypeTagArray*(*)()>(&TypeTag::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TypeTag::*)($String*,int32_t)>(&TypeTag::init$))},
	{"<init>", "(Ljava/lang/String;IIIZ)V", "(IIZ)V", $PRIVATE, $method(static_cast<void(TypeTag::*)($String*,int32_t,int32_t,int32_t,bool)>(&TypeTag::init$))},
	{"checkRange", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(TypeTag::*)(int32_t)>(&TypeTag::checkRange))},
	{"getKindLiteral", "()Lcom/sun/source/tree/Tree$Kind;", nullptr, $PUBLIC, $method(static_cast<$Tree$Kind*(TypeTag::*)()>(&TypeTag::getKindLiteral))},
	{"getPrimitiveTypeKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC, $method(static_cast<$TypeKind*(TypeTag::*)()>(&TypeTag::getPrimitiveTypeKind))},
	{"getTypeTagCount", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&TypeTag::getTypeTagCount))},
	{"isStrictSubRangeOf", "(Lcom/sun/tools/javac/code/TypeTag;)Z", nullptr, $PUBLIC, $method(static_cast<bool(TypeTag::*)(TypeTag*)>(&TypeTag::isStrictSubRangeOf))},
	{"isSubRangeOf", "(Lcom/sun/tools/javac/code/TypeTag;)Z", nullptr, $PUBLIC, $method(static_cast<bool(TypeTag::*)(TypeTag*)>(&TypeTag::isSubRangeOf))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeTag*(*)($String*)>(&TypeTag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/TypeTag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeTagArray*(*)()>(&TypeTag::values))},
	{}
};

$InnerClassInfo _TypeTag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeTag$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.TypeTag$NumericClasses", "com.sun.tools.javac.code.TypeTag", "NumericClasses", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TypeTag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.TypeTag",
	"java.lang.Enum",
	nullptr,
	_TypeTag_FieldInfo_,
	_TypeTag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/TypeTag;>;",
	nullptr,
	_TypeTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeTag$1,com.sun.tools.javac.code.TypeTag$NumericClasses"
};

$Object* allocate$TypeTag($Class* clazz) {
	return $of($alloc(TypeTag));
}

TypeTag* TypeTag::BYTE = nullptr;
TypeTag* TypeTag::CHAR = nullptr;
TypeTag* TypeTag::SHORT = nullptr;
TypeTag* TypeTag::LONG = nullptr;
TypeTag* TypeTag::FLOAT = nullptr;
TypeTag* TypeTag::INT = nullptr;
TypeTag* TypeTag::DOUBLE = nullptr;
TypeTag* TypeTag::BOOLEAN = nullptr;
TypeTag* TypeTag::VOID = nullptr;
TypeTag* TypeTag::CLASS = nullptr;
TypeTag* TypeTag::ARRAY = nullptr;
TypeTag* TypeTag::METHOD = nullptr;
TypeTag* TypeTag::PACKAGE = nullptr;
TypeTag* TypeTag::MODULE = nullptr;
TypeTag* TypeTag::TYPEVAR = nullptr;
TypeTag* TypeTag::WILDCARD = nullptr;
TypeTag* TypeTag::FORALL = nullptr;
TypeTag* TypeTag::DEFERRED = nullptr;
TypeTag* TypeTag::BOT = nullptr;
TypeTag* TypeTag::NONE = nullptr;
TypeTag* TypeTag::ERROR = nullptr;
TypeTag* TypeTag::UNKNOWN = nullptr;
TypeTag* TypeTag::UNDETVAR = nullptr;
TypeTag* TypeTag::UNINITIALIZED_THIS = nullptr;
TypeTag* TypeTag::UNINITIALIZED_OBJECT = nullptr;
$TypeTagArray* TypeTag::$VALUES = nullptr;

$TypeTagArray* TypeTag::$values() {
	$init(TypeTag);
	return $new($TypeTagArray, {
		TypeTag::BYTE,
		TypeTag::CHAR,
		TypeTag::SHORT,
		TypeTag::LONG,
		TypeTag::FLOAT,
		TypeTag::INT,
		TypeTag::DOUBLE,
		TypeTag::BOOLEAN,
		TypeTag::VOID,
		TypeTag::CLASS,
		TypeTag::ARRAY,
		TypeTag::METHOD,
		TypeTag::PACKAGE,
		TypeTag::MODULE,
		TypeTag::TYPEVAR,
		TypeTag::WILDCARD,
		TypeTag::FORALL,
		TypeTag::DEFERRED,
		TypeTag::BOT,
		TypeTag::NONE,
		TypeTag::ERROR,
		TypeTag::UNKNOWN,
		TypeTag::UNDETVAR,
		TypeTag::UNINITIALIZED_THIS,
		TypeTag::UNINITIALIZED_OBJECT
	});
}

$TypeTagArray* TypeTag::values() {
	$init(TypeTag);
	return $cast($TypeTagArray, TypeTag::$VALUES->clone());
}

TypeTag* TypeTag::valueOf($String* name) {
	$init(TypeTag);
	return $cast(TypeTag, $Enum::valueOf(TypeTag::class$, name));
}

void TypeTag::init$($String* $enum$name, int32_t $enum$ordinal) {
	TypeTag::init$($enum$name, $enum$ordinal, 0, 0, false);
}

void TypeTag::init$($String* $enum$name, int32_t $enum$ordinal, int32_t numericClass, int32_t superClasses, bool isPrimitive) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->superClasses = superClasses;
	this->numericClass = numericClass;
	this->isPrimitive = isPrimitive;
}

bool TypeTag::isStrictSubRangeOf(TypeTag* tag) {
	return ((int32_t)(this->superClasses & (uint32_t)$nc(tag)->numericClass)) != 0 && this != tag;
}

bool TypeTag::isSubRangeOf(TypeTag* tag) {
	return ((int32_t)(this->superClasses & (uint32_t)$nc(tag)->numericClass)) != 0;
}

int32_t TypeTag::getTypeTagCount() {
	$init(TypeTag);
	return (TypeTag::UNDETVAR->ordinal() + 1);
}

$Tree$Kind* TypeTag::getKindLiteral() {
	$init($TypeTag$1);
	switch ($nc($TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get((this)->ordinal())) {
	case 1:
		{
			$init($Tree$Kind);
			return $Tree$Kind::INT_LITERAL;
		}
	case 2:
		{
			$init($Tree$Kind);
			return $Tree$Kind::LONG_LITERAL;
		}
	case 3:
		{
			$init($Tree$Kind);
			return $Tree$Kind::FLOAT_LITERAL;
		}
	case 4:
		{
			$init($Tree$Kind);
			return $Tree$Kind::DOUBLE_LITERAL;
		}
	case 5:
		{
			$init($Tree$Kind);
			return $Tree$Kind::BOOLEAN_LITERAL;
		}
	case 6:
		{
			$init($Tree$Kind);
			return $Tree$Kind::CHAR_LITERAL;
		}
	case 7:
		{
			$init($Tree$Kind);
			return $Tree$Kind::STRING_LITERAL;
		}
	case 8:
		{
			$init($Tree$Kind);
			return $Tree$Kind::NULL_LITERAL;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"unknown literal kind "_s, this})));
		}
	}
}

$TypeKind* TypeTag::getPrimitiveTypeKind() {
	$init($TypeTag$1);
	switch ($nc($TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get((this)->ordinal())) {
	case 5:
		{
			$init($TypeKind);
			return $TypeKind::BOOLEAN;
		}
	case 9:
		{
			$init($TypeKind);
			return $TypeKind::BYTE;
		}
	case 10:
		{
			$init($TypeKind);
			return $TypeKind::SHORT;
		}
	case 1:
		{
			$init($TypeKind);
			return $TypeKind::INT;
		}
	case 2:
		{
			$init($TypeKind);
			return $TypeKind::LONG;
		}
	case 6:
		{
			$init($TypeKind);
			return $TypeKind::CHAR;
		}
	case 3:
		{
			$init($TypeKind);
			return $TypeKind::FLOAT;
		}
	case 4:
		{
			$init($TypeKind);
			return $TypeKind::DOUBLE;
		}
	case 11:
		{
			$init($TypeKind);
			return $TypeKind::VOID;
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"unknown primitive type "_s, this})));
		}
	}
}

bool TypeTag::checkRange(int32_t value) {
	$init($TypeTag$1);
	switch ($nc($TypeTag$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get((this)->ordinal())) {
	case 5:
		{
			return 0 <= value && value <= 1;
		}
	case 9:
		{
			return $Byte::MIN_VALUE <= value && value <= $Byte::MAX_VALUE;
		}
	case 6:
		{
			return $Character::MIN_VALUE <= value && value <= $Character::MAX_VALUE;
		}
	case 10:
		{
			return $Short::MIN_VALUE <= value && value <= $Short::MAX_VALUE;
		}
	case 1:
		{
			return true;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

void clinit$TypeTag($Class* class$) {
	$assignStatic(TypeTag::BYTE, $new(TypeTag, "BYTE"_s, 0, 1, 125, true));
	$assignStatic(TypeTag::CHAR, $new(TypeTag, "CHAR"_s, 1, 2, 122, true));
	$assignStatic(TypeTag::SHORT, $new(TypeTag, "SHORT"_s, 2, 4, 124, true));
	$assignStatic(TypeTag::LONG, $new(TypeTag, "LONG"_s, 3, 16, 112, true));
	$assignStatic(TypeTag::FLOAT, $new(TypeTag, "FLOAT"_s, 4, 32, 96, true));
	$assignStatic(TypeTag::INT, $new(TypeTag, "INT"_s, 5, 8, 120, true));
	$assignStatic(TypeTag::DOUBLE, $new(TypeTag, "DOUBLE"_s, 6, 64, 64, true));
	$assignStatic(TypeTag::BOOLEAN, $new(TypeTag, "BOOLEAN"_s, 7, 0, 0, true));
	$assignStatic(TypeTag::VOID, $new(TypeTag, "VOID"_s, 8));
	$assignStatic(TypeTag::CLASS, $new(TypeTag, "CLASS"_s, 9));
	$assignStatic(TypeTag::ARRAY, $new(TypeTag, "ARRAY"_s, 10));
	$assignStatic(TypeTag::METHOD, $new(TypeTag, "METHOD"_s, 11));
	$assignStatic(TypeTag::PACKAGE, $new(TypeTag, "PACKAGE"_s, 12));
	$assignStatic(TypeTag::MODULE, $new(TypeTag, "MODULE"_s, 13));
	$assignStatic(TypeTag::TYPEVAR, $new(TypeTag, "TYPEVAR"_s, 14));
	$assignStatic(TypeTag::WILDCARD, $new(TypeTag, "WILDCARD"_s, 15));
	$assignStatic(TypeTag::FORALL, $new(TypeTag, "FORALL"_s, 16));
	$assignStatic(TypeTag::DEFERRED, $new(TypeTag, "DEFERRED"_s, 17));
	$assignStatic(TypeTag::BOT, $new(TypeTag, "BOT"_s, 18));
	$assignStatic(TypeTag::NONE, $new(TypeTag, "NONE"_s, 19));
	$assignStatic(TypeTag::ERROR, $new(TypeTag, "ERROR"_s, 20));
	$assignStatic(TypeTag::UNKNOWN, $new(TypeTag, "UNKNOWN"_s, 21));
	$assignStatic(TypeTag::UNDETVAR, $new(TypeTag, "UNDETVAR"_s, 22));
	$assignStatic(TypeTag::UNINITIALIZED_THIS, $new(TypeTag, "UNINITIALIZED_THIS"_s, 23));
	$assignStatic(TypeTag::UNINITIALIZED_OBJECT, $new(TypeTag, "UNINITIALIZED_OBJECT"_s, 24));
	$assignStatic(TypeTag::$VALUES, TypeTag::$values());
}

TypeTag::TypeTag() {
}

$Class* TypeTag::load$($String* name, bool initialize) {
	$loadClass(TypeTag, name, initialize, &_TypeTag_ClassInfo_, clinit$TypeTag, allocate$TypeTag);
	return class$;
}

$Class* TypeTag::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com