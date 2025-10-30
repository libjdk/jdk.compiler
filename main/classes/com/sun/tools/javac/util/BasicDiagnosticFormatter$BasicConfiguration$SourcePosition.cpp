#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition.h>

#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef AFTER_SUMMARY
#undef BOTTOM

using $BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray = $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition>;
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

$FieldInfo _BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_FieldInfo_[] = {
	{"BOTTOM", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, BOTTOM)},
	{"AFTER_SUMMARY", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, AFTER_SUMMARY)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, $VALUES)},
	{}
};

$MethodInfo _BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray*(*)()>(&BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::*)($String*,int32_t)>(&BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BasicDiagnosticFormatter$BasicConfiguration$SourcePosition*(*)($String*)>(&BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray*(*)()>(&BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::values))},
	{}
};

$InnerClassInfo _BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "com.sun.tools.javac.util.BasicDiagnosticFormatter", "BasicConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition", "com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "SourcePosition", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition",
	"java.lang.Enum",
	nullptr,
	_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_FieldInfo_,
	_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;>;",
	nullptr,
	_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.BasicDiagnosticFormatter"
};

$Object* allocate$BasicDiagnosticFormatter$BasicConfiguration$SourcePosition($Class* clazz) {
	return $of($alloc(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition));
}

BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM = nullptr;
BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY = nullptr;
$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$VALUES = nullptr;

$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$values() {
	$init(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return $new($BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray, {
		BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM,
		BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY
	});
}

$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::values() {
	$init(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return $cast($BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray, BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$VALUES->clone());
}

BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::valueOf($String* name) {
	$init(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return $cast(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, $Enum::valueOf(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::class$, name));
}

void BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$BasicDiagnosticFormatter$BasicConfiguration$SourcePosition($Class* class$) {
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM, $new(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, "BOTTOM"_s, 0));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY, $new(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, "AFTER_SUMMARY"_s, 1));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$VALUES, BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$values());
}

BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition() {
}

$Class* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::load$($String* name, bool initialize) {
	$loadClass(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, name, initialize, &_BasicDiagnosticFormatter$BasicConfiguration$SourcePosition_ClassInfo_, clinit$BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, allocate$BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return class$;
}

$Class* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com