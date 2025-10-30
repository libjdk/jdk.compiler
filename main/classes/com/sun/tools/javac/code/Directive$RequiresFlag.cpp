#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>

#include <com/sun/tools/javac/code/Directive.h>
#include <java/lang/Enum.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EXTRA
#undef MANDATED
#undef STATIC_PHASE
#undef SYNTHETIC
#undef TRANSITIVE

using $Directive$RequiresFlagArray = $Array<::com::sun::tools::javac::code::Directive$RequiresFlag>;
using $Directive = ::com::sun::tools::javac::code::Directive;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$RequiresFlag_FieldInfo_[] = {
	{"TRANSITIVE", "Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$RequiresFlag, TRANSITIVE)},
	{"STATIC_PHASE", "Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$RequiresFlag, STATIC_PHASE)},
	{"SYNTHETIC", "Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$RequiresFlag, SYNTHETIC)},
	{"MANDATED", "Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$RequiresFlag, MANDATED)},
	{"EXTRA", "Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$RequiresFlag, EXTRA)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Directive$RequiresFlag, $VALUES)},
	{"value", "I", nullptr, $PUBLIC | $FINAL, $field(Directive$RequiresFlag, value$)},
	{}
};

$MethodInfo _Directive$RequiresFlag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Directive$RequiresFlagArray*(*)()>(&Directive$RequiresFlag::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Directive$RequiresFlag::*)($String*,int32_t,int32_t)>(&Directive$RequiresFlag::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"value", "(Ljava/util/Set;)I", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$RequiresFlag;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Set*)>(&Directive$RequiresFlag::value))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Directive$RequiresFlag*(*)($String*)>(&Directive$RequiresFlag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Directive$RequiresFlag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Directive$RequiresFlagArray*(*)()>(&Directive$RequiresFlag::values))},
	{}
};

$InnerClassInfo _Directive$RequiresFlag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$RequiresFlag", "com.sun.tools.javac.code.Directive", "RequiresFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Directive$RequiresFlag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Directive$RequiresFlag",
	"java.lang.Enum",
	nullptr,
	_Directive$RequiresFlag_FieldInfo_,
	_Directive$RequiresFlag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Directive$RequiresFlag;>;",
	nullptr,
	_Directive$RequiresFlag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$RequiresFlag($Class* clazz) {
	return $of($alloc(Directive$RequiresFlag));
}

Directive$RequiresFlag* Directive$RequiresFlag::TRANSITIVE = nullptr;
Directive$RequiresFlag* Directive$RequiresFlag::STATIC_PHASE = nullptr;
Directive$RequiresFlag* Directive$RequiresFlag::SYNTHETIC = nullptr;
Directive$RequiresFlag* Directive$RequiresFlag::MANDATED = nullptr;
Directive$RequiresFlag* Directive$RequiresFlag::EXTRA = nullptr;
$Directive$RequiresFlagArray* Directive$RequiresFlag::$VALUES = nullptr;

$Directive$RequiresFlagArray* Directive$RequiresFlag::$values() {
	$init(Directive$RequiresFlag);
	return $new($Directive$RequiresFlagArray, {
		Directive$RequiresFlag::TRANSITIVE,
		Directive$RequiresFlag::STATIC_PHASE,
		Directive$RequiresFlag::SYNTHETIC,
		Directive$RequiresFlag::MANDATED,
		Directive$RequiresFlag::EXTRA
	});
}

$Directive$RequiresFlagArray* Directive$RequiresFlag::values() {
	$init(Directive$RequiresFlag);
	return $cast($Directive$RequiresFlagArray, Directive$RequiresFlag::$VALUES->clone());
}

Directive$RequiresFlag* Directive$RequiresFlag::valueOf($String* name) {
	$init(Directive$RequiresFlag);
	return $cast(Directive$RequiresFlag, $Enum::valueOf(Directive$RequiresFlag::class$, name));
}

int32_t Directive$RequiresFlag::value($Set* s) {
	$init(Directive$RequiresFlag);
	int32_t v = 0;
	{
		$var($Iterator, i$, $nc(s)->iterator());
		for (; $nc(i$)->hasNext();) {
			Directive$RequiresFlag* f = $cast(Directive$RequiresFlag, i$->next());
			v |= $nc(f)->value$;
		}
	}
	return v;
}

void Directive$RequiresFlag::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value$ = value;
}

$String* Directive$RequiresFlag::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("ACC_%s (0x%04x"_s, $$new($ObjectArray, {
		$($of(name())),
		$($of($Integer::valueOf(this->value$)))
	}));
}

void clinit$Directive$RequiresFlag($Class* class$) {
	$assignStatic(Directive$RequiresFlag::TRANSITIVE, $new(Directive$RequiresFlag, "TRANSITIVE"_s, 0, 32));
	$assignStatic(Directive$RequiresFlag::STATIC_PHASE, $new(Directive$RequiresFlag, "STATIC_PHASE"_s, 1, 64));
	$assignStatic(Directive$RequiresFlag::SYNTHETIC, $new(Directive$RequiresFlag, "SYNTHETIC"_s, 2, 4096));
	$assignStatic(Directive$RequiresFlag::MANDATED, $new(Directive$RequiresFlag, "MANDATED"_s, 3, 32768));
	$assignStatic(Directive$RequiresFlag::EXTRA, $new(Directive$RequiresFlag, "EXTRA"_s, 4, 0x00010000));
	$assignStatic(Directive$RequiresFlag::$VALUES, Directive$RequiresFlag::$values());
}

Directive$RequiresFlag::Directive$RequiresFlag() {
}

$Class* Directive$RequiresFlag::load$($String* name, bool initialize) {
	$loadClass(Directive$RequiresFlag, name, initialize, &_Directive$RequiresFlag_ClassInfo_, clinit$Directive$RequiresFlag, allocate$Directive$RequiresFlag);
	return class$;
}

$Class* Directive$RequiresFlag::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com