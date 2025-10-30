#include <com/sun/tools/javac/parser/DocCommentParser.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTypeTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$1.h>
#include <com/sun/tools/javac/parser/DocCommentParser$10.h>
#include <com/sun/tools/javac/parser/DocCommentParser$11.h>
#include <com/sun/tools/javac/parser/DocCommentParser$12.h>
#include <com/sun/tools/javac/parser/DocCommentParser$13.h>
#include <com/sun/tools/javac/parser/DocCommentParser$14.h>
#include <com/sun/tools/javac/parser/DocCommentParser$15.h>
#include <com/sun/tools/javac/parser/DocCommentParser$16.h>
#include <com/sun/tools/javac/parser/DocCommentParser$17.h>
#include <com/sun/tools/javac/parser/DocCommentParser$18.h>
#include <com/sun/tools/javac/parser/DocCommentParser$19.h>
#include <com/sun/tools/javac/parser/DocCommentParser$2.h>
#include <com/sun/tools/javac/parser/DocCommentParser$20.h>
#include <com/sun/tools/javac/parser/DocCommentParser$21.h>
#include <com/sun/tools/javac/parser/DocCommentParser$22.h>
#include <com/sun/tools/javac/parser/DocCommentParser$23.h>
#include <com/sun/tools/javac/parser/DocCommentParser$24.h>
#include <com/sun/tools/javac/parser/DocCommentParser$25.h>
#include <com/sun/tools/javac/parser/DocCommentParser$26.h>
#include <com/sun/tools/javac/parser/DocCommentParser$3.h>
#include <com/sun/tools/javac/parser/DocCommentParser$4.h>
#include <com/sun/tools/javac/parser/DocCommentParser$5.h>
#include <com/sun/tools/javac/parser/DocCommentParser$6.h>
#include <com/sun/tools/javac/parser/DocCommentParser$7.h>
#include <com/sun/tools/javac/parser/DocCommentParser$8.h>
#include <com/sun/tools/javac/parser/DocCommentParser$9.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$Phase.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/parser/ReferenceParser$ParseException.h>
#include <com/sun/tools/javac/parser/ReferenceParser$Reference.h>
#include <com/sun/tools/javac/parser/ReferenceParser.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCAttribute.h>
#include <com/sun/tools/javac/tree/DCTree$DCComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocType.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndElement.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEntity.h>
#include <com/sun/tools/javac/tree/DCTree$DCErroneous.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree$DCStartElement.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree$DCUnknownBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCUnknownInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef AUTHOR
#undef BLOCK
#undef BODY
#undef CODE
#undef DEPRECATED
#undef DOC_ROOT
#undef DOUBLE
#undef EITHER
#undef EMPTY
#undef EXCEPTION
#undef HIDDEN
#undef INDEX
#undef INHERIT_DOC
#undef INLINE
#undef LINK
#undef LINK_PLAIN
#undef LITERAL
#undef NOPOS
#undef PARAM
#undef POSTAMBLE
#undef PREAMBLE
#undef PROVIDES
#undef REMOVE_ALL
#undef RETURN
#undef SEE
#undef SERIAL
#undef SERIAL_DATA
#undef SERIAL_FIELD
#undef SINCE
#undef SINGLE
#undef SUMMARY
#undef SYSTEM_PROPERTY
#undef THROWS
#undef UNQUOTED
#undef USES
#undef VALUE
#undef VERSION

