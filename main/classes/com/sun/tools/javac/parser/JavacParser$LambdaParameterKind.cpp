#include <com/sun/tools/javac/parser/JavacParser$LambdaParameterKind.h>

#include <com/sun/tools/javac/parser/JavacParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ERROR
#undef EXPLICIT
#undef IMPLICIT
#undef VAR

using $JavacParser$LambdaParameterKindArray = $Array<::com::sun::tools::javac::parser::JavacParser$LambdaParameterKind>;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavacParser$LambdaParameterKind_FieldInfo_[] = {
	{"VAR", "Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$LambdaParameterKind, VAR)},
	{"EXPLICIT", "Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$LambdaParameterKind, EXPLICIT)},
	{"IMPLICIT", "Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$LambdaParameterKind, IMPLICIT)},
	{"ERROR", "Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$LambdaParameterKind, ERROR)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$LambdaParameterKind, $VALUES)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(JavacParser$LambdaParameterKind, index)},
	{}
};

$MethodInfo _JavacParser$LambdaParameterKind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavacParser$LambdaParameterKindArray*(*)()>(&JavacParser$LambdaParameterKind::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(JavacParser$LambdaParameterKind::*)($String*,int32_t,int32_t)>(&JavacParser$LambdaParameterKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacParser$LambdaParameterKind*(*)($String*)>(&JavacParser$LambdaParameterKind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavacParser$LambdaParameterKindArray*(*)()>(&JavacParser$LambdaParameterKind::values))},
	{}
};

$InnerClassInfo _JavacParser$LambdaParameterKind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$LambdaParameterKind", "com.sun.tools.javac.parser.JavacParser", "LambdaParameterKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacParser$LambdaParameterKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.JavacParser$LambdaParameterKind",
	"java.lang.Enum",
	nullptr,
	_JavacParser$LambdaParameterKind_FieldInfo_,
	_JavacParser$LambdaParameterKind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/JavacParser$LambdaParameterKind;>;",
	nullptr,
	_JavacParser$LambdaParameterKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$LambdaParameterKind($Class* clazz) {
	return $of($alloc(JavacParser$LambdaParameterKind));
}

JavacParser$LambdaParameterKind* JavacParser$LambdaParameterKind::VAR = nullptr;
JavacParser$LambdaParameterKind* JavacParser$LambdaParameterKind::EXPLICIT = nullptr;
JavacParser$LambdaParameterKind* JavacParser$LambdaParameterKind::IMPLICIT = nullptr;
JavacParser$LambdaParameterKind* JavacParser$LambdaParameterKind::ERROR = nullptr;
$JavacParser$LambdaParameterKindArray* JavacParser$LambdaParameterKind::$VALUES = nullptr;

$JavacParser$LambdaParameterKindArray* JavacParser$LambdaParameterKind::$values() {
	$init(JavacParser$LambdaParameterKind);
	return $new($JavacParser$LambdaParameterKindArray, {
		JavacParser$LambdaParameterKind::VAR,
		JavacParser$LambdaParameterKind::EXPLICIT,
		JavacParser$LambdaParameterKind::IMPLICIT,
		JavacParser$LambdaParameterKind::ERROR
	});
}

$JavacParser$LambdaParameterKindArray* JavacParser$LambdaParameterKind::values() {
	$init(JavacParser$LambdaParameterKind);
	return $cast($JavacParser$LambdaParameterKindArray, JavacParser$LambdaParameterKind::$VALUES->clone());
}

JavacParser$LambdaParameterKind* JavacParser$LambdaParameterKind::valueOf($String* name) {
	$init(JavacParser$LambdaParameterKind);
	return $cast(JavacParser$LambdaParameterKind, $Enum::valueOf(JavacParser$LambdaParameterKind::class$, name));
}

void JavacParser$LambdaParameterKind::init$($String* $enum$name, int32_t $enum$ordinal, int32_t index) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->index = index;
}

void clinit$JavacParser$LambdaParameterKind($Class* class$) {
	$assignStatic(JavacParser$LambdaParameterKind::VAR, $new(JavacParser$LambdaParameterKind, "VAR"_s, 0, 0));
	$assignStatic(JavacParser$LambdaParameterKind::EXPLICIT, $new(JavacParser$LambdaParameterKind, "EXPLICIT"_s, 1, 1));
	$assignStatic(JavacParser$LambdaParameterKind::IMPLICIT, $new(JavacParser$LambdaParameterKind, "IMPLICIT"_s, 2, 2));
	$assignStatic(JavacParser$LambdaParameterKind::ERROR, $new(JavacParser$LambdaParameterKind, "ERROR"_s, 3, -1));
	$assignStatic(JavacParser$LambdaParameterKind::$VALUES, JavacParser$LambdaParameterKind::$values());
}

JavacParser$LambdaParameterKind::JavacParser$LambdaParameterKind() {
}

$Class* JavacParser$LambdaParameterKind::load$($String* name, bool initialize) {
	$loadClass(JavacParser$LambdaParameterKind, name, initialize, &_JavacParser$LambdaParameterKind_ClassInfo_, clinit$JavacParser$LambdaParameterKind, allocate$JavacParser$LambdaParameterKind);
	return class$;
}

$Class* JavacParser$LambdaParameterKind::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com