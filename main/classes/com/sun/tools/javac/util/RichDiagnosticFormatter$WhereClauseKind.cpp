#include <com/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind.h>

#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CAPTURED
#undef INTERSECTION
#undef TYPEVAR

using $RichDiagnosticFormatter$WhereClauseKindArray = $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$WhereClauseKind>;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
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

$FieldInfo _RichDiagnosticFormatter$WhereClauseKind_FieldInfo_[] = {
	{"TYPEVAR", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RichDiagnosticFormatter$WhereClauseKind, TYPEVAR)},
	{"CAPTURED", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RichDiagnosticFormatter$WhereClauseKind, CAPTURED)},
	{"INTERSECTION", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RichDiagnosticFormatter$WhereClauseKind, INTERSECTION)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RichDiagnosticFormatter$WhereClauseKind, $VALUES)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(RichDiagnosticFormatter$WhereClauseKind, key$)},
	{}
};

$MethodInfo _RichDiagnosticFormatter$WhereClauseKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RichDiagnosticFormatter$WhereClauseKindArray*(*)()>(&RichDiagnosticFormatter$WhereClauseKind::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(RichDiagnosticFormatter$WhereClauseKind::*)($String*,int32_t,$String*)>(&RichDiagnosticFormatter$WhereClauseKind::init$))},
	{"key", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(RichDiagnosticFormatter$WhereClauseKind::*)()>(&RichDiagnosticFormatter$WhereClauseKind::key))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RichDiagnosticFormatter$WhereClauseKind*(*)($String*)>(&RichDiagnosticFormatter$WhereClauseKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RichDiagnosticFormatter$WhereClauseKindArray*(*)()>(&RichDiagnosticFormatter$WhereClauseKind::values))},
	{}
};

$InnerClassInfo _RichDiagnosticFormatter$WhereClauseKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind", "com.sun.tools.javac.util.RichDiagnosticFormatter", "WhereClauseKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RichDiagnosticFormatter$WhereClauseKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$WhereClauseKind",
	"java.lang.Enum",
	nullptr,
	_RichDiagnosticFormatter$WhereClauseKind_FieldInfo_,
	_RichDiagnosticFormatter$WhereClauseKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/RichDiagnosticFormatter$WhereClauseKind;>;",
	nullptr,
	_RichDiagnosticFormatter$WhereClauseKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter"
};

$Object* allocate$RichDiagnosticFormatter$WhereClauseKind($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter$WhereClauseKind));
}

RichDiagnosticFormatter$WhereClauseKind* RichDiagnosticFormatter$WhereClauseKind::TYPEVAR = nullptr;
RichDiagnosticFormatter$WhereClauseKind* RichDiagnosticFormatter$WhereClauseKind::CAPTURED = nullptr;
RichDiagnosticFormatter$WhereClauseKind* RichDiagnosticFormatter$WhereClauseKind::INTERSECTION = nullptr;
$RichDiagnosticFormatter$WhereClauseKindArray* RichDiagnosticFormatter$WhereClauseKind::$VALUES = nullptr;

$RichDiagnosticFormatter$WhereClauseKindArray* RichDiagnosticFormatter$WhereClauseKind::$values() {
	$init(RichDiagnosticFormatter$WhereClauseKind);
	return $new($RichDiagnosticFormatter$WhereClauseKindArray, {
		RichDiagnosticFormatter$WhereClauseKind::TYPEVAR,
		RichDiagnosticFormatter$WhereClauseKind::CAPTURED,
		RichDiagnosticFormatter$WhereClauseKind::INTERSECTION
	});
}

$RichDiagnosticFormatter$WhereClauseKindArray* RichDiagnosticFormatter$WhereClauseKind::values() {
	$init(RichDiagnosticFormatter$WhereClauseKind);
	return $cast($RichDiagnosticFormatter$WhereClauseKindArray, RichDiagnosticFormatter$WhereClauseKind::$VALUES->clone());
}

RichDiagnosticFormatter$WhereClauseKind* RichDiagnosticFormatter$WhereClauseKind::valueOf($String* name) {
	$init(RichDiagnosticFormatter$WhereClauseKind);
	return $cast(RichDiagnosticFormatter$WhereClauseKind, $Enum::valueOf(RichDiagnosticFormatter$WhereClauseKind::class$, name));
}

void RichDiagnosticFormatter$WhereClauseKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* key) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, key$, key);
}

$String* RichDiagnosticFormatter$WhereClauseKind::key() {
	return this->key$;
}

void clinit$RichDiagnosticFormatter$WhereClauseKind($Class* class$) {
	$assignStatic(RichDiagnosticFormatter$WhereClauseKind::TYPEVAR, $new(RichDiagnosticFormatter$WhereClauseKind, "TYPEVAR"_s, 0, "where.description.typevar"_s));
	$assignStatic(RichDiagnosticFormatter$WhereClauseKind::CAPTURED, $new(RichDiagnosticFormatter$WhereClauseKind, "CAPTURED"_s, 1, "where.description.captured"_s));
	$assignStatic(RichDiagnosticFormatter$WhereClauseKind::INTERSECTION, $new(RichDiagnosticFormatter$WhereClauseKind, "INTERSECTION"_s, 2, "where.description.intersection"_s));
	$assignStatic(RichDiagnosticFormatter$WhereClauseKind::$VALUES, RichDiagnosticFormatter$WhereClauseKind::$values());
}

RichDiagnosticFormatter$WhereClauseKind::RichDiagnosticFormatter$WhereClauseKind() {
}

$Class* RichDiagnosticFormatter$WhereClauseKind::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter$WhereClauseKind, name, initialize, &_RichDiagnosticFormatter$WhereClauseKind_ClassInfo_, clinit$RichDiagnosticFormatter$WhereClauseKind, allocate$RichDiagnosticFormatter$WhereClauseKind);
	return class$;
}

$Class* RichDiagnosticFormatter$WhereClauseKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com