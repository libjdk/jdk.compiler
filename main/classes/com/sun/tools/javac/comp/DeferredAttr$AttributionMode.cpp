#include <com/sun/tools/javac/comp/DeferredAttr$AttributionMode.h>

#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANALYZER
#undef ATTRIB_TO_TREE
#undef FULL
#undef SPECULATIVE

using $DeferredAttr$AttributionModeArray = $Array<::com::sun::tools::javac::comp::DeferredAttr$AttributionMode>;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
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

$FieldInfo _DeferredAttr$AttributionMode_FieldInfo_[] = {
	{"FULL", "Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttributionMode, FULL)},
	{"ATTRIB_TO_TREE", "Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttributionMode, ATTRIB_TO_TREE)},
	{"ANALYZER", "Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttributionMode, ANALYZER)},
	{"SPECULATIVE", "Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttributionMode, SPECULATIVE)},
	{"$VALUES", "[Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DeferredAttr$AttributionMode, $VALUES)},
	{"isSpeculative", "Z", nullptr, $FINAL, $field(DeferredAttr$AttributionMode, isSpeculative$)},
	{"recover", "Z", nullptr, $FINAL, $field(DeferredAttr$AttributionMode, recover$)},
	{}
};

$MethodInfo _DeferredAttr$AttributionMode_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DeferredAttr$AttributionModeArray*(*)()>(&DeferredAttr$AttributionMode::$values))},
	{"<init>", "(Ljava/lang/String;IZZ)V", "(ZZ)V", $PRIVATE, $method(static_cast<void(DeferredAttr$AttributionMode::*)($String*,int32_t,bool,bool)>(&DeferredAttr$AttributionMode::init$))},
	{"isSpeculative", "()Z", nullptr, 0, $method(static_cast<bool(DeferredAttr$AttributionMode::*)()>(&DeferredAttr$AttributionMode::isSpeculative))},
	{"recover", "()Z", nullptr, 0, $method(static_cast<bool(DeferredAttr$AttributionMode::*)()>(&DeferredAttr$AttributionMode::recover))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DeferredAttr$AttributionMode*(*)($String*)>(&DeferredAttr$AttributionMode::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DeferredAttr$AttributionModeArray*(*)()>(&DeferredAttr$AttributionMode::values))},
	{}
};

$InnerClassInfo _DeferredAttr$AttributionMode_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.DeferredAttr$AttributionMode", "com.sun.tools.javac.comp.DeferredAttr", "AttributionMode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DeferredAttr$AttributionMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.comp.DeferredAttr$AttributionMode",
	"java.lang.Enum",
	nullptr,
	_DeferredAttr$AttributionMode_FieldInfo_,
	_DeferredAttr$AttributionMode_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/DeferredAttr$AttributionMode;>;",
	nullptr,
	_DeferredAttr$AttributionMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.DeferredAttr"
};

$Object* allocate$DeferredAttr$AttributionMode($Class* clazz) {
	return $of($alloc(DeferredAttr$AttributionMode));
}

DeferredAttr$AttributionMode* DeferredAttr$AttributionMode::FULL = nullptr;
DeferredAttr$AttributionMode* DeferredAttr$AttributionMode::ATTRIB_TO_TREE = nullptr;
DeferredAttr$AttributionMode* DeferredAttr$AttributionMode::ANALYZER = nullptr;
DeferredAttr$AttributionMode* DeferredAttr$AttributionMode::SPECULATIVE = nullptr;
$DeferredAttr$AttributionModeArray* DeferredAttr$AttributionMode::$VALUES = nullptr;

$DeferredAttr$AttributionModeArray* DeferredAttr$AttributionMode::$values() {
	$init(DeferredAttr$AttributionMode);
	return $new($DeferredAttr$AttributionModeArray, {
		DeferredAttr$AttributionMode::FULL,
		DeferredAttr$AttributionMode::ATTRIB_TO_TREE,
		DeferredAttr$AttributionMode::ANALYZER,
		DeferredAttr$AttributionMode::SPECULATIVE
	});
}

$DeferredAttr$AttributionModeArray* DeferredAttr$AttributionMode::values() {
	$init(DeferredAttr$AttributionMode);
	return $cast($DeferredAttr$AttributionModeArray, DeferredAttr$AttributionMode::$VALUES->clone());
}

DeferredAttr$AttributionMode* DeferredAttr$AttributionMode::valueOf($String* name) {
	$init(DeferredAttr$AttributionMode);
	return $cast(DeferredAttr$AttributionMode, $Enum::valueOf(DeferredAttr$AttributionMode::class$, name));
}

void DeferredAttr$AttributionMode::init$($String* $enum$name, int32_t $enum$ordinal, bool isSpeculative, bool recover) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->isSpeculative$ = isSpeculative;
	this->recover$ = recover;
}

bool DeferredAttr$AttributionMode::isSpeculative() {
	return this->isSpeculative$;
}

bool DeferredAttr$AttributionMode::recover() {
	return this->recover$;
}

void clinit$DeferredAttr$AttributionMode($Class* class$) {
	$assignStatic(DeferredAttr$AttributionMode::FULL, $new(DeferredAttr$AttributionMode, "FULL"_s, 0, false, true));
	$assignStatic(DeferredAttr$AttributionMode::ATTRIB_TO_TREE, $new(DeferredAttr$AttributionMode, "ATTRIB_TO_TREE"_s, 1, true, true));
	$assignStatic(DeferredAttr$AttributionMode::ANALYZER, $new(DeferredAttr$AttributionMode, "ANALYZER"_s, 2, true, false));
	$assignStatic(DeferredAttr$AttributionMode::SPECULATIVE, $new(DeferredAttr$AttributionMode, "SPECULATIVE"_s, 3, true, false));
	$assignStatic(DeferredAttr$AttributionMode::$VALUES, DeferredAttr$AttributionMode::$values());
}

DeferredAttr$AttributionMode::DeferredAttr$AttributionMode() {
}

$Class* DeferredAttr$AttributionMode::load$($String* name, bool initialize) {
	$loadClass(DeferredAttr$AttributionMode, name, initialize, &_DeferredAttr$AttributionMode_ClassInfo_, clinit$DeferredAttr$AttributionMode, allocate$DeferredAttr$AttributionMode);
	return class$;
}

$Class* DeferredAttr$AttributionMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com