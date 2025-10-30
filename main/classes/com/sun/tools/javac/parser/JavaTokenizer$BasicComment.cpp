#include <com/sun/tools/javac/parser/JavaTokenizer$BasicComment.h>

#include <com/sun/tools/javac/parser/JavaTokenizer.h>
#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/UnicodeReader$PositionTrackingReader.h>
#include <jcpp.h>

#undef JAVADOC

using $JavaTokenizer = ::com::sun::tools::javac::parser::JavaTokenizer;
using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $UnicodeReader = ::com::sun::tools::javac::parser::UnicodeReader;
using $UnicodeReader$PositionTrackingReader = ::com::sun::tools::javac::parser::UnicodeReader$PositionTrackingReader;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _JavaTokenizer$BasicComment_FieldInfo_[] = {
	{"cs", "Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, 0, $field(JavaTokenizer$BasicComment, cs)},
	{"deprecatedFlag", "Z", nullptr, $PROTECTED, $field(JavaTokenizer$BasicComment, deprecatedFlag)},
	{"scanned", "Z", nullptr, $PROTECTED, $field(JavaTokenizer$BasicComment, scanned)},
	{}
};

$MethodInfo _JavaTokenizer$BasicComment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, $PROTECTED, $method(static_cast<void(JavaTokenizer$BasicComment::*)($Tokens$Comment$CommentStyle*,$ScannerFactory*,$chars*,int32_t)>(&JavaTokenizer$BasicComment::init$))},
	{"getSourcePos", "(I)I", nullptr, $PUBLIC},
	{"getStyle", "()Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDeprecated", "()Z", nullptr, $PUBLIC},
	{"scanDocComment", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavaTokenizer$BasicComment_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.JavaTokenizer$BasicComment", "com.sun.tools.javac.parser.JavaTokenizer", "BasicComment", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader", "com.sun.tools.javac.parser.UnicodeReader", "PositionTrackingReader", $STATIC},
	{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavaTokenizer$BasicComment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.JavaTokenizer$BasicComment",
	"com.sun.tools.javac.parser.UnicodeReader$PositionTrackingReader",
	"com.sun.tools.javac.parser.Tokens$Comment",
	_JavaTokenizer$BasicComment_FieldInfo_,
	_JavaTokenizer$BasicComment_MethodInfo_,
	nullptr,
	nullptr,
	_JavaTokenizer$BasicComment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.JavaTokenizer"
};

$Object* allocate$JavaTokenizer$BasicComment($Class* clazz) {
	return $of($alloc(JavaTokenizer$BasicComment));
}

int32_t JavaTokenizer$BasicComment::hashCode() {
	 return this->$UnicodeReader$PositionTrackingReader::hashCode();
}

bool JavaTokenizer$BasicComment::equals(Object$* arg0) {
	 return this->$UnicodeReader$PositionTrackingReader::equals(arg0);
}

$Object* JavaTokenizer$BasicComment::clone() {
	 return this->$UnicodeReader$PositionTrackingReader::clone();
}

$String* JavaTokenizer$BasicComment::toString() {
	 return this->$UnicodeReader$PositionTrackingReader::toString();
}

void JavaTokenizer$BasicComment::finalize() {
	this->$UnicodeReader$PositionTrackingReader::finalize();
}

void JavaTokenizer$BasicComment::init$($Tokens$Comment$CommentStyle* cs, $ScannerFactory* sf, $chars* array, int32_t offset) {
	$UnicodeReader$PositionTrackingReader::init$(sf, array, offset);
	this->deprecatedFlag = false;
	this->scanned = false;
	$set(this, cs, cs);
}

$String* JavaTokenizer$BasicComment::getText() {
	return nullptr;
}

int32_t JavaTokenizer$BasicComment::getSourcePos(int32_t pos) {
	return -1;
}

$Tokens$Comment$CommentStyle* JavaTokenizer$BasicComment::getStyle() {
	return this->cs;
}

bool JavaTokenizer$BasicComment::isDeprecated() {
	$init($Tokens$Comment$CommentStyle);
	if (!this->scanned && this->cs == $Tokens$Comment$CommentStyle::JAVADOC) {
		scanDocComment();
	}
	return this->deprecatedFlag;
}

void JavaTokenizer$BasicComment::scanDocComment() {
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			bool deprecatedPrefix = false;
			accept("/**"_s);
			bool forEachLine$continue = false;
			while (isAvailable()) {
				skipWhitespace();
				while (accept(u'*')) {
					if (is(u'/')) {
						return$1 = true;
						goto $finally;
					}
				}
				skipWhitespace();
				deprecatedPrefix = this->deprecatedFlag || accept("@deprecated"_s);
				if (deprecatedPrefix && isAvailable()) {
					if ($Character::isWhitespace(get())) {
						this->deprecatedFlag = true;
					} else if (accept(u'*')) {
						if (is(u'/')) {
							this->deprecatedFlag = true;
							return$1 = true;
							goto $finally;
						}
					}
				}
				while (isAvailable()) {
					switch (get()) {
					case u'*':
						{
							next();
							if (is(u'/')) {
								return$1 = true;
								goto $finally;
							}
							break;
						}
					case u'\r':
						{}
					case u'\n':
						{
							accept(u'\r');
							accept(u'\n');
							forEachLine$continue = true;
							break;
						}
					default:
						{
							next();
							break;
						}
					}

					if (forEachLine$continue) {
						break;
					}				}
				if (forEachLine$continue) {
					forEachLine$continue = false;
					continue;
				}
			}
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			this->scanned = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

JavaTokenizer$BasicComment::JavaTokenizer$BasicComment() {
}

$Class* JavaTokenizer$BasicComment::load$($String* name, bool initialize) {
	$loadClass(JavaTokenizer$BasicComment, name, initialize, &_JavaTokenizer$BasicComment_ClassInfo_, allocate$JavaTokenizer$BasicComment);
	return class$;
}

$Class* JavaTokenizer$BasicComment::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com