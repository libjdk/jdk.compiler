#include <com/sun/tools/javac/jvm/ClassReader$AttributeKind.h>

#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef MEMBER

using $ClassReader$AttributeKindArray = $Array<::com::sun::tools::javac::jvm::ClassReader$AttributeKind>;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$AttributeKind_FieldInfo_[] = {
	{"CLASS", "Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassReader$AttributeKind, CLASS)},
	{"MEMBER", "Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClassReader$AttributeKind, MEMBER)},
	{"$VALUES", "[Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassReader$AttributeKind, $VALUES)},
	{}
};

$MethodInfo _ClassReader$AttributeKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClassReader$AttributeKindArray*(*)()>(&ClassReader$AttributeKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ClassReader$AttributeKind::*)($String*,int32_t)>(&ClassReader$AttributeKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassReader$AttributeKind*(*)($String*)>(&ClassReader$AttributeKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClassReader$AttributeKindArray*(*)()>(&ClassReader$AttributeKind::values))},
	{}
};

$InnerClassInfo _ClassReader$AttributeKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$AttributeKind", "com.sun.tools.javac.jvm.ClassReader", "AttributeKind", $PROTECTED | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ClassReader$AttributeKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.jvm.ClassReader$AttributeKind",
	"java.lang.Enum",
	nullptr,
	_ClassReader$AttributeKind_FieldInfo_,
	_ClassReader$AttributeKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/jvm/ClassReader$AttributeKind;>;",
	nullptr,
	_ClassReader$AttributeKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$AttributeKind($Class* clazz) {
	return $of($alloc(ClassReader$AttributeKind));
}

ClassReader$AttributeKind* ClassReader$AttributeKind::CLASS = nullptr;
ClassReader$AttributeKind* ClassReader$AttributeKind::MEMBER = nullptr;
$ClassReader$AttributeKindArray* ClassReader$AttributeKind::$VALUES = nullptr;

$ClassReader$AttributeKindArray* ClassReader$AttributeKind::$values() {
	$init(ClassReader$AttributeKind);
	return $new($ClassReader$AttributeKindArray, {
		ClassReader$AttributeKind::CLASS,
		ClassReader$AttributeKind::MEMBER
	});
}

$ClassReader$AttributeKindArray* ClassReader$AttributeKind::values() {
	$init(ClassReader$AttributeKind);
	return $cast($ClassReader$AttributeKindArray, ClassReader$AttributeKind::$VALUES->clone());
}

ClassReader$AttributeKind* ClassReader$AttributeKind::valueOf($String* name) {
	$init(ClassReader$AttributeKind);
	return $cast(ClassReader$AttributeKind, $Enum::valueOf(ClassReader$AttributeKind::class$, name));
}

void ClassReader$AttributeKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ClassReader$AttributeKind($Class* class$) {
	$assignStatic(ClassReader$AttributeKind::CLASS, $new(ClassReader$AttributeKind, "CLASS"_s, 0));
	$assignStatic(ClassReader$AttributeKind::MEMBER, $new(ClassReader$AttributeKind, "MEMBER"_s, 1));
	$assignStatic(ClassReader$AttributeKind::$VALUES, ClassReader$AttributeKind::$values());
}

ClassReader$AttributeKind::ClassReader$AttributeKind() {
}

$Class* ClassReader$AttributeKind::load$($String* name, bool initialize) {
	$loadClass(ClassReader$AttributeKind, name, initialize, &_ClassReader$AttributeKind_ClassInfo_, clinit$ClassReader$AttributeKind, allocate$ClassReader$AttributeKind);
	return class$;
}

$Class* ClassReader$AttributeKind::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com