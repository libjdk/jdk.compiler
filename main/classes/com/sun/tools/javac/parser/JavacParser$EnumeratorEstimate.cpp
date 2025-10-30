#include <com/sun/tools/javac/parser/JavacParser$EnumeratorEstimate.h>

#include <com/sun/tools/javac/parser/JavacParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ENUMERATOR
#undef MEMBER
#undef UNKNOWN

using $JavacParser$EnumeratorEstimateArray = $Array<::com::sun::tools::javac::parser::JavacParser$EnumeratorEstimate>;
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

$FieldInfo _JavacParser$EnumeratorEstimate_FieldInfo_[] = {
	{"ENUMERATOR", "Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$EnumeratorEstimate, ENUMERATOR)},
	{"MEMBER", "Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$EnumeratorEstimate, MEMBER)},
	{"UNKNOWN", "Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$EnumeratorEstimate, UNKNOWN)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$EnumeratorEstimate, $VALUES)},
	{}
};

$MethodInfo _JavacParser$EnumeratorEstimate_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavacParser$EnumeratorEstimateArray*(*)()>(&JavacParser$EnumeratorEstimate::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavacParser$EnumeratorEstimate::*)($String*,int32_t)>(&JavacParser$EnumeratorEstimate::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavacParser$EnumeratorEstimate*(*)($String*)>(&JavacParser$EnumeratorEstimate::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavacParser$EnumeratorEstimateArray*(*)()>(&JavacParser$EnumeratorEstimate::values))},
	{}
};

$InnerClassInfo _JavacParser$EnumeratorEstimate_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavacParser$EnumeratorEstimate", "com.sun.tools.javac.parser.JavacParser", "EnumeratorEstimate", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavacParser$EnumeratorEstimate_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.JavacParser$EnumeratorEstimate",
	"java.lang.Enum",
	nullptr,
	_JavacParser$EnumeratorEstimate_FieldInfo_,
	_JavacParser$EnumeratorEstimate_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/JavacParser$EnumeratorEstimate;>;",
	nullptr,
	_JavacParser$EnumeratorEstimate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavacParser"
};

$Object* allocate$JavacParser$EnumeratorEstimate($Class* clazz) {
	return $of($alloc(JavacParser$EnumeratorEstimate));
}

JavacParser$EnumeratorEstimate* JavacParser$EnumeratorEstimate::ENUMERATOR = nullptr;
JavacParser$EnumeratorEstimate* JavacParser$EnumeratorEstimate::MEMBER = nullptr;
JavacParser$EnumeratorEstimate* JavacParser$EnumeratorEstimate::UNKNOWN = nullptr;
$JavacParser$EnumeratorEstimateArray* JavacParser$EnumeratorEstimate::$VALUES = nullptr;

$JavacParser$EnumeratorEstimateArray* JavacParser$EnumeratorEstimate::$values() {
	$init(JavacParser$EnumeratorEstimate);
	return $new($JavacParser$EnumeratorEstimateArray, {
		JavacParser$EnumeratorEstimate::ENUMERATOR,
		JavacParser$EnumeratorEstimate::MEMBER,
		JavacParser$EnumeratorEstimate::UNKNOWN
	});
}

$JavacParser$EnumeratorEstimateArray* JavacParser$EnumeratorEstimate::values() {
	$init(JavacParser$EnumeratorEstimate);
	return $cast($JavacParser$EnumeratorEstimateArray, JavacParser$EnumeratorEstimate::$VALUES->clone());
}

JavacParser$EnumeratorEstimate* JavacParser$EnumeratorEstimate::valueOf($String* name) {
	$init(JavacParser$EnumeratorEstimate);
	return $cast(JavacParser$EnumeratorEstimate, $Enum::valueOf(JavacParser$EnumeratorEstimate::class$, name));
}

void JavacParser$EnumeratorEstimate::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JavacParser$EnumeratorEstimate($Class* class$) {
	$assignStatic(JavacParser$EnumeratorEstimate::ENUMERATOR, $new(JavacParser$EnumeratorEstimate, "ENUMERATOR"_s, 0));
	$assignStatic(JavacParser$EnumeratorEstimate::MEMBER, $new(JavacParser$EnumeratorEstimate, "MEMBER"_s, 1));
	$assignStatic(JavacParser$EnumeratorEstimate::UNKNOWN, $new(JavacParser$EnumeratorEstimate, "UNKNOWN"_s, 2));
	$assignStatic(JavacParser$EnumeratorEstimate::$VALUES, JavacParser$EnumeratorEstimate::$values());
}

JavacParser$EnumeratorEstimate::JavacParser$EnumeratorEstimate() {
}

$Class* JavacParser$EnumeratorEstimate::load$($String* name, bool initialize) {
	$loadClass(JavacParser$EnumeratorEstimate, name, initialize, &_JavacParser$EnumeratorEstimate_ClassInfo_, clinit$JavacParser$EnumeratorEstimate, allocate$JavacParser$EnumeratorEstimate);
	return class$;
}

$Class* JavacParser$EnumeratorEstimate::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com