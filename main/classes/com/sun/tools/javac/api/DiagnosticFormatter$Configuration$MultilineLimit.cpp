#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>

#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DEPTH
#undef LENGTH

using $DiagnosticFormatter$Configuration$MultilineLimitArray = $Array<::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit>;
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

$FieldInfo _DiagnosticFormatter$Configuration$MultilineLimit_FieldInfo_[] = {
	{"DEPTH", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$MultilineLimit, DEPTH)},
	{"LENGTH", "Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$Configuration$MultilineLimit, LENGTH)},
	{"$VALUES", "[Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DiagnosticFormatter$Configuration$MultilineLimit, $VALUES)},
	{}
};

$MethodInfo _DiagnosticFormatter$Configuration$MultilineLimit_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DiagnosticFormatter$Configuration$MultilineLimitArray*(*)()>(&DiagnosticFormatter$Configuration$MultilineLimit::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DiagnosticFormatter$Configuration$MultilineLimit::*)($String*,int32_t)>(&DiagnosticFormatter$Configuration$MultilineLimit::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DiagnosticFormatter$Configuration$MultilineLimit*(*)($String*)>(&DiagnosticFormatter$Configuration$MultilineLimit::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DiagnosticFormatter$Configuration$MultilineLimitArray*(*)()>(&DiagnosticFormatter$Configuration$MultilineLimit::values))},
	{}
};

$InnerClassInfo _DiagnosticFormatter$Configuration$MultilineLimit_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit", "com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "MultilineLimit", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DiagnosticFormatter$Configuration$MultilineLimit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit",
	"java.lang.Enum",
	nullptr,
	_DiagnosticFormatter$Configuration$MultilineLimit_FieldInfo_,
	_DiagnosticFormatter$Configuration$MultilineLimit_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit;>;",
	nullptr,
	_DiagnosticFormatter$Configuration$MultilineLimit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.DiagnosticFormatter"
};

$Object* allocate$DiagnosticFormatter$Configuration$MultilineLimit($Class* clazz) {
	return $of($alloc(DiagnosticFormatter$Configuration$MultilineLimit));
}

DiagnosticFormatter$Configuration$MultilineLimit* DiagnosticFormatter$Configuration$MultilineLimit::DEPTH = nullptr;
DiagnosticFormatter$Configuration$MultilineLimit* DiagnosticFormatter$Configuration$MultilineLimit::LENGTH = nullptr;
$DiagnosticFormatter$Configuration$MultilineLimitArray* DiagnosticFormatter$Configuration$MultilineLimit::$VALUES = nullptr;

$DiagnosticFormatter$Configuration$MultilineLimitArray* DiagnosticFormatter$Configuration$MultilineLimit::$values() {
	$init(DiagnosticFormatter$Configuration$MultilineLimit);
	return $new($DiagnosticFormatter$Configuration$MultilineLimitArray, {
		DiagnosticFormatter$Configuration$MultilineLimit::DEPTH,
		DiagnosticFormatter$Configuration$MultilineLimit::LENGTH
	});
}

$DiagnosticFormatter$Configuration$MultilineLimitArray* DiagnosticFormatter$Configuration$MultilineLimit::values() {
	$init(DiagnosticFormatter$Configuration$MultilineLimit);
	return $cast($DiagnosticFormatter$Configuration$MultilineLimitArray, DiagnosticFormatter$Configuration$MultilineLimit::$VALUES->clone());
}

DiagnosticFormatter$Configuration$MultilineLimit* DiagnosticFormatter$Configuration$MultilineLimit::valueOf($String* name) {
	$init(DiagnosticFormatter$Configuration$MultilineLimit);
	return $cast(DiagnosticFormatter$Configuration$MultilineLimit, $Enum::valueOf(DiagnosticFormatter$Configuration$MultilineLimit::class$, name));
}

void DiagnosticFormatter$Configuration$MultilineLimit::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DiagnosticFormatter$Configuration$MultilineLimit($Class* class$) {
	$assignStatic(DiagnosticFormatter$Configuration$MultilineLimit::DEPTH, $new(DiagnosticFormatter$Configuration$MultilineLimit, "DEPTH"_s, 0));
	$assignStatic(DiagnosticFormatter$Configuration$MultilineLimit::LENGTH, $new(DiagnosticFormatter$Configuration$MultilineLimit, "LENGTH"_s, 1));
	$assignStatic(DiagnosticFormatter$Configuration$MultilineLimit::$VALUES, DiagnosticFormatter$Configuration$MultilineLimit::$values());
}

DiagnosticFormatter$Configuration$MultilineLimit::DiagnosticFormatter$Configuration$MultilineLimit() {
}

$Class* DiagnosticFormatter$Configuration$MultilineLimit::load$($String* name, bool initialize) {
	$loadClass(DiagnosticFormatter$Configuration$MultilineLimit, name, initialize, &_DiagnosticFormatter$Configuration$MultilineLimit_ClassInfo_, clinit$DiagnosticFormatter$Configuration$MultilineLimit, allocate$DiagnosticFormatter$Configuration$MultilineLimit);
	return class$;
}

$Class* DiagnosticFormatter$Configuration$MultilineLimit::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com