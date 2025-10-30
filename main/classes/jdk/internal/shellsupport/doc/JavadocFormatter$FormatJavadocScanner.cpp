#include <jdk/internal/shellsupport/doc/JavadocFormatter$FormatJavadocScanner.h>

#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/InlineTagTree.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <com/sun/source/util/DocTrees.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$3.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef LI
#undef MARKER
#undef RETURN
#undef RETURNS
#undef START_ELEMENT
#undef TH

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
using $LinkTree = ::com::sun::source::doctree::LinkTree;
using $LiteralTree = ::com::sun::source::doctree::LiteralTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $DocTrees = ::com::sun::source::util::DocTrees;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $Name = ::javax::lang::model::element::Name;
using $Elements = ::javax::lang::model::util::Elements;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavadocFormatter = ::jdk::internal::shellsupport::doc::JavadocFormatter;
using $JavadocFormatter$3 = ::jdk::internal::shellsupport::doc::JavadocFormatter$3;
using $JavadocFormatter$HtmlTag = ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag;
using $JavadocFormatter$Sections = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocFormatter$FormatJavadocScanner_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/shellsupport/doc/JavadocFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocFormatter$FormatJavadocScanner, this$0)},
	{"result", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(JavadocFormatter$FormatJavadocScanner, result)},
	{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PRIVATE | $FINAL, $field(JavadocFormatter$FormatJavadocScanner, task)},
	{"trees", "Lcom/sun/source/util/DocTrees;", nullptr, $PRIVATE | $FINAL, $field(JavadocFormatter$FormatJavadocScanner, trees)},
	{"reflownTo", "I", nullptr, $PRIVATE, $field(JavadocFormatter$FormatJavadocScanner, reflownTo)},
	{"indent", "I", nullptr, $PRIVATE, $field(JavadocFormatter$FormatJavadocScanner, indent)},
	{"limit", "I", nullptr, $PRIVATE, $field(JavadocFormatter$FormatJavadocScanner, limit)},
	{"pre", "Z", nullptr, $PRIVATE, $field(JavadocFormatter$FormatJavadocScanner, pre)},
	{"tableColumns", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Integer;>;", $PRIVATE, $field(JavadocFormatter$FormatJavadocScanner, tableColumns)},
	{"listStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Integer;>;", 0, $field(JavadocFormatter$FormatJavadocScanner, listStack)},
	{"defStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Integer;>;", 0, $field(JavadocFormatter$FormatJavadocScanner, defStack)},
	{"tableStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Integer;>;", 0, $field(JavadocFormatter$FormatJavadocScanner, tableStack)},
	{"cellsStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/List<Ljava/lang/Integer;>;>;", 0, $field(JavadocFormatter$FormatJavadocScanner, cellsStack)},
	{"headerStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/List<Ljava/lang/Boolean;>;>;", 0, $field(JavadocFormatter$FormatJavadocScanner, headerStack)},
	{"lastNode", "Lcom/sun/source/doctree/DocTree;", nullptr, $PRIVATE, $field(JavadocFormatter$FormatJavadocScanner, lastNode)},
	{}
};

