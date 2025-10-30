#include <com/sun/tools/javac/code/TypeAnnotations$AnnotationType.h>

#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BOTH
#undef DECLARATION
#undef NONE
#undef TYPE

using $TypeAnnotations$AnnotationTypeArray = $Array<::com::sun::tools::javac::code::TypeAnnotations$AnnotationType>;
using $TypeAnnotations = ::com::sun::tools::javac::code::TypeAnnotations;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TypeAnnotations$AnnotationType_FieldInfo_[] = {
	{"DECLARATION", "Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotations$AnnotationType, DECLARATION)},
	{"TYPE", "Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotations$AnnotationType, TYPE)},
	{"NONE", "Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotations$AnnotationType, NONE)},
	{"BOTH", "Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeAnnotations$AnnotationType, BOTH)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeAnnotations$AnnotationType, $VALUES)},
	{}
};

$MethodInfo _TypeAnnotations$AnnotationType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TypeAnnotations$AnnotationTypeArray*(*)()>(&TypeAnnotations$AnnotationType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TypeAnnotations$AnnotationType::*)($String*,int32_t)>(&TypeAnnotations$AnnotationType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotations$AnnotationType*(*)($String*)>(&TypeAnnotations$AnnotationType::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeAnnotations$AnnotationTypeArray*(*)()>(&TypeAnnotations$AnnotationType::values))},
	{}
};

$InnerClassInfo _TypeAnnotations$AnnotationType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotations$AnnotationType", "com.sun.tools.javac.code.TypeAnnotations", "AnnotationType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TypeAnnotations$AnnotationType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.TypeAnnotations$AnnotationType",
	"java.lang.Enum",
	nullptr,
	_TypeAnnotations$AnnotationType_FieldInfo_,
	_TypeAnnotations$AnnotationType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/TypeAnnotations$AnnotationType;>;",
	nullptr,
	_TypeAnnotations$AnnotationType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotations"
};

$Object* allocate$TypeAnnotations$AnnotationType($Class* clazz) {
	return $of($alloc(TypeAnnotations$AnnotationType));
}

TypeAnnotations$AnnotationType* TypeAnnotations$AnnotationType::DECLARATION = nullptr;
TypeAnnotations$AnnotationType* TypeAnnotations$AnnotationType::TYPE = nullptr;
TypeAnnotations$AnnotationType* TypeAnnotations$AnnotationType::NONE = nullptr;
TypeAnnotations$AnnotationType* TypeAnnotations$AnnotationType::BOTH = nullptr;
$TypeAnnotations$AnnotationTypeArray* TypeAnnotations$AnnotationType::$VALUES = nullptr;

$TypeAnnotations$AnnotationTypeArray* TypeAnnotations$AnnotationType::$values() {
	$init(TypeAnnotations$AnnotationType);
	return $new($TypeAnnotations$AnnotationTypeArray, {
		TypeAnnotations$AnnotationType::DECLARATION,
		TypeAnnotations$AnnotationType::TYPE,
		TypeAnnotations$AnnotationType::NONE,
		TypeAnnotations$AnnotationType::BOTH
	});
}

$TypeAnnotations$AnnotationTypeArray* TypeAnnotations$AnnotationType::values() {
	$init(TypeAnnotations$AnnotationType);
	return $cast($TypeAnnotations$AnnotationTypeArray, TypeAnnotations$AnnotationType::$VALUES->clone());
}

TypeAnnotations$AnnotationType* TypeAnnotations$AnnotationType::valueOf($String* name) {
	$init(TypeAnnotations$AnnotationType);
	return $cast(TypeAnnotations$AnnotationType, $Enum::valueOf(TypeAnnotations$AnnotationType::class$, name));
}

void TypeAnnotations$AnnotationType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TypeAnnotations$AnnotationType($Class* class$) {
	$assignStatic(TypeAnnotations$AnnotationType::DECLARATION, $new(TypeAnnotations$AnnotationType, "DECLARATION"_s, 0));
	$assignStatic(TypeAnnotations$AnnotationType::TYPE, $new(TypeAnnotations$AnnotationType, "TYPE"_s, 1));
	$assignStatic(TypeAnnotations$AnnotationType::NONE, $new(TypeAnnotations$AnnotationType, "NONE"_s, 2));
	$assignStatic(TypeAnnotations$AnnotationType::BOTH, $new(TypeAnnotations$AnnotationType, "BOTH"_s, 3));
	$assignStatic(TypeAnnotations$AnnotationType::$VALUES, TypeAnnotations$AnnotationType::$values());
}

TypeAnnotations$AnnotationType::TypeAnnotations$AnnotationType() {
}

$Class* TypeAnnotations$AnnotationType::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotations$AnnotationType, name, initialize, &_TypeAnnotations$AnnotationType_ClassInfo_, clinit$TypeAnnotations$AnnotationType, allocate$TypeAnnotations$AnnotationType);
	return class$;
}

$Class* TypeAnnotations$AnnotationType::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com