using $DocCommentParser$TagParserArray = $Array<::com::sun::tools::javac::parser::DocCommentParser$TagParser>;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser$1 = ::com::sun::tools::javac::parser::DocCommentParser$1;
using $DocCommentParser$10 = ::com::sun::tools::javac::parser::DocCommentParser$10;
using $DocCommentParser$11 = ::com::sun::tools::javac::parser::DocCommentParser$11;
using $DocCommentParser$12 = ::com::sun::tools::javac::parser::DocCommentParser$12;
using $DocCommentParser$13 = ::com::sun::tools::javac::parser::DocCommentParser$13;
using $DocCommentParser$14 = ::com::sun::tools::javac::parser::DocCommentParser$14;
using $DocCommentParser$15 = ::com::sun::tools::javac::parser::DocCommentParser$15;
using $DocCommentParser$16 = ::com::sun::tools::javac::parser::DocCommentParser$16;
using $DocCommentParser$17 = ::com::sun::tools::javac::parser::DocCommentParser$17;
using $DocCommentParser$18 = ::com::sun::tools::javac::parser::DocCommentParser$18;
using $DocCommentParser$19 = ::com::sun::tools::javac::parser::DocCommentParser$19;
using $DocCommentParser$2 = ::com::sun::tools::javac::parser::DocCommentParser$2;
using $DocCommentParser$20 = ::com::sun::tools::javac::parser::DocCommentParser$20;
using $DocCommentParser$21 = ::com::sun::tools::javac::parser::DocCommentParser$21;
using $DocCommentParser$22 = ::com::sun::tools::javac::parser::DocCommentParser$22;
using $DocCommentParser$23 = ::com::sun::tools::javac::parser::DocCommentParser$23;
using $DocCommentParser$24 = ::com::sun::tools::javac::parser::DocCommentParser$24;
using $DocCommentParser$25 = ::com::sun::tools::javac::parser::DocCommentParser$25;
using $DocCommentParser$26 = ::com::sun::tools::javac::parser::DocCommentParser$26;
using $DocCommentParser$3 = ::com::sun::tools::javac::parser::DocCommentParser$3;
using $DocCommentParser$4 = ::com::sun::tools::javac::parser::DocCommentParser$4;
using $DocCommentParser$5 = ::com::sun::tools::javac::parser::DocCommentParser$5;
using $DocCommentParser$6 = ::com::sun::tools::javac::parser::DocCommentParser$6;
using $DocCommentParser$7 = ::com::sun::tools::javac::parser::DocCommentParser$7;
using $DocCommentParser$8 = ::com::sun::tools::javac::parser::DocCommentParser$8;
using $DocCommentParser$9 = ::com::sun::tools::javac::parser::DocCommentParser$9;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$Phase = ::com::sun::tools::javac::parser::DocCommentParser$Phase;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DocCommentParser$WhitespaceRetentionPolicy = ::com::sun::tools::javac::parser::DocCommentParser$WhitespaceRetentionPolicy;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $ReferenceParser = ::com::sun::tools::javac::parser::ReferenceParser;
using $ReferenceParser$ParseException = ::com::sun::tools::javac::parser::ReferenceParser$ParseException;
using $ReferenceParser$Reference = ::com::sun::tools::javac::parser::ReferenceParser$Reference;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCAttribute = ::com::sun::tools::javac::tree::DCTree$DCAttribute;
using $DCTree$DCComment = ::com::sun::tools::javac::tree::DCTree$DCComment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DCTree$DCDocType = ::com::sun::tools::javac::tree::DCTree$DCDocType;
using $DCTree$DCEndElement = ::com::sun::tools::javac::tree::DCTree$DCEndElement;
using $DCTree$DCEndPosTree = ::com::sun::tools::javac::tree::DCTree$DCEndPosTree;
using $DCTree$DCEntity = ::com::sun::tools::javac::tree::DCTree$DCEntity;
using $DCTree$DCErroneous = ::com::sun::tools::javac::tree::DCTree$DCErroneous;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $DCTree$DCStartElement = ::com::sun::tools::javac::tree::DCTree$DCStartElement;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $DCTree$DCUnknownBlockTag = ::com::sun::tools::javac::tree::DCTree$DCUnknownBlockTag;
using $DCTree$DCUnknownInlineTag = ::com::sun::tools::javac::tree::DCTree$DCUnknownInlineTag;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $Position = ::com::sun::tools::javac::util::Position;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $1List = ::java::util::List;
using $Map = ::java::util::Map;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _DocCommentParser_FieldInfo_[] = {
	{"fac", "Lcom/sun/tools/javac/parser/ParserFactory;", nullptr, $PRIVATE | $FINAL, $field(DocCommentParser, fac)},
	{"diagSource", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, $PRIVATE | $FINAL, $field(DocCommentParser, diagSource)},
	{"comment", "Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PRIVATE | $FINAL, $field(DocCommentParser, comment)},
	{"m", "Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $PRIVATE | $FINAL, $field(DocCommentParser, m)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(DocCommentParser, names)},
	{"isFileContent", "Z", nullptr, $PRIVATE | $FINAL, $field(DocCommentParser, isFileContent)},
	{"buf", "[C", nullptr, $PRIVATE, $field(DocCommentParser, buf)},
	{"bp", "I", nullptr, $PRIVATE, $field(DocCommentParser, bp)},
	{"buflen", "I", nullptr, $PRIVATE, $field(DocCommentParser, buflen)},
	{"ch", "C", nullptr, $PRIVATE, $field(DocCommentParser, ch)},
	{"textStart", "I", nullptr, $PRIVATE, $field(DocCommentParser, textStart)},
	{"lastNonWhite", "I", nullptr, $PRIVATE, $field(DocCommentParser, lastNonWhite)},
	{"newline", "Z", nullptr, $PRIVATE, $field(DocCommentParser, newline)},
	{"tagParsers", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser;>;", $PRIVATE | $FINAL, $field(DocCommentParser, tagParsers)},
	{}
};

$MethodInfo _DocCommentParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/parser/Tokens$Comment;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DocCommentParser::*)($ParserFactory*,$DiagnosticSource*,$Tokens$Comment*,bool)>(&DocCommentParser::init$))},
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, $PUBLIC, $method(static_cast<void(DocCommentParser::*)($ParserFactory*,$DiagnosticSource*,$Tokens$Comment*)>(&DocCommentParser::init$))},
	{"<init>", "(Lcom/sun/tools/javac/parser/ParserFactory;)V", nullptr, $PUBLIC, $method(static_cast<void(DocCommentParser::*)($ParserFactory*)>(&DocCommentParser::init$))},
	{"addPendingText", "(Lcom/sun/tools/javac/util/ListBuffer;I)V", "(Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/DCTree;>;I)V", $PROTECTED},
	{"attrValueChar", "(Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/DCTree;>;)V", $PROTECTED},
	{"blockContent", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PROTECTED},
	{"blockContent", "(Lcom/sun/tools/javac/parser/DocCommentParser$Phase;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/parser/DocCommentParser$Phase;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PROTECTED},
	{"blockTag", "()Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PROTECTED},
	{"blockTags", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PROTECTED},
	{"createTagParsers", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser;>;", $PRIVATE, $method(static_cast<$Map*(DocCommentParser::*)()>(&DocCommentParser::createTagParsers))},
	{"entity", "(Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/DCTree;>;)V", $PROTECTED},
	{"entity", "()Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PROTECTED},
	{"erroneous", "(Ljava/lang/String;I)Lcom/sun/tools/javac/tree/DCTree$DCErroneous;", nullptr, $PROTECTED},
	{"html", "()Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PRIVATE, $method(static_cast<$DCTree*(DocCommentParser::*)()>(&DocCommentParser::html))},
	{"htmlAttrs", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PROTECTED},
	{"identifier", "()Lcom/sun/tools/javac/tree/DCTree$DCIdentifier;", nullptr, $PROTECTED, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{"inlineContent", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PRIVATE, $method(static_cast<$List*(DocCommentParser::*)()>(&DocCommentParser::inlineContent))},
	{"inlineTag", "(Lcom/sun/tools/javac/util/ListBuffer;)V", "(Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/DCTree;>;)V", $PROTECTED},
	{"inlineTag", "()Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PROTECTED},
	{"inlineText", "(Lcom/sun/tools/javac/parser/DocCommentParser$WhitespaceRetentionPolicy;)Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PRIVATE, $method(static_cast<$DCTree$DCText*(DocCommentParser::*)($DocCommentParser$WhitespaceRetentionPolicy*)>(&DocCommentParser::inlineText)), "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{"inlineWord", "()Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PROTECTED},
	{"isDecimalDigit", "(C)Z", nullptr, $PROTECTED},
	{"isEndBody", "()Z", nullptr, 0},
	{"isEndPreamble", "()Z", nullptr, 0},
	{"isHexDigit", "(C)Z", nullptr, $PROTECTED},
	{"isIdentifierStart", "(C)Z", nullptr, $PROTECTED},
	{"isJavaIdentifierStart", "(C)Z", nullptr, $PROTECTED},
	{"isUnquotedAttrValueTerminator", "(C)Z", nullptr, $PROTECTED},
	{"isWhitespace", "(C)Z", nullptr, $PROTECTED},
	{"newString", "(II)Ljava/lang/String;", nullptr, 0},
	{"nextChar", "()V", nullptr, 0},
	{"parse", "()Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, $PUBLIC},
	{"peek", "(Ljava/lang/String;)Z", nullptr, 0},
	{"quotedString", "()Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PROTECTED},
	{"readAttributeName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{"readIdentifier", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{"readJavaIdentifier", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{"readSystemPropertyName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{"readTagName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PROTECTED},
	{"reference", "(Z)Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PROTECTED, nullptr, "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
	{"skipWhitespace", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DocCommentParser_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.parser.DocCommentParser$26", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.parser.DocCommentParser$WhitespaceRetentionPolicy", "com.sun.tools.javac.parser.DocCommentParser", "WhitespaceRetentionPolicy", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.DocCommentParser$Phase", "com.sun.tools.javac.parser.DocCommentParser", "Phase", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.parser.DocCommentParser$ParseException", "com.sun.tools.javac.parser.DocCommentParser", "ParseException", $STATIC},
	{"com.sun.tools.javac.parser.DocCommentParser$25", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$24", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$23", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$22", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$21", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$20", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$19", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$18", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$17", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$16", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$15", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$14", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$13", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$12", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$10", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$9", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$8", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$7", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$6", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$5", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$4", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$3", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.parser.DocCommentParser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DocCommentParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.DocCommentParser",
	"java.lang.Object",
	nullptr,
	_DocCommentParser_FieldInfo_,
	_DocCommentParser_MethodInfo_,
	nullptr,
	nullptr,
	_DocCommentParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.parser.DocCommentParser$26,com.sun.tools.javac.parser.DocCommentParser$TagParser,com.sun.tools.javac.parser.DocCommentParser$TagParser$Kind,com.sun.tools.javac.parser.DocCommentParser$WhitespaceRetentionPolicy,com.sun.tools.javac.parser.DocCommentParser$Phase,com.sun.tools.javac.parser.DocCommentParser$ParseException,com.sun.tools.javac.parser.DocCommentParser$25,com.sun.tools.javac.parser.DocCommentParser$24,com.sun.tools.javac.parser.DocCommentParser$23,com.sun.tools.javac.parser.DocCommentParser$22,com.sun.tools.javac.parser.DocCommentParser$21,com.sun.tools.javac.parser.DocCommentParser$20,com.sun.tools.javac.parser.DocCommentParser$19,com.sun.tools.javac.parser.DocCommentParser$18,com.sun.tools.javac.parser.DocCommentParser$17,com.sun.tools.javac.parser.DocCommentParser$16,com.sun.tools.javac.parser.DocCommentParser$15,com.sun.tools.javac.parser.DocCommentParser$14,com.sun.tools.javac.parser.DocCommentParser$13,com.sun.tools.javac.parser.DocCommentParser$12,com.sun.tools.javac.parser.DocCommentParser$11,com.sun.tools.javac.parser.DocCommentParser$10,com.sun.tools.javac.parser.DocCommentParser$9,com.sun.tools.javac.parser.DocCommentParser$8,com.sun.tools.javac.parser.DocCommentParser$7,com.sun.tools.javac.parser.DocCommentParser$6,com.sun.tools.javac.parser.DocCommentParser$5,com.sun.tools.javac.parser.DocCommentParser$4,com.sun.tools.javac.parser.DocCommentParser$3,com.sun.tools.javac.parser.DocCommentParser$2,com.sun.tools.javac.parser.DocCommentParser$1"
};

$Object* allocate$DocCommentParser($Class* clazz) {
	return $of($alloc(DocCommentParser));
}

void DocCommentParser::init$($ParserFactory* fac, $DiagnosticSource* diagSource, $Tokens$Comment* comment, bool isFileContent) {
	this->textStart = -1;
	this->lastNonWhite = -1;
	this->newline = true;
	$set(this, fac, fac);
	$set(this, diagSource, diagSource);
	$set(this, comment, comment);
	$set(this, names, $nc(fac)->names);
	this->isFileContent = isFileContent;
	$set(this, m, fac->docTreeMaker);
	$set(this, tagParsers, createTagParsers());
}

void DocCommentParser::init$($ParserFactory* fac, $DiagnosticSource* diagSource, $Tokens$Comment* comment) {
	DocCommentParser::init$(fac, diagSource, comment, false);
}

void DocCommentParser::init$($ParserFactory* fac) {
	DocCommentParser::init$(fac, nullptr, nullptr, false);
}

$DCTree$DCDocComment* DocCommentParser::parse() {
	$useLocalCurrentObjectStackCache();
	$var($String, c, $nc(this->comment)->getText());
	$set(this, buf, $new($chars, $nc(c)->length() + 1));
	c->getChars(0, c->length(), this->buf, 0);
	$nc(this->buf)->set($nc(this->buf)->length - 1, (char16_t)26);
	this->buflen = $nc(this->buf)->length - 1;
	this->bp = -1;
	nextChar();
	$init($DocCommentParser$Phase);
	$var($List, preamble, this->isFileContent ? blockContent($DocCommentParser$Phase::PREAMBLE) : $List::nil());
	$var($List, body, blockContent($DocCommentParser$Phase::BODY));
	$var($List, tags, blockTags());
	$var($List, postamble, this->isFileContent ? blockContent($DocCommentParser$Phase::POSTAMBLE) : $List::nil());
	int32_t pos = $Position::NOPOS;
	if (!$nc(preamble)->isEmpty()) {
		pos = $nc(($cast($DCTree, preamble->head)))->pos$;
	} else if (!$nc(body)->isEmpty()) {
		pos = $nc(($cast($DCTree, body->head)))->pos$;
	} else if (!$nc(tags)->isEmpty()) {
		pos = $nc(($cast($DCTree, tags->head)))->pos$;
	} else if (!$nc(postamble)->isEmpty()) {
		pos = $nc(($cast($DCTree, postamble->head)))->pos$;
	}
	$var($DCTree$DCDocComment, dc, $nc($($nc(this->m)->at(pos)))->newDocCommentTree(this->comment, body, tags, preamble, postamble));
	return dc;
}

void DocCommentParser::nextChar() {
	this->ch = $nc(this->buf)->get(this->bp < this->buflen ? ++this->bp : this->buflen);
	switch (this->ch) {
	case u'\f':
		{}
	case u'\n':
		{}
	case u'\r':
		{
			this->newline = true;
		}
	}
}

$List* DocCommentParser::blockContent() {
	$init($DocCommentParser$Phase);
	return blockContent($DocCommentParser$Phase::BODY);
}

$List* DocCommentParser::blockContent($DocCommentParser$Phase* phase) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, trees, $new($ListBuffer));
	this->textStart = -1;
	bool loop$break = false;
	while (this->bp < this->buflen) {
		switch (this->ch) {
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				this->newline = true;
			}
		case u' ':
			{}
		case u'\t':
			{
				nextChar();
				break;
			}
		case u'&':
			{
				entity(trees);
				break;
			}
		case u'<':
			{
				this->newline = false;
				if (this->isFileContent) {
					$init($DocCommentParser$26);
					switch ($nc($DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$Phase)->get($nc((phase))->ordinal())) {
					case 1:
						{
							if (isEndPreamble()) {
								trees->add($(html()));
								if (this->textStart == -1) {
									this->textStart = this->bp;
									this->lastNonWhite = -1;
								}
								this->newline = true;
								loop$break = true;
								break;
							}
							break;
						}
					case 2:
						{
							if (isEndBody()) {
								addPendingText(trees, this->lastNonWhite);
								loop$break = true;
								break;
							}
							break;
						}
					default:
						{}
					}

					if (loop$break) {
						break;
					}				}
				addPendingText(trees, this->bp - 1);
				trees->add($(html()));
				$init($DocCommentParser$Phase);
				if (phase == $DocCommentParser$Phase::PREAMBLE || phase == $DocCommentParser$Phase::POSTAMBLE) {
					break;
				}
				if (this->textStart == -1) {
					this->textStart = this->bp;
					this->lastNonWhite = -1;
				}
				break;
			}
		case u'{':
			{
				inlineTag(trees);
				break;
			}
		case u'@':
			{
				if (this->newline) {
					addPendingText(trees, this->lastNonWhite);
					loop$break = true;
					break;
				}
			}
		default:
			{
				this->newline = false;
				if (this->textStart == -1) {
					this->textStart = this->bp;
				}
				this->lastNonWhite = this->bp;
				nextChar();
			}
		}

		if (loop$break) {
			break;
		}	}
	if (this->lastNonWhite != -1) {
		addPendingText(trees, this->lastNonWhite);
	}
	return trees->toList();
}

$List* DocCommentParser::blockTags() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, tags, $new($ListBuffer));
	while (this->bp < this->buflen && this->ch == u'@') {
		tags->add($(blockTag()));
	}
	return tags->toList();
}

$DCTree* DocCommentParser::blockTag() {
	$useLocalCurrentObjectStackCache();
	int32_t p = this->bp;
	try {
		nextChar();
		if (isIdentifierStart(this->ch)) {
			$var($Name, name, readTagName());
			$var($DocCommentParser$TagParser, tp, $cast($DocCommentParser$TagParser, $nc(this->tagParsers)->get(name)));
			if (tp == nullptr) {
				$var($List, content, blockContent());
				return $cast($DCTree, $nc($($nc(this->m)->at(p)))->newUnknownBlockTagTree(name, content));
			} else if ($nc(tp)->allowsBlock()) {
				$init($DocCommentParser$TagParser$Kind);
				return tp->parse(p, $DocCommentParser$TagParser$Kind::BLOCK);
			} else {
				return erroneous("dc.bad.inline.tag"_s, p);
			}
		}
		blockContent();
		return erroneous("dc.no.tag.name"_s, p);
	} catch ($DocCommentParser$ParseException& e) {
		blockContent();
		return erroneous($(e->getMessage()), p);
	}
	$shouldNotReachHere();
}

void DocCommentParser::inlineTag($ListBuffer* list) {
	this->newline = false;
	nextChar();
	if (this->ch == u'@') {
		addPendingText(list, this->bp - 2);
		$nc(list)->add($(inlineTag()));
		this->textStart = this->bp;
		this->lastNonWhite = -1;
	} else {
		if (this->textStart == -1) {
			this->textStart = this->bp - 1;
		}
		this->lastNonWhite = this->bp;
	}
}

$DCTree* DocCommentParser::inlineTag() {
	$useLocalCurrentObjectStackCache();
	int32_t p = this->bp - 1;
	try {
		nextChar();
		if (!isIdentifierStart(this->ch)) {
			return erroneous("dc.no.tag.name"_s, p);
		}
		$var($Name, name, readTagName());
		$var($DocCommentParser$TagParser, tp, $cast($DocCommentParser$TagParser, $nc(this->tagParsers)->get(name)));
		if (tp == nullptr) {
			skipWhitespace();
			$init($DocCommentParser$WhitespaceRetentionPolicy);
			$var($DCTree, text, inlineText($DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL));
			nextChar();
			return $nc($($cast($DCTree$DCUnknownInlineTag, $nc($($nc(this->m)->at(p)))->newUnknownInlineTagTree(name, $($List::of(text))))))->setEndPos(this->bp);
		} else {
			if (!$nc(tp)->retainWhiteSpace) {
				skipWhitespace();
			}
			if ($nc(tp)->allowsInline()) {
				$init($DocCommentParser$TagParser$Kind);
				$var($DCTree$DCEndPosTree, tree, $cast($DCTree$DCEndPosTree, tp->parse(p, $DocCommentParser$TagParser$Kind::INLINE)));
				return $nc(tree)->setEndPos(this->bp);
			} else {
				$init($DocCommentParser$WhitespaceRetentionPolicy);
				$var($DCTree, text, inlineText($DocCommentParser$WhitespaceRetentionPolicy::REMOVE_ALL));
				nextChar();
				return $nc($($cast($DCTree$DCUnknownInlineTag, $nc($($nc(this->m)->at(p)))->newUnknownInlineTagTree(name, $($List::of(text))))))->setEndPos(this->bp);
			}
		}
	} catch ($DocCommentParser$ParseException& e) {
		return erroneous($(e->getMessage()), p);
	}
	$shouldNotReachHere();
}

$DCTree$DCText* DocCommentParser::inlineText($DocCommentParser$WhitespaceRetentionPolicy* whitespacePolicy) {
	$useLocalCurrentObjectStackCache();
	$init($DocCommentParser$26);
	switch ($nc($DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$WhitespaceRetentionPolicy)->get($nc((whitespacePolicy))->ordinal())) {
	case 1:
		{
			skipWhitespace();
			break;
		}
	case 2:
		{
			if (this->ch == u' ') {
				nextChar();
			}
			break;
		}
	case 3:
		{}
	default:
		{
			break;
		}
	}
	int32_t pos = this->bp;
	int32_t depth = 1;
	while (this->bp < this->buflen) {
		switch (this->ch) {
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				this->newline = true;
				break;
			}
		case u' ':
			{}
		case u'\t':
			{
				break;
			}
		case u'{':
			{
				this->newline = false;
				this->lastNonWhite = this->bp;
				++depth;
				break;
			}
		case u'}':
			{
				if (--depth == 0) {
					return $cast($DCTree$DCText, $nc($($nc(this->m)->at(pos)))->newTextTree($(newString(pos, this->bp))));
				}
				this->newline = false;
				this->lastNonWhite = this->bp;
				break;
			}
		default:
			{
				this->newline = false;
				this->lastNonWhite = this->bp;
				break;
			}
		}
		nextChar();
	}
	$throwNew($DocCommentParser$ParseException, "dc.unterminated.inline.tag"_s);
}

$DCTree$DCReference* DocCommentParser::reference(bool allowMember) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = this->bp;
	int32_t depth = 0;
	bool loop$break = false;
	while (this->bp < this->buflen) {
		switch (this->ch) {
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				this->newline = true;
			}
		case u' ':
			{}
		case u'\t':
			{
				if (depth == 0) {
					loop$break = true;
					break;
				}
				break;
			}
		case u'(':
			{}
		case u'<':
			{
				this->newline = false;
				++depth;
				break;
			}
		case u')':
			{}
		case u'>':
			{
				this->newline = false;
				--depth;
				break;
			}
		case u'}':
			{
				if (this->bp == pos) {
					return nullptr;
				}
				this->newline = false;
				loop$break = true;
				break;
			}
		case u'@':
			{
				if (this->newline) {
					loop$break = true;
					break;
				}
			}
		default:
			{
				this->newline = false;
			}
		}

		if (loop$break) {
			break;
		}		nextChar();
	}
	if (depth > 0) {
		$throwNew($DocCommentParser$ParseException, "dc.unterminated.signature"_s);
	}
	$var($String, sig, newString(pos, this->bp));
	try {
		$var($ReferenceParser$Reference, ref, $$new($ReferenceParser, this->fac)->parse(sig));
		return $cast($DCTree$DCReference, $nc($($nc($($nc(this->m)->at(pos)))->newReferenceTree(sig, $nc(ref)->moduleName, ref->qualExpr, ref->member, ref->paramTypes)))->setEndPos(this->bp));
	} catch ($ReferenceParser$ParseException& parseException) {
		$throwNew($DocCommentParser$ParseException, $(parseException->getMessage()));
	}
	$shouldNotReachHere();
}

$DCTree$DCIdentifier* DocCommentParser::identifier() {
	$useLocalCurrentObjectStackCache();
	skipWhitespace();
	int32_t pos = this->bp;
	if (isJavaIdentifierStart(this->ch)) {
		$var($Name, name, readJavaIdentifier());
		return $cast($DCTree$DCIdentifier, $nc($($nc(this->m)->at(pos)))->newIdentifierTree(name));
	}
	$throwNew($DocCommentParser$ParseException, "dc.identifier.expected"_s);
}

$DCTree$DCText* DocCommentParser::quotedString() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = this->bp;
	nextChar();
	bool loop$break = false;
	while (this->bp < this->buflen) {
		switch (this->ch) {
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				this->newline = true;
				break;
			}
		case u' ':
			{}
		case u'\t':
			{
				break;
			}
		case u'\"':
			{
				nextChar();
				return $cast($DCTree$DCText, $nc($($nc(this->m)->at(pos)))->newTextTree($(newString(pos, this->bp))));
			}
		case u'@':
			{
				if (this->newline) {
					loop$break = true;
					break;
				}
			}
		}

		if (loop$break) {
			break;
		}		nextChar();
	}
	return nullptr;
}

$DCTree$DCText* DocCommentParser::inlineWord() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = this->bp;
	int32_t depth = 0;
	bool loop$break = false;
	while (this->bp < this->buflen) {
		switch (this->ch) {
		case u'\n':
			{
				this->newline = true;
			}
		case u'\r':
			{}
		case u'\f':
			{}
		case u' ':
			{}
		case u'\t':
			{
				return $cast($DCTree$DCText, $nc($($nc(this->m)->at(pos)))->newTextTree($(newString(pos, this->bp))));
			}
		case u'@':
			{
				if (this->newline) {
					loop$break = true;
					break;
				}
			}
		case u'{':
			{
				++depth;
				break;
			}
		case u'}':
			{
				bool var$0 = depth == 0;
				if (var$0 || --depth == 0) {
					return $cast($DCTree$DCText, $nc($($nc(this->m)->at(pos)))->newTextTree($(newString(pos, this->bp))));
				}
				break;
			}
		}

		if (loop$break) {
			break;
		}		this->newline = false;
		nextChar();
	}
	return nullptr;
}

$List* DocCommentParser::inlineContent() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, trees, $new($ListBuffer));
	skipWhitespace();
	int32_t pos = this->bp;
	int32_t depth = 1;
	this->textStart = -1;
	bool loop$break = false;
	while (this->bp < this->buflen) {
		switch (this->ch) {
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\f':
			{
				this->newline = true;
			}
		case u' ':
			{}
		case u'\t':
			{
				nextChar();
				break;
			}
		case u'&':
			{
				entity(trees);
				break;
			}
		case u'<':
			{
				this->newline = false;
				addPendingText(trees, this->bp - 1);
				trees->add($(html()));
				this->textStart = this->bp;
				this->lastNonWhite = -1;
				break;
			}
		case u'{':
			{
				if (this->textStart == -1) {
					this->textStart = this->bp;
				}
				this->newline = false;
				nextChar();
				if (this->ch == u'@') {
					addPendingText(trees, this->bp - 2);
					trees->add($(inlineTag()));
					this->textStart = this->bp;
					this->lastNonWhite = -1;
				} else {
					++depth;
				}
				break;
			}
		case u'}':
			{
				this->newline = false;
				if (--depth == 0) {
					addPendingText(trees, this->bp - 1);
					nextChar();
					return trees->toList();
				}
				nextChar();
				break;
			}
		case u'@':
			{
				if (this->newline) {
					loop$break = true;
					break;
				}
			}
		default:
			{
				if (this->textStart == -1) {
					this->textStart = this->bp;
				}
				nextChar();
				break;
			}
		}

		if (loop$break) {
			break;
		}	}
	return $List::of($(erroneous("dc.unterminated.inline.tag"_s, pos)));
}

void DocCommentParser::entity($ListBuffer* list) {
	this->newline = false;
	addPendingText(list, this->bp - 1);
	$nc(list)->add($(entity()));
	if (this->textStart == -1) {
		this->textStart = this->bp;
		this->lastNonWhite = -1;
	}
}

$DCTree* DocCommentParser::entity() {
	$useLocalCurrentObjectStackCache();
	int32_t p = this->bp;
	nextChar();
	$var($Name, name, nullptr);
	if (this->ch == u'#') {
		int32_t namep = this->bp;
		nextChar();
		if (isDecimalDigit(this->ch)) {
			nextChar();
			while (this->bp < this->buflen && isDecimalDigit(this->ch)) {
				nextChar();
			}
			$assign(name, $nc(this->names)->fromChars(this->buf, namep, this->bp - namep));
		} else if (this->ch == u'x' || this->ch == u'X') {
			nextChar();
			if (isHexDigit(this->ch)) {
				nextChar();
				while (this->bp < this->buflen && isHexDigit(this->ch)) {
					nextChar();
				}
				$assign(name, $nc(this->names)->fromChars(this->buf, namep, this->bp - namep));
			}
		}
	} else if (isIdentifierStart(this->ch)) {
		$assign(name, readIdentifier());
	}
	if (name == nullptr) {
		return erroneous("dc.bad.entity"_s, p);
	} else {
		if (this->ch != u';') {
			return erroneous("dc.missing.semicolon"_s, p);
		}
		nextChar();
		return $cast($DCTree, $nc($($nc(this->m)->at(p)))->newEntityTree(name));
	}
}

bool DocCommentParser::isEndPreamble() {
	$useLocalCurrentObjectStackCache();
	int32_t savedpos = this->bp;
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->ch == u'<') {
				nextChar();
			}
			if (isIdentifierStart(this->ch)) {
				$var($String, name, $StringUtils::toLowerCase($($nc($(readIdentifier()))->toString())));
				{
					$var($String, s22934$, name);
					int32_t tmp22934$ = -1;
					switch ($nc(s22934$)->hashCode()) {
					case 0x002E39A2:
						{
							if (s22934$->equals("body"_s)) {
								tmp22934$ = 0;
							}
							break;
						}
					case 0x003305B9:
						{
							if (s22934$->equals("main"_s)) {
								tmp22934$ = 1;
							}
							break;
						}
					}
					switch (tmp22934$) {
					case 0:
						{
							while (this->bp < this->buflen && this->ch != u'>') {
								nextChar();
							}
							if (this->ch == u'>') {
								nextChar();
							}
							while (this->bp < this->buflen && isWhitespace(this->ch)) {
								nextChar();
							}
							if (this->ch == u'<') {
								nextChar();
								if (isIdentifierStart(this->ch)) {
									$assign(name, $StringUtils::toLowerCase($($nc($(readIdentifier()))->toString())));
									if ($nc(name)->equals("main"_s)) {
										var$2 = false;
										return$1 = true;
										goto $finally;
									}
								}
							}
							var$2 = true;
							return$1 = true;
							goto $finally;
						}
					case 1:
						{
							var$2 = true;
							return$1 = true;
							goto $finally;
						}
					}
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			this->bp = savedpos;
			this->ch = $nc(this->buf)->get(this->bp);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool DocCommentParser::isEndBody() {
	$useLocalCurrentObjectStackCache();
	int32_t savedpos = this->bp;
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->ch == u'<') {
				nextChar();
			}
			if (this->ch == u'/') {
				nextChar();
				if (isIdentifierStart(this->ch)) {
					$var($String, name, $StringUtils::toLowerCase($($nc($(readIdentifier()))->toString())));
					{
						$var($String, s25087$, name);
						int32_t tmp25087$ = -1;
						switch ($nc(s25087$)->hashCode()) {
						case 0x002E39A2:
							{
								if (s25087$->equals("body"_s)) {
									tmp25087$ = 0;
								}
								break;
							}
						case 0x003305B9:
							{
								if (s25087$->equals("main"_s)) {
									tmp25087$ = 1;
								}
								break;
							}
						}
						switch (tmp25087$) {
						case 0:
							{}
						case 1:
							{
								var$2 = true;
								return$1 = true;
								goto $finally;
							}
						}
					}
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			this->bp = savedpos;
			this->ch = $nc(this->buf)->get(this->bp);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool DocCommentParser::peek($String* s$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, s$renamed);
	int32_t savedpos = this->bp;
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->ch == u'<') {
				nextChar();
			}
			if (this->ch == u'/') {
				if ($nc(s)->charAt(0) != this->ch) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				} else {
					$assign(s, s->substring(1));
					nextChar();
				}
			}
			if (isIdentifierStart(this->ch)) {
				$var($Name, name, readIdentifier());
				var$2 = $nc($($StringUtils::toLowerCase($($nc(name)->toString()))))->equals(s);
				return$1 = true;
				goto $finally;
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			this->bp = savedpos;
			this->ch = $nc(this->buf)->get(this->bp);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$DCTree* DocCommentParser::html() {
	$useLocalCurrentObjectStackCache();
	int32_t p = this->bp;
	nextChar();
	if (isIdentifierStart(this->ch)) {
		$var($Name, name, readIdentifier());
		$var($List, attrs, htmlAttrs());
		if (attrs != nullptr) {
			bool selfClosing = false;
			if (this->ch == u'/') {
				nextChar();
				selfClosing = true;
			}
			if (this->ch == u'>') {
				nextChar();
				$var($DCTree, dctree, $nc($($cast($DCTree$DCStartElement, $nc($($nc(this->m)->at(p)))->newStartElementTree(name, attrs, selfClosing))))->setEndPos(this->bp));
				return dctree;
			}
		}
	} else if (this->ch == u'/') {
		nextChar();
		if (isIdentifierStart(this->ch)) {
			$var($Name, name, readIdentifier());
			skipWhitespace();
			if (this->ch == u'>') {
				nextChar();
				return $nc($($cast($DCTree$DCEndElement, $nc($($nc(this->m)->at(p)))->newEndElementTree(name))))->setEndPos(this->bp);
			}
		}
	} else if (this->ch == u'!') {
		nextChar();
		if (this->ch == u'-') {
			nextChar();
			if (this->ch == u'-') {
				nextChar();
				while (this->bp < this->buflen) {
					int32_t dash = 0;
					while (this->bp < this->buflen && this->ch == u'-') {
						++dash;
						nextChar();
					}
					if (dash >= 2 && this->ch == u'>') {
						nextChar();
						return $cast($DCTree, $nc($($nc(this->m)->at(p)))->newCommentTree($(newString(p, this->bp))));
					}
					nextChar();
				}
			}
		} else {
			bool var$1 = isIdentifierStart(this->ch);
			if (var$1 && peek("doctype"_s)) {
				readIdentifier();
				nextChar();
				skipWhitespace();
				int32_t d = this->bp;
				while (this->bp < this->buflen) {
					if (this->ch == u'>') {
						int32_t mark = this->bp;
						nextChar();
						return $cast($DCTree, $nc($($nc(this->m)->at(d)))->newDocTypeTree($(newString(d, mark))));
					}
					nextChar();
				}
			}
		}
	}
	this->bp = p + 1;
	this->ch = $nc(this->buf)->get(this->bp);
	return erroneous("dc.malformed.html"_s, p);
}

$List* DocCommentParser::htmlAttrs() {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, attrs, $new($ListBuffer));
	skipWhitespace();
	bool loop$break = false;
	while (this->bp < this->buflen && isIdentifierStart(this->ch)) {
		int32_t namePos = this->bp;
		$var($Name, name, readAttributeName());
		skipWhitespace();
		$var($List, value, nullptr);
		$init($AttributeTree$ValueKind);
		$AttributeTree$ValueKind* vkind = $AttributeTree$ValueKind::EMPTY;
		if (this->ch == u'=') {
			$var($ListBuffer, v, $new($ListBuffer));
			nextChar();
			skipWhitespace();
			if (this->ch == u'\'' || this->ch == u'\"') {
				this->newline = false;
				vkind = (this->ch == u'\'') ? $AttributeTree$ValueKind::SINGLE : $AttributeTree$ValueKind::DOUBLE;
				char16_t quote = this->ch;
				nextChar();
				this->textStart = this->bp;
				while (this->bp < this->buflen && this->ch != quote) {
					if (this->newline && this->ch == u'@') {
						attrs->add($(erroneous("dc.unterminated.string"_s, namePos)));
						loop$break = true;
						break;
					}
					attrValueChar(v);
				}
				if (loop$break) {
					break;
				}
				addPendingText(v, this->bp - 1);
				nextChar();
			} else {
				vkind = $AttributeTree$ValueKind::UNQUOTED;
				this->textStart = this->bp;
				while (this->bp < this->buflen && !isUnquotedAttrValueTerminator(this->ch)) {
					attrValueChar(v);
				}
				addPendingText(v, this->bp - 1);
			}
			skipWhitespace();
			$assign(value, v->toList());
		}
		$var($DCTree$DCAttribute, attr, $cast($DCTree$DCAttribute, $nc($($nc(this->m)->at(namePos)))->newAttributeTree(name, vkind, value)));
		attrs->add(attr);
	}
	return attrs->toList();
}

void DocCommentParser::attrValueChar($ListBuffer* list) {
	switch (this->ch) {
	case u'&':
		{
			entity(list);
			break;
		}
	case u'{':
		{
			inlineTag(list);
			break;
		}
	default:
		{
			nextChar();
		}
	}
}

void DocCommentParser::addPendingText($ListBuffer* list, int32_t textEnd) {
	$useLocalCurrentObjectStackCache();
	if (this->textStart != -1) {
		if (this->textStart <= textEnd) {
			$nc(list)->add($($nc($($nc(this->m)->at(this->textStart)))->newTextTree($(newString(this->textStart, textEnd + 1)))));
		}
		this->textStart = -1;
	}
}

$DCTree$DCErroneous* DocCommentParser::erroneous($String* code, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	int32_t i = this->bp - 1;
	bool loop$break = false;
	while (i > pos) {
		switch ($nc(this->buf)->get(i)) {
		case u'\f':
			{}
		case u'\n':
			{}
		case u'\r':
			{
				this->newline = true;
				break;
			}
		case u'\t':
			{}
		case u' ':
			{
				break;
			}
		default:
			{
				loop$break = true;
				break;
			}
		}

		if (loop$break) {
			break;
		}		--i;
	}
	this->textStart = -1;
	return $nc($($nc(this->m)->at(pos)))->newErroneousTree($(newString(pos, i + 1)), this->diagSource, code, $$new($ObjectArray, 0));
}

bool DocCommentParser::isIdentifierStart(char16_t ch) {
	return $Character::isUnicodeIdentifierStart(ch);
}

$Name* DocCommentParser::readIdentifier() {
	int32_t start = this->bp;
	nextChar();
	while (this->bp < this->buflen && $Character::isUnicodeIdentifierPart(this->ch)) {
		nextChar();
	}
	return $nc(this->names)->fromChars(this->buf, start, this->bp - start);
}

$Name* DocCommentParser::readAttributeName() {
	int32_t start = this->bp;
	nextChar();
	while (this->bp < this->buflen && ($Character::isUnicodeIdentifierPart(this->ch) || this->ch == u'-')) {
		nextChar();
	}
	return $nc(this->names)->fromChars(this->buf, start, this->bp - start);
}

$Name* DocCommentParser::readTagName() {
	int32_t start = this->bp;
	nextChar();
	while (this->bp < this->buflen && ($Character::isUnicodeIdentifierPart(this->ch) || this->ch == u'.' || this->ch == u'-' || this->ch == u':')) {
		nextChar();
	}
	return $nc(this->names)->fromChars(this->buf, start, this->bp - start);
}

bool DocCommentParser::isJavaIdentifierStart(char16_t ch) {
	return $Character::isJavaIdentifierStart(ch);
}

$Name* DocCommentParser::readJavaIdentifier() {
	int32_t start = this->bp;
	nextChar();
	while (this->bp < this->buflen && $Character::isJavaIdentifierPart(this->ch)) {
		nextChar();
	}
	return $nc(this->names)->fromChars(this->buf, start, this->bp - start);
}

$Name* DocCommentParser::readSystemPropertyName() {
	int32_t pos = this->bp;
	nextChar();
	while (this->bp < this->buflen && $Character::isUnicodeIdentifierPart(this->ch) || this->ch == u'.') {
		nextChar();
	}
	return $nc(this->names)->fromChars(this->buf, pos, this->bp - pos);
}

bool DocCommentParser::isDecimalDigit(char16_t ch) {
	return (u'0' <= ch && ch <= u'9');
}

bool DocCommentParser::isHexDigit(char16_t ch) {
	return (u'0' <= ch && ch <= u'9') || (u'a' <= ch && ch <= u'f') || (u'A' <= ch && ch <= u'F');
}

bool DocCommentParser::isUnquotedAttrValueTerminator(char16_t ch) {
	switch (ch) {
	case u'\f':
		{}
	case u'\n':
		{}
	case u'\r':
		{}
	case u'\t':
		{}
	case u' ':
		{}
	case u'\"':
		{}
	case u'\'':
		{}
	case u'`':
		{}
	case u'=':
		{}
	case u'<':
		{}
	case u'>':
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

bool DocCommentParser::isWhitespace(char16_t ch) {
	return $Character::isWhitespace(ch);
}

void DocCommentParser::skipWhitespace() {
	while (this->bp < this->buflen && isWhitespace(this->ch)) {
		nextChar();
	}
}

$String* DocCommentParser::newString(int32_t start, int32_t end) {
	return $new($String, this->buf, start, end - start);
}

$Map* DocCommentParser::createTagParsers() {
	$useLocalCurrentObjectStackCache();
	$init($DocCommentParser$TagParser$Kind);
	$init($DocTree$Kind);
	$var($DocCommentParser$TagParserArray, parsers, $new($DocCommentParser$TagParserArray, {
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$1, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::AUTHOR)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$2, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::CODE, true)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$3, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::DEPRECATED)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$4, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::DOC_ROOT)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$5, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::EXCEPTION)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$6, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::HIDDEN)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$7, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::INDEX)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$8, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::INHERIT_DOC)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$9, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::LINK)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$10, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::LINK_PLAIN)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$11, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::LITERAL, true)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$12, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::PARAM)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$13, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::PROVIDES)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$14, this, $DocCommentParser$TagParser$Kind::EITHER, $DocTree$Kind::RETURN)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$15, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::SEE)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$16, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::SERIAL_DATA)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$17, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::SERIAL_FIELD)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$18, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::SERIAL)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$19, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::SINCE)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$20, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::SUMMARY)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$21, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::SYSTEM_PROPERTY)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$22, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::THROWS)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$23, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::USES)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$24, this, $DocCommentParser$TagParser$Kind::INLINE, $DocTree$Kind::VALUE)),
		static_cast<$DocCommentParser$TagParser*>($$new($DocCommentParser$25, this, $DocCommentParser$TagParser$Kind::BLOCK, $DocTree$Kind::VERSION))
	}));
	$var($Map, tagParsers, $new($HashMap));
	{
		$var($DocCommentParser$TagParserArray, arr$, parsers);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($DocCommentParser$TagParser, p, arr$->get(i$));
			tagParsers->put($($nc(this->names)->fromString($nc($($nc(p)->getTreeKind()))->tagName)), p);
		}
	}
	return tagParsers;
}

DocCommentParser::DocCommentParser() {
}

$Class* DocCommentParser::load$($String* name, bool initialize) {
	$loadClass(DocCommentParser, name, initialize, &_DocCommentParser_ClassInfo_, allocate$DocCommentParser);
	return class$;
}

$Class* DocCommentParser::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com