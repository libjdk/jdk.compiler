#include <com/sun/tools/javac/code/BoundKind.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXTENDS
#undef SUPER
#undef UNBOUND

using $BoundKindArray = $Array<::com::sun::tools::javac::code::BoundKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _BoundKind_FieldInfo_[] = {
	{"EXTENDS", "Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BoundKind, EXTENDS)},
	{"SUPER", "Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BoundKind, SUPER)},
	{"UNBOUND", "Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BoundKind, UNBOUND)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BoundKind, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BoundKind, name$)},
	{}
};

$MethodInfo _BoundKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$BoundKindArray*(*)()>(&BoundKind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(BoundKind::*)($String*,int32_t,$String*)>(&BoundKind::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BoundKind*(*)($String*)>(&BoundKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/BoundKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BoundKindArray*(*)()>(&BoundKind::values))},
	{}
};

$ClassInfo _BoundKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.BoundKind",
	"java.lang.Enum",
	nullptr,
	_BoundKind_FieldInfo_,
	_BoundKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/BoundKind;>;"
};

$Object* allocate$BoundKind($Class* clazz) {
	return $of($alloc(BoundKind));
}

BoundKind* BoundKind::EXTENDS = nullptr;
BoundKind* BoundKind::SUPER = nullptr;
BoundKind* BoundKind::UNBOUND = nullptr;
$BoundKindArray* BoundKind::$VALUES = nullptr;

$BoundKindArray* BoundKind::$values() {
	$init(BoundKind);
	return $new($BoundKindArray, {
		BoundKind::EXTENDS,
		BoundKind::SUPER,
		BoundKind::UNBOUND
	});
}

$BoundKindArray* BoundKind::values() {
	$init(BoundKind);
	return $cast($BoundKindArray, BoundKind::$VALUES->clone());
}

BoundKind* BoundKind::valueOf($String* name) {
	$init(BoundKind);
	return $cast(BoundKind, $Enum::valueOf(BoundKind::class$, name));
}

void BoundKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

$String* BoundKind::toString() {
	return this->name$;
}

void clinit$BoundKind($Class* class$) {
	$assignStatic(BoundKind::EXTENDS, $new(BoundKind, "EXTENDS"_s, 0, "? extends "_s));
	$assignStatic(BoundKind::SUPER, $new(BoundKind, "SUPER"_s, 1, "? super "_s));
	$assignStatic(BoundKind::UNBOUND, $new(BoundKind, "UNBOUND"_s, 2, "?"_s));
	$assignStatic(BoundKind::$VALUES, BoundKind::$values());
}

BoundKind::BoundKind() {
}

$Class* BoundKind::load$($String* name, bool initialize) {
	$loadClass(BoundKind, name, initialize, &_BoundKind_ClassInfo_, clinit$BoundKind, allocate$BoundKind);
	return class$;
}

$Class* BoundKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com