#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>

#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BLOCK
#undef EITHER
#undef INLINE

using $DocCommentParser$TagParser$KindArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind>;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
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

$FieldInfo _DocCommentParser$TagParser$Kind_FieldInfo_[] = {
	{"INLINE", "Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$TagParser$Kind, INLINE)},
	{"BLOCK", "Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$TagParser$Kind, BLOCK)},
	{"EITHER", "Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocCommentParser$TagParser$Kind, EITHER)},
	{"$VALUES", "[Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DocCommentParser$TagParser$Kind, $VALUES)},
	{}
};

$MethodInfo _DocCommentParser$TagParser$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DocCommentParser$TagParser$KindArray*(*)()>(&DocCommentParser$TagParser$Kind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DocCommentParser$TagParser$Kind::*)($String*,int32_t)>(&DocCommentParser$TagParser$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocCommentParser$TagParser$Kind*(*)($String*)>(&DocCommentParser$TagParser$Kind::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DocCommentParser$TagParser$KindArray*(*)()>(&DocCommentParser$TagParser$Kind::values))},
	{}
};

$InnerClassInfo _DocCommentParser$TagParser$Kind_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser$Kind", "com.sun.tools.javac.parser.DocCommentParser$TagParser", "Kind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DocCommentParser$TagParser$Kind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.parser.DocCommentParser$TagParser$Kind",
	"java.lang.Enum",
	nullptr,
	_DocCommentParser$TagParser$Kind_FieldInfo_,
	_DocCommentParser$TagParser$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;>;",
	nullptr,
	_DocCommentParser$TagParser$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser"
};

$Object* allocate$DocCommentParser$TagParser$Kind($Class* clazz) {
	return $of($alloc(DocCommentParser$TagParser$Kind));
}

DocCommentParser$TagParser$Kind* DocCommentParser$TagParser$Kind::INLINE = nullptr;
DocCommentParser$TagParser$Kind* DocCommentParser$TagParser$Kind::BLOCK = nullptr;
DocCommentParser$TagParser$Kind* DocCommentParser$TagParser$Kind::EITHER = nullptr;
$DocCommentParser$TagParser$KindArray* DocCommentParser$TagParser$Kind::$VALUES = nullptr;

$DocCommentParser$TagParser$KindArray* DocCommentParser$TagParser$Kind::$values() {
	$init(DocCommentParser$TagParser$Kind);
	return $new($DocCommentParser$TagParser$KindArray, {
		DocCommentParser$TagParser$Kind::INLINE,
		DocCommentParser$TagParser$Kind::BLOCK,
		DocCommentParser$TagParser$Kind::EITHER
	});
}

$DocCommentParser$TagParser$KindArray* DocCommentParser$TagParser$Kind::values() {
	$init(DocCommentParser$TagParser$Kind);
	return $cast($DocCommentParser$TagParser$KindArray, DocCommentParser$TagParser$Kind::$VALUES->clone());
}

DocCommentParser$TagParser$Kind* DocCommentParser$TagParser$Kind::valueOf($String* name) {
	$init(DocCommentParser$TagParser$Kind);
	return $cast(DocCommentParser$TagParser$Kind, $Enum::valueOf(DocCommentParser$TagParser$Kind::class$, name));
}

void DocCommentParser$TagParser$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$DocCommentParser$TagParser$Kind($Class* class$) {
	$assignStatic(DocCommentParser$TagParser$Kind::INLINE, $new(DocCommentParser$TagParser$Kind, "INLINE"_s, 0));
	$assignStatic(DocCommentParser$TagParser$Kind::BLOCK, $new(DocCommentParser$TagParser$Kind, "BLOCK"_s, 1));
	$assignStatic(DocCommentParser$TagParser$Kind::EITHER, $new(DocCommentParser$TagParser$Kind, "EITHER"_s, 2));
	$assignStatic(DocCommentParser$TagParser$Kind::$VALUES, DocCommentParser$TagParser$Kind::$values());
}

DocCommentParser$TagParser$Kind::DocCommentParser$TagParser$Kind() {
}

$Class* DocCommentParser$TagParser$Kind::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser$TagParser$Kind, name, initialize, &_DocCommentParser$TagParser$Kind_ClassInfo_, clinit$DocCommentParser$TagParser$Kind, allocate$DocCommentParser$TagParser$Kind);
	return class$;
}

$Class* DocCommentParser$TagParser$Kind::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com