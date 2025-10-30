#include <com/sun/source/util/SimpleDocTreeVisitor.h>

#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/BlockTagTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/DocTypeTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/source/doctree/HiddenTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/source/doctree/InlineTagTree.h>
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
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef DEFAULT_VALUE

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocRootTree = ::com::sun::source::doctree::DocRootTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DocTypeTree = ::com::sun::source::doctree::DocTypeTree;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $ErroneousTree = ::com::sun::source::doctree::ErroneousTree;
using $HiddenTree = ::com::sun::source::doctree::HiddenTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $IndexTree = ::com::sun::source::doctree::IndexTree;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $InlineTagTree = ::com::sun::source::doctree::InlineTagTree;
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$FieldInfo _SimpleDocTreeVisitor_FieldInfo_[] = {
	{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(SimpleDocTreeVisitor, DEFAULT_VALUE)},
	{}
};

$MethodInfo _SimpleDocTreeVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SimpleDocTreeVisitor::*)()>(&SimpleDocTreeVisitor::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(SimpleDocTreeVisitor::*)(Object$*)>(&SimpleDocTreeVisitor::init$))},
	{"defaultAction", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PROTECTED},
	{"visit", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(SimpleDocTreeVisitor::*)($DocTree*,Object$*)>(&SimpleDocTreeVisitor::visit))},
	{"visit", "(Ljava/lang/Iterable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Lcom/sun/source/doctree/DocTree;>;TP;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(SimpleDocTreeVisitor::*)($Iterable*,Object$*)>(&SimpleDocTreeVisitor::visit))},
	{"visitAttribute", "(Lcom/sun/source/doctree/AttributeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/AttributeTree;TP;)TR;", $PUBLIC},
	{"visitAuthor", "(Lcom/sun/source/doctree/AuthorTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/AuthorTree;TP;)TR;", $PUBLIC},
	{"visitComment", "(Lcom/sun/source/doctree/CommentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/CommentTree;TP;)TR;", $PUBLIC},
	{"visitDeprecated", "(Lcom/sun/source/doctree/DeprecatedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DeprecatedTree;TP;)TR;", $PUBLIC},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocCommentTree;TP;)TR;", $PUBLIC},
	{"visitDocRoot", "(Lcom/sun/source/doctree/DocRootTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocRootTree;TP;)TR;", $PUBLIC},
	{"visitDocType", "(Lcom/sun/source/doctree/DocTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTypeTree;TP;)TR;", $PUBLIC},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/EndElementTree;TP;)TR;", $PUBLIC},
	{"visitEntity", "(Lcom/sun/source/doctree/EntityTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/EntityTree;TP;)TR;", $PUBLIC},
	{"visitErroneous", "(Lcom/sun/source/doctree/ErroneousTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ErroneousTree;TP;)TR;", $PUBLIC},
	{"visitHidden", "(Lcom/sun/source/doctree/HiddenTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/HiddenTree;TP;)TR;", $PUBLIC},
	{"visitIdentifier", "(Lcom/sun/source/doctree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/IdentifierTree;TP;)TR;", $PUBLIC},
	{"visitIndex", "(Lcom/sun/source/doctree/IndexTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/IndexTree;TP;)TR;", $PUBLIC},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/InheritDocTree;TP;)TR;", $PUBLIC},
	{"visitLink", "(Lcom/sun/source/doctree/LinkTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/LinkTree;TP;)TR;", $PUBLIC},
	{"visitLiteral", "(Lcom/sun/source/doctree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/LiteralTree;TP;)TR;", $PUBLIC},
	{"visitOther", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ParamTree;TP;)TR;", $PUBLIC},
	{"visitProvides", "(Lcom/sun/source/doctree/ProvidesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ProvidesTree;TP;)TR;", $PUBLIC},
	{"visitReference", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ReferenceTree;TP;)TR;", $PUBLIC},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ReturnTree;TP;)TR;", $PUBLIC},
	{"visitSee", "(Lcom/sun/source/doctree/SeeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SeeTree;TP;)TR;", $PUBLIC},
	{"visitSerial", "(Lcom/sun/source/doctree/SerialTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialTree;TP;)TR;", $PUBLIC},
	{"visitSerialData", "(Lcom/sun/source/doctree/SerialDataTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialDataTree;TP;)TR;", $PUBLIC},
	{"visitSerialField", "(Lcom/sun/source/doctree/SerialFieldTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialFieldTree;TP;)TR;", $PUBLIC},
	{"visitSince", "(Lcom/sun/source/doctree/SinceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SinceTree;TP;)TR;", $PUBLIC},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/StartElementTree;TP;)TR;", $PUBLIC},
	{"visitSummary", "(Lcom/sun/source/doctree/SummaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SummaryTree;TP;)TR;", $PUBLIC},
	{"visitSystemProperty", "(Lcom/sun/source/doctree/SystemPropertyTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SystemPropertyTree;TP;)TR;", $PUBLIC},
	{"visitText", "(Lcom/sun/source/doctree/TextTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/TextTree;TP;)TR;", $PUBLIC},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ThrowsTree;TP;)TR;", $PUBLIC},
	{"visitUnknownBlockTag", "(Lcom/sun/source/doctree/UnknownBlockTagTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UnknownBlockTagTree;TP;)TR;", $PUBLIC},
	{"visitUnknownInlineTag", "(Lcom/sun/source/doctree/UnknownInlineTagTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UnknownInlineTagTree;TP;)TR;", $PUBLIC},
	{"visitUses", "(Lcom/sun/source/doctree/UsesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UsesTree;TP;)TR;", $PUBLIC},
	{"visitValue", "(Lcom/sun/source/doctree/ValueTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ValueTree;TP;)TR;", $PUBLIC},
	{"visitVersion", "(Lcom/sun/source/doctree/VersionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/VersionTree;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _SimpleDocTreeVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.source.util.SimpleDocTreeVisitor",
	"java.lang.Object",
	"com.sun.source.doctree.DocTreeVisitor",
	_SimpleDocTreeVisitor_FieldInfo_,
	_SimpleDocTreeVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/source/doctree/DocTreeVisitor<TR;TP;>;"
};

