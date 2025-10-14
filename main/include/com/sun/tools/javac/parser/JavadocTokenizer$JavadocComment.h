#ifndef _com_sun_tools_javac_parser_JavadocTokenizer$JavadocComment_h_
#define _com_sun_tools_javac_parser_JavadocTokenizer$JavadocComment_h_
//$ class com.sun.tools.javac.parser.JavadocTokenizer$JavadocComment
//$ extends com.sun.tools.javac.parser.JavaTokenizer$BasicComment

#include <com/sun/tools/javac/parser/JavaTokenizer$BasicComment.h>
#include <java/lang/Array.h>

#pragma push_macro("DEPRECATED_PATTERN")
#undef DEPRECATED_PATTERN

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class JavadocTokenizer$OffsetMap;
					class ScannerFactory;
					class Tokens$Comment$CommentStyle;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import JavadocTokenizer$JavadocComment : public ::com::sun::tools::javac::parser::JavaTokenizer$BasicComment {
	$class(JavadocTokenizer$JavadocComment, 0, ::com::sun::tools::javac::parser::JavaTokenizer$BasicComment)
public:
	JavadocTokenizer$JavadocComment();
	void init$(::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle* cs, ::com::sun::tools::javac::parser::ScannerFactory* sf, $chars* array, int32_t offset);
	virtual int32_t getSourcePos(int32_t pos) override;
	virtual $String* getText() override;
	virtual void put(char16_t ch);
	virtual void put();
	virtual void putCodePoint(int32_t codePoint);
	virtual void scanDocComment() override;
	static ::java::util::regex::Pattern* DEPRECATED_PATTERN;
	$String* docComment = nullptr;
	::java::lang::StringBuilder* sb = nullptr;
	::com::sun::tools::javac::parser::JavadocTokenizer$OffsetMap* offsetMap = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEPRECATED_PATTERN")

#endif // _com_sun_tools_javac_parser_JavadocTokenizer$JavadocComment_h_