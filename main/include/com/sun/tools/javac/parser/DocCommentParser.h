#ifndef _com_sun_tools_javac_parser_DocCommentParser_h_
#define _com_sun_tools_javac_parser_DocCommentParser_h_
//$ class com.sun.tools.javac.parser.DocCommentParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class DocCommentParser$Phase;
					class DocCommentParser$WhitespaceRetentionPolicy;
					class ParserFactory;
					class Tokens$Comment;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree;
					class DCTree$DCDocComment;
					class DCTree$DCErroneous;
					class DCTree$DCIdentifier;
					class DCTree$DCReference;
					class DCTree$DCText;
					class DocTreeMaker;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class DiagnosticSource;
					class List;
					class ListBuffer;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

class $import DocCommentParser : public ::java::lang::Object {
	$class(DocCommentParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DocCommentParser();
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac, ::com::sun::tools::javac::util::DiagnosticSource* diagSource, ::com::sun::tools::javac::parser::Tokens$Comment* comment, bool isFileContent);
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac, ::com::sun::tools::javac::util::DiagnosticSource* diagSource, ::com::sun::tools::javac::parser::Tokens$Comment* comment);
	void init$(::com::sun::tools::javac::parser::ParserFactory* fac);
	virtual void addPendingText(::com::sun::tools::javac::util::ListBuffer* list, int32_t textEnd);
	virtual void attrValueChar(::com::sun::tools::javac::util::ListBuffer* list);
	virtual ::com::sun::tools::javac::util::List* blockContent();
	virtual ::com::sun::tools::javac::util::List* blockContent(::com::sun::tools::javac::parser::DocCommentParser$Phase* phase);
	virtual ::com::sun::tools::javac::tree::DCTree* blockTag();
	virtual ::com::sun::tools::javac::util::List* blockTags();
	::java::util::Map* createTagParsers();
	virtual void entity(::com::sun::tools::javac::util::ListBuffer* list);
	virtual ::com::sun::tools::javac::tree::DCTree* entity();
	virtual ::com::sun::tools::javac::tree::DCTree$DCErroneous* erroneous($String* code, int32_t pos);
	::com::sun::tools::javac::tree::DCTree* html();
	virtual ::com::sun::tools::javac::util::List* htmlAttrs();
	virtual ::com::sun::tools::javac::tree::DCTree$DCIdentifier* identifier();
	::com::sun::tools::javac::util::List* inlineContent();
	virtual void inlineTag(::com::sun::tools::javac::util::ListBuffer* list);
	virtual ::com::sun::tools::javac::tree::DCTree* inlineTag();
	::com::sun::tools::javac::tree::DCTree$DCText* inlineText(::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy* whitespacePolicy);
	virtual ::com::sun::tools::javac::tree::DCTree$DCText* inlineWord();
	virtual bool isDecimalDigit(char16_t ch);
	virtual bool isEndBody();
	virtual bool isEndPreamble();
	virtual bool isHexDigit(char16_t ch);
	virtual bool isIdentifierStart(char16_t ch);
	virtual bool isJavaIdentifierStart(char16_t ch);
	virtual bool isUnquotedAttrValueTerminator(char16_t ch);
	virtual bool isWhitespace(char16_t ch);
	virtual $String* newString(int32_t start, int32_t end);
	virtual void nextChar();
	virtual ::com::sun::tools::javac::tree::DCTree$DCDocComment* parse();
	virtual bool peek($String* s);
	virtual ::com::sun::tools::javac::tree::DCTree$DCText* quotedString();
	virtual ::com::sun::tools::javac::util::Name* readAttributeName();
	virtual ::com::sun::tools::javac::util::Name* readIdentifier();
	virtual ::com::sun::tools::javac::util::Name* readJavaIdentifier();
	virtual ::com::sun::tools::javac::util::Name* readSystemPropertyName();
	virtual ::com::sun::tools::javac::util::Name* readTagName();
	virtual ::com::sun::tools::javac::tree::DCTree$DCReference* reference(bool allowMember);
	virtual void skipWhitespace();
	::com::sun::tools::javac::parser::ParserFactory* fac = nullptr;
	::com::sun::tools::javac::util::DiagnosticSource* diagSource = nullptr;
	::com::sun::tools::javac::parser::Tokens$Comment* comment = nullptr;
	::com::sun::tools::javac::tree::DocTreeMaker* m = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	bool isFileContent = false;
	$chars* buf = nullptr;
	int32_t bp = 0;
	int32_t buflen = 0;
	char16_t ch = 0;
	int32_t textStart = 0;
	int32_t lastNonWhite = 0;
	bool newline = false;
	::java::util::Map* tagParsers = nullptr;
};

				} // parser
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_parser_DocCommentParser_h_