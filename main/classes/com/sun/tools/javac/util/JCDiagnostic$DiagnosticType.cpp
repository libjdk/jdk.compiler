#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>

#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ERROR
#undef FRAGMENT
#undef NOTE
#undef WARNING

using $JCDiagnostic$DiagnosticTypeArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType>;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
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

$FieldInfo _JCDiagnostic$DiagnosticType_FieldInfo_[] = {
	{"FRAGMENT", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticType, FRAGMENT)},
	{"NOTE", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticType, NOTE)},
	{"WARNING", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticType, WARNING)},
	{"ERROR", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticType, ERROR)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCDiagnostic$DiagnosticType, $VALUES)},
	{"key", "Ljava/lang/String;", nullptr, $FINAL, $field(JCDiagnostic$DiagnosticType, key)},
	{}
};

$MethodInfo _JCDiagnostic$DiagnosticType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JCDiagnostic$DiagnosticTypeArray*(*)()>(&JCDiagnostic$DiagnosticType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(JCDiagnostic$DiagnosticType::*)($String*,int32_t,$String*)>(&JCDiagnostic$DiagnosticType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JCDiagnostic$DiagnosticType*(*)($String*)>(&JCDiagnostic$DiagnosticType::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$DiagnosticTypeArray*(*)()>(&JCDiagnostic$DiagnosticType::values))},
	{}
};

$InnerClassInfo _JCDiagnostic$DiagnosticType_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticType", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JCDiagnostic$DiagnosticType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticType",
	"java.lang.Enum",
	nullptr,
	_JCDiagnostic$DiagnosticType_FieldInfo_,
	_JCDiagnostic$DiagnosticType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;>;",
	nullptr,
	_JCDiagnostic$DiagnosticType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$DiagnosticType($Class* clazz) {
	return $of($alloc(JCDiagnostic$DiagnosticType));
}

JCDiagnostic$DiagnosticType* JCDiagnostic$DiagnosticType::FRAGMENT = nullptr;
JCDiagnostic$DiagnosticType* JCDiagnostic$DiagnosticType::NOTE = nullptr;
JCDiagnostic$DiagnosticType* JCDiagnostic$DiagnosticType::WARNING = nullptr;
JCDiagnostic$DiagnosticType* JCDiagnostic$DiagnosticType::ERROR = nullptr;
$JCDiagnostic$DiagnosticTypeArray* JCDiagnostic$DiagnosticType::$VALUES = nullptr;

$JCDiagnostic$DiagnosticTypeArray* JCDiagnostic$DiagnosticType::$values() {
	$init(JCDiagnostic$DiagnosticType);
	return $new($JCDiagnostic$DiagnosticTypeArray, {
		JCDiagnostic$DiagnosticType::FRAGMENT,
		JCDiagnostic$DiagnosticType::NOTE,
		JCDiagnostic$DiagnosticType::WARNING,
		JCDiagnostic$DiagnosticType::ERROR
	});
}

$JCDiagnostic$DiagnosticTypeArray* JCDiagnostic$DiagnosticType::values() {
	$init(JCDiagnostic$DiagnosticType);
	return $cast($JCDiagnostic$DiagnosticTypeArray, JCDiagnostic$DiagnosticType::$VALUES->clone());
}

JCDiagnostic$DiagnosticType* JCDiagnostic$DiagnosticType::valueOf($String* name) {
	$init(JCDiagnostic$DiagnosticType);
	return $cast(JCDiagnostic$DiagnosticType, $Enum::valueOf(JCDiagnostic$DiagnosticType::class$, name));
}

void JCDiagnostic$DiagnosticType::init$($String* $enum$name, int32_t $enum$ordinal, $String* key) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, key, key);
}

void clinit$JCDiagnostic$DiagnosticType($Class* class$) {
	$assignStatic(JCDiagnostic$DiagnosticType::FRAGMENT, $new(JCDiagnostic$DiagnosticType, "FRAGMENT"_s, 0, "misc"_s));
	$assignStatic(JCDiagnostic$DiagnosticType::NOTE, $new(JCDiagnostic$DiagnosticType, "NOTE"_s, 1, "note"_s));
	$assignStatic(JCDiagnostic$DiagnosticType::WARNING, $new(JCDiagnostic$DiagnosticType, "WARNING"_s, 2, "warn"_s));
	$assignStatic(JCDiagnostic$DiagnosticType::ERROR, $new(JCDiagnostic$DiagnosticType, "ERROR"_s, 3, "err"_s));
	$assignStatic(JCDiagnostic$DiagnosticType::$VALUES, JCDiagnostic$DiagnosticType::$values());
}

JCDiagnostic$DiagnosticType::JCDiagnostic$DiagnosticType() {
}

$Class* JCDiagnostic$DiagnosticType::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$DiagnosticType, name, initialize, &_JCDiagnostic$DiagnosticType_ClassInfo_, clinit$JCDiagnostic$DiagnosticType, allocate$JCDiagnostic$DiagnosticType);
	return class$;
}

$Class* JCDiagnostic$DiagnosticType::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com