#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind.h>

#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DEFAULT_CLASS_FORMAT
#undef DEFAULT_NO_POS_FORMAT
#undef DEFAULT_POS_FORMAT

using $BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray = $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind>;
using $BasicDiagnosticFormatter$BasicConfiguration = ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration;
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

$FieldInfo _BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_FieldInfo_[] = {
	{"DEFAULT_POS_FORMAT", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, DEFAULT_POS_FORMAT)},
	{"DEFAULT_NO_POS_FORMAT", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, DEFAULT_NO_POS_FORMAT)},
	{"DEFAULT_CLASS_FORMAT", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, DEFAULT_CLASS_FORMAT)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, $VALUES)},
	{}
};

$MethodInfo _BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray*(*)()>(&BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::*)($String*,int32_t)>(&BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind*(*)($String*)>(&BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray*(*)()>(&BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::values))},
	{}
};

$InnerClassInfo _BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "com.sun.tools.javac.util.BasicDiagnosticFormatter", "BasicConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind", "com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "BasicFormatKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind",
	"java.lang.Enum",
	nullptr,
	_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_FieldInfo_,
	_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;>;",
	nullptr,
	_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter"
};

$Object* allocate$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind($Class* clazz) {
	return $of($alloc(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind));
}

BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_POS_FORMAT = nullptr;
BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_NO_POS_FORMAT = nullptr;
BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_CLASS_FORMAT = nullptr;
$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::$VALUES = nullptr;

$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::$values() {
	$init(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	return $new($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray, {
		BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_POS_FORMAT,
		BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_NO_POS_FORMAT,
		BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_CLASS_FORMAT
	});
}

$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::values() {
	$init(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	return $cast($BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKindArray, BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::$VALUES->clone());
}

BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::valueOf($String* name) {
	$init(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	return $cast(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, $Enum::valueOf(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::class$, name));
}

void BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind($Class* class$) {
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_POS_FORMAT, $new(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, "DEFAULT_POS_FORMAT"_s, 0));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_NO_POS_FORMAT, $new(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, "DEFAULT_NO_POS_FORMAT"_s, 1));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::DEFAULT_CLASS_FORMAT, $new(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, "DEFAULT_CLASS_FORMAT"_s, 2));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::$VALUES, BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::$values());
}

BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind() {
}

$Class* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::load$($String* name, bool initialize) {
	$loadClass(BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, name, initialize, &_BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind_ClassInfo_, clinit$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind, allocate$BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind);
	return class$;
}

$Class* BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com