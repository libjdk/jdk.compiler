#include <com/sun/tools/javac/tree/DocTreeMaker.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTypeTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/source/doctree/HiddenTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/ProvidesTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/doctree/SeeTree.h>
#include <com/sun/source/doctree/SerialDataTree.h>
#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/source/doctree/SerialTree.h>
#include <com/sun/source/doctree/SinceTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/doctree/SummaryTree.h>
#include <com/sun/source/doctree/SystemPropertyTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <com/sun/tools/javac/api/JavacTrees.h>
#include <com/sun/tools/javac/parser/ParserFactory.h>
#include <com/sun/tools/javac/parser/ReferenceParser$ParseException.h>
#include <com/sun/tools/javac/parser/ReferenceParser$Reference.h>
#include <com/sun/tools/javac/parser/ReferenceParser.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCAttribute.h>
#include <com/sun/tools/javac/tree/DCTree$DCAuthor.h>
#include <com/sun/tools/javac/tree/DCTree$DCComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDeprecated.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocRoot.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocType.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndElement.h>
#include <com/sun/tools/javac/tree/DCTree$DCEntity.h>
#include <com/sun/tools/javac/tree/DCTree$DCErroneous.h>
#include <com/sun/tools/javac/tree/DCTree$DCHidden.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCIndex.h>
#include <com/sun/tools/javac/tree/DCTree$DCInheritDoc.h>
#include <com/sun/tools/javac/tree/DCTree$DCLink.h>
#include <com/sun/tools/javac/tree/DCTree$DCLiteral.h>
#include <com/sun/tools/javac/tree/DCTree$DCParam.h>
#include <com/sun/tools/javac/tree/DCTree$DCProvides.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree$DCReturn.h>
#include <com/sun/tools/javac/tree/DCTree$DCSee.h>
#include <com/sun/tools/javac/tree/DCTree$DCSerial.h>
#include <com/sun/tools/javac/tree/DCTree$DCSerialData.h>
#include <com/sun/tools/javac/tree/DCTree$DCSerialField.h>
#include <com/sun/tools/javac/tree/DCTree$DCSince.h>
#include <com/sun/tools/javac/tree/DCTree$DCStartElement.h>
#include <com/sun/tools/javac/tree/DCTree$DCSummary.h>
#include <com/sun/tools/javac/tree/DCTree$DCSystemProperty.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree$DCThrows.h>
#include <com/sun/tools/javac/tree/DCTree$DCUnknownBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCUnknownInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCUses.h>
#include <com/sun/tools/javac/tree/DCTree$DCValue.h>
#include <com/sun/tools/javac/tree/DCTree$DCVersion.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker$1.h>
#include <com/sun/tools/javac/tree/DocTreeMaker$2.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/text/BreakIterator.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Name.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef CODE
#undef EXCEPTION
#undef LINK
#undef LINK_PLAIN
#undef LITERAL
#undef NOPOS
#undef TEXT
#undef THROWS

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocRootTree = ::com::sun::source::doctree::DocRootTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTypeTree = ::com::sun::source::doctree::DocTypeTree;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $ErroneousTree = ::com::sun::source::doctree::ErroneousTree;
using $HiddenTree = ::com::sun::source::doctree::HiddenTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $IndexTree = ::com::sun::source::doctree::IndexTree;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $LinkTree = ::com::sun::source::doctree::LinkTree;
using $LiteralTree = ::com::sun::source::doctree::LiteralTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ProvidesTree = ::com::sun::source::doctree::ProvidesTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $SeeTree = ::com::sun::source::doctree::SeeTree;
using $SerialDataTree = ::com::sun::source::doctree::SerialDataTree;
using $SerialFieldTree = ::com::sun::source::doctree::SerialFieldTree;
using $SerialTree = ::com::sun::source::doctree::SerialTree;
using $SinceTree = ::com::sun::source::doctree::SinceTree;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $SummaryTree = ::com::sun::source::doctree::SummaryTree;
using $SystemPropertyTree = ::com::sun::source::doctree::SystemPropertyTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $UnknownBlockTagTree = ::com::sun::source::doctree::UnknownBlockTagTree;
using $UnknownInlineTagTree = ::com::sun::source::doctree::UnknownInlineTagTree;
using $UsesTree = ::com::sun::source::doctree::UsesTree;
using $ValueTree = ::com::sun::source::doctree::ValueTree;
using $VersionTree = ::com::sun::source::doctree::VersionTree;
using $DocTreeFactory = ::com::sun::source::util::DocTreeFactory;
using $JavacTrees = ::com::sun::tools::javac::api::JavacTrees;
using $ParserFactory = ::com::sun::tools::javac::parser::ParserFactory;
using $ReferenceParser = ::com::sun::tools::javac::parser::ReferenceParser;
using $ReferenceParser$ParseException = ::com::sun::tools::javac::parser::ReferenceParser$ParseException;
using $ReferenceParser$Reference = ::com::sun::tools::javac::parser::ReferenceParser$Reference;
using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCAttribute = ::com::sun::tools::javac::tree::DCTree$DCAttribute;
using $DCTree$DCAuthor = ::com::sun::tools::javac::tree::DCTree$DCAuthor;
using $DCTree$DCComment = ::com::sun::tools::javac::tree::DCTree$DCComment;
using $DCTree$DCDeprecated = ::com::sun::tools::javac::tree::DCTree$DCDeprecated;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $DCTree$DCDocRoot = ::com::sun::tools::javac::tree::DCTree$DCDocRoot;
using $DCTree$DCDocType = ::com::sun::tools::javac::tree::DCTree$DCDocType;
using $DCTree$DCEndElement = ::com::sun::tools::javac::tree::DCTree$DCEndElement;
using $DCTree$DCEntity = ::com::sun::tools::javac::tree::DCTree$DCEntity;
using $DCTree$DCErroneous = ::com::sun::tools::javac::tree::DCTree$DCErroneous;
using $DCTree$DCHidden = ::com::sun::tools::javac::tree::DCTree$DCHidden;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCIndex = ::com::sun::tools::javac::tree::DCTree$DCIndex;
using $DCTree$DCInheritDoc = ::com::sun::tools::javac::tree::DCTree$DCInheritDoc;
using $DCTree$DCLink = ::com::sun::tools::javac::tree::DCTree$DCLink;
using $DCTree$DCLiteral = ::com::sun::tools::javac::tree::DCTree$DCLiteral;
using $DCTree$DCParam = ::com::sun::tools::javac::tree::DCTree$DCParam;
using $DCTree$DCProvides = ::com::sun::tools::javac::tree::DCTree$DCProvides;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $DCTree$DCReturn = ::com::sun::tools::javac::tree::DCTree$DCReturn;
using $DCTree$DCSee = ::com::sun::tools::javac::tree::DCTree$DCSee;
using $DCTree$DCSerial = ::com::sun::tools::javac::tree::DCTree$DCSerial;
using $DCTree$DCSerialData = ::com::sun::tools::javac::tree::DCTree$DCSerialData;
using $DCTree$DCSerialField = ::com::sun::tools::javac::tree::DCTree$DCSerialField;
using $DCTree$DCSince = ::com::sun::tools::javac::tree::DCTree$DCSince;
using $DCTree$DCStartElement = ::com::sun::tools::javac::tree::DCTree$DCStartElement;
using $DCTree$DCSummary = ::com::sun::tools::javac::tree::DCTree$DCSummary;
using $DCTree$DCSystemProperty = ::com::sun::tools::javac::tree::DCTree$DCSystemProperty;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $DCTree$DCThrows = ::com::sun::tools::javac::tree::DCTree$DCThrows;
using $DCTree$DCUnknownBlockTag = ::com::sun::tools::javac::tree::DCTree$DCUnknownBlockTag;
using $DCTree$DCUnknownInlineTag = ::com::sun::tools::javac::tree::DCTree$DCUnknownInlineTag;
using $DCTree$DCUses = ::com::sun::tools::javac::tree::DCTree$DCUses;
using $DCTree$DCValue = ::com::sun::tools::javac::tree::DCTree$DCValue;
using $DCTree$DCVersion = ::com::sun::tools::javac::tree::DCTree$DCVersion;
using $DocTreeMaker$1 = ::com::sun::tools::javac::tree::DocTreeMaker$1;
using $DocTreeMaker$2 = ::com::sun::tools::javac::tree::DocTreeMaker$2;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Position = ::com::sun::tools::javac::util::Position;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $1List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Set = ::java::util::Set;
using $1Name = ::javax::lang::model::element::Name;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DocTreeMaker_FieldInfo_[] = {
	{"treeMakerKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/tree/DocTreeMaker;>;", $PROTECTED | $STATIC | $FINAL, $staticField(DocTreeMaker, treeMakerKey)},
	{"sentenceBreakTags", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $FINAL, $field(DocTreeMaker, sentenceBreakTags)},
	{"pos", "I", nullptr, $PUBLIC, $field(DocTreeMaker, pos)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(DocTreeMaker, diags)},
	{"trees", "Lcom/sun/tools/javac/api/JavacTrees;", nullptr, $PRIVATE | $FINAL, $field(DocTreeMaker, trees)},
	{"referenceParser", "Lcom/sun/tools/javac/parser/ReferenceParser;", nullptr, $PRIVATE | $FINAL, $field(DocTreeMaker, referenceParser)},
	{}
};

