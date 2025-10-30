#include <com/sun/tools/javac/parser/JavadocTokenizer.h>

#include <com/sun/tools/javac/parser/JavaTokenizer$BasicComment.h>
#include <com/sun/tools/javac/parser/JavaTokenizer.h>
#include <com/sun/tools/javac/parser/JavadocTokenizer$JavadocComment.h>
#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $JavaTokenizer = ::com::sun::tools::javac::parser::JavaTokenizer;
using $JavaTokenizer$BasicComment = ::com::sun::tools::javac::parser::JavaTokenizer$BasicComment;
using $JavadocTokenizer$JavadocComment = ::com::sun::tools::javac::parser::JavadocTokenizer$JavadocComment;
using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $UnicodeReader = ::com::sun::tools::javac::parser::UnicodeReader;
using $Position = ::com::sun::tools::javac::util::Position;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavadocTokenizer_FieldInfo_[] = {
	{"fac", "Lcom/sun/tools/javac/parser/ScannerFactory;", nullptr, $FINAL, $field(JavadocTokenizer, fac)},
	{}
};

$MethodInfo _JavadocTokenizer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;Ljava/nio/CharBuffer;)V", nullptr, $PROTECTED, $method(static_cast<void(JavadocTokenizer::*)($ScannerFactory*,$CharBuffer*)>(&JavadocTokenizer::init$))},
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, $PROTECTED, $method(static_cast<void(JavadocTokenizer::*)($ScannerFactory*,$chars*,int32_t)>(&JavadocTokenizer::init$))},
	{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC},
	{"processComment", "(IILcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JavadocTokenizer_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavadocTokenizer$OffsetMap", "com.sun.tools.javac.parser.JavadocTokenizer", "OffsetMap", $STATIC},
	{"com.sun.tools.javac.parser.JavadocTokenizer$JavadocComment", "com.sun.tools.javac.parser.JavadocTokenizer", "JavadocComment", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _JavadocTokenizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavadocTokenizer",
	"com.sun.tools.javac.parser.JavaTokenizer",
	nullptr,
	_JavadocTokenizer_FieldInfo_,
	_JavadocTokenizer_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocTokenizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavadocTokenizer$OffsetMap,com.sun.tools.javac.parser.JavadocTokenizer$JavadocComment"
};

$Object* allocate$JavadocTokenizer($Class* clazz) {
	return $of($alloc(JavadocTokenizer));
}

void JavadocTokenizer::init$($ScannerFactory* fac, $CharBuffer* cb) {
	$JavaTokenizer::init$(fac, cb);
	$set(this, fac, fac);
}

void JavadocTokenizer::init$($ScannerFactory* fac, $chars* array, int32_t length) {
	$JavaTokenizer::init$(fac, array, length);
	$set(this, fac, fac);
}

$Tokens$Comment* JavadocTokenizer::processComment(int32_t pos, int32_t endPos, $Tokens$Comment$CommentStyle* style) {
	$var($chars, buf, getRawCharacters(pos, endPos));
	return $new($JavadocTokenizer$JavadocComment, style, this->fac, buf, pos);
}

$Position$LineMap* JavadocTokenizer::getLineMap() {
	$var($chars, buf, getRawCharacters());
	return $Position::makeLineMap(buf, $nc(buf)->length, true);
}

JavadocTokenizer::JavadocTokenizer() {
}

$Class* JavadocTokenizer::load$($String* name, bool initialize) {
	$loadClass(JavadocTokenizer, name, initialize, &_JavadocTokenizer_ClassInfo_, allocate$JavadocTokenizer);
	return class$;
}

$Class* JavadocTokenizer::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com