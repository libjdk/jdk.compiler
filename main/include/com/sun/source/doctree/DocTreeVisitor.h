#ifndef _com_sun_source_doctree_DocTreeVisitor_h_
#define _com_sun_source_doctree_DocTreeVisitor_h_
//$ interface com.sun.source.doctree.DocTreeVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class AttributeTree;
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

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import DocTreeVisitor : public ::java::lang::Object {
	$interface(DocTreeVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visitAttribute(::com::sun::source::doctree::AttributeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitAuthor(::com::sun::source::doctree::AuthorTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitComment(::com::sun::source::doctree::CommentTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitDeprecated(::com::sun::source::doctree::DeprecatedTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitDocRoot(::com::sun::source::doctree::DocRootTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitDocType(::com::sun::source::doctree::DocTypeTree* node, Object$* p);
	virtual $Object* visitEndElement(::com::sun::source::doctree::EndElementTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitEntity(::com::sun::source::doctree::EntityTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitErroneous(::com::sun::source::doctree::ErroneousTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitHidden(::com::sun::source::doctree::HiddenTree* node, Object$* p);
	virtual $Object* visitIdentifier(::com::sun::source::doctree::IdentifierTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitIndex(::com::sun::source::doctree::IndexTree* node, Object$* p);
	virtual $Object* visitInheritDoc(::com::sun::source::doctree::InheritDocTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitLink(::com::sun::source::doctree::LinkTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitLiteral(::com::sun::source::doctree::LiteralTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitOther(::com::sun::source::doctree::DocTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitParam(::com::sun::source::doctree::ParamTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitProvides(::com::sun::source::doctree::ProvidesTree* node, Object$* p);
	virtual $Object* visitReference(::com::sun::source::doctree::ReferenceTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitReturn(::com::sun::source::doctree::ReturnTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSee(::com::sun::source::doctree::SeeTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSerial(::com::sun::source::doctree::SerialTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSerialData(::com::sun::source::doctree::SerialDataTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSerialField(::com::sun::source::doctree::SerialFieldTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSince(::com::sun::source::doctree::SinceTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitStartElement(::com::sun::source::doctree::StartElementTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitSummary(::com::sun::source::doctree::SummaryTree* node, Object$* p);
	virtual $Object* visitSystemProperty(::com::sun::source::doctree::SystemPropertyTree* node, Object$* p);
	virtual $Object* visitText(::com::sun::source::doctree::TextTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitThrows(::com::sun::source::doctree::ThrowsTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitUnknownBlockTag(::com::sun::source::doctree::UnknownBlockTagTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitUnknownInlineTag(::com::sun::source::doctree::UnknownInlineTagTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitUses(::com::sun::source::doctree::UsesTree* node, Object$* p);
	virtual $Object* visitValue(::com::sun::source::doctree::ValueTree* node, Object$* p) {return nullptr;}
	virtual $Object* visitVersion(::com::sun::source::doctree::VersionTree* node, Object$* p) {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_DocTreeVisitor_h_