$MethodInfo _DocTreeMaker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(DocTreeMaker::*)($Context*)>(&DocTreeMaker::init$))},
	{"at", "(I)Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $PUBLIC},
	{"at", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $PUBLIC},
	{"cast", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PRIVATE, $method(static_cast<$1List*(DocTreeMaker::*)($1List*)>(&DocTreeMaker::cast))},
	{"defaultSentenceBreak", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DocTreeMaker::*)($String*)>(&DocTreeMaker::defaultSentenceBreak))},
	{"getFirstSentence", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/util/List<Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getSentenceBreak", "(Ljava/lang/String;Lcom/sun/source/doctree/DocTree;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DocTreeMaker::*)($String*,$DocTree*)>(&DocTreeMaker::getSentenceBreak))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocTreeMaker*(*)($Context*)>(&DocTreeMaker::instance))},
	{"isSentenceBreak", "(Ljavax/lang/model/element/Name;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DocTreeMaker::*)($1Name*)>(&DocTreeMaker::isSentenceBreak))},
	{"isSentenceBreak", "(Lcom/sun/source/doctree/DocTree;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(DocTreeMaker::*)($DocTree*,bool)>(&DocTreeMaker::isSentenceBreak))},
	{"isTextTree", "(Lcom/sun/source/doctree/DocTree;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DocTreeMaker::*)($DocTree*)>(&DocTreeMaker::isTextTree))},
	{"newAttributeTree", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCAttribute;", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCAttribute;", $PUBLIC},
	{"newAuthorTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCAuthor;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCAuthor;", $PUBLIC},
	{"newCodeTree", "(Lcom/sun/source/doctree/TextTree;)Lcom/sun/tools/javac/tree/DCTree$DCLiteral;", nullptr, $PUBLIC},
	{"newCommentTree", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/DCTree$DCComment;", nullptr, $PUBLIC},
	{"newDeprecatedTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCDeprecated;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCDeprecated;", $PUBLIC},
	{"newDocCommentTree", "(Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", $PUBLIC},
	{"newDocCommentTree", "(Lcom/sun/tools/javac/parser/Tokens$Comment;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", "(Lcom/sun/tools/javac/parser/Tokens$Comment;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", $PUBLIC},
	{"newDocCommentTree", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", $PUBLIC},
	{"newDocRootTree", "()Lcom/sun/tools/javac/tree/DCTree$DCDocRoot;", nullptr, $PUBLIC},
	{"newDocTypeTree", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/DCTree$DCDocType;", nullptr, $PUBLIC},
	{"newEndElementTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/tools/javac/tree/DCTree$DCEndElement;", nullptr, $PUBLIC},
	{"newEntityTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/tools/javac/tree/DCTree$DCEntity;", nullptr, $PUBLIC},
	{"newErroneousTree", "(Ljava/lang/String;Ljavax/tools/Diagnostic;)Lcom/sun/tools/javac/tree/DCTree$DCErroneous;", "(Ljava/lang/String;Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;)Lcom/sun/tools/javac/tree/DCTree$DCErroneous;", $PUBLIC},
	{"newErroneousTree", "(Ljava/lang/String;Lcom/sun/tools/javac/util/DiagnosticSource;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/tree/DCTree$DCErroneous;", nullptr, $PUBLIC | $TRANSIENT},
	{"newExceptionTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCThrows;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCThrows;", $PUBLIC},
	{"newHiddenTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCHidden;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCHidden;", $PUBLIC},
	{"newIdentifierTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/tools/javac/tree/DCTree$DCIdentifier;", nullptr, $PUBLIC},
	{"newIndexTree", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCIndex;", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCIndex;", $PUBLIC},
	{"newInheritDocTree", "()Lcom/sun/tools/javac/tree/DCTree$DCInheritDoc;", nullptr, $PUBLIC},
	{"newLinkPlainTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCLink;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCLink;", $PUBLIC},
	{"newLinkTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCLink;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCLink;", $PUBLIC},
	{"newLiteralTree", "(Lcom/sun/source/doctree/TextTree;)Lcom/sun/tools/javac/tree/DCTree$DCLiteral;", nullptr, $PUBLIC},
	{"newParamTree", "(ZLcom/sun/source/doctree/IdentifierTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCParam;", "(ZLcom/sun/source/doctree/IdentifierTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCParam;", $PUBLIC},
	{"newProvidesTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCProvides;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCProvides;", $PUBLIC},
	{"newReferenceTree", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/DCTree$DCReference;", nullptr, $PUBLIC},
	{"newReferenceTree", "(Ljava/lang/String;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCReference;", "(Ljava/lang/String;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Ljavax/lang/model/element/Name;Ljava/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCReference;", $PUBLIC},
	{"newReturnTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCReturn;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCReturn;", $PUBLIC},
	{"newReturnTree", "(ZLjava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCReturn;", "(ZLjava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCReturn;", $PUBLIC},
	{"newSeeTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCSee;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCSee;", $PUBLIC},
	{"newSerialDataTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCSerialData;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCSerialData;", $PUBLIC},
	{"newSerialFieldTree", "(Lcom/sun/source/doctree/IdentifierTree;Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCSerialField;", "(Lcom/sun/source/doctree/IdentifierTree;Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCSerialField;", $PUBLIC},
	{"newSerialTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCSerial;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCSerial;", $PUBLIC},
	{"newSinceTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCSince;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCSince;", $PUBLIC},
	{"newStartElementTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;Z)Lcom/sun/tools/javac/tree/DCTree$DCStartElement;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Z)Lcom/sun/tools/javac/tree/DCTree$DCStartElement;", $PUBLIC},
	{"newSummaryTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCSummary;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCSummary;", $PUBLIC},
	{"newSystemPropertyTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/tools/javac/tree/DCTree$DCSystemProperty;", nullptr, $PUBLIC},
	{"newTextTree", "(Ljava/lang/String;)Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PUBLIC},
	{"newThrowsTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCThrows;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCThrows;", $PUBLIC},
	{"newUnknownBlockTagTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCUnknownBlockTag;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCUnknownBlockTag;", $PUBLIC},
	{"newUnknownInlineTagTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCUnknownInlineTag;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCUnknownInlineTag;", $PUBLIC},
	{"newUsesTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCUses;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCUses;", $PUBLIC},
	{"newValueTree", "(Lcom/sun/source/doctree/ReferenceTree;)Lcom/sun/tools/javac/tree/DCTree$DCValue;", nullptr, $PUBLIC},
	{"newVersionTree", "(Ljava/util/List;)Lcom/sun/tools/javac/tree/DCTree$DCVersion;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/tree/DCTree$DCVersion;", $PUBLIC},
	{"skipWhiteSpace", "(Ljava/lang/String;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DocTreeMaker::*)($String*,int32_t)>(&DocTreeMaker::skipWhiteSpace))},
	{"splitBody", "(Ljava/util/Collection;)Lcom/sun/tools/javac/util/Pair;", "(Ljava/util/Collection<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/tools/javac/util/Pair<Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;>;", $PRIVATE, $method(static_cast<$Pair*(DocTreeMaker::*)($Collection*)>(&DocTreeMaker::splitBody))},
	{}
};

$InnerClassInfo _DocTreeMaker_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DocTreeMaker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.tree.DocTreeMaker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DocTreeMaker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DocTreeMaker",
	"java.lang.Object",
	"com.sun.source.util.DocTreeFactory",
	_DocTreeMaker_FieldInfo_,
	_DocTreeMaker_MethodInfo_,
	nullptr,
	nullptr,
	_DocTreeMaker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DocTreeMaker$2,com.sun.tools.javac.tree.DocTreeMaker$1"
};

$Object* allocate$DocTreeMaker($Class* clazz) {
	return $of($alloc(DocTreeMaker));
}

$Context$Key* DocTreeMaker::treeMakerKey = nullptr;

DocTreeMaker* DocTreeMaker::instance($Context* context) {
	$init(DocTreeMaker);
	$var(DocTreeMaker, instance, $cast(DocTreeMaker, $nc(context)->get(DocTreeMaker::treeMakerKey)));
	if (instance == nullptr) {
		$assign(instance, $new(DocTreeMaker, context));
	}
	return instance;
}

void DocTreeMaker::init$($Context* context) {
	this->pos = $Position::NOPOS;
	$nc(context)->put(DocTreeMaker::treeMakerKey, $of(this));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	this->pos = $Position::NOPOS;
	$set(this, trees, $JavacTrees::instance(context));
	$set(this, referenceParser, $new($ReferenceParser, $($ParserFactory::instance(context))));
	$set(this, sentenceBreakTags, $Set::of("H1"_s, "H2"_s, "H3"_s, "H4"_s, "H5"_s, "H6"_s, "PRE"_s, "P"_s));
}

DocTreeMaker* DocTreeMaker::at(int32_t pos) {
	this->pos = pos;
	return this;
}

DocTreeMaker* DocTreeMaker::at($JCDiagnostic$DiagnosticPosition* pos) {
	this->pos = (pos == nullptr ? $Position::NOPOS : $nc(pos)->getStartPosition());
	return this;
}

$AttributeTree* DocTreeMaker::newAttributeTree($1Name* name, $AttributeTree$ValueKind* vkind, $1List* value) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCAttribute, tree, $new($DCTree$DCAttribute, name, vkind, $(cast(value))));
	tree->pos$ = this->pos;
	return tree;
}

$AuthorTree* DocTreeMaker::newAuthorTree($1List* name) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCAuthor, tree, $new($DCTree$DCAuthor, $(cast(name))));
	tree->pos$ = this->pos;
	return tree;
}

$LiteralTree* DocTreeMaker::newCodeTree($TextTree* text) {
	$init($DocTree$Kind);
	$var($DCTree$DCLiteral, tree, $new($DCTree$DCLiteral, $DocTree$Kind::CODE, $cast($DCTree$DCText, text)));
	tree->pos$ = this->pos;
	return tree;
}

$CommentTree* DocTreeMaker::newCommentTree($String* text) {
	$var($DCTree$DCComment, tree, $new($DCTree$DCComment, text));
	tree->pos$ = this->pos;
	return tree;
}

$DeprecatedTree* DocTreeMaker::newDeprecatedTree($1List* text) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCDeprecated, tree, $new($DCTree$DCDeprecated, $(cast(text))));
	tree->pos$ = this->pos;
	return tree;
}

$DocCommentTree* DocTreeMaker::newDocCommentTree($1List* fullBody, $1List* tags) {
	$useLocalCurrentObjectStackCache();
	$var($1List, var$0, fullBody);
	$var($1List, var$1, tags);
	$var($1List, var$2, $Collections::emptyList());
	return newDocCommentTree(var$0, var$1, var$2, $($Collections::emptyList()));
}

$DCTree$DCDocComment* DocTreeMaker::newDocCommentTree($Tokens$Comment* comment, $1List* fullBody, $1List* tags, $1List* preamble, $1List* postamble) {
	$useLocalCurrentObjectStackCache();
	$var($Pair, pair, splitBody(fullBody));
	$var($Tokens$Comment, var$0, comment);
	$var($1List, var$1, cast(fullBody));
	$var($1List, var$2, $cast($1List, $nc(pair)->fst));
	$var($1List, var$3, $cast($1List, pair->snd));
	$var($1List, var$4, cast(tags));
	$var($1List, var$5, cast(preamble));
	$var($DCTree$DCDocComment, tree, $new($DCTree$DCDocComment, var$0, var$1, var$2, var$3, var$4, var$5, $(cast(postamble))));
	tree->pos$ = this->pos;
	return tree;
}

$DocCommentTree* DocTreeMaker::newDocCommentTree($1List* fullBody, $1List* tags, $1List* preamble, $1List* postamble) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, lb, $new($ListBuffer));
	lb->addAll($(cast(fullBody)));
	$var($1List, fBody, lb->toList());
	$var($Tokens$Comment, c, $new($DocTreeMaker$1, this));
	$var($Pair, pair, splitBody(fullBody));
	$var($Tokens$Comment, var$0, c);
	$var($1List, var$1, fBody);
	$var($1List, var$2, $cast($1List, $nc(pair)->fst));
	$var($1List, var$3, $cast($1List, pair->snd));
	$var($1List, var$4, cast(tags));
	$var($1List, var$5, cast(preamble));
	$var($DCTree$DCDocComment, tree, $new($DCTree$DCDocComment, var$0, var$1, var$2, var$3, var$4, var$5, $(cast(postamble))));
	return tree;
}

