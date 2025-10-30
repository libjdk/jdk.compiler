#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>

#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANNOTATIONS

using $TypeMetadata$Entry$KindArray = $Array<::com::sun::tools::javac::code::TypeMetadata$Entry$Kind>;
using $TypeMetadata = ::com::sun::tools::javac::code::TypeMetadata;
using $TypeMetadata$Entry = ::com::sun::tools::javac::code::TypeMetadata$Entry;
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

$FieldInfo _TypeMetadata$Entry$Kind_FieldInfo_[] = {
	{"ANNOTATIONS", "Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TypeMetadata$Entry$Kind, ANNOTATIONS)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeMetadata$Entry$Kind, $VALUES)},
	{}
};

$MethodInfo _TypeMetadata$Entry$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TypeMetadata$Entry$KindArray*(*)()>(&TypeMetadata$Entry$Kind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TypeMetadata$Entry$Kind::*)($String*,int32_t)>(&TypeMetadata$Entry$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeMetadata$Entry$Kind*(*)($String*)>(&TypeMetadata$Entry$Kind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TypeMetadata$Entry$KindArray*(*)()>(&TypeMetadata$Entry$Kind::values))},
	{}
};

$InnerClassInfo _TypeMetadata$Entry$Kind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.TypeMetadata$Entry$Kind", "com.sun.tools.javac.code.TypeMetadata$Entry", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TypeMetadata$Entry$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.TypeMetadata$Entry$Kind",
	"java.lang.Enum",
	nullptr,
	_TypeMetadata$Entry$Kind_FieldInfo_,
	_TypeMetadata$Entry$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;>;",
	nullptr,
	_TypeMetadata$Entry$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeMetadata"
};

$Object* allocate$TypeMetadata$Entry$Kind($Class* clazz) {
	return $of($alloc(TypeMetadata$Entry$Kind));
}

TypeMetadata$Entry$Kind* TypeMetadata$Entry$Kind::ANNOTATIONS = nullptr;
$TypeMetadata$Entry$KindArray* TypeMetadata$Entry$Kind::$VALUES = nullptr;

$TypeMetadata$Entry$KindArray* TypeMetadata$Entry$Kind::$values() {
	$init(TypeMetadata$Entry$Kind);
	return $new($TypeMetadata$Entry$KindArray, {TypeMetadata$Entry$Kind::ANNOTATIONS});
}

$TypeMetadata$Entry$KindArray* TypeMetadata$Entry$Kind::values() {
	$init(TypeMetadata$Entry$Kind);
	return $cast($TypeMetadata$Entry$KindArray, TypeMetadata$Entry$Kind::$VALUES->clone());
}

TypeMetadata$Entry$Kind* TypeMetadata$Entry$Kind::valueOf($String* name) {
	$init(TypeMetadata$Entry$Kind);
	return $cast(TypeMetadata$Entry$Kind, $Enum::valueOf(TypeMetadata$Entry$Kind::class$, name));
}

void TypeMetadata$Entry$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TypeMetadata$Entry$Kind($Class* class$) {
	$assignStatic(TypeMetadata$Entry$Kind::ANNOTATIONS, $new(TypeMetadata$Entry$Kind, "ANNOTATIONS"_s, 0));
	$assignStatic(TypeMetadata$Entry$Kind::$VALUES, TypeMetadata$Entry$Kind::$values());
}

TypeMetadata$Entry$Kind::TypeMetadata$Entry$Kind() {
}

$Class* TypeMetadata$Entry$Kind::load$($String* name, bool initialize) {
	$loadClass(TypeMetadata$Entry$Kind, name, initialize, &_TypeMetadata$Entry$Kind_ClassInfo_, clinit$TypeMetadata$Entry$Kind, allocate$TypeMetadata$Entry$Kind);
	return class$;
}

$Class* TypeMetadata$Entry$Kind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com