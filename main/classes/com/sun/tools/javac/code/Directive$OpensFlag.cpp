#include <com/sun/tools/javac/code/Directive$OpensFlag.h>

#include <com/sun/tools/javac/code/Directive.h>
#include <java/lang/Enum.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MANDATED
#undef SYNTHETIC

using $Directive$OpensFlagArray = $Array<::com::sun::tools::javac::code::Directive$OpensFlag>;
using $Directive = ::com::sun::tools::javac::code::Directive;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$OpensFlag_FieldInfo_[] = {
	{"SYNTHETIC", "Lcom/sun/tools/javac/code/Directive$OpensFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$OpensFlag, SYNTHETIC)},
	{"MANDATED", "Lcom/sun/tools/javac/code/Directive$OpensFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$OpensFlag, MANDATED)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Directive$OpensFlag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Directive$OpensFlag, $VALUES)},
	{"value", "I", nullptr, $PUBLIC | $FINAL, $field(Directive$OpensFlag, value$)},
	{}
};

$MethodInfo _Directive$OpensFlag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Directive$OpensFlag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Directive$OpensFlagArray*(*)()>(&Directive$OpensFlag::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Directive$OpensFlag::*)($String*,int32_t,int32_t)>(&Directive$OpensFlag::init$))},
	{"value", "(Ljava/util/Set;)I", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$OpensFlag;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Set*)>(&Directive$OpensFlag::value))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Directive$OpensFlag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Directive$OpensFlag*(*)($String*)>(&Directive$OpensFlag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Directive$OpensFlag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Directive$OpensFlagArray*(*)()>(&Directive$OpensFlag::values))},
	{}
};

$InnerClassInfo _Directive$OpensFlag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$OpensFlag", "com.sun.tools.javac.code.Directive", "OpensFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Directive$OpensFlag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Directive$OpensFlag",
	"java.lang.Enum",
	nullptr,
	_Directive$OpensFlag_FieldInfo_,
	_Directive$OpensFlag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Directive$OpensFlag;>;",
	nullptr,
	_Directive$OpensFlag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$OpensFlag($Class* clazz) {
	return $of($alloc(Directive$OpensFlag));
}

Directive$OpensFlag* Directive$OpensFlag::SYNTHETIC = nullptr;
Directive$OpensFlag* Directive$OpensFlag::MANDATED = nullptr;
$Directive$OpensFlagArray* Directive$OpensFlag::$VALUES = nullptr;

$Directive$OpensFlagArray* Directive$OpensFlag::$values() {
	$init(Directive$OpensFlag);
	return $new($Directive$OpensFlagArray, {
		Directive$OpensFlag::SYNTHETIC,
		Directive$OpensFlag::MANDATED
	});
}

$Directive$OpensFlagArray* Directive$OpensFlag::values() {
	$init(Directive$OpensFlag);
	return $cast($Directive$OpensFlagArray, Directive$OpensFlag::$VALUES->clone());
}

Directive$OpensFlag* Directive$OpensFlag::valueOf($String* name) {
	$init(Directive$OpensFlag);
	return $cast(Directive$OpensFlag, $Enum::valueOf(Directive$OpensFlag::class$, name));
}

int32_t Directive$OpensFlag::value($Set* s) {
	$init(Directive$OpensFlag);
	int32_t v = 0;
	{
		$var($Iterator, i$, $nc(s)->iterator());
		for (; $nc(i$)->hasNext();) {
			Directive$OpensFlag* f = $cast(Directive$OpensFlag, i$->next());
			v |= $nc(f)->value$;
		}
	}
	return v;
}

void Directive$OpensFlag::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value$ = value;
}

void clinit$Directive$OpensFlag($Class* class$) {
	$assignStatic(Directive$OpensFlag::SYNTHETIC, $new(Directive$OpensFlag, "SYNTHETIC"_s, 0, 4096));
	$assignStatic(Directive$OpensFlag::MANDATED, $new(Directive$OpensFlag, "MANDATED"_s, 1, 32768));
	$assignStatic(Directive$OpensFlag::$VALUES, Directive$OpensFlag::$values());
}

Directive$OpensFlag::Directive$OpensFlag() {
}

$Class* Directive$OpensFlag::load$($String* name, bool initialize) {
	$loadClass(Directive$OpensFlag, name, initialize, &_Directive$OpensFlag_ClassInfo_, clinit$Directive$OpensFlag, allocate$Directive$OpensFlag);
	return class$;
}

$Class* Directive$OpensFlag::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com