#include <com/sun/tools/javac/parser/JavadocTokenizer$JavadocComment.h>

#include <com/sun/tools/javac/parser/JavaTokenizer$BasicComment.h>
#include <com/sun/tools/javac/parser/JavadocTokenizer$OffsetMap.h>
#include <com/sun/tools/javac/parser/JavadocTokenizer.h>
#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/UnicodeReader$PositionTrackingReader.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <com/sun/tools/javac/util/Position.h>
#include <java/lang/CharSequence.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef DEPRECATED_PATTERN
#undef JAVADOC
#undef NOPOS

using $JavaTokenizer$BasicComment = ::com::sun::tools::javac::parser::JavaTokenizer$BasicComment;
using $JavadocTokenizer = ::com::sun::tools::javac::parser::JavadocTokenizer;
using $JavadocTokenizer$OffsetMap = ::com::sun::tools::javac::parser::JavadocTokenizer$OffsetMap;
using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $UnicodeReader = ::com::sun::tools::javac::parser::UnicodeReader;
using $UnicodeReader$PositionTrackingReader = ::com::sun::tools::javac::parser::UnicodeReader$PositionTrackingReader;
using $Position = ::com::sun::tools::javac::util::Position;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavadocTokenizer$JavadocComment_FieldInfo_[] = {
	{"DEPRECATED_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocTokenizer$JavadocComment, DEPRECATED_PATTERN)},
	{"docComment", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavadocTokenizer$JavadocComment, docComment)},
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(JavadocTokenizer$JavadocComment, sb)},
	{"offsetMap", "Lcom/sun/tools/javac/parser/JavadocTokenizer$OffsetMap;", nullptr, 0, $field(JavadocTokenizer$JavadocComment, offsetMap)},
	{}
};

$MethodInfo _JavadocTokenizer$JavadocComment_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, 0, $method(static_cast<void(JavadocTokenizer$JavadocComment::*)($Tokens$Comment$CommentStyle*,$ScannerFactory*,$chars*,int32_t)>(&JavadocTokenizer$JavadocComment::init$))},
	{"getSourcePos", "(I)I", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"put", "(C)V", nullptr, $PROTECTED},
	{"put", "()V", nullptr, $PROTECTED},
	{"putCodePoint", "(I)V", nullptr, $PROTECTED},
	{"scanDocComment", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JavadocTokenizer$JavadocComment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavadocTokenizer$JavadocComment", "com.sun.tools.javac.parser.JavadocTokenizer", "JavadocComment", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.parser.JavaTokenizer$BasicComment", "com.sun.tools.javac.parser.JavaTokenizer", "BasicComment", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _JavadocTokenizer$JavadocComment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavadocTokenizer$JavadocComment",
	"com.sun.tools.javac.parser.JavaTokenizer$BasicComment",
	nullptr,
	_JavadocTokenizer$JavadocComment_FieldInfo_,
	_JavadocTokenizer$JavadocComment_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocTokenizer$JavadocComment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavadocTokenizer"
};

$Object* allocate$JavadocTokenizer$JavadocComment($Class* clazz) {
	return $of($alloc(JavadocTokenizer$JavadocComment));
}

$Pattern* JavadocTokenizer$JavadocComment::DEPRECATED_PATTERN = nullptr;

void JavadocTokenizer$JavadocComment::init$($Tokens$Comment$CommentStyle* cs, $ScannerFactory* sf, $chars* array, int32_t offset) {
	$JavaTokenizer$BasicComment::init$(cs, sf, array, offset);
	$set(this, docComment, nullptr);
	$set(this, offsetMap, $new($JavadocTokenizer$OffsetMap));
	$set(this, sb, $new($StringBuilder));
}

void JavadocTokenizer$JavadocComment::put(char16_t ch) {
	int32_t var$0 = $nc(this->sb)->length();
	$nc(this->offsetMap)->add(var$0, offsetPosition());
	$nc(this->sb)->append(ch);
}

