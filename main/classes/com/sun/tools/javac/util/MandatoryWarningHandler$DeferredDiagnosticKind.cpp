#include <com/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind.h>

#include <com/sun/tools/javac/util/MandatoryWarningHandler.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ADDITIONAL_IN_FILE
#undef ADDITIONAL_IN_FILES
#undef IN_FILE
#undef IN_FILES

using $MandatoryWarningHandler$DeferredDiagnosticKindArray = $Array<::com::sun::tools::javac::util::MandatoryWarningHandler$DeferredDiagnosticKind>;
using $MandatoryWarningHandler = ::com::sun::tools::javac::util::MandatoryWarningHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _MandatoryWarningHandler$DeferredDiagnosticKind_FieldInfo_[] = {
	{"IN_FILE", "Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MandatoryWarningHandler$DeferredDiagnosticKind, IN_FILE)},
	{"ADDITIONAL_IN_FILE", "Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MandatoryWarningHandler$DeferredDiagnosticKind, ADDITIONAL_IN_FILE)},
	{"IN_FILES", "Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MandatoryWarningHandler$DeferredDiagnosticKind, IN_FILES)},
	{"ADDITIONAL_IN_FILES", "Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MandatoryWarningHandler$DeferredDiagnosticKind, ADDITIONAL_IN_FILES)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MandatoryWarningHandler$DeferredDiagnosticKind, $VALUES)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MandatoryWarningHandler$DeferredDiagnosticKind, value)},
	{}
};

$MethodInfo _MandatoryWarningHandler$DeferredDiagnosticKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MandatoryWarningHandler$DeferredDiagnosticKindArray*(*)()>(&MandatoryWarningHandler$DeferredDiagnosticKind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(MandatoryWarningHandler$DeferredDiagnosticKind::*)($String*,int32_t,$String*)>(&MandatoryWarningHandler$DeferredDiagnosticKind::init$))},
	{"getKey", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(MandatoryWarningHandler$DeferredDiagnosticKind::*)($String*)>(&MandatoryWarningHandler$DeferredDiagnosticKind::getKey))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MandatoryWarningHandler$DeferredDiagnosticKind*(*)($String*)>(&MandatoryWarningHandler$DeferredDiagnosticKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MandatoryWarningHandler$DeferredDiagnosticKindArray*(*)()>(&MandatoryWarningHandler$DeferredDiagnosticKind::values))},
	{}
};

$InnerClassInfo _MandatoryWarningHandler$DeferredDiagnosticKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.MandatoryWarningHandler$DeferredDiagnosticKind", "com.sun.tools.javac.util.MandatoryWarningHandler", "DeferredDiagnosticKind", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MandatoryWarningHandler$DeferredDiagnosticKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.MandatoryWarningHandler$DeferredDiagnosticKind",
	"java.lang.Enum",
	nullptr,
	_MandatoryWarningHandler$DeferredDiagnosticKind_FieldInfo_,
	_MandatoryWarningHandler$DeferredDiagnosticKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/MandatoryWarningHandler$DeferredDiagnosticKind;>;",
	nullptr,
	_MandatoryWarningHandler$DeferredDiagnosticKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.MandatoryWarningHandler"
};

$Object* allocate$MandatoryWarningHandler$DeferredDiagnosticKind($Class* clazz) {
	return $of($alloc(MandatoryWarningHandler$DeferredDiagnosticKind));
}

MandatoryWarningHandler$DeferredDiagnosticKind* MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE = nullptr;
MandatoryWarningHandler$DeferredDiagnosticKind* MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILE = nullptr;
MandatoryWarningHandler$DeferredDiagnosticKind* MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILES = nullptr;
MandatoryWarningHandler$DeferredDiagnosticKind* MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILES = nullptr;
$MandatoryWarningHandler$DeferredDiagnosticKindArray* MandatoryWarningHandler$DeferredDiagnosticKind::$VALUES = nullptr;

$MandatoryWarningHandler$DeferredDiagnosticKindArray* MandatoryWarningHandler$DeferredDiagnosticKind::$values() {
	$init(MandatoryWarningHandler$DeferredDiagnosticKind);
	return $new($MandatoryWarningHandler$DeferredDiagnosticKindArray, {
		MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE,
		MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILE,
		MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILES,
		MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILES
	});
}

$MandatoryWarningHandler$DeferredDiagnosticKindArray* MandatoryWarningHandler$DeferredDiagnosticKind::values() {
	$init(MandatoryWarningHandler$DeferredDiagnosticKind);
	return $cast($MandatoryWarningHandler$DeferredDiagnosticKindArray, MandatoryWarningHandler$DeferredDiagnosticKind::$VALUES->clone());
}

MandatoryWarningHandler$DeferredDiagnosticKind* MandatoryWarningHandler$DeferredDiagnosticKind::valueOf($String* name) {
	$init(MandatoryWarningHandler$DeferredDiagnosticKind);
	return $cast(MandatoryWarningHandler$DeferredDiagnosticKind, $Enum::valueOf(MandatoryWarningHandler$DeferredDiagnosticKind::class$, name));
}

void MandatoryWarningHandler$DeferredDiagnosticKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* v) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, value, v);
}

$String* MandatoryWarningHandler$DeferredDiagnosticKind::getKey($String* prefix) {
	return $str({prefix, this->value});
}

void clinit$MandatoryWarningHandler$DeferredDiagnosticKind($Class* class$) {
	$assignStatic(MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILE, $new(MandatoryWarningHandler$DeferredDiagnosticKind, "IN_FILE"_s, 0, ".filename"_s));
	$assignStatic(MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILE, $new(MandatoryWarningHandler$DeferredDiagnosticKind, "ADDITIONAL_IN_FILE"_s, 1, ".filename.additional"_s));
	$assignStatic(MandatoryWarningHandler$DeferredDiagnosticKind::IN_FILES, $new(MandatoryWarningHandler$DeferredDiagnosticKind, "IN_FILES"_s, 2, ".plural"_s));
	$assignStatic(MandatoryWarningHandler$DeferredDiagnosticKind::ADDITIONAL_IN_FILES, $new(MandatoryWarningHandler$DeferredDiagnosticKind, "ADDITIONAL_IN_FILES"_s, 3, ".plural.additional"_s));
	$assignStatic(MandatoryWarningHandler$DeferredDiagnosticKind::$VALUES, MandatoryWarningHandler$DeferredDiagnosticKind::$values());
}

MandatoryWarningHandler$DeferredDiagnosticKind::MandatoryWarningHandler$DeferredDiagnosticKind() {
}

$Class* MandatoryWarningHandler$DeferredDiagnosticKind::load$($String* name, bool initialize) {
	$loadClass(MandatoryWarningHandler$DeferredDiagnosticKind, name, initialize, &_MandatoryWarningHandler$DeferredDiagnosticKind_ClassInfo_, clinit$MandatoryWarningHandler$DeferredDiagnosticKind, allocate$MandatoryWarningHandler$DeferredDiagnosticKind);
	return class$;
}

$Class* MandatoryWarningHandler$DeferredDiagnosticKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com