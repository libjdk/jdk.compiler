#include <com/sun/tools/javac/comp/Infer$DependencyKind.h>

#include <com/sun/tools/javac/comp/Infer.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BOUND
#undef STUCK

using $Infer$DependencyKindArray = $Array<::com::sun::tools::javac::comp::Infer$DependencyKind>;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Infer$DependencyKind_FieldInfo_[] = {
	{"BOUND", "Lcom/sun/tools/javac/comp/Infer$DependencyKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$DependencyKind, BOUND)},
	{"STUCK", "Lcom/sun/tools/javac/comp/Infer$DependencyKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$DependencyKind, STUCK)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/Infer$DependencyKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$DependencyKind, $VALUES)},
	{"dotStyle", "Ljava/lang/String;", nullptr, $FINAL, $field(Infer$DependencyKind, dotStyle)},
	{}
};

$MethodInfo _Infer$DependencyKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/Infer$DependencyKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Infer$DependencyKindArray*(*)()>(&Infer$DependencyKind::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Infer$DependencyKind::*)($String*,int32_t,$String*)>(&Infer$DependencyKind::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Infer$DependencyKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Infer$DependencyKind*(*)($String*)>(&Infer$DependencyKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/Infer$DependencyKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Infer$DependencyKindArray*(*)()>(&Infer$DependencyKind::values))},
	{}
};

$InnerClassInfo _Infer$DependencyKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Infer$DependencyKind", "com.sun.tools.javac.comp.Infer", "DependencyKind", $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.GraphUtils$DependencyKind", "com.sun.tools.javac.util.GraphUtils", "DependencyKind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Infer$DependencyKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.Infer$DependencyKind",
	"java.lang.Enum",
	"com.sun.tools.javac.util.GraphUtils$DependencyKind",
	_Infer$DependencyKind_FieldInfo_,
	_Infer$DependencyKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Infer$DependencyKind;>;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;",
	nullptr,
	_Infer$DependencyKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Infer"
};

$Object* allocate$Infer$DependencyKind($Class* clazz) {
	return $of($alloc(Infer$DependencyKind));
}

$String* Infer$DependencyKind::toString() {
	 return this->$Enum::toString();
}

bool Infer$DependencyKind::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t Infer$DependencyKind::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* Infer$DependencyKind::clone() {
	 return this->$Enum::clone();
}

void Infer$DependencyKind::finalize() {
	this->$Enum::finalize();
}

Infer$DependencyKind* Infer$DependencyKind::BOUND = nullptr;
Infer$DependencyKind* Infer$DependencyKind::STUCK = nullptr;
$Infer$DependencyKindArray* Infer$DependencyKind::$VALUES = nullptr;

$Infer$DependencyKindArray* Infer$DependencyKind::$values() {
	$init(Infer$DependencyKind);
	return $new($Infer$DependencyKindArray, {
		Infer$DependencyKind::BOUND,
		Infer$DependencyKind::STUCK
	});
}

$Infer$DependencyKindArray* Infer$DependencyKind::values() {
	$init(Infer$DependencyKind);
	return $cast($Infer$DependencyKindArray, Infer$DependencyKind::$VALUES->clone());
}

Infer$DependencyKind* Infer$DependencyKind::valueOf($String* name) {
	$init(Infer$DependencyKind);
	return $cast(Infer$DependencyKind, $Enum::valueOf(Infer$DependencyKind::class$, name));
}

void Infer$DependencyKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* dotStyle) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, dotStyle, dotStyle);
}

void clinit$Infer$DependencyKind($Class* class$) {
	$assignStatic(Infer$DependencyKind::BOUND, $new(Infer$DependencyKind, "BOUND"_s, 0, "dotted"_s));
	$assignStatic(Infer$DependencyKind::STUCK, $new(Infer$DependencyKind, "STUCK"_s, 1, "dashed"_s));
	$assignStatic(Infer$DependencyKind::$VALUES, Infer$DependencyKind::$values());
}

Infer$DependencyKind::Infer$DependencyKind() {
}

$Class* Infer$DependencyKind::load$($String* name, bool initialize) {
	$loadClass(Infer$DependencyKind, name, initialize, &_Infer$DependencyKind_ClassInfo_, clinit$Infer$DependencyKind, allocate$Infer$DependencyKind);
	return class$;
}

$Class* Infer$DependencyKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com