#include <com/sun/tools/javac/parser/JavacParser$ParensResult.h>

#include <com/sun/tools/javac/parser/JavacParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CAST
#undef EXPLICIT_LAMBDA
#undef IMPLICIT_LAMBDA
#undef PARENS

using $JavacParser$ParensResultArray = $Array<::com::sun::tools::javac::parser::JavacParser$ParensResult>;
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

$FieldInfo _JavacParser$ParensResult_FieldInfo_[] = {
	{"CAST", "Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$ParensResult, CAST)},
	{"EXPLICIT_LAMBDA", "Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$ParensResult, EXPLICIT_LAMBDA)},
	{"IMPLICIT_LAMBDA", "Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$ParensResult, IMPLICIT_LAMBDA)},
	{"PARENS", "Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$ParensResult, PARENS)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$ParensResult, $VALUES)},
	{}
};

$MethodInfo _JavacParser$ParensResult_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavacParser$ParensResultArray*(*)()>(&JavacParser$ParensResult::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavacParser$ParensResult::*)($String*,int32_t)>(&JavacParser$ParensResult::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacParser$ParensResult*(*)($String*)>(&JavacParser$ParensResult::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/JavacParser$ParensResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavacParser$ParensResultArray*(*)()>(&JavacParser$ParensResult::values))},
	{}
};

$InnerClassInfo _JavacParser$ParensResult_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$ParensResult", "com.sun.tools.javac.parser.JavacParser", "ParensResult", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacParser$ParensResult_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.JavacParser$ParensResult",
	"java.lang.Enum",
	nullptr,
	_JavacParser$ParensResult_FieldInfo_,
	_JavacParser$ParensResult_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/JavacParser$ParensResult;>;",
	nullptr,
	_JavacParser$ParensResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$ParensResult($Class* clazz) {
	return $of($alloc(JavacParser$ParensResult));
}

JavacParser$ParensResult* JavacParser$ParensResult::CAST = nullptr;
JavacParser$ParensResult* JavacParser$ParensResult::EXPLICIT_LAMBDA = nullptr;
JavacParser$ParensResult* JavacParser$ParensResult::IMPLICIT_LAMBDA = nullptr;
JavacParser$ParensResult* JavacParser$ParensResult::PARENS = nullptr;
$JavacParser$ParensResultArray* JavacParser$ParensResult::$VALUES = nullptr;

$JavacParser$ParensResultArray* JavacParser$ParensResult::$values() {
	$init(JavacParser$ParensResult);
	return $new($JavacParser$ParensResultArray, {
		JavacParser$ParensResult::CAST,
		JavacParser$ParensResult::EXPLICIT_LAMBDA,
		JavacParser$ParensResult::IMPLICIT_LAMBDA,
		JavacParser$ParensResult::PARENS
	});
}

$JavacParser$ParensResultArray* JavacParser$ParensResult::values() {
	$init(JavacParser$ParensResult);
	return $cast($JavacParser$ParensResultArray, JavacParser$ParensResult::$VALUES->clone());
}

JavacParser$ParensResult* JavacParser$ParensResult::valueOf($String* name) {
	$init(JavacParser$ParensResult);
	return $cast(JavacParser$ParensResult, $Enum::valueOf(JavacParser$ParensResult::class$, name));
}

void JavacParser$ParensResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JavacParser$ParensResult($Class* class$) {
	$assignStatic(JavacParser$ParensResult::CAST, $new(JavacParser$ParensResult, "CAST"_s, 0));
	$assignStatic(JavacParser$ParensResult::EXPLICIT_LAMBDA, $new(JavacParser$ParensResult, "EXPLICIT_LAMBDA"_s, 1));
	$assignStatic(JavacParser$ParensResult::IMPLICIT_LAMBDA, $new(JavacParser$ParensResult, "IMPLICIT_LAMBDA"_s, 2));
	$assignStatic(JavacParser$ParensResult::PARENS, $new(JavacParser$ParensResult, "PARENS"_s, 3));
	$assignStatic(JavacParser$ParensResult::$VALUES, JavacParser$ParensResult::$values());
}

JavacParser$ParensResult::JavacParser$ParensResult() {
}

$Class* JavacParser$ParensResult::load$($String* name, bool initialize) {
	$loadClass(JavacParser$ParensResult, name, initialize, &_JavacParser$ParensResult_ClassInfo_, clinit$JavacParser$ParensResult, allocate$JavacParser$ParensResult);
	return class$;
}

$Class* JavacParser$ParensResult::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com