$MethodInfo _JavadocFormatter$FormatJavadocScanner_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocFormatter;Ljava/lang/StringBuilder;Lcom/sun/source/util/JavacTask;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocFormatter$FormatJavadocScanner::*)($JavadocFormatter*,$StringBuilder*,$JavacTask*)>(&JavadocFormatter$FormatJavadocScanner::init$))},
	{"formatDef", "(Ljava/lang/CharSequence;Ljava/util/List;)Ljava/lang/Object;", "(Ljava/lang/CharSequence;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/lang/Object;", $PUBLIC},
	{"handleEndElement", "(Ljavax/lang/model/element/Name;)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocFormatter$FormatJavadocScanner::*)($Name*)>(&JavadocFormatter$FormatJavadocScanner::handleEndElement))},
	{"reflowTillNow", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavadocFormatter$FormatJavadocScanner::*)()>(&JavadocFormatter$FormatJavadocScanner::reflowTillNow))},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"startSection", "(Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;)V", nullptr, $PRIVATE, $method(static_cast<void(JavadocFormatter$FormatJavadocScanner::*)($JavadocFormatter$Sections*)>(&JavadocFormatter$FormatJavadocScanner::startSection))},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitEntity", "(Lcom/sun/source/doctree/EntityTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitLink", "(Lcom/sun/source/doctree/LinkTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitLiteral", "(Lcom/sun/source/doctree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitText", "(Lcom/sun/source/doctree/TextTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavadocFormatter$FormatJavadocScanner_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$FormatJavadocScanner", "jdk.internal.shellsupport.doc.JavadocFormatter", "FormatJavadocScanner", $PRIVATE},
	{}
};

$ClassInfo _JavadocFormatter$FormatJavadocScanner_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocFormatter$FormatJavadocScanner",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavadocFormatter$FormatJavadocScanner_FieldInfo_,
	_JavadocFormatter$FormatJavadocScanner_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Object;Ljava/lang/Object;>;",
	nullptr,
	_JavadocFormatter$FormatJavadocScanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$FormatJavadocScanner($Class* clazz) {
	return $of($alloc(JavadocFormatter$FormatJavadocScanner));
}

void JavadocFormatter$FormatJavadocScanner::init$($JavadocFormatter* this$0, $StringBuilder* result, $JavacTask* task) {
	$set(this, this$0, this$0);
	$DocTreeScanner::init$();
	this->limit = $Math::min(this->this$0->lineLimit, 95);
	$set(this, listStack, $new($Stack));
	$set(this, defStack, $new($Stack));
	$set(this, tableStack, $new($Stack));
	$set(this, cellsStack, $new($Stack));
	$set(this, headerStack, $new($Stack));
	$set(this, result, result);
	$set(this, task, task);
	$set(this, trees, $DocTrees::instance(static_cast<$JavaCompiler$CompilationTask*>(task)));
}

$Object* JavadocFormatter$FormatJavadocScanner::visitDocComment($DocCommentTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$set(this, tableColumns, $JavadocFormatter::countTableColumns(node));
	this->reflownTo = $nc(this->result)->length();
	scan($(static_cast<$Iterable*>($nc(node)->getFirstSentence())), p);
	scan($(static_cast<$Iterable*>($nc(node)->getBody())), p);
	$JavadocFormatter::reflow(this->result, this->reflownTo, this->indent, this->limit);
	{
		$var($Iterator, i$, $nc($($nc($JavadocFormatter::docSections)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$JavadocFormatter$Sections* current = $cast($JavadocFormatter$Sections, i$->next());
			{
				bool seenAny = false;
				{
					$var($Iterator, i$, $nc($($nc(node)->getBlockTags()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DocTree, t, $cast($DocTree, i$->next()));
						{
							if ($nc(current)->matches(t)) {
								if (!seenAny) {
									seenAny = true;
									startSection(current);
								}
								scan(t, ($Object*)nullptr);
							}
						}
					}
				}
				$init($JavadocFormatter$Sections);
				if (current == $JavadocFormatter$Sections::RETURNS && !seenAny) {
					$var($List, firstSentence, node->getFirstSentence());
					bool var$0 = $nc(firstSentence)->size() == 1;
					$init($DocTree$Kind);
					if (var$0 && $nc(($cast($DocTree, $(firstSentence->get(0)))))->getKind() == $DocTree$Kind::RETURN) {
						startSection(current);
						$var($DocTree, var$1, $cast($DocTree, firstSentence->get(0)));
						scan(var$1, $($of($Boolean::valueOf(true))));
					}
				}
			}
		}
	}
	return $of(nullptr);
}

void JavadocFormatter$FormatJavadocScanner::startSection($JavadocFormatter$Sections* current) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->result)->charAt($nc(this->result)->length() - 1) != u'\n') {
		$nc(this->result)->append("\n"_s);
	}
	$nc(this->result)->append("\n"_s);
	$init($JavadocFormatter);
	$nc(this->result)->append($(this->this$0->escape("\u001b[4m"_s)))->append($cast($String, $($nc($JavadocFormatter::docSections)->get(current))))->append($(this->this$0->escape("\u001b[0m"_s)))->append("\n"_s);
}

$Object* JavadocFormatter$FormatJavadocScanner::visitText($TextTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, $nc(node)->getBody());
	if (!this->pre) {
		$assign(text, $($nc(text)->replaceAll("[ \t\r\n]+"_s, " "_s))->trim());
		if (text->isEmpty()) {
			$assign(text, " "_s);
		}
	} else {
		$assign(text, $nc(text)->replaceAll("\n"_s, $$str({"\n"_s, $($JavadocFormatter::indentString(this->indent))})));
	}
	$nc(this->result)->append(text);
	return $of(nullptr);
}

$Object* JavadocFormatter$FormatJavadocScanner::visitLink($LinkTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(node)->getLabel()))->isEmpty()) {
		scan($(static_cast<$Iterable*>(node->getLabel())), p);
	} else {
		$nc(this->result)->append($($nc($(node->getReference()))->getSignature()));
	}
	return $of(nullptr);
}