$Object* allocate$SimpleDocTreeVisitor($Class* clazz) {
	return $of($alloc(SimpleDocTreeVisitor));
}

void SimpleDocTreeVisitor::init$() {
	$set(this, DEFAULT_VALUE, nullptr);
}

void SimpleDocTreeVisitor::init$(Object$* defaultValue) {
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* SimpleDocTreeVisitor::defaultAction($DocTree* node, Object$* p) {
	return $of(this->DEFAULT_VALUE);
}

$Object* SimpleDocTreeVisitor::visit($DocTree* node, Object$* p) {
	return $of((node == nullptr) ? ($Object*)nullptr : $nc(node)->accept(this, p));
}

$Object* SimpleDocTreeVisitor::visit($Iterable* nodes, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, nullptr);
	if (nodes != nullptr) {
		{
			$var($Iterator, i$, nodes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DocTree, node, $cast($DocTree, i$->next()));
				$assign(r, visit(node, p));
			}
		}
	}
	return $of(r);
}

$Object* SimpleDocTreeVisitor::visitAttribute($AttributeTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitAuthor($AuthorTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitComment($CommentTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitDeprecated($DeprecatedTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitDocComment($DocCommentTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitDocRoot($DocRootTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitDocType($DocTypeTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitEndElement($EndElementTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitEntity($EntityTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitErroneous($ErroneousTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitHidden($HiddenTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitIdentifier($IdentifierTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitIndex($IndexTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitInheritDoc($InheritDocTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitLink($LinkTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitLiteral($LiteralTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitParam($ParamTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitProvides($ProvidesTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitReference($ReferenceTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitReturn($ReturnTree* node, Object$* p) {
	return $of(defaultAction(static_cast<$DocTree*>(static_cast<$BlockTagTree*>(node)), p));
}

$Object* SimpleDocTreeVisitor::visitSee($SeeTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitSerial($SerialTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitSerialData($SerialDataTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitSerialField($SerialFieldTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitSince($SinceTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitStartElement($StartElementTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitSummary($SummaryTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitSystemProperty($SystemPropertyTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitText($TextTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitThrows($ThrowsTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitUnknownBlockTag($UnknownBlockTagTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitUnknownInlineTag($UnknownInlineTagTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitUses($UsesTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitValue($ValueTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitVersion($VersionTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

$Object* SimpleDocTreeVisitor::visitOther($DocTree* node, Object$* p) {
	return $of(defaultAction(node, p));
}

SimpleDocTreeVisitor::SimpleDocTreeVisitor() {
}

$Class* SimpleDocTreeVisitor::load$($String* name, bool initialize) {
	$loadClass(SimpleDocTreeVisitor, name, initialize, &_SimpleDocTreeVisitor_ClassInfo_, allocate$SimpleDocTreeVisitor);
	return class$;
}

$Class* SimpleDocTreeVisitor::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com