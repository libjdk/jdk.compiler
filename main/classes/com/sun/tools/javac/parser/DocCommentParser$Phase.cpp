#include <com/sun/tools/javac/parser/DocCommentParser$Phase.h>

#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BODY
#undef POSTAMBLE
#undef PREAMBLE

using $DocCommentParser$PhaseArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$Phase>;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
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

$FieldInfo _DocCommentParser$Phase_FieldInfo_[] = {
	{"PREAMBLE", "Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$Phase, PREAMBLE)},
	{"BODY", "Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$Phase, BODY)},
	{"POSTAMBLE", "Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$Phase, POSTAMBLE)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DocCommentParser$Phase, $VALUES)},
	{}
};

$MethodInfo _DocCommentParser$Phase_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DocCommentParser$PhaseArray*(*)()>(&DocCommentParser$Phase::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DocCommentParser$Phase::*)($String*,int32_t)>(&DocCommentParser$Phase::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocCommentParser$Phase*(*)($String*)>(&DocCommentParser$Phase::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/DocCommentParser$Phase;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DocCommentParser$PhaseArray*(*)()>(&DocCommentParser$Phase::values))},
	{}
};

$InnerClassInfo _DocCommentParser$Phase_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$Phase", "com.sun.tools.javac.parser.DocCommentParser", "Phase", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DocCommentParser$Phase_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.DocCommentParser$Phase",
	"java.lang.Enum",
	nullptr,
	_DocCommentParser$Phase_FieldInfo_,
	_DocCommentParser$Phase_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/DocCommentParser$Phase;>;",
	nullptr,
	_DocCommentParser$Phase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$Phase($Class* clazz) {
	return $of($alloc(DocCommentParser$Phase));
}

DocCommentParser$Phase* DocCommentParser$Phase::PREAMBLE = nullptr;
DocCommentParser$Phase* DocCommentParser$Phase::BODY = nullptr;
DocCommentParser$Phase* DocCommentParser$Phase::POSTAMBLE = nullptr;
$DocCommentParser$PhaseArray* DocCommentParser$Phase::$VALUES = nullptr;

$DocCommentParser$PhaseArray* DocCommentParser$Phase::$values() {
	$init(DocCommentParser$Phase);
	return $new($DocCommentParser$PhaseArray, {
		DocCommentParser$Phase::PREAMBLE,
		DocCommentParser$Phase::BODY,
		DocCommentParser$Phase::POSTAMBLE
	});
}

$DocCommentParser$PhaseArray* DocCommentParser$Phase::values() {
	$init(DocCommentParser$Phase);
	return $cast($DocCommentParser$PhaseArray, DocCommentParser$Phase::$VALUES->clone());
}

DocCommentParser$Phase* DocCommentParser$Phase::valueOf($String* name) {
	$init(DocCommentParser$Phase);
	return $cast(DocCommentParser$Phase, $Enum::valueOf(DocCommentParser$Phase::class$, name));
}

void DocCommentParser$Phase::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DocCommentParser$Phase($Class* class$) {
	$assignStatic(DocCommentParser$Phase::PREAMBLE, $new(DocCommentParser$Phase, "PREAMBLE"_s, 0));
	$assignStatic(DocCommentParser$Phase::BODY, $new(DocCommentParser$Phase, "BODY"_s, 1));
	$assignStatic(DocCommentParser$Phase::POSTAMBLE, $new(DocCommentParser$Phase, "POSTAMBLE"_s, 2));
	$assignStatic(DocCommentParser$Phase::$VALUES, DocCommentParser$Phase::$values());
}

DocCommentParser$Phase::DocCommentParser$Phase() {
}

$Class* DocCommentParser$Phase::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$Phase, name, initialize, &_DocCommentParser$Phase_ClassInfo_, clinit$DocCommentParser$Phase, allocate$DocCommentParser$Phase);
	return class$;
}

$Class* DocCommentParser$Phase::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com