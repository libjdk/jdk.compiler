#ifndef _com_sun_source_util_DocTreeScanner_h_
#define _com_sun_source_util_DocTreeScanner_h_
//$ class com.sun.source.util.DocTreeScanner
//$ extends com.sun.source.doctree.DocTreeVisitor

#include <com/sun/source/doctree/DocTreeVisitor.h>

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
namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export DocTreeScanner : public ::com::sun::source::doctree::DocTreeVisitor {
	$class(DocTreeScanner, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTreeVisitor)
public:
	DocTreeScanner();
	void init$();
	virtual $Object* reduce(Object$* r1, Object$* r2);
	virtual $Object* scan(::com::sun::source::doctree::DocTree* node, Object$* p);
	virtual $Object* scan(::java::lang::Iterable* nodes, Object$* p);
	$Object* scanAndReduce(::com::sun::source::doctree::DocTree* node, Object$* p, Object$* r);
	$Object* scanAndReduce(::java::lang::Iterable* nodes, Object$* p, Object$* r);
	virtual $Object* visitAttribute(::com::sun::source::doctree::AttributeTree* node, Object$* p) override;
	virtual $Object* visitAuthor(::com::sun::source::doctree::AuthorTree* node, Object$* p) override;
	virtual $Object* visitComment(::com::sun::source::doctree::CommentTree* node, Object$* p) override;
	virtual $Object* visitDeprecated(::com::sun::source::doctree::DeprecatedTree* node, Object$* p) override;
	virtual $Object* visitDocComment(::com::sun::source::doctree::DocCommentTree* node, Object$* p) override;
	virtual $Object* visitDocRoot(::com::sun::source::doctree::DocRootTree* node, Object$* p) override;
	virtual $Object* visitDocType(::com::sun::source::doctree::DocTypeTree* node, Object$* p) override;
	virtual $Object* visitEndElement(::com::sun::source::doctree::EndElementTree* node, Object$* p) override;
	virtual $Object* visitEntity(::com::sun::source::doctree::EntityTree* node, Object$* p) override;
	virtual $Object* visitErroneous(::com::sun::source::doctree::ErroneousTree* node, Object$* p) override;
	virtual $Object* visitHidden(::com::sun::source::doctree::HiddenTree* node, Object$* p) override;
	virtual $Object* visitIdentifier(::com::sun::source::doctree::IdentifierTree* node, Object$* p) override;
	virtual $Object* visitIndex(::com::sun::source::doctree::IndexTree* node, Object$* p) override;
	virtual $Object* visitInheritDoc(::com::sun::source::doctree::InheritDocTree* node, Object$* p) override;
	virtual $Object* visitLink(::com::sun::source::doctree::LinkTree* node, Object$* p) override;
	virtual $Object* visitLiteral(::com::sun::source::doctree::LiteralTree* node, Object$* p) override;
	virtual $Object* visitOther(::com::sun::source::doctree::DocTree* node, Object$* p) override;
	virtual $Object* visitParam(::com::sun::source::doctree::ParamTree* node, Object$* p) override;
	virtual $Object* visitProvides(::com::sun::source::doctree::ProvidesTree* node, Object$* p) override;
	virtual $Object* visitReference(::com::sun::source::doctree::ReferenceTree* node, Object$* p) override;
	virtual $Object* visitReturn(::com::sun::source::doctree::ReturnTree* node, Object$* p) override;
	virtual $Object* visitSee(::com::sun::source::doctree::SeeTree* node, Object$* p) override;
	virtual $Object* visitSerial(::com::sun::source::doctree::SerialTree* node, Object$* p) override;
	virtual $Object* visitSerialData(::com::sun::source::doctree::SerialDataTree* node, Object$* p) override;
	virtual $Object* visitSerialField(::com::sun::source::doctree::SerialFieldTree* node, Object$* p) override;
	virtual $Object* visitSince(::com::sun::source::doctree::SinceTree* node, Object$* p) override;
	virtual $Object* visitStartElement(::com::sun::source::doctree::StartElementTree* node, Object$* p) override;
	virtual $Object* visitSummary(::com::sun::source::doctree::SummaryTree* node, Object$* p) override;
	virtual $Object* visitSystemProperty(::com::sun::source::doctree::SystemPropertyTree* node, Object$* p) override;
	virtual $Object* visitText(::com::sun::source::doctree::TextTree* node, Object$* p) override;
	virtual $Object* visitThrows(::com::sun::source::doctree::ThrowsTree* node, Object$* p) override;
	virtual $Object* visitUnknownBlockTag(::com::sun::source::doctree::UnknownBlockTagTree* node, Object$* p) override;
	virtual $Object* visitUnknownInlineTag(::com::sun::source::doctree::UnknownInlineTagTree* node, Object$* p) override;
	virtual $Object* visitUses(::com::sun::source::doctree::UsesTree* node, Object$* p) override;
	virtual $Object* visitValue(::com::sun::source::doctree::ValueTree* node, Object$* p) override;
	virtual $Object* visitVersion(::com::sun::source::doctree::VersionTree* node, Object$* p) override;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTreeScanner_h_