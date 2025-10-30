#include <com/sun/tools/javac/code/Directive$ExportsFlag.h>

#include <com/sun/tools/javac/code/Directive.h>
#include <java/lang/Enum.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MANDATED
#undef SYNTHETIC

using $Directive$ExportsFlagArray = $Array<::com::sun::tools::javac::code::Directive$ExportsFlag>;
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

$FieldInfo _Directive$ExportsFlag_FieldInfo_[] = {
	{"SYNTHETIC", "Lcom/sun/tools/javac/code/Directive$ExportsFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$ExportsFlag, SYNTHETIC)},
	{"MANDATED", "Lcom/sun/tools/javac/code/Directive$ExportsFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Directive$ExportsFlag, MANDATED)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Directive$ExportsFlag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Directive$ExportsFlag, $VALUES)},
	{"value", "I", nullptr, $PUBLIC | $FINAL, $field(Directive$ExportsFlag, value$)},
	{}
};

$MethodInfo _Directive$ExportsFlag_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Directive$ExportsFlag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Directive$ExportsFlagArray*(*)()>(&Directive$ExportsFlag::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Directive$ExportsFlag::*)($String*,int32_t,int32_t)>(&Directive$ExportsFlag::init$))},
	{"value", "(Ljava/util/Set;)I", "(Ljava/util/Set<Lcom/sun/tools/javac/code/Directive$ExportsFlag;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Set*)>(&Directive$ExportsFlag::value))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Directive$ExportsFlag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Directive$ExportsFlag*(*)($String*)>(&Directive$ExportsFlag::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Directive$ExportsFlag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Directive$ExportsFlagArray*(*)()>(&Directive$ExportsFlag::values))},
	{}
};

$InnerClassInfo _Directive$ExportsFlag_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$ExportsFlag", "com.sun.tools.javac.code.Directive", "ExportsFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Directive$ExportsFlag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Directive$ExportsFlag",
	"java.lang.Enum",
	nullptr,
	_Directive$ExportsFlag_FieldInfo_,
	_Directive$ExportsFlag_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Directive$ExportsFlag;>;",
	nullptr,
	_Directive$ExportsFlag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$ExportsFlag($Class* clazz) {
	return $of($alloc(Directive$ExportsFlag));
}

Directive$ExportsFlag* Directive$ExportsFlag::SYNTHETIC = nullptr;
Directive$ExportsFlag* Directive$ExportsFlag::MANDATED = nullptr;
$Directive$ExportsFlagArray* Directive$ExportsFlag::$VALUES = nullptr;

$Directive$ExportsFlagArray* Directive$ExportsFlag::$values() {
	$init(Directive$ExportsFlag);
	return $new($Directive$ExportsFlagArray, {
		Directive$ExportsFlag::SYNTHETIC,
		Directive$ExportsFlag::MANDATED
	});
}

$Directive$ExportsFlagArray* Directive$ExportsFlag::values() {
	$init(Directive$ExportsFlag);
	return $cast($Directive$ExportsFlagArray, Directive$ExportsFlag::$VALUES->clone());
}

Directive$ExportsFlag* Directive$ExportsFlag::valueOf($String* name) {
	$init(Directive$ExportsFlag);
	return $cast(Directive$ExportsFlag, $Enum::valueOf(Directive$ExportsFlag::class$, name));
}

int32_t Directive$ExportsFlag::value($Set* s) {
	$init(Directive$ExportsFlag);
	int32_t v = 0;
	{
		$var($Iterator, i$, $nc(s)->iterator());
		for (; $nc(i$)->hasNext();) {
			Directive$ExportsFlag* f = $cast(Directive$ExportsFlag, i$->next());
			v |= $nc(f)->value$;
		}
	}
	return v;
}

void Directive$ExportsFlag::init$($String* $enum$name, int32_t $enum$ordinal, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->value$ = value;
}

void clinit$Directive$ExportsFlag($Class* class$) {
	$assignStatic(Directive$ExportsFlag::SYNTHETIC, $new(Directive$ExportsFlag, "SYNTHETIC"_s, 0, 4096));
	$assignStatic(Directive$ExportsFlag::MANDATED, $new(Directive$ExportsFlag, "MANDATED"_s, 1, 32768));
	$assignStatic(Directive$ExportsFlag::$VALUES, Directive$ExportsFlag::$values());
}

Directive$ExportsFlag::Directive$ExportsFlag() {
}

$Class* Directive$ExportsFlag::load$($String* name, bool initialize) {
	$loadClass(Directive$ExportsFlag, name, initialize, &_Directive$ExportsFlag_ClassInfo_, clinit$Directive$ExportsFlag, allocate$Directive$ExportsFlag);
	return class$;
}

$Class* Directive$ExportsFlag::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com