void JavadocTokenizer$JavadocComment::putCodePoint(int32_t codePoint) {
	int32_t var$0 = $nc(this->sb)->length();
	$nc(this->offsetMap)->add(var$0, offsetPosition());
	$nc(this->sb)->appendCodePoint(codePoint);
}

void JavadocTokenizer$JavadocComment::put() {
	if (isSurrogate()) {
		putCodePoint(getCodepoint());
	} else {
		put(get());
	}
}

$String* JavadocTokenizer$JavadocComment::getText() {
	$init($Tokens$Comment$CommentStyle);
	if (!this->scanned && this->cs == $Tokens$Comment$CommentStyle::JAVADOC) {
		scanDocComment();
	}
	return this->docComment;
}

int32_t JavadocTokenizer$JavadocComment::getSourcePos(int32_t pos) {
	if (pos == $Position::NOPOS) {
		return $Position::NOPOS;
	}
	if (pos < 0 || pos > $nc(this->docComment)->length()) {
		$throwNew($StringIndexOutOfBoundsException, $($String::valueOf(pos)));
	}
	return $nc(this->offsetMap)->getSourcePos(pos);
}

void JavadocTokenizer$JavadocComment::scanDocComment() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			bool firstLine = true;
			accept("/*"_s);
			skip(u'*');
			if (is(u'/')) {
				$set(this, docComment, ""_s);
				return$1 = true;
				goto $finally;
			}
			if (isOneOf(u'\n', u'\r')) {
				accept(u'\r');
				accept(u'\n');
				firstLine = false;
			}
			bool outerLoop$break = false;
			while (isAvailable()) {
				int32_t begin_pos = position();
				skipWhitespace();
				if (is(u'*')) {
					skip(u'*');
					if (accept(u'/')) {
						outerLoop$break = true;
						break;
					}
				} else if (!firstLine) {
					reset(begin_pos);
				}
				bool textLoop$break = false;
				while (isAvailable()) {
					if (accept("*/"_s)) {
						outerLoop$break = true;
						break;
					} else if (isOneOf(u'\n', u'\r')) {
						put(u'\n');
						accept(u'\r');
						accept(u'\n');
						textLoop$break = true;
						break;
					} else if (is(u'\f')) {
						next();
						textLoop$break = true;
						break;
					} else {
						put();
						next();
					}
				}
				if (outerLoop$break) {
					break;
				}
				firstLine = false;
			}
			if ($nc(this->sb)->length() > 0) {
				int32_t i = $nc(this->sb)->length() - 1;
				while (i > -1 && $nc(this->sb)->charAt(i) == u'*') {
					--i;
				}
				$nc(this->sb)->setLength(i + 1);
				$set(this, docComment, $nc(this->sb)->toString());
			} else {
				$set(this, docComment, ""_s);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			this->scanned = true;
			if (this->docComment != nullptr && $nc($($nc(JavadocTokenizer$JavadocComment::DEPRECATED_PATTERN)->matcher(this->docComment)))->matches()) {
				this->deprecatedFlag = true;
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void clinit$JavadocTokenizer$JavadocComment($Class* class$) {
	$assignStatic(JavadocTokenizer$JavadocComment::DEPRECATED_PATTERN, $Pattern::compile("(?sm).*^\\s*@deprecated( |$).*"_s));
}

JavadocTokenizer$JavadocComment::JavadocTokenizer$JavadocComment() {
}

$Class* JavadocTokenizer$JavadocComment::load$($String* name, bool initialize) {
	$loadClass(JavadocTokenizer$JavadocComment, name, initialize, &_JavadocTokenizer$JavadocComment_ClassInfo_, clinit$JavadocTokenizer$JavadocComment, allocate$JavadocTokenizer$JavadocComment);
	return class$;
}

$Class* JavadocTokenizer$JavadocComment::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com