$DocRootTree* DocTreeMaker::newDocRootTree() {
	$var($DCTree$DCDocRoot, tree, $new($DCTree$DCDocRoot));
	tree->pos$ = this->pos;
	return tree;
}

$DocTypeTree* DocTreeMaker::newDocTypeTree($String* text) {
	$var($DCTree$DCDocType, tree, $new($DCTree$DCDocType, text));
	tree->pos$ = this->pos;
	return tree;
}

$EndElementTree* DocTreeMaker::newEndElementTree($1Name* name) {
	$var($DCTree$DCEndElement, tree, $new($DCTree$DCEndElement, name));
	tree->pos$ = this->pos;
	return tree;
}

$EntityTree* DocTreeMaker::newEntityTree($1Name* name) {
	$var($DCTree$DCEntity, tree, $new($DCTree$DCEntity, name));
	tree->pos$ = this->pos;
	return tree;
}

$ErroneousTree* DocTreeMaker::newErroneousTree($String* text, $Diagnostic* diag) {
	$var($DCTree$DCErroneous, tree, $new($DCTree$DCErroneous, text, $cast($JCDiagnostic, diag)));
	tree->pos$ = this->pos;
	return tree;
}

$DCTree$DCErroneous* DocTreeMaker::newErroneousTree($String* text, $DiagnosticSource* diagSource, $String* code, $ObjectArray* args) {
	$var($DCTree$DCErroneous, tree, $new($DCTree$DCErroneous, text, this->diags, diagSource, code, args));
	tree->pos$ = this->pos;
	return tree;
}

