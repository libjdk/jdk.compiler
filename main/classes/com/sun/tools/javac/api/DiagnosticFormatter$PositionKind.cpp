#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef COLUMN
#undef END
#undef LINE
#undef OFFSET
#undef START

using $DiagnosticFormatter$PositionKindArray = $Array<::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind>;
using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _DiagnosticFormatter$PositionKind_FieldInfo_[] = {
	{"START", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, START)},
	{"END", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, END)},
	{"LINE", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, LINE)},
	{"COLUMN", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, COLUMN)},
	{"OFFSET", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, OFFSET)},
	{"$VALUES", "[Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DiagnosticFormatter$PositionKind, $VALUES)},
	{}
};

$MethodInfo _DiagnosticFormatter$PositionKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DiagnosticFormatter$PositionKindArray*(*)()>(&DiagnosticFormatter$PositionKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DiagnosticFormatter$PositionKind::*)($String*,int32_t)>(&DiagnosticFormatter$PositionKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DiagnosticFormatter$PositionKind*(*)($String*)>(&DiagnosticFormatter$PositionKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DiagnosticFormatter$PositionKindArray*(*)()>(&DiagnosticFormatter$PositionKind::values))},
	{}
};

$InnerClassInfo _DiagnosticFormatter$PositionKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.DiagnosticFormatter$PositionKind", "com.sun.tools.javac.api.DiagnosticFormatter", "PositionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DiagnosticFormatter$PositionKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.api.DiagnosticFormatter$PositionKind",
	"java.lang.Enum",
	nullptr,
	_DiagnosticFormatter$PositionKind_FieldInfo_,
	_DiagnosticFormatter$PositionKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;>;",
	nullptr,
	_DiagnosticFormatter$PositionKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.DiagnosticFormatter"
};

$Object* allocate$DiagnosticFormatter$PositionKind($Class* clazz) {
	return $of($alloc(DiagnosticFormatter$PositionKind));
}

DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::START = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::END = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::LINE = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::COLUMN = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::OFFSET = nullptr;
$DiagnosticFormatter$PositionKindArray* DiagnosticFormatter$PositionKind::$VALUES = nullptr;

$DiagnosticFormatter$PositionKindArray* DiagnosticFormatter$PositionKind::$values() {
	$init(DiagnosticFormatter$PositionKind);
	return $new($DiagnosticFormatter$PositionKindArray, {
		DiagnosticFormatter$PositionKind::START,
		DiagnosticFormatter$PositionKind::END,
		DiagnosticFormatter$PositionKind::LINE,
		DiagnosticFormatter$PositionKind::COLUMN,
		DiagnosticFormatter$PositionKind::OFFSET
	});
}

$DiagnosticFormatter$PositionKindArray* DiagnosticFormatter$PositionKind::values() {
	$init(DiagnosticFormatter$PositionKind);
	return $cast($DiagnosticFormatter$PositionKindArray, DiagnosticFormatter$PositionKind::$VALUES->clone());
}

DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::valueOf($String* name) {
	$init(DiagnosticFormatter$PositionKind);
	return $cast(DiagnosticFormatter$PositionKind, $Enum::valueOf(DiagnosticFormatter$PositionKind::class$, name));
}

void DiagnosticFormatter$PositionKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DiagnosticFormatter$PositionKind($Class* class$) {
	$assignStatic(DiagnosticFormatter$PositionKind::START, $new(DiagnosticFormatter$PositionKind, "START"_s, 0));
	$assignStatic(DiagnosticFormatter$PositionKind::END, $new(DiagnosticFormatter$PositionKind, "END"_s, 1));
	$assignStatic(DiagnosticFormatter$PositionKind::LINE, $new(DiagnosticFormatter$PositionKind, "LINE"_s, 2));
	$assignStatic(DiagnosticFormatter$PositionKind::COLUMN, $new(DiagnosticFormatter$PositionKind, "COLUMN"_s, 3));
	$assignStatic(DiagnosticFormatter$PositionKind::OFFSET, $new(DiagnosticFormatter$PositionKind, "OFFSET"_s, 4));
	$assignStatic(DiagnosticFormatter$PositionKind::$VALUES, DiagnosticFormatter$PositionKind::$values());
}

DiagnosticFormatter$PositionKind::DiagnosticFormatter$PositionKind() {
}

$Class* DiagnosticFormatter$PositionKind::load$($String* name, bool initialize) {
	$loadClass(DiagnosticFormatter$PositionKind, name, initialize, &_DiagnosticFormatter$PositionKind_ClassInfo_, clinit$DiagnosticFormatter$PositionKind, allocate$DiagnosticFormatter$PositionKind);
	return class$;
}

$Class* DiagnosticFormatter$PositionKind::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com