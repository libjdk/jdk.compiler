#ifndef _com_sun_source_util_DocTreeFactory_h_
#define _com_sun_source_util_DocTreeFactory_h_
//$ interface com.sun.source.util.DocTreeFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class AttributeTree;
				class AttributeTree$ValueKind;
				class AuthorTree;
				class CommentTree;
				class DeprecatedTree;
				class DocCommentTree;
				class DocRootTree;
				class DocTree;
				class DocTypeTree;
				class EndElementTree;
				class EntityTree;
				class ErroneousTree;
				class HiddenTree;
				class IdentifierTree;
				class IndexTree;
				class InheritDocTree;
				class LinkTree;
				class LiteralTree;
				class ParamTree;
				class ProvidesTree;
				class ReferenceTree;
				class ReturnTree;
				class SeeTree;
				class SerialDataTree;
				class SerialFieldTree;
				class SerialTree;
				class SinceTree;
				class StartElementTree;
				class SummaryTree;
				class SystemPropertyTree;
				class TextTree;
				class ThrowsTree;
				class UnknownBlockTagTree;
				class UnknownInlineTagTree;
				class UsesTree;
				class ValueTree;
				class VersionTree;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import DocTreeFactory : public ::java::lang::Object {
	$interface(DocTreeFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::source::util::DocTreeFactory* at(int32_t pos) {return nullptr;}
	virtual ::java::util::List* getFirstSentence(::java::util::List* list) {return nullptr;}
	virtual ::com::sun::source::doctree::AttributeTree* newAttributeTree(::javax::lang::model::element::Name* name, ::com::sun::source::doctree::AttributeTree$ValueKind* vkind, ::java::util::List* value) {return nullptr;}
	virtual ::com::sun::source::doctree::AuthorTree* newAuthorTree(::java::util::List* name) {return nullptr;}
	virtual ::com::sun::source::doctree::LiteralTree* newCodeTree(::com::sun::source::doctree::TextTree* text) {return nullptr;}
	virtual ::com::sun::source::doctree::CommentTree* newCommentTree($String* text) {return nullptr;}
	virtual ::com::sun::source::doctree::DeprecatedTree* newDeprecatedTree(::java::util::List* text) {return nullptr;}
	virtual ::com::sun::source::doctree::DocCommentTree* newDocCommentTree(::java::util::List* fullBody, ::java::util::List* tags) {return nullptr;}
	virtual ::com::sun::source::doctree::DocCommentTree* newDocCommentTree(::java::util::List* fullBody, ::java::util::List* tags, ::java::util::List* preamble, ::java::util::List* postamble) {return nullptr;}
	virtual ::com::sun::source::doctree::DocRootTree* newDocRootTree() {return nullptr;}
	virtual ::com::sun::source::doctree::DocTypeTree* newDocTypeTree($String* text) {return nullptr;}
	virtual ::com::sun::source::doctree::EndElementTree* newEndElementTree(::javax::lang::model::element::Name* name) {return nullptr;}
	virtual ::com::sun::source::doctree::EntityTree* newEntityTree(::javax::lang::model::element::Name* name) {return nullptr;}
	virtual ::com::sun::source::doctree::ErroneousTree* newErroneousTree($String* text, ::javax::tools::Diagnostic* diag) {return nullptr;}
	virtual ::com::sun::source::doctree::ThrowsTree* newExceptionTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::HiddenTree* newHiddenTree(::java::util::List* text) {return nullptr;}
	virtual ::com::sun::source::doctree::IdentifierTree* newIdentifierTree(::javax::lang::model::element::Name* name) {return nullptr;}
	virtual ::com::sun::source::doctree::IndexTree* newIndexTree(::com::sun::source::doctree::DocTree* term, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::InheritDocTree* newInheritDocTree() {return nullptr;}
	virtual ::com::sun::source::doctree::LinkTree* newLinkPlainTree(::com::sun::source::doctree::ReferenceTree* ref, ::java::util::List* label) {return nullptr;}
	virtual ::com::sun::source::doctree::LinkTree* newLinkTree(::com::sun::source::doctree::ReferenceTree* ref, ::java::util::List* label) {return nullptr;}
	virtual ::com::sun::source::doctree::LiteralTree* newLiteralTree(::com::sun::source::doctree::TextTree* text) {return nullptr;}
	virtual ::com::sun::source::doctree::ParamTree* newParamTree(bool isTypeParameter, ::com::sun::source::doctree::IdentifierTree* name, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::ProvidesTree* newProvidesTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::ReferenceTree* newReferenceTree($String* signature) {return nullptr;}
	virtual ::com::sun::source::doctree::ReturnTree* newReturnTree(::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::ReturnTree* newReturnTree(bool isInline, ::java::util::List* description);
	virtual ::com::sun::source::doctree::SeeTree* newSeeTree(::java::util::List* reference) {return nullptr;}
	virtual ::com::sun::source::doctree::SerialDataTree* newSerialDataTree(::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::SerialFieldTree* newSerialFieldTree(::com::sun::source::doctree::IdentifierTree* name, ::com::sun::source::doctree::ReferenceTree* type, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::SerialTree* newSerialTree(::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::SinceTree* newSinceTree(::java::util::List* text) {return nullptr;}
	virtual ::com::sun::source::doctree::StartElementTree* newStartElementTree(::javax::lang::model::element::Name* name, ::java::util::List* attrs, bool selfClosing) {return nullptr;}
	virtual ::com::sun::source::doctree::SummaryTree* newSummaryTree(::java::util::List* summary);
	virtual ::com::sun::source::doctree::SystemPropertyTree* newSystemPropertyTree(::javax::lang::model::element::Name* propertyName) {return nullptr;}
	virtual ::com::sun::source::doctree::TextTree* newTextTree($String* text) {return nullptr;}
	virtual ::com::sun::source::doctree::ThrowsTree* newThrowsTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::UnknownBlockTagTree* newUnknownBlockTagTree(::javax::lang::model::element::Name* name, ::java::util::List* content) {return nullptr;}
	virtual ::com::sun::source::doctree::UnknownInlineTagTree* newUnknownInlineTagTree(::javax::lang::model::element::Name* name, ::java::util::List* content) {return nullptr;}
	virtual ::com::sun::source::doctree::UsesTree* newUsesTree(::com::sun::source::doctree::ReferenceTree* name, ::java::util::List* description) {return nullptr;}
	virtual ::com::sun::source::doctree::ValueTree* newValueTree(::com::sun::source::doctree::ReferenceTree* ref) {return nullptr;}
	virtual ::com::sun::source::doctree::VersionTree* newVersionTree(::java::util::List* text) {return nullptr;}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTreeFactory_h_