$ThrowsTree* DocTreeMaker::newExceptionTree($ReferenceTree* name, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$init($DocTree$Kind);
	$var($DCTree$DCThrows, tree, $new($DCTree$DCThrows, $DocTree$Kind::EXCEPTION, $cast($DCTree$DCReference, name), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$HiddenTree* DocTreeMaker::newHiddenTree($1List* text) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCHidden, tree, $new($DCTree$DCHidden, $(cast(text))));
	tree->pos$ = this->pos;
	return tree;
}

$IdentifierTree* DocTreeMaker::newIdentifierTree($1Name* name) {
	$var($DCTree$DCIdentifier, tree, $new($DCTree$DCIdentifier, name));
	tree->pos$ = this->pos;
	return tree;
}

$IndexTree* DocTreeMaker::newIndexTree($DocTree* term, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCIndex, tree, $new($DCTree$DCIndex, $cast($DCTree, term), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$InheritDocTree* DocTreeMaker::newInheritDocTree() {
	$var($DCTree$DCInheritDoc, tree, $new($DCTree$DCInheritDoc));
	tree->pos$ = this->pos;
	return tree;
}

$LinkTree* DocTreeMaker::newLinkTree($ReferenceTree* ref, $1List* label) {
	$useLocalCurrentObjectStackCache();
	$init($DocTree$Kind);
	$var($DCTree$DCLink, tree, $new($DCTree$DCLink, $DocTree$Kind::LINK, $cast($DCTree$DCReference, ref), $(cast(label))));
	tree->pos$ = this->pos;
	return tree;
}

$LinkTree* DocTreeMaker::newLinkPlainTree($ReferenceTree* ref, $1List* label) {
	$useLocalCurrentObjectStackCache();
	$init($DocTree$Kind);
	$var($DCTree$DCLink, tree, $new($DCTree$DCLink, $DocTree$Kind::LINK_PLAIN, $cast($DCTree$DCReference, ref), $(cast(label))));
	tree->pos$ = this->pos;
	return tree;
}

$LiteralTree* DocTreeMaker::newLiteralTree($TextTree* text) {
	$init($DocTree$Kind);
	$var($DCTree$DCLiteral, tree, $new($DCTree$DCLiteral, $DocTree$Kind::LITERAL, $cast($DCTree$DCText, text)));
	tree->pos$ = this->pos;
	return tree;
}

$ParamTree* DocTreeMaker::newParamTree(bool isTypeParameter, $IdentifierTree* name, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCParam, tree, $new($DCTree$DCParam, isTypeParameter, $cast($DCTree$DCIdentifier, name), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$ProvidesTree* DocTreeMaker::newProvidesTree($ReferenceTree* name, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCProvides, tree, $new($DCTree$DCProvides, $cast($DCTree$DCReference, name), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$ReferenceTree* DocTreeMaker::newReferenceTree($String* signature) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ReferenceParser$Reference, ref, $nc(this->referenceParser)->parse(signature));
		$var($DCTree$DCReference, tree, $new($DCTree$DCReference, signature, $nc(ref)->moduleName, ref->qualExpr, ref->member, ref->paramTypes));
		tree->pos$ = this->pos;
		return tree;
	} catch ($ReferenceParser$ParseException& e) {
		$throwNew($IllegalArgumentException, "invalid signature"_s, e);
	}
	$shouldNotReachHere();
}

$DCTree$DCReference* DocTreeMaker::newReferenceTree($String* signature, $JCTree$JCExpression* moduleName, $JCTree* qualExpr, $1Name* member, $1List* paramTypes) {
	$var($DCTree$DCReference, tree, $new($DCTree$DCReference, signature, moduleName, qualExpr, member, paramTypes));
	tree->pos$ = this->pos;
	return tree;
}

$ReturnTree* DocTreeMaker::newReturnTree($1List* description) {
	return newReturnTree(false, description);
}

$ReturnTree* DocTreeMaker::newReturnTree(bool isInline, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCReturn, tree, $new($DCTree$DCReturn, isInline, $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$SeeTree* DocTreeMaker::newSeeTree($1List* reference) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCSee, tree, $new($DCTree$DCSee, $(cast(reference))));
	tree->pos$ = this->pos;
	return tree;
}

$SerialTree* DocTreeMaker::newSerialTree($1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCSerial, tree, $new($DCTree$DCSerial, $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$SerialDataTree* DocTreeMaker::newSerialDataTree($1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCSerialData, tree, $new($DCTree$DCSerialData, $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$SerialFieldTree* DocTreeMaker::newSerialFieldTree($IdentifierTree* name, $ReferenceTree* type, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCSerialField, tree, $new($DCTree$DCSerialField, $cast($DCTree$DCIdentifier, name), $cast($DCTree$DCReference, type), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$SinceTree* DocTreeMaker::newSinceTree($1List* text) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCSince, tree, $new($DCTree$DCSince, $(cast(text))));
	tree->pos$ = this->pos;
	return tree;
}

$StartElementTree* DocTreeMaker::newStartElementTree($1Name* name, $1List* attrs, bool selfClosing) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCStartElement, tree, $new($DCTree$DCStartElement, name, $(cast(attrs)), selfClosing));
	tree->pos$ = this->pos;
	return tree;
}

$SummaryTree* DocTreeMaker::newSummaryTree($1List* text) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCSummary, tree, $new($DCTree$DCSummary, $(cast(text))));
	tree->pos$ = this->pos;
	return tree;
}

$SystemPropertyTree* DocTreeMaker::newSystemPropertyTree($1Name* propertyName) {
	$var($DCTree$DCSystemProperty, tree, $new($DCTree$DCSystemProperty, propertyName));
	tree->pos$ = this->pos;
	return tree;
}

$TextTree* DocTreeMaker::newTextTree($String* text) {
	$var($DCTree$DCText, tree, $new($DCTree$DCText, text));
	tree->pos$ = this->pos;
	return tree;
}

$ThrowsTree* DocTreeMaker::newThrowsTree($ReferenceTree* name, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$init($DocTree$Kind);
	$var($DCTree$DCThrows, tree, $new($DCTree$DCThrows, $DocTree$Kind::THROWS, $cast($DCTree$DCReference, name), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$UnknownBlockTagTree* DocTreeMaker::newUnknownBlockTagTree($1Name* name, $1List* content) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCUnknownBlockTag, tree, $new($DCTree$DCUnknownBlockTag, name, $(cast(content))));
	tree->pos$ = this->pos;
	return tree;
}

$UnknownInlineTagTree* DocTreeMaker::newUnknownInlineTagTree($1Name* name, $1List* content) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCUnknownInlineTag, tree, $new($DCTree$DCUnknownInlineTag, name, $(cast(content))));
	tree->pos$ = this->pos;
	return tree;
}

$UsesTree* DocTreeMaker::newUsesTree($ReferenceTree* name, $1List* description) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCUses, tree, $new($DCTree$DCUses, $cast($DCTree$DCReference, name), $(cast(description))));
	tree->pos$ = this->pos;
	return tree;
}

$ValueTree* DocTreeMaker::newValueTree($ReferenceTree* ref) {
	$var($DCTree$DCValue, tree, $new($DCTree$DCValue, $cast($DCTree$DCReference, ref)));
	tree->pos$ = this->pos;
	return tree;
}

$VersionTree* DocTreeMaker::newVersionTree($1List* text) {
	$useLocalCurrentObjectStackCache();
	$var($DCTree$DCVersion, tree, $new($DCTree$DCVersion, $(cast(text))));
	tree->pos$ = this->pos;
	return tree;
}

$1List* DocTreeMaker::getFirstSentence($1List* list) {
	$var($Pair, pair, splitBody(list));
	return $new($ArrayList, $cast($Collection, $nc(pair)->fst));
}

$Pair* DocTreeMaker::splitBody($Collection* list) {
	$useLocalCurrentObjectStackCache();
	int32_t savedpos = this->pos;
	{
		$var($Throwable, var$0, nullptr);
		$var($Pair, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($ListBuffer, body, $new($ListBuffer));
			$var($ListBuffer, fs, $new($ListBuffer));
			if ($nc(list)->isEmpty()) {
				$var($Object, var$3, $of(fs->toList()));
				$assign(var$2, $new($Pair, var$3, $(body->toList())));
				return$1 = true;
				goto $finally;
			}
			bool foundFirstSentence = false;
			$var($ArrayList, alist, $new($ArrayList, list));
			$var($ListIterator, itr, alist->listIterator());
			while ($nc(itr)->hasNext()) {
				bool isFirst = !itr->hasPrevious();
				$var($DocTree, dt, $cast($DocTree, itr->next()));
				int32_t spos = $nc(($cast($DCTree, dt)))->pos$;
				if (foundFirstSentence) {
					body->add($cast($DCTree, dt));
					continue;
				}
				$init($DocTreeMaker$2);
				{
					$var($DCTree$DCText, tt, nullptr)
					$var($String, s, nullptr)
					$var($DocTree, peekedNext, nullptr)
					int32_t sbreak = 0;
					switch ($nc($DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->get($nc(($($nc(dt)->getKind())))->ordinal())) {
					case 1:
						{}
					case 2:
						{
							foundFirstSentence = true;
							break;
						}
					case 3:
						{
							$assign(tt, $cast($DCTree$DCText, dt));
							$assign(s, $nc(tt)->getBody());
							$assign(peekedNext, itr->hasNext() ? $cast($DocTree, alist->get(itr->nextIndex())) : ($DocTree*)nullptr);
							sbreak = getSentenceBreak(s, peekedNext);
							if (sbreak > 0) {
								$assign(s, $($nc(s)->substring(0, sbreak))->stripTrailing());
								$var($DCTree$DCText, text, $cast($DCTree$DCText, $nc($(this->at(spos)))->newTextTree(s)));
								fs->add(text);
								foundFirstSentence = true;
								int32_t nwPos = skipWhiteSpace($(tt->getBody()), sbreak);
								if (nwPos > 0) {
									$var($DCTree$DCText, text2, $cast($DCTree$DCText, $nc($(this->at(spos + nwPos)))->newTextTree($($nc($(tt->getBody()))->substring(nwPos)))));
									body->add(text2);
								}
								continue;
							} else if (itr->hasNext()) {
								$assign(peekedNext, $cast($DocTree, alist->get(itr->nextIndex())));
								bool sbrk = isSentenceBreak(peekedNext, false);
								if (sbrk) {
									$var($DocTree, next, $cast($DocTree, itr->next()));
									$assign(s, $nc(s)->stripTrailing());
									$var($DCTree$DCText, text, $cast($DCTree$DCText, $nc($(this->at(spos)))->newTextTree(s)));
									fs->add(text);
									body->add($cast($DCTree, next));
									foundFirstSentence = true;
									continue;
								}
							}
							break;
						}
					default:
						{
							if (isSentenceBreak(dt, isFirst)) {
								body->add($cast($DCTree, dt));
								foundFirstSentence = true;
								continue;
							}
							break;
						}
					}
				}
				fs->add($cast($DCTree, dt));
			}
			$var($Object, var$4, $of(fs->toList()));
			$assign(var$2, $new($Pair, var$4, $(body->toList())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			this->pos = savedpos;
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

bool DocTreeMaker::isTextTree($DocTree* tree) {
	$init($DocTree$Kind);
	return $nc(tree)->getKind() == $DocTree$Kind::TEXT;
}

int32_t DocTreeMaker::defaultSentenceBreak($String* s) {
	int32_t period = -1;
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		switch (s->charAt(i)) {
		case u'.':
			{
				period = i;
				break;
			}
		case u' ':
			{}
		case u'\f':
			{}
		case u'\n':
			{}
		case u'\r':
			{}
		case u'\t':
			{
				if (period >= 0) {
					return i;
				}
				break;
			}
		default:
			{
				period = -1;
				break;
			}
		}
	}
	return -1;
}

int32_t DocTreeMaker::getSentenceBreak($String* s, $DocTree* dt) {
	$useLocalCurrentObjectStackCache();
	$var($BreakIterator, breakIterator, $nc(this->trees)->getBreakIterator());
	if (breakIterator == nullptr) {
		return defaultSentenceBreak(s);
	}
	$nc(breakIterator)->setText(s);
	int32_t sbrk = breakIterator->next();
	if (dt == nullptr) {
		return sbrk;
	}
	if (sbrk < $nc(s)->length() - 1) {
		return sbrk;
	}
	if (isTextTree(dt)) {
		$var($TextTree, ttnext, $cast($TextTree, dt));
		$var($String, combined, $str({s, $($nc(ttnext)->getBody())}));
		breakIterator->setText(combined);
		int32_t sbrk2 = breakIterator->next();
		if (sbrk < sbrk2) {
			return sbrk;
		}
	}
	if (isSentenceBreak(dt, false)) {
		return sbrk;
	}
	$var($String, combined, $str({s, "Dummy Sentence."_s}));
	breakIterator->setText(combined);
	int32_t sbrk2 = breakIterator->next();
	if (sbrk2 <= sbrk) {
		return sbrk2;
	}
	return -1;
}

bool DocTreeMaker::isSentenceBreak($1Name* tagName) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->sentenceBreakTags)->contains($($StringUtils::toUpperCase($($nc($of(tagName))->toString()))));
}

bool DocTreeMaker::isSentenceBreak($DocTree* dt, bool isFirstDocTree) {
	$useLocalCurrentObjectStackCache();
	$init($DocTreeMaker$2);
	{
		$var($StartElementTree, set, nullptr)
		$var($EndElementTree, eet, nullptr)
		switch ($nc($DocTreeMaker$2::$SwitchMap$com$sun$source$doctree$DocTree$Kind)->get($nc(($($nc(dt)->getKind())))->ordinal())) {
		case 4:
			{
				$assign(set, $cast($StartElementTree, dt));
				return !isFirstDocTree && $nc(($cast($DCTree, dt)))->pos$ > 1 && isSentenceBreak($($nc(set)->getName()));
			}
		case 5:
			{
				$assign(eet, $cast($EndElementTree, dt));
				return !isFirstDocTree && $nc(($cast($DCTree, dt)))->pos$ > 1 && isSentenceBreak($($nc(eet)->getName()));
			}
		default:
			{
				return false;
			}
		}
	}
}

int32_t DocTreeMaker::skipWhiteSpace($String* s, int32_t start) {
	for (int32_t i = start; i < $nc(s)->length(); ++i) {
		char16_t c = s->charAt(i);
		if (!$Character::isWhitespace(c)) {
			return i;
		}
	}
	return -1;
}

$1List* DocTreeMaker::cast($1List* list) {
	return list;
}

void clinit$DocTreeMaker($Class* class$) {
	$assignStatic(DocTreeMaker::treeMakerKey, $new($Context$Key));
}

DocTreeMaker::DocTreeMaker() {
}

$Class* DocTreeMaker::load$($String* name, bool initialize) {
	$loadClass(DocTreeMaker, name, initialize, &_DocTreeMaker_ClassInfo_, clinit$DocTreeMaker, allocate$DocTreeMaker);
	return class$;
}

$Class* DocTreeMaker::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com