#include <com/sun/source/doctree/DocTreeVisitor.h>

#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/BlockTagTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/source/doctree/DocTree.h>
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
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <jcpp.h>

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $BlockTagTree = ::com::sun::source::doctree::BlockTagTree;
using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocRootTree = ::com::sun::source::doctree::DocRootTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
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
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$MethodInfo _DocTreeVisitor_MethodInfo_[] = {
	{"visitAttribute", "(Lcom/sun/source/doctree/AttributeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/AttributeTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitAuthor", "(Lcom/sun/source/doctree/AuthorTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/AuthorTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitComment", "(Lcom/sun/source/doctree/CommentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/CommentTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitDeprecated", "(Lcom/sun/source/doctree/DeprecatedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DeprecatedTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocCommentTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitDocRoot", "(Lcom/sun/source/doctree/DocRootTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocRootTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitDocType", "(Lcom/sun/source/doctree/DocTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTypeTree;TP;)TR;", $PUBLIC},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/EndElementTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitEntity", "(Lcom/sun/source/doctree/EntityTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/EntityTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitErroneous", "(Lcom/sun/source/doctree/ErroneousTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ErroneousTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitHidden", "(Lcom/sun/source/doctree/HiddenTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/HiddenTree;TP;)TR;", $PUBLIC},
	{"visitIdentifier", "(Lcom/sun/source/doctree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/IdentifierTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitIndex", "(Lcom/sun/source/doctree/IndexTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/IndexTree;TP;)TR;", $PUBLIC},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/InheritDocTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitLink", "(Lcom/sun/source/doctree/LinkTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/LinkTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitLiteral", "(Lcom/sun/source/doctree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/LiteralTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitOther", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ParamTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitProvides", "(Lcom/sun/source/doctree/ProvidesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ProvidesTree;TP;)TR;", $PUBLIC},
	{"visitReference", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ReferenceTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ReturnTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSee", "(Lcom/sun/source/doctree/SeeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SeeTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSerial", "(Lcom/sun/source/doctree/SerialTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSerialData", "(Lcom/sun/source/doctree/SerialDataTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialDataTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSerialField", "(Lcom/sun/source/doctree/SerialFieldTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialFieldTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSince", "(Lcom/sun/source/doctree/SinceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SinceTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/StartElementTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitSummary", "(Lcom/sun/source/doctree/SummaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SummaryTree;TP;)TR;", $PUBLIC},
	{"visitSystemProperty", "(Lcom/sun/source/doctree/SystemPropertyTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SystemPropertyTree;TP;)TR;", $PUBLIC},
	{"visitText", "(Lcom/sun/source/doctree/TextTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/TextTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ThrowsTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUnknownBlockTag", "(Lcom/sun/source/doctree/UnknownBlockTagTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UnknownBlockTagTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUnknownInlineTag", "(Lcom/sun/source/doctree/UnknownInlineTagTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UnknownInlineTagTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitUses", "(Lcom/sun/source/doctree/UsesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UsesTree;TP;)TR;", $PUBLIC},
	{"visitValue", "(Lcom/sun/source/doctree/ValueTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ValueTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"visitVersion", "(Lcom/sun/source/doctree/VersionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/VersionTree;TP;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocTreeVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.doctree.DocTreeVisitor",
	nullptr,
	nullptr,
	nullptr,
	_DocTreeVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$DocTreeVisitor($Class* clazz) {
	return $of($alloc(DocTreeVisitor));
}

$Object* DocTreeVisitor::visitDocType($DocTypeTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Object* DocTreeVisitor::visitHidden($HiddenTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Object* DocTreeVisitor::visitIndex($IndexTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Object* DocTreeVisitor::visitProvides($ProvidesTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Object* DocTreeVisitor::visitSummary($SummaryTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Object* DocTreeVisitor::visitSystemProperty($SystemPropertyTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Object* DocTreeVisitor::visitUses($UsesTree* node, Object$* p) {
	return $of(visitOther(node, p));
}

$Class* DocTreeVisitor::load$($String* name, bool initialize) {
	$loadClass(DocTreeVisitor, name, initialize, &_DocTreeVisitor_ClassInfo_, allocate$DocTreeVisitor);
	return class$;
}

$Class* DocTreeVisitor::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com