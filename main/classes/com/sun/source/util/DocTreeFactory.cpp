#include <com/sun/source/util/DocTreeFactory.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
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
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
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
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _DocTreeFactory_MethodInfo_[] = {
	{"at", "(I)Lcom/sun/source/util/DocTreeFactory;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstSentence", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/util/List<Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT},
	{"newAttributeTree", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List;)Lcom/sun/source/doctree/AttributeTree;", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/AttributeTree;", $PUBLIC | $ABSTRACT},
	{"newAuthorTree", "(Ljava/util/List;)Lcom/sun/source/doctree/AuthorTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/AuthorTree;", $PUBLIC | $ABSTRACT},
	{"newCodeTree", "(Lcom/sun/source/doctree/TextTree;)Lcom/sun/source/doctree/LiteralTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newCommentTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/CommentTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newDeprecatedTree", "(Ljava/util/List;)Lcom/sun/source/doctree/DeprecatedTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/DeprecatedTree;", $PUBLIC | $ABSTRACT},
	{"newDocCommentTree", "(Ljava/util/List;Ljava/util/List;)Lcom/sun/source/doctree/DocCommentTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/DocCommentTree;", $PUBLIC | $ABSTRACT},
	{"newDocCommentTree", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Lcom/sun/source/doctree/DocCommentTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/DocCommentTree;", $PUBLIC | $ABSTRACT},
	{"newDocRootTree", "()Lcom/sun/source/doctree/DocRootTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newDocTypeTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/DocTypeTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newEndElementTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/EndElementTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newEntityTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/EntityTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newErroneousTree", "(Ljava/lang/String;Ljavax/tools/Diagnostic;)Lcom/sun/source/doctree/ErroneousTree;", "(Ljava/lang/String;Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;)Lcom/sun/source/doctree/ErroneousTree;", $PUBLIC | $ABSTRACT},
	{"newExceptionTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/ThrowsTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ThrowsTree;", $PUBLIC | $ABSTRACT},
	{"newHiddenTree", "(Ljava/util/List;)Lcom/sun/source/doctree/HiddenTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/HiddenTree;", $PUBLIC | $ABSTRACT},
	{"newIdentifierTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newIndexTree", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List;)Lcom/sun/source/doctree/IndexTree;", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/IndexTree;", $PUBLIC | $ABSTRACT},
	{"newInheritDocTree", "()Lcom/sun/source/doctree/InheritDocTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newLinkPlainTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/LinkTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/LinkTree;", $PUBLIC | $ABSTRACT},
	{"newLinkTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/LinkTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/LinkTree;", $PUBLIC | $ABSTRACT},
	{"newLiteralTree", "(Lcom/sun/source/doctree/TextTree;)Lcom/sun/source/doctree/LiteralTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newParamTree", "(ZLcom/sun/source/doctree/IdentifierTree;Ljava/util/List;)Lcom/sun/source/doctree/ParamTree;", "(ZLcom/sun/source/doctree/IdentifierTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ParamTree;", $PUBLIC | $ABSTRACT},
	{"newProvidesTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/ProvidesTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ProvidesTree;", $PUBLIC | $ABSTRACT},
	{"newReferenceTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newReturnTree", "(Ljava/util/List;)Lcom/sun/source/doctree/ReturnTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ReturnTree;", $PUBLIC | $ABSTRACT},
	{"newReturnTree", "(ZLjava/util/List;)Lcom/sun/source/doctree/ReturnTree;", "(ZLjava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ReturnTree;", $PUBLIC},
	{"newSeeTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SeeTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SeeTree;", $PUBLIC | $ABSTRACT},
	{"newSerialDataTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SerialDataTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SerialDataTree;", $PUBLIC | $ABSTRACT},
	{"newSerialFieldTree", "(Lcom/sun/source/doctree/IdentifierTree;Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/SerialFieldTree;", "(Lcom/sun/source/doctree/IdentifierTree;Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SerialFieldTree;", $PUBLIC | $ABSTRACT},
	{"newSerialTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SerialTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SerialTree;", $PUBLIC | $ABSTRACT},
	{"newSinceTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SinceTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SinceTree;", $PUBLIC | $ABSTRACT},
	{"newStartElementTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;Z)Lcom/sun/source/doctree/StartElementTree;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Z)Lcom/sun/source/doctree/StartElementTree;", $PUBLIC | $ABSTRACT},
	{"newSummaryTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SummaryTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SummaryTree;", $PUBLIC},
	{"newSystemPropertyTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/SystemPropertyTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newTextTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/TextTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newThrowsTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/ThrowsTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ThrowsTree;", $PUBLIC | $ABSTRACT},
	{"newUnknownBlockTagTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/source/doctree/UnknownBlockTagTree;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/UnknownBlockTagTree;", $PUBLIC | $ABSTRACT},
	{"newUnknownInlineTagTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/source/doctree/UnknownInlineTagTree;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/UnknownInlineTagTree;", $PUBLIC | $ABSTRACT},
	{"newUsesTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/UsesTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/UsesTree;", $PUBLIC | $ABSTRACT},
	{"newValueTree", "(Lcom/sun/source/doctree/ReferenceTree;)Lcom/sun/source/doctree/ValueTree;", nullptr, $PUBLIC | $ABSTRACT},
	{"newVersionTree", "(Ljava/util/List;)Lcom/sun/source/doctree/VersionTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/VersionTree;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocTreeFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.DocTreeFactory",
	nullptr,
	nullptr,
	nullptr,
	_DocTreeFactory_MethodInfo_
};

$Object* allocate$DocTreeFactory($Class* clazz) {
	return $of($alloc(DocTreeFactory));
}

$ReturnTree* DocTreeFactory::newReturnTree(bool isInline, $List* description) {
	if (isInline) {
		$throwNew($UnsupportedOperationException);
	}
	return newReturnTree(description);
}

$SummaryTree* DocTreeFactory::newSummaryTree($List* summary) {
	$throwNew($UnsupportedOperationException, "not implemented"_s);
	$shouldNotReachHere();
}

$Class* DocTreeFactory::load$($String* name, bool initialize) {
	$loadClass(DocTreeFactory, name, initialize, &_DocTreeFactory_ClassInfo_, allocate$DocTreeFactory);
	return class$;
}

$Class* DocTreeFactory::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com