$Object* JavadocFormatter$FormatJavadocScanner::visitParam($ParamTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, var$0, static_cast<$CharSequence*>($nc($($nc(node)->getName()))->getName()));
	return $of(formatDef(var$0, $(node->getDescription())));
}

$Object* JavadocFormatter$FormatJavadocScanner::visitThrows($ThrowsTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, var$0, static_cast<$CharSequence*>($nc($($nc(node)->getExceptionName()))->getSignature()));
	return $of(formatDef(var$0, $(node->getDescription())));
}

$Object* JavadocFormatter$FormatJavadocScanner::formatDef($CharSequence* name, $List* description) {
	$useLocalCurrentObjectStackCache();
	$nc(this->result)->append(name);
	$nc(this->result)->append(" - "_s);
	this->reflownTo = $nc(this->result)->length();
	this->indent = $nc(name)->length() + 3;
	if (this->limit - this->indent < 30) {
		$nc(this->result)->append("\n"_s);
		$nc(this->result)->append($($JavadocFormatter::indentString(4)));
		this->indent = 4;
		this->reflownTo += 4;
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, scan(static_cast<$Iterable*>(description), ($Object*)nullptr));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$JavadocFormatter::reflow(this->result, this->reflownTo, this->indent, this->limit);
			$nc(this->result)->append("\n"_s);
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

$Object* JavadocFormatter$FormatJavadocScanner::visitLiteral($LiteralTree* node, Object$* p) {
	return $of(scan($(static_cast<$DocTree*>($nc(node)->getBody())), p));
}

$Object* JavadocFormatter$FormatJavadocScanner::visitReturn($ReturnTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc(node)->isInline() && p == nullptr) {
		$var($String, MARKER, "{0}"_s);
		$init($JavadocFormatter);
		int32_t p0 = $nc($JavadocFormatter::inlineReturns)->indexOf(MARKER);
		$nc(this->result)->append(static_cast<$CharSequence*>($JavadocFormatter::inlineReturns), 0, p0);
		{
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $DocTreeScanner::visitReturn(node, p));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$nc(this->result)->append($($nc($JavadocFormatter::inlineReturns)->substring(p0 + MARKER->length())));
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} else {
		this->reflownTo = $nc(this->result)->length();
		{
			$var($Throwable, var$4, nullptr);
			$var($Object, var$6, nullptr);
			bool return$5 = false;
			try {
				$assign(var$6, $DocTreeScanner::visitReturn(node, p));
				return$5 = true;
				goto $finally1;
			} catch ($Throwable& var$7) {
				$assign(var$4, var$7);
			} $finally1: {
				$JavadocFormatter::reflow(this->result, this->reflownTo, 0, this->limit);
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
			if (return$5) {
				return var$6;
			}
		}
	}
	$shouldNotReachHere();
}

$Object* JavadocFormatter$FormatJavadocScanner::visitStartElement($StartElementTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$init($JavadocFormatter$3);
	{
		int32_t columns = 0;
		switch ($nc($JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->get($nc(($($JavadocFormatter::getHtmlTag($($nc(node)->getName())))))->ordinal())) {
		case 1:
			{
				$init($DocTree$Kind);
				bool var$0 = this->lastNode != nullptr && $nc(this->lastNode)->getKind() == $DocTree$Kind::START_ELEMENT;
				$init($JavadocFormatter$HtmlTag);
				if (var$0 && $JavadocFormatter$HtmlTag::get($($nc(($cast($StartElementTree, this->lastNode)))->getName())) == $JavadocFormatter$HtmlTag::LI) {
					break;
				}
				reflowTillNow();
				$JavadocFormatter::addNewLineIfNeeded(this->result);
				$nc(this->result)->append($($JavadocFormatter::indentString(this->indent)));
				this->reflownTo = $nc(this->result)->length();
				break;
			}
		case 2:
			{
				reflowTillNow();
				this->indent += 4;
				break;
			}
		case 3:
			{
				reflowTillNow();
				this->pre = true;
				break;
			}
		case 4:
			{
				reflowTillNow();
				$nc(this->listStack)->push($($Integer::valueOf(-1)));
				this->indent += 4;
				break;
			}
		case 5:
			{
				reflowTillNow();
				$nc(this->listStack)->push($($Integer::valueOf(1)));
				this->indent += 4;
				break;
			}
		case 6:
			{
				reflowTillNow();
				$nc(this->defStack)->push($($Integer::valueOf(this->indent)));
				break;
			}
		case 7:
			{
				reflowTillNow();
				if (!$nc(this->listStack)->empty()) {
					$JavadocFormatter::addNewLineIfNeeded(this->result);
					int32_t top = $nc(($cast($Integer, $($nc(this->listStack)->pop()))))->intValue();
					if (top == (-1)) {
						$nc(this->result)->append($($JavadocFormatter::indentString(this->indent - 2)));
						$nc(this->result)->append("* "_s);
					} else {
						$nc(this->result)->append($($JavadocFormatter::indentString(this->indent - 3)));
						$nc(this->result)->append($$str({""_s, $$str(top++), ". "_s}));
					}
					$nc(this->listStack)->push($($Integer::valueOf(top)));
					this->reflownTo = $nc(this->result)->length();
				}
				break;
			}
		case 8:
			{
				reflowTillNow();
				if (!$nc(this->defStack)->isEmpty()) {
					$JavadocFormatter::addNewLineIfNeeded(this->result);
					this->indent = $nc(($cast($Integer, $($nc(this->defStack)->peek()))))->intValue();
					$nc(this->result)->append($(this->this$0->escape("\u001b[1m"_s)));
				}
				break;
			}
		case 9:
			{
				reflowTillNow();
				if (!$nc(this->defStack)->isEmpty()) {
					if (this->indent == $nc(($cast($Integer, $($nc(this->defStack)->peek()))))->intValue()) {
						$nc(this->result)->append($(this->this$0->escape("\u001b[0m"_s)));
					}
					$JavadocFormatter::addNewLineIfNeeded(this->result);
					this->indent = $nc(($cast($Integer, $($nc(this->defStack)->peek()))))->intValue() + 4;
					$nc(this->result)->append($($JavadocFormatter::indentString(this->indent)));
				}
				break;
			}
		case 10:
			{}
		case 11:
			{}
		case 12:
			{}
		case 13:
			{}
		case 14:
			{}
		case 15:
			{
				reflowTillNow();
				$JavadocFormatter::addNewLineIfNeeded(this->result);
				$nc(this->result)->append("\n"_s)->append($(this->this$0->escape("\u001b[4m"_s)));
				this->reflownTo = $nc(this->result)->length();
				break;
			}
		case 16:
			{
				columns = $nc(($cast($Integer, $($nc(this->tableColumns)->get(node)))))->intValue();
				if (columns == 0) {
					break;
				}
				reflowTillNow();
				$JavadocFormatter::addNewLineIfNeeded(this->result);
				this->reflownTo = $nc(this->result)->length();
				$nc(this->tableStack)->push($($Integer::valueOf(this->limit)));
				this->limit = $div((this->limit - 1), columns) - 3;
				for (int32_t sep = 0; sep < (this->limit + 3) * columns + 1; ++sep) {
					$nc(this->result)->append("-"_s);
				}
				$nc(this->result)->append("\n"_s);
				break;
			}
		case 17:
			{
				int32_t var$1 = $nc(this->cellsStack)->size();
				if (var$1 >= $nc(this->tableStack)->size()) {
					handleEndElement($($nc(node)->getName()));
				}
				$nc(this->cellsStack)->push($$new($ArrayList));
				$nc(this->headerStack)->push($$new($ArrayList));
				break;
			}
		case 18:
			{}
		case 19:
			{
				if ($nc(this->cellsStack)->isEmpty()) {
					break;
				}
				reflowTillNow();
				$nc(this->result)->append("\n"_s);
				this->reflownTo = $nc(this->result)->length();
				$nc(($cast($List, $($nc(this->cellsStack)->peek()))))->add($($Integer::valueOf($nc(this->result)->length())));
				$init($JavadocFormatter$HtmlTag);
				$nc(($cast($List, $($nc(this->headerStack)->peek()))))->add($($Boolean::valueOf($JavadocFormatter$HtmlTag::get($($nc(node)->getName())) == $JavadocFormatter$HtmlTag::TH)));
				break;
			}
		case 20:
			{
				{
					$var($Iterator, i$, $nc($($nc(node)->getAttributes()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DocTree, attr, $cast($DocTree, i$->next()));
						{
							$init($DocTree$Kind);
							if ($nc(attr)->getKind() != $DocTree$Kind::ATTRIBUTE) {
								continue;
							}
							$var($AttributeTree, at, $cast($AttributeTree, attr));
							if ("alt"_s->equals($($StringUtils::toLowerCase($($nc($of($($nc(at)->getName())))->toString()))))) {
								$JavadocFormatter::addSpaceIfNeeded(this->result);
								scan($(static_cast<$Iterable*>($nc(at)->getValue())), ($Object*)nullptr);
								$JavadocFormatter::addSpaceIfNeeded(this->result);
								break;
							}
						}
					}
				}
				break;
			}
		default:
			{
				$JavadocFormatter::addSpaceIfNeeded(this->result);
				break;
			}
		}
	}
	return $of(nullptr);
}

$Object* JavadocFormatter$FormatJavadocScanner::visitEndElement($EndElementTree* node, Object$* p) {
	handleEndElement($($nc(node)->getName()));
	return $of($DocTreeScanner::visitEndElement(node, p));
}

void JavadocFormatter$FormatJavadocScanner::handleEndElement($Name* name) {
	$useLocalCurrentObjectStackCache();
	$init($JavadocFormatter$3);
	{
		$var($List, cells, nullptr)
		$var($List, headerFlags, nullptr)
		$var($List, content, nullptr)
		int32_t maxLines = 0;
		switch ($nc($JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->get($nc(($($JavadocFormatter::getHtmlTag(name))))->ordinal())) {
		case 2:
			{
				this->indent -= 4;
				break;
			}
		case 3:
			{
				this->pre = false;
				$JavadocFormatter::addNewLineIfNeeded(this->result);
				this->reflownTo = $nc(this->result)->length();
				break;
			}
		case 4:
			{}
		case 5:
			{
				if ($nc(this->listStack)->isEmpty()) {
					break;
				}
				reflowTillNow();
				$nc(this->listStack)->pop();
				this->indent -= 4;
				$JavadocFormatter::addNewLineIfNeeded(this->result);
				break;
			}
		case 6:
			{
				if ($nc(this->defStack)->isEmpty()) {
					break;
				}
				reflowTillNow();
				if (this->indent == $nc(($cast($Integer, $($nc(this->defStack)->peek()))))->intValue()) {
					$nc(this->result)->append($(this->this$0->escape("\u001b[0m"_s)));
				}
				this->indent = $nc(($cast($Integer, $($nc(this->defStack)->pop()))))->intValue();
				$JavadocFormatter::addNewLineIfNeeded(this->result);
				break;
			}
		case 10:
			{}
		case 11:
			{}
		case 12:
			{}
		case 13:
			{}
		case 14:
			{}
		case 15:
			{
				reflowTillNow();
				$nc(this->result)->append($(this->this$0->escape("\u001b[0m"_s)))->append("\n"_s);
				this->reflownTo = $nc(this->result)->length();
				break;
			}
		case 16:
			{
				int32_t var$0 = $nc(this->cellsStack)->size();
				if (var$0 >= $nc(this->tableStack)->size()) {
					handleEndElement($($nc($($nc(this->task)->getElements()))->getName("tr"_s)));
				}
				if ($nc(this->tableStack)->isEmpty()) {
					break;
				}
				this->limit = $nc(($cast($Integer, $($nc(this->tableStack)->pop()))))->intValue();
				break;
			}
		case 17:
			{
				if ($nc(this->cellsStack)->isEmpty()) {
					break;
				}
				reflowTillNow();
				$assign(cells, $cast($List, $nc(this->cellsStack)->pop()));
				$assign(headerFlags, $cast($List, $nc(this->headerStack)->pop()));
				$assign(content, $new($ArrayList));
				maxLines = 0;
				$nc(this->result)->append("\n"_s);
				while (!$nc(cells)->isEmpty()) {
					int32_t currentCell = $nc(($cast($Integer, $(cells->remove(cells->size() - 1)))))->intValue();
					$var($StringArray, lines, $nc($($nc(this->result)->substring(currentCell, $nc(this->result)->length())))->split("\n"_s));
					$nc(this->result)->delete$(currentCell - 1, $nc(this->result)->length());
					$nc(content)->add(lines);
					maxLines = $Math::max(maxLines, lines->length);
				}
				$Collections::reverse(content);
				for (int32_t line = 0; line < maxLines; ++line) {
					for (int32_t column = 0; column < $nc(content)->size(); ++column) {
						$var($StringArray, lines, $cast($StringArray, content->get(column)));
						$var($String, currentLine, line < $nc(lines)->length ? $nc(lines)->get(line) : ""_s);
						$nc(this->result)->append("| "_s);
						bool header = $nc(($cast($Boolean, $($nc(headerFlags)->get(column)))))->booleanValue();
						if (header) {
							$nc(this->result)->append($(this->this$0->escape("\u001b[1m"_s)));
						}
						$nc(this->result)->append(currentLine);
						if (header) {
							$nc(this->result)->append($(this->this$0->escape("\u001b[0m"_s)));
						}
						int32_t padding = this->limit - $nc(currentLine)->length();
						if (padding > 0) {
							$nc(this->result)->append($($JavadocFormatter::indentString(padding)));
						}
						$nc(this->result)->append(" "_s);
					}
					$nc(this->result)->append("|\n"_s);
				}
				for (int32_t sep = 0; sep < (this->limit + 3) * $nc(content)->size() + 1; ++sep) {
					$nc(this->result)->append("-"_s);
				}
				$nc(this->result)->append("\n"_s);
				this->reflownTo = $nc(this->result)->length();
				break;
			}
		case 19:
			{}
		case 18:
			{
				break;
			}
		default:
			{
				$JavadocFormatter::addSpaceIfNeeded(this->result);
				break;
			}
		}
	}
}

$Object* JavadocFormatter$FormatJavadocScanner::visitEntity($EntityTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($String, value, $nc(this->trees)->getCharacters(node));
	$nc(this->result)->append(value == nullptr ? $($nc($of(node))->toString()) : value);
	return $of($DocTreeScanner::visitEntity(node, p));
}

$Object* JavadocFormatter$FormatJavadocScanner::scan($DocTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($InlineTagTree, node)) {
		$JavadocFormatter::addSpaceIfNeeded(this->result);
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $DocTreeScanner::scan(node, p));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if ($instanceOf($InlineTagTree, node)) {
				$JavadocFormatter::addSpaceIfNeeded(this->result);
			}
			$set(this, lastNode, node);
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

void JavadocFormatter$FormatJavadocScanner::reflowTillNow() {
	while (true) {
		bool var$0 = $nc(this->result)->length() > 0;
		if (!(var$0 && $nc(this->result)->charAt($nc(this->result)->length() - 1) == u' ')) {
			break;
		}
		{
			int32_t var$1 = $nc(this->result)->length() - 1;
			$nc(this->result)->delete$(var$1, $nc(this->result)->length());
		}
	}
	this->reflownTo = $Math::min(this->reflownTo, $nc(this->result)->length());
	$JavadocFormatter::reflow(this->result, this->reflownTo, this->indent, this->limit);
	this->reflownTo = $nc(this->result)->length();
}

JavadocFormatter$FormatJavadocScanner::JavadocFormatter$FormatJavadocScanner() {
}

$Class* JavadocFormatter$FormatJavadocScanner::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$FormatJavadocScanner, name, initialize, &_JavadocFormatter$FormatJavadocScanner_ClassInfo_, allocate$JavadocFormatter$FormatJavadocScanner);
	return class$;
}

$Class* JavadocFormatter$FormatJavadocScanner::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk