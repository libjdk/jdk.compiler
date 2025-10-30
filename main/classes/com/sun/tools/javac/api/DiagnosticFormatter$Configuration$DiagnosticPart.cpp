#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DETAILS
#undef JLS
#undef SOURCE
#undef SUBDIAGNOSTICS
#undef SUMMARY

using $DiagnosticFormatter$Configuration$DiagnosticPartArray = $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart>;
using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
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

$FieldInfo _DiagnosticFormatter$Configuration$DiagnosticPart_FieldInfo_[] = {
	{"SUMMARY", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$DiagnosticPart, SUMMARY)},
	{"DETAILS", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$DiagnosticPart, DETAILS)},
	{"SOURCE", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$DiagnosticPart, SOURCE)},
	{"SUBDIAGNOSTICS", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$DiagnosticPart, SUBDIAGNOSTICS)},
	{"JLS", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$DiagnosticPart, JLS)},
	{"$VALUES", "[Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DiagnosticFormatter$Configuration$DiagnosticPart, $VALUES)},
	{}
};

$MethodInfo _DiagnosticFormatter$Configuration$DiagnosticPart_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DiagnosticFormatter$Configuration$DiagnosticPartArray*(*)()>(&DiagnosticFormatter$Configuration$DiagnosticPart::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DiagnosticFormatter$Configuration$DiagnosticPart::*)($String*,int32_t)>(&DiagnosticFormatter$Configuration$DiagnosticPart::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DiagnosticFormatter$Configuration$DiagnosticPart*(*)($String*)>(&DiagnosticFormatter$Configuration$DiagnosticPart::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DiagnosticFormatter$Configuration$DiagnosticPartArray*(*)()>(&DiagnosticFormatter$Configuration$DiagnosticPart::values))},
	{}
};

$InnerClassInfo _DiagnosticFormatter$Configuration$DiagnosticPart_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart", "com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "DiagnosticPart", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DiagnosticFormatter$Configuration$DiagnosticPart_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart",
	"java.lang.Enum",
	nullptr,
	_DiagnosticFormatter$Configuration$DiagnosticPart_FieldInfo_,
	_DiagnosticFormatter$Configuration$DiagnosticPart_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart;>;",
	nullptr,
	_DiagnosticFormatter$Configuration$DiagnosticPart_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.DiagnosticFormatter"
};

$Object* allocate$DiagnosticFormatter$Configuration$DiagnosticPart($Class* clazz) {
	return $of($alloc(DiagnosticFormatter$Configuration$DiagnosticPart));
}

DiagnosticFormatter$Configuration$DiagnosticPart* DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY = nullptr;
DiagnosticFormatter$Configuration$DiagnosticPart* DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS = nullptr;
DiagnosticFormatter$Configuration$DiagnosticPart* DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE = nullptr;
DiagnosticFormatter$Configuration$DiagnosticPart* DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS = nullptr;
DiagnosticFormatter$Configuration$DiagnosticPart* DiagnosticFormatter$Configuration$DiagnosticPart::JLS = nullptr;
$DiagnosticFormatter$Configuration$DiagnosticPartArray* DiagnosticFormatter$Configuration$DiagnosticPart::$VALUES = nullptr;

$DiagnosticFormatter$Configuration$DiagnosticPartArray* DiagnosticFormatter$Configuration$DiagnosticPart::$values() {
	$init(DiagnosticFormatter$Configuration$DiagnosticPart);
	return $new($DiagnosticFormatter$Configuration$DiagnosticPartArray, {
		DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY,
		DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS,
		DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE,
		DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS,
		DiagnosticFormatter$Configuration$DiagnosticPart::JLS
	});
}

$DiagnosticFormatter$Configuration$DiagnosticPartArray* DiagnosticFormatter$Configuration$DiagnosticPart::values() {
	$init(DiagnosticFormatter$Configuration$DiagnosticPart);
	return $cast($DiagnosticFormatter$Configuration$DiagnosticPartArray, DiagnosticFormatter$Configuration$DiagnosticPart::$VALUES->clone());
}

DiagnosticFormatter$Configuration$DiagnosticPart* DiagnosticFormatter$Configuration$DiagnosticPart::valueOf($String* name) {
	$init(DiagnosticFormatter$Configuration$DiagnosticPart);
	return $cast(DiagnosticFormatter$Configuration$DiagnosticPart, $Enum::valueOf(DiagnosticFormatter$Configuration$DiagnosticPart::class$, name));
}

void DiagnosticFormatter$Configuration$DiagnosticPart::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DiagnosticFormatter$Configuration$DiagnosticPart($Class* class$) {
	$assignStatic(DiagnosticFormatter$Configuration$DiagnosticPart::SUMMARY, $new(DiagnosticFormatter$Configuration$DiagnosticPart, "SUMMARY"_s, 0));
	$assignStatic(DiagnosticFormatter$Configuration$DiagnosticPart::DETAILS, $new(DiagnosticFormatter$Configuration$DiagnosticPart, "DETAILS"_s, 1));
	$assignStatic(DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE, $new(DiagnosticFormatter$Configuration$DiagnosticPart, "SOURCE"_s, 2));
	$assignStatic(DiagnosticFormatter$Configuration$DiagnosticPart::SUBDIAGNOSTICS, $new(DiagnosticFormatter$Configuration$DiagnosticPart, "SUBDIAGNOSTICS"_s, 3));
	$assignStatic(DiagnosticFormatter$Configuration$DiagnosticPart::JLS, $new(DiagnosticFormatter$Configuration$DiagnosticPart, "JLS"_s, 4));
	$assignStatic(DiagnosticFormatter$Configuration$DiagnosticPart::$VALUES, DiagnosticFormatter$Configuration$DiagnosticPart::$values());
}

DiagnosticFormatter$Configuration$DiagnosticPart::DiagnosticFormatter$Configuration$DiagnosticPart() {
}

$Class* DiagnosticFormatter$Configuration$DiagnosticPart::load$($String* name, bool initialize) {
	$loadClass(DiagnosticFormatter$Configuration$DiagnosticPart, name, initialize, &_DiagnosticFormatter$Configuration$DiagnosticPart_ClassInfo_, clinit$DiagnosticFormatter$Configuration$DiagnosticPart, allocate$DiagnosticFormatter$Configuration$DiagnosticPart);
	return class$;
}

$Class* DiagnosticFormatter$Configuration$DiagnosticPart::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com